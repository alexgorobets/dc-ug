;----------------------------------------------------------------------------
CLASS_UP  = 0001H
CLASS_KP  = 0003H
CLASS_SP  = 0005H

EVEN_BOUND_OBJ = 'E'
ODD_BOUND_OBJ  = 'O'

;----------------------------------------------------------------------------
GenBox  MACRO Lbox,Nbox,FlagBox,cntItem,minTime,maxTime,TypeBox
        Local Lab
_CntBox = _CntBox + 1
Lab:
        DD LinkBox      ;; указатель на следующий бункер в списке
        KodName <Nbox>  ;; код бункера
		DB	&TypeBox	;; тип бункера 'S'/'P' - станция/перегон
        DB	&FlagBox	;; признаки перегона
        DW cntItem      ;; количество блок-участков на перегоне
        DW minTime      ;; минимальное время хода по перегону
        DW maxTime      ;; максимальное время хода по перегону
        DD 0            ;; указатель на первый поезд в бункере
        DD 0            ;; указатель на последний поезд в бункере
box&Lbox = Lab
LinkBox = Lab
        ENDM
;----------------------------------------------------------------------------
DclStnBox MACRO LstBox0,LstBox1
	IfNb	<LstBox0>
		GenBox LstBox0,0,0,0,'S'
	EndIf
	IfNb	<LstBox1>
		GenBox LstBox1,0,0,0,'S'
	EndIf
ENDM
;----------------------------------------------------------------------------
DclPrgBox MACRO LstBox0,LstBox1
	IfNb	<LstBox0>
		GenBox LstBox0,'P'
	EndIf
	IfNb	<LstBox1>
		GenBox LstBox1,'P'
	EndIf
ENDM

;----------------------------------------------------------------------------
DclTrackKrg  MACRO KodKrg,NumKrug,TypeKrug,ListStn
        Local Lab
Lab:
        DD LinkKrg            ;; указатель на следующий круг в списке
        KodName <KodKrg>      ;; код круга
        DW 0&NumKrug&H        ;; номер круга
		DB	&TypeKrug         ;; признак типа круга 'O'/'S' - основной/соседний (слежение осуществляется только на основных кругах)
        DW 2                  ;; текущий четный номер для генерации системного поезда
        DW 3                  ;; текущий нечетный номер для генерации системного поезда
        FOR xStn,<ListStn>
         IFNB <xStn>
          DD stn&xStn      ;; указатель на очередную станцию в списке
         ENDIF
        ENDM
        DD 0               ;; признак окончания списка станций в круге
LinkKrg = Lab
        ENDM

;----------------------------------------------------------------------------
DclTrackStn  MACRO KodStn,NetNumStn,Lbox,LstPrg,NameArmOC
        Local Lab
_CntStn = _CntStn + 1
Lab:
        DD LinkStn         ;; указатель на следующую станцию в списке
        DB '&KodStn'       ;; код станции
        NetMark NetNumStn  ;; сетевая разметка станции
        DD LinkKrg         ;; указатель на круг, которому принадлежит станция
        DD box&Lbox        ;; указатель на бункер, которому принадлежит станция
        DD LinkObj         ;; список объектов, контролируемых со станции
		IFNB <NameArmOC>
            DB  @CatStr(!',@SubStr(&NameArmOC, 2, @SizeStr(&NameArmOC) -2),!'),0  ;; имя STDP-клиента АРМ опорного центра, с которым происходит обмен по этой станции
		ELSE
			DB 7 DUP(0)
		ENDIF
        FOR Ti,<LstPrg>
         IFNB <Ti>
          DD prg&Ti        ;; указатель на очередной прилегающий перегон
         ENDIF
        ENDM
        DD 0               ;; признак окончания списка примыкающих перегонов
LinkObj = 0
LinkStn = Lab
stn&KodStn = Lab
        ENDM

;----------------------------------------------------------------------------
DclPrg  MACRO Lprg,KodPrg,Lbox,LstStn
        Local Lab
Lab:
        DD LinkPrg         ;; указатель на следующий перегон в списке
        KodName <KodPrg>   ;; код перегона
        DD box&Lbox        ;; указатель на бункер, которому принадлежит объект
        FOR Ti,<LstStn>
         IFNB <Ti>
          DD stn&Ti        ;; указатели на станции, к которым примыкает перегон
         ENDIF
        ENDM
        DD 0               ;; признак окончания списка станций
LinkPrg = Lab
prg&Lprg = Lab
        ENDM

;----------------------------------------------------------------------------
DclObj  MACRO Lobj,ClsObj,KodObj,KodStn,Lbox,LstLink,TypeObj,NumPark,NumPut,KodStnNext,KodStnNextUzl,KodNsu
        Local Lab
Lab:

        DD LinkObj         ;; указатель на следующий объект в списке
        DW ClsObj          ;; класс объекта
        KodName <KodObj>   ;; код объекта
		IFNB <TypeObj>
			DB TypeObj     ;; признак типа объекта E/O - граничный объект круга для четного/нечетного пердвижения
		ELSE
			DB ' '
		ENDIF
        DD stn&KodStn      ;; указатель на станцию, которой принадлежит объект
        DD box&Lbox        ;; указатель на бункер, которому принадлежит объект
		IFNB <NumPark>
			DB NumPark     ;; номер парка для объекта путь
		ELSE
			DB 0
		ENDIF
		IFNB <NumPut>
			DB NumPut      ;; номер пути для объекта путь
		ELSE
			DB 0
		ENDIF
		IFNB <KodStnNext>
			DD stn&KodStnNext  ;; указатель на следующую станцию в этом направлении (для уу/уп)
		ELSE
			DD 0
		ENDIF
		IFNB <KodStnNextUzl>
			DD stn&KodStnNextUzl  ;; указатель на следующую узловую станцию в этом направлении (для уу/уп)
		ELSE
			DD 0
		ENDIF
		IFNB <KodNsu>
			DW KodNsu      ;; номер НСУ ПАЛЬМЫ, если установлена на объекте
		ELSE
			DW 0
		ENDIF
		DB 6 DUP(0)        ;; резерв
        FOR Ti,<LstLink>
         IFNB <Ti>
          DD obj&Ti        ;; очередной объект из списка логических связей
         ENDIF
        ENDM
        DD 0               ;; признак окончания списка логических связей
LinkObj = Lab
obj&Lobj = Lab
        ENDM

;----------------------------------------------------------------------------
BegTrack MACRO
OPTION MZ :20h ;;адрес начала таблицы смещения
STACK segment para STACK 'STACK'
STACK ends

Cseg Segment PUBLIC  Byte 'CODE'
        ASSUME  CS:Cseg
start:
LinkKrg = 0
LinkStn = 0
LinkPrg = 0
LinkObj = 0
LinkBox = 0
_CntStn = 0
_CntBox = 0
;        DW MaxNumStn      ;;  количество станций
;        DW MaxNumBox      ;;  количество бункеров
        DD _DclKrg     ;; указатель на первый круг в описании
        DD _DclStn     ;; указатель на первую станцию в описании
        DD _DclBox     ;; указатель на первый бункер в описании
;       DD _BegStr     ;;
;_BegStr:
;       DB "Begin_Struct_IndexSpp->"
        ENDM

;----------------------------------------------------------------------------
EndTrack MACRO
_DclKrg = LinkKrg
_DclStn = LinkStn
_DclBox = LinkBox
MaxNumStn = _CntStn
MaxNumBox = _CntBox
Cseg    ENDS

end start
        ENDM
