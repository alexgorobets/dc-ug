??Sym0   =   0         ;; код  .
??Sym46  =   0         ;; код  .
??Sym49  =   1         ;; код  1
??Sym50  =   2         ;; код  2
??Sym51  =   3         ;; код  3
??Sym52  =   4         ;; код  4
??Sym53  =   5         ;; код  5
??Sym54  =   6         ;; код  6
??Sym55  =   7         ;; код  7
??Sym56  =   8         ;; код  8
??Sym57  =   9         ;; код  9
??Sym48  =  10         ;; код  0
??Sym65  =  10         ;; код  0

??Sym192 =  11         ;; код  А
??Sym193 =  12         ;; код  Б
??Sym194 =  13         ;; код  В
??Sym195 =  14         ;; код  Г
??Sym196 =  15         ;; код  Д
??Sym197 =  16         ;; код  Е
??Sym198 =  17         ;; код  Ж
??Sym199 =  18         ;; код  З
??Sym200 =  19         ;; код  И
??Sym202 =  20         ;; код  К
??Sym203 =  21         ;; код  Л
??Sym204 =  22         ;; код  М
??Sym205 =  23         ;; код  Н
??Sym206 =  24         ;; код  О
??Sym207 =  25         ;; код  П

??Sym208 =  26         ;; код  Р
??Sym209 =  27         ;; код  С
??Sym210 =  28         ;; код  Т
??Sym211 =  29         ;; код  У
??Sym212 =  30         ;; код  Ф
??Sym213 =  31         ;; код  Х
??Sym214 =  32         ;; код  Ц
??Sym215 =  33         ;; код  Ч
??Sym216 =  34         ;; код  Ш

??Sym221 =  35         ;; код  Э
??Sym222 =  36         ;; код  Ю
??Sym223 =  37         ;; код  Я
;;----------------------------------------------
??Sym224 =  11         ;; код  а
??Sym225 =  12         ;; код  б
??Sym226 =  13         ;; код  в
??Sym227 =  14         ;; код  г
??Sym228 =  15         ;; код  д
??Sym229 =  16         ;; код  е
??Sym230 =  17         ;; код  ж
??Sym231 =  18         ;; код  з
??Sym232 =  19         ;; код  и
??Sym234 =  20         ;; код  к
??Sym235 =  21         ;; код  л
??Sym236 =  22         ;; код  м
??Sym237 =  23         ;; код  н
??Sym238 =  24         ;; код  о
??Sym239 =  25         ;; код  п

??Sym240 =  26         ;; код  р
??Sym241 =  27         ;; код  с
??Sym242 =  28         ;; код  т
??Sym243 =  29         ;; код  у
??Sym244 =  30         ;; код  ф
??Sym245 =  31         ;; код  х
??Sym246 =  32         ;; код  ц
??Sym247 =  33         ;; код  ч
??Sym248 =  34         ;; код  ш

??Sym253 =  35         ;; код  э
??Sym254 =  36         ;; код  ю
??Sym255 =  37         ;; код  я

??Sym45  =  38         ;; код  -
??Sym47  =  39         ;; код  /
;;**********************************************************
?CLSNU  =     0000H
?CLSUP  =     0100H
?CLSKS  =     0200H
?CLSKP  =     0300H
?CLSST  =     0400H
?CLSSP  =     0500H
?CLSPG  =     0600H
?CLSDP  =     0700H  ;; состояние двухпозиционных объектов
?CLSPR  =     0800H
?CLSDS  =     0900H  ;; класс ДИСК
?CLSUS  =     0A00H  ;; класс УКСПС
?CLSLK  =     0B00H  ;; класс Связующий
?CLSPGB =    01100H  ;; класс перегонный бокс
?CLSTM  =    01200H  ;; класс таймер
?CLSSTN =    01300H  ;; класс станция
?CLSSO  =    0FF00H  ;; класс сложных объектов

???NDT  =     000H
???NDN  =     001H

Tmk     = 1300h  ;; тестирование минусового положения стрелки
Tpk     = 1100h  ;; тестирование плюсового  положения стрелки
;;Nu      = 0600h  ;;
Tak     = 1100h  ;; тестирование активного состояния объекта
Tps     = 1000h  ;; тестирование пассивного состояния объекта
;;Ts      = 0F00h  ;; выдать текущее состояние объекта
Null    = 4000h   ;; 010 000 x - пустой признак
Min     = 8000h;;знак минус
;;------------------------------------------------------------------------------
;;      УЧАСТКИ УУ/УП      TYPE TS
                      ;; 000 000 x - свободен-1/занят-0
Nd      = 0200h   ;; 000 001 x - правильное-0/неправильное-1 направление
                      ;; 000 010 x - ремонт участка-1
                      ;; 000 011 x -
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
                      ;; 000 111 x - выдать текущее состояние участка
                      ;; для Зингера
Uw      = 0000h   ;; контроль свободности уу/уп
Ur      = 0100h   ;; контроль занятости уу/уп
;;------------------------------------------------------------------------------
;;      СВЕТОФОР           TYPE TS
                      ;; 000 000 x - закрытие-0/открытие-1 светофора
Ro      = 0200h   ;; 000 001 x - контроль сигнала перегорания-0 нити (красный)
Ad      = 0400h   ;; 000 010 x - установка-1/снятие-0 автодействия
Ps      = 0600h   ;; 000 011 x - 1-открытие пригласительного сигнала
Ms      = 0800h   ;; 000 100 x - открытие-1/закрытие-0 маневровой головки
                      ;; 000 101 x - 1-контроль открытия светофора (зеленая лампа)
                      ;; 000 110 x - 1-контроль закрытия светофора (красная лампа)
                      ;; 000 111 x - выдать состояние светофора
Go      = 1000h   ;; 001 000 x - контроль сигнала перегорания-0 нити (зеленый/желтый)
Po      = 1200h   ;; 001 001 x - контроль сигнала перегорания-0 нити (пригласительный)
Av      = 1400h   ;; 001 010 x - неисправность светофора
Avm     = 0015h   ;; 001 010 x - неисправность светофора (мигание)
SvBlk   = 1600h   ;; 001 011 x - установка-1/снятие-0 блокировки светофора
Fd      = 1A00h   ;; 001 101 x - установка-1/снятие-0 светофор погашен              
                      ;; для Зингера
RoM     = 0082h   ;; мигание красной лампы светофора (перегорание нити красного огня)
PsM		= 0006h   ;; мигание зеленой лампы светофора (открытие пригласительного сигнала)
Lg      = 0A00h   ;; контроль открытия светофора (зеленая лампа)
Lr      = 0C00h   ;; контроль закрытия светофора (красная лампа)

;;              типы светофоров
Svt     =     000h       ;; светофор четный
Svn     =     001h       ;; светофор нечетный
Svtm    =     002h       ;; светофор четный маневровый
Svnm    =     003h       ;; светофор нечетный маневровый
Svtp    =     020h       ;; светофор четный перегонный
Svnp    =     021h       ;; светофор нечетный перегонный
;;------------------------------------------------------------------------------
;;      ПУТЬ               TYPE TS
                      ;; 000 000 x - путь занят-0/свободен-1
Zp      = 0200h   ;; 000 001 x - замыкание-1 пути
Zpt     = 0200h   ;; 000 001 x - замыкание-1 пути в четном направлении
Zpn     = 0400h   ;; 000 010 x - замыкание-1 пути в нечетном направлении
Log     = 0C00h   ;; логическая занность
                      ;; 000 011 x - ремонт пути-1
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
                      ;; 000 111 x - выдать текущее состояние пути
                      ;; для Зингера
Pw      = 0200h   ;; контроль замкнутости пути (белая лампа)
Pk1     = 0100h   ;; контроль занятости пути
Pk2     = 0B00h   ;; контроль занятости пути
;;Kn      = 0C00h   ;; контроль напряжения переменного тока на путевых реле
;;-------------------------------------------------------------------------------
;;       СТРЕЛКИ           TYPE TS
Pk      = 0000h   ;; 000 000 x - перевод стрелки в + (1)
Mk      = 0200h   ;; 000 001 x - перевод стрелки в - (1)
Mu      = 0400h   ;; 000 010 х - местное управление-1
Sts     = 0600h   ;; 000 011 х - сброс стрелки-1
PkMk    = 0800h   ;; 000 100 х - перевод стрелки в +/- (1/0)
Os      = 0A00h   ;; 000 101 x - отключение стрелки-1
Sa      = 0C00h   ;; 000 110 x - вспомогательный перевод стрелки (1)
                      ;; 000 111 x - текущее состояние стрелки
SaPk    = 1000h   ;; 001 000 x - вспомогательный перевод стрелки в +
SaMk    = 1200h   ;; 001 001 x - вспомогательный перевод стрелки в -
AVb     = 1400h   ;; 001 010 x - контроль схемы автовозврата стрелки (белая лампа) 1-охранное(плюсовое) положение
AVk     = 1618h   ;; 001 011 x - контроль схемы автовозврата стрелки (красная лампа) 1-отсчет времени/миг-переводится
AVkM    = 1800h   ;; 001 100 x - 1-перевод стрелки схемой автовозврата
AVbk    = 1A18h   ;; 001 101 x - контроль схемы автовозврата стрелки (белая/красная лампа) 0-охр.полож/1-отсчет времени
AVkb    = 1600h   ;; 001 101 x - контроль схемы автовозврата стрелки (белая/красная лампа) 0-охр.полож/1-отсчет времени
;;------------------------------------------------------------------------------
;;  СТРЕЛОЧНЫЕ СЕКЦИИ      TYPE TS
                      ;; 000 000 x - секция свободна-1/занята-0
Zs      = 0200h   ;; 000 001 x - контроль замыкания-1 секции
Zt      = 0200h   ;; 000 001 x - замыкание-1 в четном маршруте
Zn      = 0400h   ;; 000 010 x - замыкание-1 в нечетном маршруте
                      ;; 000 011 x - изменение положения стрелок, входящих в секцию
                      ;; 000 100 x - программное замыкание-1 в маршруте
Ir      = 0A00h   ;; 000 101 x - искусственная разделка секции
Log     = 0C00h   ;; логическая занность
                      ;; 000 110 x -
                      ;; 000 111 x - выдать состояние секции
                      ;; для Зингера
IrM     = 000Ah   ;; Мигание секции (Искусственная разделка)
Sw      = 0200h   ;; контроль замкнутости стрелочной секции (белая лампа)
Sr      = 0100h   ;; контроль занятости стрелочной секции (красная лампа)
;;Kn      = 0C00h   ;; контроль напряжения переменного тока на путевых реле
;;------------------------------------------------------------------------------
;;      ПЕРЕГОНЫ           TYPE TS
                      ;; 000 000 x - свободен-1/занят-0
Rvr     = 0200h   ;; 000 001 x - правильное(прием)-0/неправильное(отправление)-1 направление движения
PgLg    = 0414h   ;; 000 010 x - 1-отправление (зеленая лампа)
PgLy    = 0616h   ;; 000 011 x - 1-прием (желтая лампа)
PgLw    = 0818h   ;; 000 100 x - 1-свободен (белая лампа)
PgLr    = 0A1Ah   ;; 000 101 x - 1-занят (красная лампа)
                      ;; 000 110 x - 
                      ;; 000 111 x - выдать текущее состояние перегона

PgLgM   = 0014h   ;; 001 010 x - 1-мигание зеленой лампы (авария при обрыве или сообщении проводов смены направления)
PgLyM   = 0016h   ;; 001 011 x - 1-мигание желтой лампы (авария при обрыве или сообщении проводов смены направления)
PgLwM   = 0018h   ;; 001 100 x - 1-мигание белой лампы (выдержка времени при освобождении перегона)
PgLrM   = 001Ah   ;; 001 101 x - 1-мигание красной лампы (на станции приема, если на станции отправления открыт выходной,
                      ;;               загорится постоянно, когда поезд заедет за выходной)

;;------------------------------------------------------------------------------
;;      ПОЗИЦИОННЫЕ        TYPE TS
                      ;; 000 000 x - 0 / 1 - 1/2 состояние
Sost3   = 0200h   ;; 000 001 x - 1 - 3 состояние
Sost3M  = 0002h
Sost4   = 0400h   ;; 000 010 x - 1 - 4 состояние
Sost4M  = 0004h   ;;
                      ;; 000 011 x -
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
Net =     1F00h   ;; 000 111 x - выдать текущее состояние объекта
;;------------------------------------------------------------------------------
;;      ПЕРЕЕЗДЫ           TYPE TS
                      ;; 000 000 x - открыт-0/закрыт-1
PrZakrM = 0001h   ;; 
PrAlrm  = 0200h   ;; 000 001 x - 1-авария переезда
PrAlrmM = 0002h   ;;
;;PrOgr   = 0400h   ;; 000 010 x - 1-ограждение переезда
PrIzv   = 0600h   ;; 000 011 x - 1-передача извещения на переезд
PrIzvM  = 0006h   ;;
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
                      ;; 000 111 x - выдать текущее состояние переезда
;;------------------------------------------------------------------------------
;;      ДИСКи              TYPE TS
                      ;; 000 000 x - 
DsAlrm  = 0200h   ;; 000 001 x - 
DsOgr   = 0400h   ;; 000 010 x - 
DsIzv   = 0600h   ;; 000 011 x - 
                      ;; 000 111 x - выдать текущее состояние ДИСКа

Ponab     = 1
DiskB     = 2
DiskB2000 = 3

;;------------------------------------------------------------------------------
;;      ДИСКи              TYPE TS
                      ;; 000 000 x - 
Dat1    = 0200h   ;; 000 001 x - 
Dat2    = 0400h   ;; 000 010 x - 
USotkl  = 0600h   ;; 000 011 x - 
                      ;; 000 111 x - выдать текущее состояние ДИСКа

Ponab     = 1
DiskB     = 2
DiskB2000 = 3
Esso      = 4

;;-------------------------------------------------------------------------------
;;         УКСПС         TYPE TS
Dat1    = 0000h   ;; 000 000 x - перевод стрелки в + (1)
Dat2    = 0200h   ;; 000 001 x - перевод стрелки в - (1)
Rb      = 0400h   ;; 000 010 х - местное управление-1
Potk    = 0600h   ;; 000 011 х - сброс стрелки-1
Otk     = 0800h   ;; 000 100 х - перевод стрелки в +/- (1/0)
                      ;; 000 101 x - отключение стрелки-1
                      ;; 000 110 x - вспомогательный перевод стрелки (1)
                      ;; 000 111 x - текущее состояние стрелки
                      ;; 001 000 x - вспомогательный перевод стрелки в +
                      ;; 001 001 x - вспомогательный перевод стрелки в -
                      ;; 001 010 x - контроль схемы автовозврата стрелки (белая лампа) 1-охранное(плюсовое) положение
                      ;; 001 011 x - контроль схемы автовозврата стрелки (красная лампа) 1-отсчет времени/миг-переводится
                      ;; 001 100 x - 1-перевод стрелки схемой автовозврата
                      ;; 001 101 x - контроль схемы автовозврата стрелки (белая/красная лампа) 0-охр.полож/1-отсчет времени
                      ;; 001 101 x - контроль схемы автовозврата стрелки (белая/красная лампа) 0-охр.полож/1-отсчет времени
;;     Тип УКСПС
Ust     = 1	
Ust2    = 2
Ust3    = 3
Usn     = 4
Usn2    = 8
Usn3    = 12
;;------------------------------------------------------------------------------
;;		  Общие признаки 
;; 		  АБТЦ-М
ABTC   = 2000h     ;; 010 000 x - признак сигнала АБТЦ-М
ABTCsh = 2200h     ;; 010 000 x - признак сигнала АБТЦ-М
;;------------------------------------------------------------------------------
ValKodS  Macro  KodSym
	IfDef	??Sym&KodSym
		????ks    =    (??Sym&KodSym + 0)
	Else
		Dw	??Sym&KodSym
	EndIf
EndM
;-------------------------------------------
kodname  MACRO   StrName
TekSym  =     0
	ForC   ??c,<StrName>
    	IF      (TekSym MOD 3) EQ 0
             Kod =   0
        ENDIF
        ValKodS  %('&??c'+0)
        Kod     =     Kod*40+????ks
        TekSym  =     TekSym+1
		IF         (TekSym MOD 3) EQ 0
              DW  Kod
        ENDIF
    ENDM
		
IF    @SizeStr('&StrName') NE 8
	.ERR   <НЕВЕРНОЕ ЧИСЛО СИМВОЛОВ В КОДЕ ОБЪЕКТА >
ENDIF

 ENDM
;;**********************************************************
Off32  MACRO   List
	FOR     ??x,<List>
		??KolList = ??KolList +1
		
		??FlagM = 0
		??FlagP = 0
		??NsymM = 0
		??NsymP = 0
		IfIdn	<&??x>,<?>
			Dd	0;;объект 
			Dw	0;;параметры
		Else
			;;выставим флаги наличия символов '+' и '-' и местоположение сим '+' и '-'
			??Flag  = @CatStr(!", @SubStr(??x, 1, 1), !")
			If	??Flag EQ "-"
				??FlagM = 8000h
				??NsymM = 1
			Else
				??FlagM = 0
				??NsymM = 0
			EndIf
			
			Forc ??c,<??x>
				if ??FlagP EQ 0;;пока не найден +
					??NsymP = ??NsymP + 1
				EndIf
				If	(('&??c' EQ '+') Or (??FlagP EQ 1))
					??FlagP = 1
				Else
					??FlagP = 0
				EndIf
			EndM
			
			if	??FlagP	EQ 0 And ??FlagM EQ 0
				Dd ??x
				Dw	0
			else
				if	??FlagP	EQ 1 And ??FlagM EQ 0
					Dd @SubStr(??x, 1, ??NsymP - 1)
					Dw	@SubStr(??x, ??NsymP + 1, @SizeStr(??x) - ??NsymP)
				else
					if	??FlagP	EQ 0 And ??FlagM EQ 8000h
						Dd @SubStr(??x, 1 + 1, @SizeStr(??x) - 1)
						Dw	??FlagM
					else
						if	??FlagP	EQ 1 And ??FlagM EQ 8000h
							Dd @SubStr(??x, 1 + 1, ??NsymP - 2)
							Dw	@SubStr(??x, ??NsymP + 1, @SizeStr(??x) - ??NsymP) + ??FlagM
						EndIf
					EndIf
				EndIf
			EndIf
		
		EndIf
	EndM
ENDM
;;**********************************************************
Off24  MACRO   List
	FOR     ??x,<List>
		??KolList = ??KolList +1
		
		??FlagM = 0
		??FlagP = 0
		??NsymM = 0
		??NsymP = 0
		IfIdn	<&??x>,<?>
			Dd	0;;объект 
			Db	0;;параметры
		Else
			;;выставим флаги наличия символов '+' и '-' и местоположение сим '+' и '-'
			??Flag  = @CatStr(!", @SubStr(??x, 1, 1), !")
			If	??Flag EQ "-"
				??FlagM = 8000h
				??NsymM = 1
			Else
				??FlagM = 0
				??NsymM = 0
			EndIf
			
			Forc ??c,<??x>
				if ??FlagP EQ 0;;пока не найден +
					??NsymP = ??NsymP + 1
				EndIf
				If	(('&??c' EQ '+') Or (??FlagP EQ 1))
					??FlagP = 1
				Else
					??FlagP = 0
				EndIf
			EndM
			
			if	??FlagP	EQ 0 And ??FlagM EQ 0
				Dd ??x
				Db	0
			else
				if	??FlagP	EQ 1 And ??FlagM EQ 0
					Dd @SubStr(??x, 1, ??NsymP - 1)
					Db	(@SubStr(??x, ??NsymP + 1, @SizeStr(??x) - ??NsymP) Shr 8)  And 0FFh
				else
					if	??FlagP	EQ 0 And ??FlagM EQ 8000h
						Dd @SubStr(??x, 1 + 1, @SizeStr(??x) - 1)
						Db	(??FlagM Shr 8)  And 0FFh
					else
						if	??FlagP	EQ 1 And ??FlagM EQ 8000h
							Dd @SubStr(??x, 1 + 1, ??NsymP - 2)
							Db	((@SubStr(??x, ??NsymP + 1, @SizeStr(??x) - ??NsymP) + ??FlagM) Shr 8)  And 0FFh
						EndIf
					EndIf
				EndIf
			EndIf
		
		EndIf
	EndM

EndM
;;**********************************************************
Off16	MACRO   Lst
	For		??x,<Lst>
		??KolList	=	??KolList + 1
		IfIdn	<??x>,<?>
			DD	0
		Else
			DD	??x;; - BegCseg
		EndIf
	EndM
ENDM
;;**********************************************************
Off   MACRO   Lst
	For		??x,<Lst>
		??KolList	=	??KolList + 1
		IfIdn	<??x>,<?>
			DD	0
		Else
			DD	??x;; - BegCseg
		EndIf
	EndM
ENDM
;;**********************************************************
Nam		MACRO   ListPar
        DW      ??Cls
        DW      0               ;; состояние объекта
        DW      0               ;; предыдущее состояние объекта
__Kobj    =     __Kobj+1
        KodName <ListPar>
        DD      0               ;; время последнего изменения состояния объекта
		DD      0               ;; указатель на пользовательскую информацию
		ENDM
;;**********************************************************	
DclLk	MACRO	Nm,LstObj,Stn
        Nam     <Nm>
??KolList =      0
		
        Off16   <LstObj>
        If      ??KolList NE 1
			.Err	<ЧИСЛО ПАРАМЕТРОВ В СПИСКЕ НЕ РАВНО 1>
        EndIf
		
??KolList = 0	
		For		??x,<Stn>
		??KolList	=	??KolList + 1
		If	??KolList eq 1
			DB ??x,0	
		Else
			EcpStn ??x
		EndIf
		EndM
		If      ??KolList NE 2
			.Err	<ЧИСЛО ПАРАМЕТРОВ В СПИСКЕ НЕ РАВНО 2>
        EndIf
		ENDM
;;**********************************************************
DclUp	MACRO   Nm,LstUp
        Nam     <Nm>
??KolList =      0
        Off16   <LstUp>
        If      ??KolList NE 2
			.Err	<ЧИСЛО ПАРАМЕТРОВ В СПИСКЕ НЕ РАВНО 2>
        EndIf
ENDM
;;**********************************************************
DclKs   MACRO   Nm,Tsvt,LstKs,chg_Ndv
        Local   LabKs,LabKs2
LabKs:
        Nam     <Nm>
??KolList =      0
        Off16   <LstKs>
        If      ??KolList NE 2
                .ERR   <ЧИСЛО ПАРАМЕТРОВ В СПИСКЕ НЕ РАВНО 2 >
        EndIf

??chgndv =       0
        IFNB <chg_Ndv>
        ??chgndv = 0080h        
        ENDIF
LabKs2:
        Org     LabKs
        DW      (??Cls+Tsvt) OR ??chgndv 	;; тип светофора и признак смены четности
        Org     LabKs2
ENDM
;;**********************************************************
DclKp   MACRO   Nm,LstKp
        Nam     <Nm>
??KolList =      0
        Off16   <LstKp>
        If      ??KolList NE 2
                .ERR   <ЧИСЛО ПАРАМЕТРОВ В СПИСКЕ НЕ РАВНО 2 >
        EndIf
EndM
;;**********************************************************
DclBs	MACRO	Nm,LstSp
		Local	LabSp,LabSp2
LabSp:
		Nam		<Nm>
??KolList =		0
		IFNB	<LstSp>
			Off16	<LstSp>
			??SizeListSp = 1 SHL ??KolList
LabSp2:
			Org		LabSp
			Dw		??Cls+??KolList
			Org		LabSp2
		ELSE
			??SizeListSp = 1
		ENDif
EndM
;;**********************************************************
DclSt   MACRO   Nm,LstSt
        Local   LabSt,LabSt2
LabSt:
        Nam     <Nm>
??KolList =      0
        Off16  <LstSt>
LabSt2:
        Org     LabSt
        Dw      ??Cls+??KolList 	;; количество секций
        Org     LabSt2
EndM
;;**********************************************************
Link_T  Macro   List
??KolList =      0
        Off16   <List>
        IF      ??KolList NE ??SizeListSp
                .ERR   <НЕ ВЕРНОЕ ЧИСЛО ПАРАМЕТРОВ В СПИСКЕ >
        ENDIF
ENDM
;;**********************************************************
Link_N  Macro   List
??KolList =      0
        Off16   <List>
        If      ??KolList NE ??SizeListSp
                .ERR   <НЕ ВЕРНОЕ ЧИСЛО ПАРАМЕТРОВ В СПИСКЕ >
        EndIf
ENDM
;;**********************************************************
DclSp   MACRO   Nm,LstSp
        Local   LabSp,LabSp2
LabSp:
        Nam     <Nm>
??KolList =      0
        IFNB    <LstSp>
           Off16   <LstSp>
           ??SizeListSp = 1 SHL ??KolList
LabSp2:
           Org     LabSp
           Dw      ??Cls+??KolList 		;; количество стрелок
           Org     LabSp2
        ELSE
           ??SizeListSp = 1
        ENDIF
EndM
;;**********************************************************
DclPg   MACRO   Nm,LstUp
        Local   LabPg,LabPg2
LabPg:
        Nam     <Nm>
??KolList =      0
        IFNB    <LstUp>
           Off16   <LstUp>
LabPg2:
           Org     LabPg
           Dw      ??Cls+??KolList 		;; количество перегонных точек
           Org     LabPg2
        ENDIF
EndM
;;**********************************************************
DclDp   MACRO   DpName,Msg0,Msg1
        Local   LabDp,LabDp2
LabDp:
        Nam     <DpName>
??Kmsg  =       0
        IFNB    <Msg0>
                DP_MSG1C 1,Msg0
        ENDIF
        IFNB    <Msg1>
                DP_MSG1C 2,Msg1
        ENDIF
LabDp2:
        Org     LabDp
        DW      ??Cls+??Kmsg  		;; количество текстовых сообщений
        Org     LabDp2
EndM
;;*********************************************************************
DP_MSG1C MACRO  Kadd,Mel,Cf,Txt
        If      @SizeStr(Txt) NE 15
                .ERR   <ЧИСЛО СИМВОЛОВ В ТЕКСТЕ НЕ РАВНО 13 >
        Else
         Db     Mel,Cf,Txt
         Db     0
??Kmsg  = ??Kmsg  + Kadd
         EndIf
EndM
;;**********************************************************
DclPr   MACRO   Nm
        Nam     <Nm>
EndM
;;**********************************************************
DclUs   MACRO   UsName,Tus
        Local   LabUs,LabUs2
LabUs:
        Nam     <UsName>

LabUs2:
        Org     LabUs
        DW      ??Cls+Tus  		;; Тип УКСПС
        Org     LabUs2
EndM
;;**********************************************************
BegDisk MACRO   NameStn
                PUBLIC  DclDisk&NameStn
DclDisk&NameStn LABEL   BYTE

        CLS  Ds

        ENDM
;;**********************************************************
EndDisk MACRO   NameStn
        ENDM
;;**********************************************************
DclDs   MACRO   Nm,Num,Type,Ord,LstObj
        Local   LabDs,LabDs2
LabDs:
        Nam     <Nm>

        DB      Num			;; номер ДИСКа на станции
        DB      Type		;; тип ДИСКа
        DD      Ord			;; ордината установки на перегоне
        DD      0			;; начало списка информации о прохождении поездов
		
??KolList =     0
       	Off32   <LstObj>
        IF      ??KolList NE 4
                .ERR   <ЧИСЛО ПАРАМЕТРОВ В СПИСКЕ НЕ РАВНО 4 >
        ENDIF
LabDs2:
        Org     LabDs
        DW      ??Cls+??KolList 		;; количество объектов в списке - должно быть = 4
        Org     LabDs2

        DB      16 DUP(0)	;; резерв

__KolDisk = __KolDisk + 1

        ENDM
;;**********************************************************
Mwork   MACRO   LstWrk
		Local   LabWrk,LabWrk2
        DB      'W'
LabWrk:
        DB      0                        ;; количество объектов в списке
        IFNB    <LstWrk>
??KolList =     0
        	Off24   <LstWrk>
LabWrk2:
	        Org    LabWrk
    	      DB     ??KolList              ;; количество объектов в списке
        	Org    LabWrk2
        ENDIF
EndM
;;*********************************************************************
Mcond   MACRO   LstCond
                Local   LabCond,LabCond2
        DB      'C'
LabCond:
        DB      0                        ;; количество объектов в списке
        IFNB    <LstCond>
??KolList =     0
           Off24   <LstCond>
LabCond2:
           Org    LabCond
           DB     ??KolList              ;; количество объектов в списке
           Org    LabCond2
        ENDIF
EndM
;;**********************************************************
So_Or   Macro   Nm,LstOr,LstWrk
        Local   LabOr,LabOr2
LabOr:
        Nam     <Nm>
        Mcond   <LstOr>          ;; список условий
LabOr2:
        Org     LabOr
        DW      ??Cls+02h
        Org     LabOr2
        Mwork   <LstWrk>         ;; список работ
EndM
;;***********************************************************
So_And  Macro   Nm,LstAnd,LstWrk
        Local   LabAnd,LabAnd2
LabAnd:
        Nam     <Nm>
        Mcond   <LstAnd>         ;; список условий
LabAnd2:
        Org     LabAnd
        Dw      ??Cls+03h
        Org     LabAnd2
        Mwork   <LstWrk>         ;; список работ
EndM
;;***********************************************************
So_Fun  Macro  Nm,LstFunSo,LstWork
        Local  LabSo,LabSo2
LabSo:
        Nam     <Nm>
        Mcond   <LstFunSo>       ;; список условий
LabSo2:
        Org     LabSo
        Dw      ??Cls+01h
        Org     LabSo2
        Mwork   <LstWork>        ;; список работ
EndM
;;***********************************************************
So_Rept Macro  Nm,LstWork
        Local   LabRp,LabRp2
LabRp:
		Nam     <Nm>
        Mcond   <>       ;; список условий
LabRp2:
        Org     LabRp
        Dw      ??Cls+01h
        Org     LabRp2
        Mwork   <LstWork>
EndM
;;**********************************************************
Cls     MACRO   Ncl
??Cls    =      ?CLS&Ncl
        ENDM
;;**********************************************************
BegGr   MACRO   NameTs
__Ngr	    =   0
??Nstb   =      0
??Nstr   =      0
		Db		'&NameTs',0
		DD		LinkDclTS		;адрес следующей матр
		Dw		KolGrRKP&NameTs
                PUBLIC  DclTs&NameTs
DclTs&NameTs      LABEL   BYTE
LinkDclTS	=	DclTs&NameTs; - BegCseg
        ENDM
;;**********************************************************
Stb     MACRO   NumStb
??Nstb   =      NumStb          ;; -1  для ЛПУ
??Nstr   =      0
EndM
;;**********************************************************
Gr      MACRO   ListSignal
        DB      ??Nstb*3+??Nstr ;; 3 - для РКП, 4 - для ЛПУ
        DW      0               ;; состояние группы
??Nstr   =      ??Nstr+1
__Ngr    =      __Ngr+1
??KolList=      0
        Off32   <ListSignal>
        IF   ??KolList NE 8
                .ERR   <ЧИСЛО ПАРАМЕТРОВ В СПИСКЕ НЕ РАВНО 16>
        ENDIF
EndM
;;**********************************************************
EndGr   MACRO   NameTs
KolGrRKP&NameTs  =  __Ngr
        ENDM
;;**********************************************************
BegTS   MACRO   NameStn

Cseg	ENDS
DclTSCseg	Segment
		ASSUME  CS:DclTSCseg
		
__Nblk	 =      0
		Db		'&NameStn',0
		DD		LinkDclBlkTS	;адрес след описания блока ТС
		Dw		KolBlkTS&NameStn
                PUBLIC  DclBlkTs&NameStn
DclBlkTs&NameStn  LABEL   BYTE
LinkDclBlkTS	=	DclBlkTs&NameStn; - BegCseg

        ENDM
;;**********************************************************
BlkTs   MACRO   NumBlk, Place
        DB      NumBlk
        DB  Place,0
		DW 3 DUP(0)	;;6 байт для состояния блоков(для просчета CRC)

__Nblk = __Nblk + 1
__KolBlkTS = __KolBlkTS + 1
EndM
;;**********************************************************
GrpTs   MACRO   ListOut

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			IFIDN	<&??x>,<?>
				DB	"          ",0
			ELSE
                DB  &??x&,0
			ENDIF
		EndM

        IF   ??KolList NE 5
    	    DW  HET??5??SYM
        ENDIF

EndM
;;**********************************************************
EndTS   MACRO   NameStn
KolBlkTS&NameStn = __Nblk

DclTSCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg
		
        ENDM
;;**********************************************************
BegTU   MACRO   NameStn

Cseg	ENDS
DclTSCseg	Segment
		ASSUME  CS:DclTSCseg
		
                PUBLIC  DclTu&NameStn
DclTu&NameStn   LABEL   BYTE

        ENDM
;;**********************************************************
DclTu   MACRO   NumBlk, Place, ListOut
        DB      NumBlk
        DB  Place,0
        DB      0               ;; состояние выводов блока

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			IFIDN	<&??x>,<?>
				DB	"        ",0
			ELSE
                DB  &??x&,0
			ENDIF
		EndM

        IF   ??KolList NE 8
    	    DW  HET??8??SYM
        ENDIF

        DB      16 DUP(0)	;; резерв

__KolBlkTU = __KolBlkTU + 1

EndM
;;**********************************************************
EndTU   MACRO   NameStn


DclTSCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg
        ENDM
;;**********************************************************
BegOTU  MACRO   NameStn

Cseg	ENDS
DclTSCseg	Segment
		ASSUME  CS:DclTSCseg
		
                PUBLIC  DclOtu&NameStn
DclOtu&NameStn   LABEL   BYTE

        ENDM
;;**********************************************************
DclOtu  MACRO   NumBlk, Place, ListOut
        DB      NumBlk
        DB  Place,0
        DB      0               ;; состояние выводов блока

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			IFIDN	<&??x>,<?>
				DB	"        ",0
			ELSE
                DB  &??x&,0
			ENDIF
		EndM

        IF   ??KolList NE 8
    	    DW  HET??8??SYM
        ENDIF

        DB      16 DUP(0)	;; резерв

__KolBlkOTU = __KolBlkOTU + 1

EndM
;;**********************************************************
EndOTU  MACRO   NameStn


DclTSCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg
        ENDM
;;**********************************************************
BegTI   MACRO   NameStn
                PUBLIC  DclTi&NameStn
DclTi&NameStn   LABEL   BYTE

        ENDM
;;**********************************************************
DclTi   MACRO   NumBlk, Place, ListOut
        DB      NumBlk			;; номер блока
        DB  &Place,0

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			DW  0				;; значение сигнала
			IFIDN	<&??x>,<?>
				DB	"        ",0
			ELSE
                DB  &??x&,0	;; название сигнала
			ENDIF
		EndM

        IF   ??KolList NE 12
    	    DW  HET??12??SYM
        ENDIF

        DB      16 DUP(0)	;; резерв

__KolBlkTI = __KolBlkTI + 1

EndM
;;**********************************************************
EndTI   MACRO   NameStn
        ENDM
;;**********************************************************
BegMatrOTU   MACRO   NameStn
Cseg	ENDS
DclTSCseg	Segment
		ASSUME  CS:DclTSCseg
		
		Dw		KolLineMatrOTU
		Dw		KolCmdMatrOTU
                PUBLIC  DclMatrOtu&NameStn
DclMatrOtu&NameStn   LABEL   BYTE
        ENDM
;;**********************************************************
LineOTU   MACRO   NumLine, NameLine, AdrBlkOTU, LineCodeOTU
		DB NumLine
        DB NameLine,0
		DD AdrBlkOTU
		DB 0&LineCodeOTU&B

__KolLineMatrOTU = __KolLineMatrOTU + 1

        ENDM
;;**********************************************************
CmdOTU   MACRO   NameCmdOTU, ListOut
        DB NameCmdOTU,0

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			DD  ??x
		EndM

        IF   ??KolList NE 2
    	    DW  HET??2??SYM
        ENDIF

__KolCmdMatrOTU = __KolCmdMatrOTU + 1

        ENDM
;;**********************************************************
EndMatrOtu   MACRO   NameStn


DclTSCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg
        ENDM
;;**********************************************************
;;**********************************************************
BegStn  MACRO   NameStn,ECPCodeStn

OPTION MZ :20h ;;адрес начала таблицы смещения
STACK segment para STACK 'STACK'
STACK ends

Cseg    Segment PUBLIC  byte 'CODE'
        ASSUME  CS:Cseg
Cseg	ENDS	

DclTSCseg	Segment PUBLIC  Byte 'DclTSCseg'
		ASSUME  CS:DclTSCseg
DclTSCseg	ENDS


Cseg	Segment
        ASSUME  CS:Cseg
start:
        PUBLIC  Rom&NameStn

__Kobj      =	0
__KolBlkTU  =   0
__KolBlkOTU =   0
__KolBlkTI  =   0
__KolDisk   =   0
__KolCmd    =	0
__KolBlkTS  =   0
__KolCmdOt	=	0
__KolCmdRkpTU =	0
;;__Ngr	    =   0
LinkDclTS	=	0
LinkDclBlkTS =	0
__KolLineMatrOTU =	0
__KolCmdMatrOTU  =	0
__KolBlkPI = 0

;BegCseg:

;  IFB ECPCodeStn
;	.Err	<НЕ УКАЗАН EPC СТАНЦИИ>
;  ENDIF
  


Rom&NameStn:
  Db   'Dcl&NameStn'         ;; код названия станции
  EcpStn ECPCodeStn
  Dw   KolObjStn             ;; число объектов станции
  Dw   KolGrStn              ;; число групп сигналов ТС в последней матрице
  DD   DclTS                 ;; адрес размещения таблиц ТС станции
  Dw   KolBlkTU              ;; число блоков ТУ
  DD   DclBlkTU              ;; адрес размещения описания блоков ТУ
  Dw   KolBlkOTU             ;; число блоков ОТУ
  DD   DclBlkOTU             ;; адрес размещения описания блоков ОТУ
  Dw   KolBlkTI              ;; число блоков ТИ
  DD   DclBlkTI              ;; адрес размещения описания блоков ТИ
  Dw   KolDisk               ;; число ДИСКов на станции
  DD   DclDisk               ;; адрес размещения описания ДИСКов
  Dw   KolCmd                ;; число команд общего назначения
  DD   DclCmd                ;; адрес размещения описания команд
  Dw   KolCmdOt              ;; число ответственных команд
  DD   DclCmdOt              ;; адрес размещения описания отв. команд
  Dw   KolBlkTS              ;; число блоков ТС
  DD   DclBlkTS              ;; адрес размещения описания блоков ТС
  DD   DclMatrOTU            ;; адрес размещения описания матрици ОТУ
  Dw   KolCmdRkpTU           ;; число команд общего назначения, хранящихся на ЦП
  DD   DclCmdRkpTU           ;; адрес размещения описания команд, хранящихся на ЦП
  Dw   KolBlkPI
  DD   DclBlkPI_
  DD   0            		 ;; адрес предыдущей станции
  DD   0		             ;; адрес следующей станции
  DB   11 dup(0)              ;; резерв

        ENDM
;;**********************************************************
EndStn  MACRO   NameStn
Cseg    ENDS
KolObjStn    =  __Kobj
KolGrStn     =  __Ngr
KolBlkTU     =  __KolBlkTU
KolBlkOTU    =  __KolBlkOTU
KolBlkTI     =  __KolBlkTI
KolDisk      =  __KolDisk
KolCmd       =  __KolCmd
KolCmdOt     =  __KolCmdOt
KolBlkTS     =  __KolBlkTS
KolCmdRkpTU  =  __KolCmdRkpTU
KolLineMatrOTU	=	__KolLineMatrOTU
KolCmdMatrOTU	=	__KolCmdMatrOTU
KolBlkPI    =  __KolBlkPI

;;DclTS        =  DclTs&NameStn - BegCseg
DclTS        =  LinkDclTS
DclBlkTS     =  LinkDclBlkTS

If  KolBlkTU EQ 0
    DclBlkTU  =  0
Else
    DclBlkTU  =  DclTu&NameStn; - BegCseg
EndIf

If  KolBlkOTU EQ 0
    DclBlkOTU  =  0
Else
    DclBlkOTU  =  DclOtu&NameStn; - BegCseg
EndIf

If  KolBlkTI EQ 0
    DclBlkTI  =  0
Else
    DclBlkTI  =  DclTi&NameStn; - BegCseg
EndIf

If  KolDisk EQ 0
    DclDisk  = 0
Else
    DclDisk  =  DclDisk&NameStn; - BegCseg
EndIf

If  KolCmd EQ 0
    DclCmd =  0
Else
    DclCmd  =  DclCmdTu&NameStn; - BegCseg
EndIf

If  KolCmdOt EQ 0
    DclCmdOt =  0
Else
    DclCmdOt =  DclCmdOt&NameStn; - BegCseg
EndIf

If  __KolLineMatrOTU EQ 0
    DclMatrOTU  =  0
Else
    DclMatrOTU  =  DclMatrOtu&NameStn; - BegCseg
EndIf

If  KolCmdRkpTU EQ 0
    DclCmdRkpTU =  0
Else
    DclCmdRkpTU  =  DclCmdRkpTu&NameStn; - BegCseg
EndIf

If  KolBlkPI EQ 0
    DclBlkPI_ =  0
Else
    DclBlkPI_  =  DclBlkPI&NameStn; - BegCseg
EndIf

end start
ENDM
;;**********************************************************
