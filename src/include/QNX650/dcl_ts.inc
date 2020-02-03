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
?CLSUP  =     0100H
?CLSKS  =     0200H
?CLSKP  =     0300H
?CLSST  =     0400H
?CLSSP  =     0500H
?CLSPG  =     0600H
?CLSDP  =     0700H  ;; состояние двухпозиционных объектов
?CLSPR  =     0800H
?CLSDS  =     0900H  ;; класс ДИСК
;;;?CLSUS  =     0A00H  ;; класс УКСПС
?CLSBS  =     0A00H  ;; класс бесстрелочные секции
?CLSSO  =    0FF00H  ;; класс сложных объектов

???NDT  =     000H
???NDN  =     001H

Tmk     = 13000000h  ;; тестирование минусового положения стрелки
Tpk     = 11000000h  ;; тестирование плюсового  положения стрелки
;;Nu      = 06000000h  ;;
Tak     = 11000000h  ;; тестирование активного состояния объекта
Tps     = 10000000h  ;; тестирование пассивного состояния объекта
;;Ts      = 0F000000h  ;; выдать текущее состояние объекта
Null    = 40000000H   ;; 010 000 x - пустой признак
;;------------------------------------------------------------------------------
;;      УЧАСТКИ УУ/УП      TYPE TS
                      ;; 000 000 x - свободен-1/занят-0
Nd      = 02000000H   ;; 000 001 x - правильное-0/неправильное-1 направление
                      ;; 000 010 x - ремонт участка-1
                      ;; 000 011 x -
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
                      ;; 000 111 x - выдать текущее состояние участка
                      ;; для Зингера
Uw      = 00000000H   ;; контроль свободности уу/уп
Ur      = 01000000H   ;; контроль занятости уу/уп
;;------------------------------------------------------------------------------
;;      СВЕТОФОР           TYPE TS
                      ;; 000 000 x - закрытие-0/открытие-1 светофора
Ro      = 02000000H   ;; 000 001 x - контроль сигнала перегорания-0 нити (красный)
Ad      = 04000000H   ;; 000 010 x - установка-1/снятие-0 автодействия
Ps      = 06000000H   ;; 000 011 x - 1-открытие пригласительного сигнала
Ms      = 08000000H   ;; 000 100 x - открытие-1/закрытие-0 маневровой головки
                      ;; 000 101 x - 1-контроль открытия светофора (зеленая лампа)
                      ;; 000 110 x - 1-контроль закрытия светофора (красная лампа)
                      ;; 000 111 x - выдать состояние светофора
Go      = 10000000H   ;; 001 000 x - контроль сигнала перегорания-0 нити (зеленый/желтый)
Po      = 12000000H   ;; 001 001 x - контроль сигнала перегорания-0 нити (пригласительный)
Av      = 14000000H   ;; 001 010 x - неисправность светофора
Avm     = 00150000H   ;; 001 010 x - неисправность светофора (мигание)
SvBlk   = 16000000H   ;; 001 011 x - установка-1/снятие-0 блокировки светофора
Fd      = 1A000000H   ;; 001 101 x - установка-1/снятие-0 светофор погашен              
                      ;; для Зингера
RoM     = 00820000H   ;; мигание красной лампы светофора (перегорание нити красного огня)
PsM		= 00060000H   ;; мигание зеленой лампы светофора (открытие пригласительного сигнала)
Lg      = 0A000000H   ;; контроль открытия светофора (зеленая лампа)
Lr      = 0C000000H   ;; контроль закрытия светофора (красная лампа)
;;              типы светофоров
Svt     =     0       ;; светофор четный
Svn     =     1       ;; светофор нечетный
Svtm    =     2       ;; светофор четный маневровый
Svnm    =     3       ;; светофор нечетный маневровый
;;------------------------------------------------------------------------------
;;      ПУТЬ               TYPE TS
                      ;; 000 000 x - путь занят-0/свободен-1
Zp      = 02000000H   ;; 000 001 x - замыкание-1 пути
Zpt     = 02000000H   ;; 000 001 x - замыкание-1 пути в четном направлении
Zpn     = 04000000H   ;; 000 010 x - замыкание-1 пути в нечетном направлении
Log     = 0C000000H   ;; логическая занность
                      ;; 000 011 x - ремонт пути-1
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
                      ;; 000 111 x - выдать текущее состояние пути
                      ;; для Зингера
Pw      = 02000000H   ;; контроль замкнутости пути (белая лампа)
Pk1     = 01000000H   ;; контроль занятости пути
Pk2     = 0B000000H   ;; контроль занятости пути
;;Kn      = 0C000000H   ;; контроль напряжения переменного тока на путевых реле
;;-------------------------------------------------------------------------------
;;       СТРЕЛКИ           TYPE TS
Pk      = 00000000H   ;; 000 000 x - перевод стрелки в + (1)
Mk      = 02000000H   ;; 000 001 x - перевод стрелки в - (1)
Mu      = 04000000H   ;; 000 010 х - местное управление-1
Sts     = 06000000H   ;; 000 011 х - сброс стрелки-1
PkMk    = 08000000H   ;; 000 100 х - перевод стрелки в +/- (1/0)
Os      = 0A000000H   ;; 000 101 x - отключение стрелки-1
Sa      = 0C000000H   ;; 000 110 x - вспомогательный перевод стрелки (1)
                      ;; 000 111 x - текущее состояние стрелки
SaPk    = 10000000H   ;; 001 000 x - вспомогательный перевод стрелки в +
SaMk    = 12000000H   ;; 001 001 x - вспомогательный перевод стрелки в -
AVb     = 14000000H   ;; 001 010 x - контроль схемы автовозврата стрелки (белая лампа) 1-охранное(плюсовое) положение
AVk     = 16180000H   ;; 001 011 x - контроль схемы автовозврата стрелки (красная лампа) 1-отсчет времени/миг-переводится
AVkM    = 18000000H   ;; 001 100 x - 1-перевод стрелки схемой автовозврата
AVbk    = 1A180000H   ;; 001 101 x - контроль схемы автовозврата стрелки (белая/красная лампа) 0-охр.полож/1-отсчет времени
AVkb    = 16000000H   ;; 001 101 x - контроль схемы автовозврата стрелки (белая/красная лампа) 0-охр.полож/1-отсчет времени
;;------------------------------------------------------------------------------
;;  СТРЕЛОЧНЫЕ СЕКЦИИ      TYPE TS
                      ;; 000 000 x - секция свободна-1/занята-0
Zs      = 02000000H   ;; 000 001 x - контроль замыкания-1 секции
Zt      = 02000000H   ;; 000 001 x - замыкание-1 в четном маршруте
Zn      = 04000000H   ;; 000 010 x - замыкание-1 в нечетном маршруте
                      ;; 000 011 x - изменение положения стрелок, входящих в секцию
                      ;; 000 100 x - программное замыкание-1 в маршруте
Ir      = 0A000000H   ;; 000 101 x - искусственная разделка секции
Log     = 0C000000H   ;; логическая занность
                      ;; 000 110 x -
                      ;; 000 111 x - выдать состояние секции
                      ;; для Зингера
IrM     = 000A0000H   ;; Мигание секции (Искусственная разделка)
Sw      = 02000000H   ;; контроль замкнутости стрелочной секции (белая лампа)
Sr      = 01000000H   ;; контроль занятости стрелочной секции (красная лампа)
;;Kn      = 0C000000H   ;; контроль напряжения переменного тока на путевых реле
;;------------------------------------------------------------------------------
;;      ПЕРЕГОНЫ           TYPE TS
                      ;; 000 000 x - свободен-1/занят-0
Rvr     = 02000000H   ;; 000 001 x - правильное(прием)-0/неправильное(отправление)-1 направление движения
PgLg    = 04140000H   ;; 000 010 x - 1-отправление (зеленая лампа)
PgLy    = 06160000H   ;; 000 011 x - 1-прием (желтая лампа)
PgLw    = 08180000H   ;; 000 100 x - 1-свободен (белая лампа)
PgLr    = 0A1A0000H   ;; 000 101 x - 1-занят (красная лампа)
                      ;; 000 110 x - 
                      ;; 000 111 x - выдать текущее состояние перегона

PgLgM   = 00140000H   ;; 001 010 x - 1-мигание зеленой лампы (авария при обрыве или сообщении проводов смены направления)
PgLyM   = 00160000H   ;; 001 011 x - 1-мигание желтой лампы (авария при обрыве или сообщении проводов смены направления)
PgLwM   = 00180000H   ;; 001 100 x - 1-мигание белой лампы (выдержка времени при освобождении перегона)
PgLrM   = 001A0000H   ;; 001 101 x - 1-мигание красной лампы (на станции приема, если на станции отправления открыт выходной,
                      ;;               загорится постоянно, когда поезд заедет за выходной)

;;------------------------------------------------------------------------------
;;      ПОЗИЦИОННЫЕ        TYPE TS
                      ;; 000 000 x - 0 / 1 - 1/2 состояние
Sost3   = 02000000H   ;; 000 001 x - 1 - 3 состояние
Sost3M  = 00020000H
Sost4   = 04000000H   ;; 000 010 x - 1 - 4 состояние
Sost4M  = 00040000H   ;;
                      ;; 000 011 x -
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
Net =     1F000000H   ;; 000 111 x - выдать текущее состояние объекта
;;------------------------------------------------------------------------------
;;      ПЕРЕЕЗДЫ           TYPE TS
                      ;; 000 000 x - открыт-0/закрыт-1
PrZakrM = 00010000H   ;; 
PrAlrm  = 02000000H   ;; 000 001 x - 1-авария переезда
PrAlrmM = 00020000H   ;;
;;PrOgr   = 04000000H   ;; 000 010 x - 1-ограждение переезда
PrIzv   = 06000000H   ;; 000 011 x - 1-передача извещения на переезд
PrIzvM  = 00060000H   ;;
                      ;; 000 100 x -
                      ;; 000 101 x -
                      ;; 000 110 x -
                      ;; 000 111 x - выдать текущее состояние переезда
;;------------------------------------------------------------------------------
;;      ДИСКи              TYPE TS
                      ;; 000 000 x - 
DsAlrm  = 02000000H   ;; 000 001 x - 
DsOgr   = 04000000H   ;; 000 010 x - 
DsIzv   = 06000000H   ;; 000 011 x - 
                      ;; 000 111 x - выдать текущее состояние ДИСКа

Ponab     = 1
DiskB     = 2
DiskB2000 = 3
Esso      = 4
;;------------------------------------------------------------------------------
;;      ДИСКи              TYPE TS
                      ;; 000 000 x - 
Dat1    = 02000000H   ;; 000 001 x - 
Dat2    = 04000000H   ;; 000 010 x - 
USotkl  = 06000000H   ;; 000 011 x - 
                      ;; 000 111 x - выдать текущее состояние ДИСКа

Ponab     = 1
DiskB     = 2
DiskB2000 = 3

;;-------------------------------------------------------------------------------
;;         УКСПС         TYPE TS
Dat1    = 00000000H   ;; 000 000 x - перевод стрелки в + (1)
Dat2    = 02000000H   ;; 000 001 x - перевод стрелки в - (1)
Rb      = 04000000H   ;; 000 010 х - местное управление-1
Potk    = 06000000H   ;; 000 011 х - сброс стрелки-1
Otk     = 08000000H   ;; 000 100 х - перевод стрелки в +/- (1/0)
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
ABTC  = 20000000H     ;; 010 000 x - признак сигнала АБТЦ-М
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
		IfIdn	<&??x>,<?>
			Dd	0
		Else
			??Flag  = @CatStr(!", @SubStr(??x, 1, 1), !")
			If	??Flag EQ "-"
				Dd  @SubStr(??x, 2, @SizeStr(??x) -1) - BegCseg + 80000000h
			Else
				Dd	??x - BegCseg
			EndIf
		EndIf
	EndM
ENDM
;;**********************************************************
Off24  MACRO   List
	FOR     ??x,<List>
		??KolList = ??KolList +1
		IfIdn	<&??x>,<?>
			??L24     = 0
		Else
			??Flag  = @CatStr(!", @SubStr(??x, 1, 1), !")
			If	??Flag EQ "-"
				??L24	=  @SubStr(??x, 2, @SizeStr(??x) -1) - BegCseg + 80000000h
			Else
				??L24	=	??x - BegCseg
			EndIf
		EndIf
		Dw	(??L24 And 0FFFFh)
		Db  (??L24 Shr 24)  And 0FFh
	EndM
EndM
;;**********************************************************
Off16	MACRO   Lst
	For		??x,<Lst>
		??KolList	=	??KolList + 1
		IfIdn	<??x>,<?>
			Dw	0
		Else
			Dw	??x - BegCseg
		EndIf
	EndM
ENDM
;;**********************************************************
Off   MACRO   Lst
	For		??x,<Lst>
		??KolList	=	??KolList + 1
		IfIdn	<??x>,<?>
			Dw	0
		Else
			Dw	??x - BegCseg
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
		ENDM
;;**********************************************************
DclUp	MACRO   Nm,LstUp
        Nam     <Nm>
??KolList =      0
        Off16   <LstUp>
        If      ??KolList NE 2
			.Err	<	2>
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
DclPr   MACRO   Nm,LstRC
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
		Dw		LinkDclTS
		Dw		KolGrRKP&NameTs
                PUBLIC  DclTs&NameTs
DclTs&NameTs      LABEL   BYTE
LinkDclTS	=	DclTs&NameTs - BegCseg
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
    	    DW      HET??8??SYM
        ENDIF
EndM
;;**********************************************************
EndGr   MACRO   NameTs
KolGrRKP&NameTs  =  __Ngr
        ENDM
;;**********************************************************
BegTS   MACRO   NameStn
__Nblk	 =      0
		Db		'&NameStn',0
		Dw		LinkDclBlkTS
		Dw		KolBlkTS&NameStn
                PUBLIC  DclBlkTs&NameStn
DclBlkTs&NameStn  LABEL   BYTE
LinkDclBlkTS	=	DclBlkTs&NameStn - BegCseg

        ENDM
;;**********************************************************
BlkTs   MACRO   NumBlk, Place
        DB      NumBlk
        DB  Place,0

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
        ENDM
;;**********************************************************
BegTU   MACRO   NameStn
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
        ENDM
;;**********************************************************
BegOTU  MACRO   NameStn
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
		Dw		KolLineMatrOTU
		Dw		KolCmdMatrOTU
                PUBLIC  DclMatrOtu&NameStn
DclMatrOtu&NameStn   LABEL   BYTE
        ENDM
;;**********************************************************
LineOTU   MACRO   NumLine, NameLine, AdrBlkOTU, LineCodeOTU
		DB NumLine
        DB NameLine,0
		DW AdrBlkOTU
		DB 0&LineCodeOTU&B

__KolLineMatrOTU = __KolLineMatrOTU + 1

        ENDM
;;**********************************************************
CmdOTU   MACRO   NameCmdOTU, ListOut
        DB NameCmdOTU,0

??KolList=      0

		FOR ??x,<ListOut>
	    	??KolList = ??KolList + 1
			DW  ??x
		EndM

        IF   ??KolList NE 2
    	    DW  HET??2??SYM
        ENDIF

__KolCmdMatrOTU = __KolCmdMatrOTU + 1

        ENDM
;;**********************************************************
EndMatrOtu   MACRO   NameStn
        ENDM
;;**********************************************************
;BegChl  MACRO TtlChl
;Cseg    Segment PUBLIC  Byte 'CODE'
;        ASSUME  CS:Cseg
;BegCseg:
;        Db      '&TtlChl'
;        Dw      KolKrug
;        Dd      BegLinkKrug
;LinkKrug =      0
;??Kkrug  =      0
;EndM
;;**********************************************************
;EndChl  MACRO
;Cseg    ENDS
;KolKrug =     ??Kkrug
;BegLinkKrug = LinkKrug
;EndM
;;**********************************************************
;BegKrug MACRO   NameKrug,TtlKrug,NumKrug,TypeKrug,NumIrq,NumPort
;??Kstn    =     0
;??LinkStn =     0
;Dcl_&NameKrug:                    ;; Указатель на начало описания круга
;   Dd      LinkKrug               ;;
;   Db      '&TtlKrug'             ;;
;   Dw      0&NumKrug&H
;   Db      '&TypeKrug'            ;; тип линии связи
;   Dw      KolStn&NameKrug        ;; количество станций в круге
;   Dw      0&NumIrq&H
;   Dw      0&NumPort&H
;   Dd      0                      ;; Указатель на параметры круга
;   Dd      BegStn&NameKrug        ;; Указатель на начало описания круга
;??Kkrug =       ??Kkrug + 1
;LinkKrug=       Dcl_&NameKrug
;EndM
;;**********************************************************
NetMark MACRO NetNumStn
        DB (0&NetNumStn&H Shr 16) And 0FFh
        DB (0&NetNumStn&H Shr 8) And 0FFh
        DB  0&NetNumStn&H And 0FFh
EndM
;;;**********************************************************
;DclStn  MACRO NumStn, NameStn, NetNumStn
;        Local LabStn
;LabStn:
;      Dd      ??LinkStn
;      Db      16 Dup(0FFh)
;      Db      NumStn      ;; порядковый номер станции в линии связи
;      Db      '&NameStn'  ;; код названия станции
;      NetMark NetNumStn   ;; сетевая разметка станции
;      Dd      0           ;; *PromStn   адрес расположения описания станции
;      Dw      0           ;; KolObj     число объектов станции
;      Dw      0           ;; KolGrStn   число групп сигналов ТС
;      Dd      0           ;; *PdclTC    адрес размещения таблиц ТС станции
;      Dw      0           ;; KolCmd     число команд общего назначения
;      Dd      0           ;; *Pcmd		адрес размещения списка команд общего назначения
;      Dw      0           ;; KolCmdOt   число ответственных команд
;      Dd      0           ;; *PcmdOt	адрес размещения списка отвентственных команд
;   ??Kstn   = ??Kstn+1
;   ??LinkStn= LabStn
;EndM
;;**********************************************************
;EndKrug MACRO   NameKrug
;KolStn&NameKrug = ??Kstn    ;; количество станций в круге
;BegStn&NameKrug = ??LinkStn ;;
;EndM
;;**********************************************************
BegStn  MACRO   NameStn
Cseg    Segment PUBLIC  Byte 'CODE'
        ASSUME  CS:Cseg
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

BegCseg:
Rom&NameStn:
  Db   'Dcl&NameStn'         ;; код названия станции
  Dw   KolObjStn             ;; число объектов станции
  Dw   KolGrStn              ;; число групп сигналов ТС
  Dw   DclTS                 ;; адрес размещения таблиц ТС станции
  Dw   KolBlkTU              ;; число блоков ТУ
  Dw   DclBlkTU              ;; адрес размещения описания блоков ТУ
  Dw   KolBlkOTU             ;; число блоков ОТУ
  Dw   DclBlkOTU             ;; адрес размещения описания блоков ОТУ
  Dw   KolBlkTI              ;; число блоков ТИ
  Dw   DclBlkTI              ;; адрес размещения описания блоков ТИ
  Dw   KolDisk               ;; число ДИСКов на станции
  Dw   DclDisk               ;; адрес размещения описания ДИСКов
  Dw   KolCmd                ;; число команд общего назначения
  Dw   DclCmd                ;; адрес размещения описания команд
  Dw   KolCmdOt              ;; число ответственных команд
  Dw   DclCmdOt              ;; адрес размещения описания отв. команд
  Dw   KolBlkTS              ;; число блоков ТС
  Dw   DclBlkTS              ;; адрес размещения описания блоков ТС
  Dw   DclMatrOTU            ;; адрес размещения описания матрици ОТУ
  Dw   KolCmdRkpTU           ;; число команд общего назначения, хранящихся на ЦП
  Dw   DclCmdRkpTU           ;; адрес размещения описания команд, хранящихся на ЦП
  Dw   11 dup(0)             ;; резерв

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

;;DclTS        =  DclTs&NameStn - BegCseg
DclTS        =  LinkDclTS
DclBlkTS     =  LinkDclBlkTS

If  KolBlkTU EQ 0
    DclBlkTU  =  0
Else
    DclBlkTU  =  DclTu&NameStn - BegCseg
EndIf

If  KolBlkOTU EQ 0
    DclBlkOTU  =  0
Else
    DclBlkOTU  =  DclOtu&NameStn - BegCseg
EndIf

If  KolBlkTI EQ 0
    DclBlkTI  =  0
Else
    DclBlkTI  =  DclTi&NameStn - BegCseg
EndIf

If  KolDisk EQ 0
    DclDisk  = 0
Else
    DclDisk  =  DclDisk&NameStn - BegCseg
EndIf

If  KolCmd EQ 0
    DclCmd =  0
Else
    DclCmd  =  DclCmdTu&NameStn - BegCseg
EndIf

If  KolCmdOt EQ 0
    DclCmdOt =  0
Else
    DclCmdOt =  DclCmdOt&NameStn - BegCseg
EndIf

If  __KolLineMatrOTU EQ 0
    DclMatrOTU  =  0
Else
    DclMatrOTU  =  DclMatrOtu&NameStn - BegCseg
EndIf

If  KolCmdRkpTU EQ 0
    DclCmdRkpTU =  0
Else
    DclCmdRkpTU  =  DclCmdRkpTu&NameStn - BegCseg
EndIf

ENDM
;;**********************************************************
