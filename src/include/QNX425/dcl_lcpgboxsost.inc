??Par43  =  2Bh        ;; код +
??Par45  =  2Dh        ;; код -
??Par48  =  '0'        ;; код 0
??Par49  =  '1'+80h    ;; код 1
??Par50  =  '2'+80h    ;; код 2
??Par51  =  '3'        ;; код 3
??Par52  =  '4'+80h    ;; код 4
??Par53  =  '5'        ;; код 5
??Par54  =  '6'        ;; код 6
??Par55  =  '7'+80h    ;; код 7
??Par56  =  '8'+80h    ;; код 8
??Par57  =  '9'        ;; код 9
??Par192 =  61h+80h    ;; код А
??Par224 =  61h+80h    ;; код а
??Par193 =  62h+80h    ;; код Б
??Par225 =  62h+80h    ;; код б
??Par194 =  63h        ;; код В
??Par226 =  63h        ;; код в
??Par195 =  64h+80h    ;; код Г
??Par227 =  64h+80h    ;; код г
??Par207 =  70h+80h    ;; код П
??Par239 =  70h+80h    ;; код п
??Par196 =  65h        ;; код Д
??Par228 =  65h        ;; код д
??Par204 =  6Bh+80h    ;; код К
??Par234 =  6Bh+80h    ;; код к
??Par204 =  6Dh+80h    ;; код М
??Par236 =  6Dh+80h    ;; код м
??Par205 =  6Eh+80h    ;; код Н
??Par237 =  6Eh+80h    ;; код н
??Par215 =  7Eh        ;; код Ч
??Par247 =  7Eh        ;; код ч
??Par206 =  6Fh        ;; код О
??Par238 =  6Fh        ;; код о
??Par209 =  72h        ;; код С
??Par241 =  72h        ;; код с
??Par200 =  69h        ;; код И
??Par232 =  69h        ;; код и

;       Коды команд ТУ  (выдержка из таблицы)
;-----------------------------------------------------
CMD_NP      EQU     07H     ;нечетный прием
CMD_ONP     EQU     0BH     ;отмена нечетного приема
CMD_NO      EQU     0DH     ;нечетное отправление
CMD_ONO     EQU     0EH     ;отмена нечетного отправления
CMD_NSK     EQU     13H     ;нечетный сквозной пропуск
CMD_ONSK    EQU     15H     ;отмена нечетного сквозного пропуска
CMD_ADN     EQU     16H     ;автодействие нечетное
CMD_OADN    EQU     19H     ;отмена нечетного автодействия
CMD_TO      EQU     1AH     ;четное отправление
CMD_OTO     EQU     1CH     ;отмена четного отправления
CMD_AD      EQU     21H     ;автодействие
CMD_OAD     EQU     22H     ;отмена автодействия
CMD_TP      EQU     23H     ;четный прием
CMD_OTP     EQU     25H     ;отмена четного приема
CMD_TSK     EQU     26H     ;четный скозной пропуск
CMD_OTSK    EQU     29H     ;отмена четного сквозного пропуска
CMD_ADT     EQU     2AH     ;четное автодействие
CMD_OADT    EQU     2CH     ;отмена четного автодействия
CMD_MNV     EQU     31H     ;маневровый маршрут
CMD_OMNV    EQU     32H     ;отмена маневрового маршрута
CMD_MR      EQU     34H     ;маршрут
CMD_OMR     EQU     38H     ;отмена маршрута
CMD_PRS     EQU     43H     ;перевод стрелок
CMD_MUP     EQU     46H     ;местное управление
CMD_OMUP    EQU     49H     ;отмена местного управления
;CMD_SU      EQU     4AH     ;сезонное управление
;CMD_OSU     EQU     4CH     ;отмена сезонного управления
CMD_WA      EQU     51H     ;вызов аккустический
;CMD_ONB     EQU     52H     ;отмена набора
CMD_ROP     EQU     54H     ;отключить от линии генератор станции
CMD_RVP     EQU     58H     ;подключить к линии генератор станции
;CMD_GS      EQU     68H     ;громкоговорящая связь
CMD_SG      EQU     70H     ;swetofor otkrytx
;CMD_RS      EQU     72H     ;радиосвязь
CMD_WSA     EQU     77H     ;вспомогательный перевод стрелок
CMD_OSG     EQU     83H     ;swetofor zakrytx
;CMD_WDSN    EQU     85H     ;включение ДСН
;CMD_ODSN    EQU     86H     ;отмена включения ДСН
;CMD_OGS     EQU     89H     ;отмена громкоговорящей связи
CMD_WT      EQU     8AH     ;вызов к телефону
CMD_SMN     EQU     8CH     ;смена направления

CMD_IR      EQU     91H     ;искусственная разделка
;CMD_oipsr   EQU     92H     ;отмена исключения перевода стрелок предварительная
;CMD_ozp     EQU     92H     ;отмена закрытия (т.е. открытия переезда)
;CMD_isp     EQU     93H     ;исключение перевода стрелок
;CMD_WDG     EQU     94H     ;включение ДГА
;CMD_ODG     EQU     98H     ;выключене ДГА
CMD_URO      EQU     9AH     ;разрешение отправления
CMD_UORO     EQU     9CH     ;отмена разрешения отправления
CMD_RAB      EQU     0A1H    ;признак рабочей команды
CMD_PRW     EQU     0A2H    ;прзнак предварительной команды
CMD_VOS      EQU     0A4H    ;включение обогрева стрелок
CMD_OVOS     EQU     0A8H    ;выключение обогрева стрелок
;CMD_oipsp   EQU     0B0H    ;отмена исключения перевода стрелок рабочая
CMD_RH       EQU     0B2H    ;включение очистки стрелок
CMD_ORH      EQU     0B4H    ;выключение очистки стрелок
;CMD_uper    EQU     0E0H    ;управление переездом

Type_tGorl  = 0000h
Type_nGorl  = 0008h
Gorochniy   = 'Г'     ;; код  Г
Fiktivniy	= 'Ф'

ChSost1   = 00010000H   ;; проверяем 1 состояние
ChSost2   = 00020000H   ;; проверяем 2 состояние
ChSost3   = 00030000H   ;; проверяем 3 состояние
ChSost4   = 00040000H   ;; проверяем 4 состояние
;;----------------------------------------------------------------------------
;;----------  ОПИСАНИЕ ОБЪЕКТА -----------------------------------------------
;;----------------------------------------------------------------------------
DclObj  MACRO ClsObj,KodObjRts,KodObjLc,Options
	Local Lab

TypePar	= 0000h
;;Cls_Prm	= 0000h ;; параметр и класс (структура TypeObj)
UsePar	= 0

KolObjStn	=  KolObjStn + 1
Lab:
	DD LinkObj				;; указатель на следующий объект в списке
	DD 0					;;свободное место для загрузки адресе объекта из rts(для ускорения поиска) 
;;-------------------тип и класс------------------------------------
	IFNB <Options>
		FOR Opt,<Options>
			UsePar = 0 ;;флаг использованности параметра
			IFIDN <?CLS&ClsObj>,<?CLSKS> ;;если объект является светофором
				IFIDN <'&Opt'>,<'tGorl'>
					TypePar = TypePar OR Type_tGorl ;светофор принадлежит четной горловине
					UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'nGorl'>
					TypePar = TypePar OR Type_nGorl ; светофор принадлежит нечетной горловине
					UsePar = 1
				ENDIF
				IF (@CatStr(!',@SubStr(&Opt, 2, @SizeStr(&Opt) -2),!') EQ 'Г') OR (@CatStr(!',@SubStr(&Opt, 2, @SizeStr(&Opt) -2),!') EQ 'г')
					TypePar = TypePar OR 0004h ; светофор горочный
					UsePar = 1
				ENDIF
				IF (@CatStr(!',@SubStr(&Opt, 2, @SizeStr(&Opt) -2),!') EQ 'Ф') OR (@CatStr(!',@SubStr(&Opt, 2, @SizeStr(&Opt) -2),!') EQ 'ф')
					TypePar = TypePar OR 0010h ; светофор фиктивный
					UsePar = 1
				ENDIF
			ENDIF
			
			IFIDN <?CLS&ClsObj>,<?CLSPG> ;;если объект является PG
				IFIDN <'&Opt'>,<'Pg_Mnim'>
					TypePar = TypePar OR 0080h  ;мнимая перегонная стрелка
					UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'Pg_Dop'>
					TypePar = TypePar OR 0040h  ;перегон дополнительный
					UsePar = 1
				ENDIF
			ENDIF
			
			IFIDN <?CLS&ClsObj>,<?CLSUP> ;;если объект является UP
				IFIDN <'&Opt'>,<'PG_no_ts'>
					TypePar = TypePar OR 0080h  ;крайняя РЦ, дальше перегон не контролируется
					UsePar = 1
				ENDIF
			ENDIF
			
			IFIDN <?CLS&ClsObj>,<?CLSKP> ;;если объект является KP
				IFIDN <'&Opt'>,<'NoPutErr'>
						TypePar = TypePar OR 0080h  ;не выводить неисправности
						UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'NoAddMar'>
						TypePar = TypePar OR 0020h  ;не выводить неисправности
						UsePar = 1
				ENDIF
			ENDIF
			
			IFIDN <?CLS&ClsObj>,<?CLSST> ;;если объект является ST
				IFIDN <'&Opt'>,<'NoPutErr'>
						TypePar = TypePar OR 0080h  ;не выводить неисправности
						UsePar = 1
				ENDIF
			ENDIF
			
			IFIDN <?CLS&ClsObj>,<?CLSSP> ;;если объект является SP
				IFIDN <'&Opt'>,<'NoPutErr'>
						TypePar = TypePar OR 0080h  ;не выводить неисправности
						UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'NoAddMar'>
						TypePar = TypePar OR 0020h  ;не выводить неисправности
						UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'LastRCStn'>
						TypePar = TypePar OR 0040h  ;крайняя РЦ станции(для всех станций)
						UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'SPasKP'>
					TypePar = TypePar OR 0010h	;секция в виде пути(огражденный хотя бы с одной стороны выходным светофором)
					UsePar = 1
				ENDIF
			ENDIF

			IFIDN <'&ClsObj'>,<'TM'> ;;если объект является Таймером
				UsePar = 1
			ENDIF
			
			IF UsePar EQ 0
				.ERR   <НЕИСПОЛЬЗОВАННЫЙ ПАРАМЕТР ПРИ ОПРЕДЕЛЕНИИ ОБЪЕКТА, класс:код:параметр - &ClsObj:&KodObjRts:&Opt>
			ENDIF
		ENDM
	ENDIF
	
	IFIDN <'&ClsObj'>,<'TM'> ;;если объект является Таймером
		DW 0
	ELSE
		DW ?CLS&ClsObj OR TypePar	;; класс объекта
	ENDIF
	
	;;--------для таймера----------	
	IFIDN <'&ClsObj'>,<'TM'> ;;если объект является Таймером
		DD Options
		LCTM&Options = Lab
	ELSE
		DD 0
	ENDIF
	;------------------------------
	KodName <KodObjRts> 	;; код объекта в rts
	;;-------------------------------------------------------
	;;для избежания повтора кода в описании
	IFNB <KodObjLc>
		IFIDN	<'&KodObjLc'>,<'-'>
			KodName <KodObjRts>  ;; код объекта для lc
		ELSE
			KodName <KodObjLc> ;; код объекта в rts				
		ENDIF	
	ELSE
		KodName <KodObjRts>  ;; код объекта для lc
	ENDIF
	;;-------------------------------------------------------
		
	Dw KolComunObj		;; число связанных объектов		
	DD LinkComunObj		;; Указатель на связанный объект

	DD 0				;; признак окончания списка логических связей
LinkObj			= Lab
LinkComunObj	= 0
KolComunObj		= 0
ENDM
;;----------------------------------------------------------------------------
;;----------  ОПИСАНИЕ СВЯЗАННОГО ОБЪЕКТА ------------------------------------
;;----------------------------------------------------------------------------
CommunObj  MACRO ClsObj,KodObjRts,KodObjLc,Options
	Local Lab
KolComunObj = KolComunObj + 1
Lab:

	DD LinkComunObj				;; указатель на следующий связанный объект
	DD 0						;;свободное место для загрузки адреса объекта в rts(для ускорения поиска)
	Dw ?CLS&ClsObj				;; класс объекта
	
	KodName <KodObjRts>			;; код объекта в rts
	;;-------------------------------------------------------
	;;для избежания повтора кода в описании
	IFNB <KodObjLc>
		IfIdn	<'&KodObjLc'>,<'-'>
			KodName <KodObjRts>  ;; код объекта для lc
		ELSE
			KodName <KodObjLc> ;; код объекта в rts				
		ENDIF	
	ELSE
		KodName <KodObjRts>  ;; код объекта для lc
	ENDIF
	;;-------------------------------------------------------
	DD 0	;; признак окончания списка логических связей

LinkComunObj = Lab
ENDM
;;**********************************************************
;;**********************************************************
;;**********************************************************
;;-------------------------------------------------------
;;               ИЗМЕНЕНИЯ МАТРИЦЫ ТС
;;-------------------------------------------------------
ChangGr Macro  NameTs,NumStb,NumPlase,TypeSignal,Obj
		Local Lab
Lab:	
	DD LinkChangGr				;; указатель на следующее изменение в матрице	
	Db '&NameTs',0				;;имя мартицы
	Db NumStb*3					;;номер блока ТС;; 3 - для РКП, 4 - для ЛПУ
	Db NumPlase					;;место
	IfIdn	<'&TypeSignal'>,<'-'>
		Db 80h		;; метка минуса
	ELSE
		Db 00h 	
		
	ENDIF
		
??TPar = 0
		IFNB <Obj>
			Off32Lc_O_U	<Obj>,0 ;;без подсчета кол-ва объектов
			IF ??TPar NE 0
				.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО ПАРАМЕТРОВ ChangGr>
			ENDIF
		ELSE
			DB 12 dup(0) ;; пустая структура(12 БАЙТ РАЗМЕР структуры LcParCmd ПРОВЕРЬ!!!!!! в dcl_lc.h)
		ENDIF

LinkChangGr = Lab
ENDM
;;**********************************************************
;;**********************************************************
;;**********************************************************
;;-------------------------------------------------------
;;               ОПИСАНИЕ КОМАНД
;;-------------------------------------------------------
????KodP	Macro KodSym
		IfDef ??Par&KodSym
			????kp    =    (??Par&KodSym+0)
		Else
			Dw KodSym
			errcod = 1
		EndIf
	EndM
;;---------------
KodPar	MACRO  str
		FORC ??c, <str>
			IFNB <'&??c'>
				????KodP %('&??c'+0)
				Db ????kp
			ENDIF
		ENDM
ENDM
;;----------------------------------------------------------
;; примитивная кодировка символов указателя условий и команды, для проверки их идентичности
;;----------------------------------------------------------
ChekPointerUsl MACRO Pointer
		Local kolsym
kolsym = 0
ChkSumP = 0
		FORC   ??c, <Pointer>
			IFNB <'&??c'>
				ChkSumP = ChkSumP + '&??c' + kolsym
				kolsym = kolsym + 1
			ENDIF
		ENDM
ENDM
;;----------------------------------------------------------
LcFrmNm MACRO	NmCmd,KodCmd1,KodCmd2
		Local	LabKmd,LabWrk2

LabKmd:
		Db 10 dup(0)		;; место для титула команды
LabWrk2:

	Org LabKmd
		IFNB <'&NmCmd'>		;; в команде АД NmCmd отсутствует
			KodPar <NmCmd>
		ENDIF
	Org LabWrk2

	IFNB   <KodCmd1>
		Db CMD_&KodCmd1
	ELSE
		Db 0
	ENDIF 
	
	IFNB <KodCmd2>
		Db CMD_&KodCmd2
	ELSE
		Db 0
	ENDIF 
	
ENDM
;;----------------------------------------------------------
LcFrmNm1 MACRO	NmCmd,Txt,KodCmd1,KodCmd2
		Local	LabKmd,LabWrk2

LabKmd:
		Db 10 dup(0)		;; место для титула команды
LabWrk2:

	Org LabKmd
		IFNB <'CMD_&NmCmd'>;комнда ЧП,ЧО,НП,НО
			KodPar <NmCmd>
		ELSE
		.ERR <Нет такой команды &NmCmd>
		ENDIF
		IFNB <'&Txt'>
			KodPar <Txt>
		ENDIF
	Org LabWrk2

	IFNB   <KodCmd1>
		Db CMD_&KodCmd1
	ELSE
		Db 0
	ENDIF 
	
	IFNB <KodCmd2>
		Db CMD_&KodCmd2
	ELSE
		Db 0
	ENDIF 
	
ENDM
;;----------------------------------------------------------
Off32Lc_O_U  MACRO   List,Kol

	FOR     xxx,<List>
		??TPar = ??TPar +01h

				IF (??TPar EQ 01h)
					IfIdn	<'&xxx'>,<'?'>
						Dw 0	
					ELSE
						Dw ?CLS&xxx    	;; класс объекта
					EndIf
				EndIf

				IF (??TPar EQ 02h)
					KodName <%@SubStr(xxx, 2, 6)> ;; код объекта в rts
				EndIf

				IF (??TPar EQ 03h)
					DD 0	;; приготовили место для адреса объекта из rts 4 байта
					IfIdn <'&xxx'>,<'?'>
						Dw 0	
					ELSE
						Dw (xxx Shr 16) And 0FFFFh   ;;атрибут объекта 2байта
					EndIf
				EndIf

		IF	(??TPar  EQ 3)
			??TPar =   0
			IF	(Kol  EQ 1);;считать кол-во объектов(3 параметра = 1 объект)
				??KolList = ??KolList +1
			ENDIF
		ENDIF
	ENDM
ENDM
;;**********************************************************
Off32_S_D  MACRO   List
	FOR ??x,<List>
		??KolList = ??KolList +1
		IfIdn <'&??x'>,<'?'>
			Dd 0
		Else
			Dd ??x
		EndIf
	EndM
ENDM
;;**********************************************************
;;              УСЛОВИЯ КОМАНД
;;**********************************************************
USL_U		MACRO   LabUsl,ListWork
		Local	LWLabUsl, locChkSumP

??TPar = 0

		IFNB <ListWork>
			Off32Lc_O_U	<ListWork>,1  ;;с подсчетом кол-ва объектов
			IF ??TPar NE 0
				.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО ПАРАМЕТРОВ, в условии команды &LabUsl>
			ENDIF
		ENDIF

LWLabUsl:
		Org LC&LabUsl
			Db ??KolList	;; количество параметров
		Org LWLabUsl
		
locChkSumP = ChkSumP
ChekPointerUsl LabUsl ;;изменили ChkSumP
		IFE locChkSumP EQ ChkSumP
			.ERR <В данной команде возможно разные указатели на условия, &LabUsl>
		ENDIF
ENDM
;;**********************************************************
USL_S		MACRO   LabUsl,ListWork
		Local	LWLabUsl, locChkSumP

	Off32_S_D <ListWork>

LWLabUsl:
	Org LC&LabUsl
		Db ??KolList	  ;; количество параметров
	Org LWLabUsl

locChkSumP = ChkSumP
ChekPointerUsl LabUsl ;;изменили ChkSumP
		IFE locChkSumP EQ ChkSumP
			.ERR   <В данной команде возможно разные указатели на условия, &LabUsl>
		ENDIF
ENDM
;;**********************************************************
;;         обычные команды ЧП,ЧО,НП,НО,маневровые
;;**********************************************************
LCcmdTU	MACRO   LabUsl,TextCmd,Timer,CodePgBox
		Local	Lab;,LCLabUsl
Lab:
	DD LinkCmd ;;Адрес следующей команды этой станции

	;;указатель на таймер
	IFNB <Timer>
		DD	(LC&Timer)
	ELSE
		DD	0
	ENDIF
	
KolCmd = KolCmd+1
errcod = 0
	LcFrmNm TextCmd
	IF errcod EQ 1
		.ERR <ОШИБКА В КОДЕ КОМАНДЫ, &LabUsl>
	ENDIF
??KolList	=	0
??TPar = 0
	Db		'O'
	
	IFNB <CodePgBox>
		KodName <%@SubStr(CodePgBox, 2, 6)> ;; код перегонного box
	ELSE
		DD	0
	ENDIF
	DD		0;;Bоx перегонный в команде отправления на перегон
	DW		0;;Sost сотстояние команды
		
LC&LabUsl:
	Db 0	;; количество параметров	- будет заполняться

ChekPointerUsl LabUsl ;;создаем значение сумарного числа кодов символов указателя для проверки

LinkCmd = Lab
ENDM
;;**********************************************************
;;         ответственная комнда на первом месте ЧП,ЧО,НП,НО
;;**********************************************************
LCcmdTU1	MACRO   LabUsl,TextCmd,Timer,CodePgBox
		Local	Lab;,LCLabUsl
Lab:
	DD LinkCmd ;;Адрес следующей команды этой станции
	;;указатель на таймер
	IFNB <Timer>
		DD	(LC&Timer)
	ELSE
		DD	0
	ENDIF
	
KolCmd = KolCmd+1
errcod = 0
	LcFrmNm1 TextCmd
	IF errcod EQ 1
		.ERR <ОШИБКА В КОДЕ КОМАНДЫ, &LabUsl>
	ENDIF
??KolList	=	0
??TPar = 0
	Db		'O'
	
	IFNB <CodePgBox>
		KodName <%@SubStr(CodePgBox, 2, 6)> ;; код перегонного box
	ELSE
		DD	0
	ENDIF
	DD		0;;Bоx перегонный в команде отправления на перегон
	DW		0;;Sost сотстояние команды
LC&LabUsl:
	Db 0	;; количество параметров	- будет заполняться

ChekPointerUsl LabUsl ;;создаем значение сумарного числа кодов символов указателя для проверки

LinkCmd = Lab
ENDM
;;**********************************************************
;;    обычные команды отмены ЧП,ЧО,НП,НО,маневровые
;;**********************************************************
LCcmdTUo	MACRO   LabUsl,TextCmd,Timer,CodePgBox
		Local	Lab ;,LCLabUsl
Lab:
	DD LinkCmd  ;;Адрес следующей команды этой станции

	;;указатель на таймер
	IFNB <Timer>
		DD	(LC&Timer)
	ELSE
		DD	0
	ENDIF
	
KolCmd = KolCmd+1
errcod = 0
	LcFrmNm TextCmd
	IF errcod EQ 1
		.ERR   <ОШИБКА В КОДЕ КОМАНДЫ, &LabUsl>
	ENDIF

??KolList = 0
??TPar = 0
	Db		'U'
	
	IFNB <CodePgBox>
		KodName <%@SubStr(CodePgBox, 2, 6)> ;; код перегонного box
	ELSE
		DD	0
	ENDIF
	DD		0;;Bоx перегонный в команде отправления на перегон
	DW		0;;Sost сотстояние команды
LC&LabUsl:
	Db 0	;; количество параметров - будет заполняться

ChekPointerUsl LabUsl ;;создаем значение сумарного сисла кодов символов указателя для проверки

LinkCmd = Lab
ENDM
;;**********************************************************
;;         команды ЧСК,НСК
;;**********************************************************
LCcmdTU_S	MACRO   LabUsl,TextCmd,Timer
		Local	Lab ;,LCLabUsl
Lab:
		DD LinkCmd ;;Адрес следующей команды этой станции
		;;указатель на таймер
		IFNB <Timer>
			DD	(LC&Timer)
		ELSE
			DD	0
		ENDIF
		
KolCmd = KolCmd+1

errcod = 0
		LcFrmNm TextCmd
		IF errcod EQ 1
			.ERR <НЕИЗВЕСТНЫЙ СИМВОЛ В КОДЕ КОМАНДЫ, &LabUsl>
		ENDIF
		
??KolList = 0
		Db 'S'
		
		DD		0;; код перегонного box
		DD		0;; Bоx перегонный в команде отправления на перегон
		DW		0;;Sost сотстояние команды
LC&LabUsl:
		Db 0	;; количество параметров	- будет заполняться

ChekPointerUsl LabUsl ;;создаем значение сумарного числа кодов символов указателя для проверки

LinkCmd = Lab
ENDM
;;**********************************************************
;;              команды отмены ЧСК,НСК
;;**********************************************************
LCcmdTUo_S	MACRO   LabUsl,TextCmd,Timer
		Local	Lab
Lab:
		DD LinkCmd	;;Адрес следующей команды этой станции
		;;указатель на таймер
		IFNB <Timer>
			DD	(LC&Timer)
		ELSE
			DD	0
		ENDIF
		
KolCmd = KolCmd+1

errcod = 0
		LcFrmNm TextCmd
		IF errcod EQ 1
			.ERR <ОШИБКА В КОДЕ КОМАНДЫ, &LabUsl>
		ENDIF
		
??KolList	=	0
		Db		'D'
		
		DD		0;; код перегонного box
		DD		0;;Bоx перегонный в команде отправления на перегон
		DW		0;;Sost сотстояние команды
LC&LabUsl:
		Db		0		;; количество параметров	- будет заполняться

ChekPointerUsl LabUsl	;;создаем значение сумарного числа кодов символов указателя для проверки

LinkCmd = Lab
ENDM
;;**********************************************************
BegCmdTU	MACRO
Cseg	ENDS
CmdTUCseg	Segment PUBLIC  Byte 'CmdTUCseg'
		ASSUME  CS:CmdTUCseg
ENDM
;;**********************************************************
EndCmdTU	MACRO
CmdTUCseg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
BegCmdTUO	MACRO
Cseg	ENDS
CmdTUOCseg	Segment PUBLIC  Byte 'CmdTUOCseg'
		ASSUME  CS:CmdTUOCseg
ENDM
;;**********************************************************
EndCmdTUO	MACRO
CmdTUOCseg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
;;**********************************************************
;;**********************************************************
;;**********************************************************
;;------------------------------------------------------------------------------------------------
;;---------- НАЧАЛО ОПИСАНИЯ СТАНЦИИ -----------------------------------------
;;------------------------------------------------------------------------------------------------
BegStnLc	MACRO KodStn,EcpStn,NameStn

OPTION MZ :20h ;;адрес начала таблицы смещения
STACK	Segment para STACK 'STACK'
STACK	ends

Cseg	Segment PUBLIC  Byte 'CODE'
	ASSUME  CS:Cseg
Cseg	ENDS

CmdTUCseg	Segment PUBLIC  Byte 'CmdTUCseg'
	ASSUME  CS:CmdTUCseg
CmdTUCseg	ENDS

CmdTUOCseg	Segment PUBLIC  Byte 'CmdTUOCseg'
	ASSUME  CS:CmdTUOCseg
CmdTUOCseg	ENDS

Cseg	Segment PUBLIC  Byte 'CODE'
	ASSUME  CS:Cseg

start:

KolObjStn	=  0
KolCmd		=  0
KolComunObj	=  0

	IF	@SizeStr(KodStn) NE 6
		.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО СИМВОЛОВ В КОДЕ СТАНЦИИ>
	ENDIF
	IF	@SizeStr(EcpStn) NE 6
		.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО СИМВОЛОВ В СЕТЕВОЙ РАЗМЕТКЕ>
	ENDIF

	DB KodStn,0						;; код станции
	NetMark EcpStn					;; сетевая разметка станции
	DW KolObjStn_MainStuct			;; число объектов станции	
	DD LinkObj_MainStuct			;; адрес размещения объектов	
	DW KolCmd_MainStuct				;; число команд общего назначения
	DD LinkCmd_MainStuct			;; адрес размещения описания команд
	DD LinkChangGr_MainStuct		;; адрес размещения описания изменений в матрицу ТС	
	DB "&NameStn",0					;; название станции
	DB   16 dup(0)					;; резерв

LinkComunObj =  0
LinkObj 	 =  0
LinkCmd 	 =  0
LinkChangGr	 =  0
        ENDM
;;**********************************************************
EndStnLc   MACRO
	DB 4 dup(0FFh)
Cseg	ENDS
	KolObjStn_MainStuct  	= KolObjStn
	KolCmd_MainStuct 		= KolCmd
	LinkObj_MainStuct 		= LinkObj
	LinkCmd_MainStuct 		= LinkCmd
	LinkChangGr_MainStuct 	= LinkChangGr

end start
ENDM
