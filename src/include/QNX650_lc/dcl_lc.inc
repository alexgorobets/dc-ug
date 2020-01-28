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
??Par207 =   70H+80H   ;Кoд сим.'п'
??Par239 =   70H+80H   ;Кoд сим.'п'
??Par208 =   71H       ;Кoд сим.'Р'
??Par240 =   71H       ;Кoд сим.'Р'
??Par209 =  72h        ;; код С
??Par241 =  72h        ;; код с
??Par210 =  73h+80h    ;; код Т
??Par242 =  73h+80h    ;; код т
??Par216 =   0F9H      ;Кoд сим.'Ш'
??Par248 =   0F9H      ;Кoд сим.'Ш'
??Par212 =   75H+80H   ;Кoд сим.'Ф'
??Par244 =   75H+80H   ;Кoд сим.'Ф'
??Par214 =   77H      ;Кoд сим.'Ц'
??Par246 =   77H      ;Кoд сим.'Ц'
??Par200 =  69h        ;; код И
??Par232 =  69h        ;; код и

;       Коды команд ТУ  (выдержка из таблицы)
;-----------------------------------------------------
CMD_NP		EQU		07H		;нечетный прием
CMD_RAB		EQU		0A1H	;Признак рабочей команды
CMD_PRW		EQU		0A2H	;Признак предварительной команды
CMD_OCHS	EQU		0A4H	;Включение ДГА(очистка) стрелок
CMD_IZSotv	EQU		0A5H	;ОТВ=искусственное замыкание
CMD_OOCHS	EQU		0A8H	;Выключения обогрева(очистка) стрелок
CMD_ZAP		EQU		0AEH	;Запрет
CMD_OZAP	EQU		0AEH	;Запрет
CMD_RAZ		EQU		0AFH	;Разрешение
CMD_ORAZ	EQU		0AFH	;Разрешение
CMD_OPRW	EQU		0B0H	;отмена нечетного приема
CMD_IP		EQU		0BBH	;ОТВ=искусственное прибытие
CMD_DP		EQU		0BCH	;дача прибытия
CMD_ONP		EQU		0BH		;Отмена нечетного приема
CMD_OPS		EQU		0C1H	;ОТВ=открытие лунно-белого светофора
CMD_IZS		EQU		0C2H	;искусственное замыкание секций
CMD_WSP		EQU		0C3H	;Восприятие
CMD_ONM		EQU		0C3H	;ОТВ=отмена немаршрутизированного маневра
CMD_OZMS	EQU		0C4H	;отмена замыкания маршрута
CMD_OWSP	EQU		0C5H	;отмена подтверждения восприятия фиксации неисправности
CMD_SSO		EQU		0DDH	;ОТВ=сброс датчиков
CMD_NO		EQU		0DH		;Нечетное отправление
CMD_PRZD	EQU		0E0H	;ОТВ=Закрытие переезда
CMD_OPRZD	EQU		0E0H	;ОТВ=Отмена закрытия переезда
CMD_SIG		EQU		0E1H	;ОТВ=управление сигнализацией (тоннельная, мостовая)
CMD_OTK		EQU		0E1H	;ОТВ=отключение датчика
CMD_KGN		EQU		0E2H	;Работа КГН
CMD_OKGN	EQU		0E2H	;Отмена работы КГН
CMD_TstOn	EQU		0E4H	;Освобождение пути
CMD_TstOff	EQU		0E6H	;Занятие пути
CMD_ONO		EQU		0EH		;Отмена нечетного отправления
CMD_DN		EQU		0FH		;Включить режим "ДЕНЬ"
CMD_NSK		EQU		13H		;Нечетный сквозной пропуск
CMD_ONSK	EQU		15H		;Отмена нечетного сквозного пропуска
CMD_NAD		EQU		16H		;Автодействие нечетное
CMD_ODN		EQU		17H		;Выключить режим "ДЕНЬ"
CMD_ONAD	EQU		19H		;Отмена нечетного автодействия
CMD_TO		EQU		1AH		;Четное отправление
CMD_PUT		EQU		1BH		;Путейцы
CMD_OTO		EQU		1CH		;Отмена четного отправления
CMD_OPUT	EQU		1DH		;Отмена путейцам
CMD_IZP		EQU		1EH		;Извещение на переезд
CMD_AD		EQU		21H		;Автодействие
CMD_OAD		EQU		22H		;Отмена Автодействие
CMD_TP		EQU		23H		;Четный прием
CMD_OTP		EQU		25H		;Отмена четного приема
CMD_TSK		EQU		26H		;Четный сквозной пропуск
CMD_OIZP	EQU		27H		;Отмена извещения на переезд
CMD_OTSK	EQU		29H		;Отмена четного сквозного пропуска
CMD_TAD		EQU		2AH		;Четное автодействие
CMD_OTAD	EQU		2CH		;Отмена четного автодействия
CMD_OTRV	EQU		2EH		;Отмена тревоги-1 ДИСК
CMD_MNV		EQU		31H		;Маневровый маршрут
CMD_OMNV	EQU		32H		;Отмена маневрового маршрута
CMD_MR		EQU		34H		;Маршрут передачи из парка в парк
CMD_OMR		EQU		38H		;Отмена маршрута передачи
CMD_PRS		EQU		43H		;индивидуальный Перевод стрелок
CMD_PRSMR	EQU		44H		;маршрутный Перевод стрелок
CMD_MUS		EQU		46H		;Местное управление
CMD_OMUS	EQU		49H		;Отмена местного управления
CMD_SU		EQU		4AH		;Сезонное управление
CMD_OSU		EQU		4CH		;Отмена сезонного управления
CMD_WA		EQU		51H		;Вызов аккустический
CMD_ONB		EQU		52H		;Отмена набора
CMD_ZUU		EQU		66H		;замыкание участка удаления
CMD_OZUU	EQU		67H		;размыкание участка удаления
CMD_GS		EQU		68H		;Громкоговорящая связь
CMD_OPRG	EQU		6AH		;размыкание перегона
CMD_AWT		EQU		6BH		;автоматическое регулирование светофорных ламп
CMD_OAWT	EQU		6CH		;ручное регулирование светофорных ламп
CMD_SG		EQU		70H		;Светофор открыть
CMD_RST		EQU		72H		;Радиосвязь
CMD_ORSt	EQU		73H		;Отмена радиосвязи
CMD_MM		EQU		74H		;включение маневрового режима управления станцией (для НЕВЫ)
CMD_OMM		EQU		75H		;выключение маневрового режима управления станцией (для НЕВЫ)
CMD_WSA		EQU		77H		;ОТВ=вспомогательный перевод стрелки
CMD_BS		EQU		7AH		;включение режима БС - задания маршрута без сигнала
CMD_OBS		EQU		7BH		;выключение режима БС (для НЕВЫ в Казахстане)
CMD_OSG		EQU		83H		;Светофор закрыть
CMD_WDSN	EQU		85H		;Включение ДСН
CMD_ODSN	EQU		86H		;Отмена включения ДСН
CMD_GRS		EQU		88H		;ОТВ=групповая кнопка для ЗУУ и Прг
CMD_OGS		EQU		89H		;Отмена громкоговорящей связи
CMD_WT		EQU		8AH		;Вызов к телефону
CMD_SMN		EQU		8CH		;ОТВ=Смена направления
CMD_IR		EQU		91H		;ОТВ=Искусственная разделка секций
CMD_ORAB	EQU		92H		;Отмена рабочая
CMD_IPS		EQU		93H		;ОТВ=Исключение перевода стрелок
CMD_OIPS	EQU		93H		;ОТВ=Отмена исключения перевода стрелок
CMD_UKS		EQU		96H		;ОТВ=отключение УКСПС
CMD_ODG		EQU		98H		;выключение дизель-генератора
CMD_RO		EQU		9AH		;Разрешение отправления
CMD_ORO		EQU		9CH		;Отмена разрешения отправления
CMD_SGL		EQU		9DH		;согласие на разворот перегона
CMD_OSGL	EQU		9EH		;Отмена согласие на разворот перегона
CMD_OsuOtw	EQU		0CAH	;ОТВ=сброс датчиков

;CMD_NP      EQU     07H     ;нечетный прием
;CMD_ONP     EQU     0BH     ;отмена нечетного приема
;CMD_NO      EQU     0DH     ;нечетное отправление
;CMD_ONO     EQU     0EH     ;отмена нечетного отправления
;CMD_NSK     EQU     13H     ;нечетный сквозной пропуск
;CMD_ONSK    EQU     15H     ;отмена нечетного сквозного пропуска
;CMD_ADN     EQU     16H     ;автодействие нечетное
;CMD_OADN    EQU     19H     ;отмена нечетного автодействия
;CMD_TO      EQU     1AH     ;четное отправление
;CMD_OTO     EQU     1CH     ;отмена четного отправления
;CMD_AD      EQU     21H     ;автодействие
;CMD_OAD     EQU     22H     ;отмена автодействия
;CMD_TP      EQU     23H     ;четный прием
;CMD_OTP     EQU     25H     ;отмена четного приема
;CMD_TSK     EQU     26H     ;четный скозной пропуск
;CMD_OTSK    EQU     29H     ;отмена четного сквозного пропуска
;CMD_ADT     EQU     2AH     ;четное автодействие
;CMD_OADT    EQU     2CH     ;отмена четного автодействия
;CMD_MNV     EQU     31H     ;маневровый маршрут
;CMD_OMNV    EQU     32H     ;отмена маневрового маршрута
;CMD_MR      EQU     34H     ;маршрут
;CMD_OMR     EQU     38H     ;отмена маршрута
;CMD_PRS     EQU     43H     ;перевод стрелок
;CMD_MUP     EQU     46H     ;местное управление
;CMD_OMUP    EQU     49H     ;отмена местного управления
;;CMD_SU      EQU     4AH     ;сезонное управление
;;CMD_OSU     EQU     4CH     ;отмена сезонного управления
;CMD_WA      EQU     51H     ;вызов аккустический
;;CMD_ONB     EQU     52H     ;отмена набора
;CMD_ROP     EQU     54H     ;отключить от линии генератор станции
;CMD_RVP     EQU     58H     ;подключить к линии генератор станции
;;CMD_GS      EQU     68H     ;громкоговорящая связь
;CMD_SG      EQU     70H     ;swetofor otkrytx
;;CMD_RS      EQU     72H     ;радиосвязь
;CMD_WSA     EQU     77H     ;вспомогательный перевод стрелок
;CMD_OSG     EQU     83H     ;swetofor zakrytx
;;CMD_WDSN    EQU     85H     ;включение ДСН
;;CMD_ODSN    EQU     86H     ;отмена включения ДСН
;;CMD_OGS     EQU     89H     ;отмена громкоговорящей связи
;CMD_WT      EQU     8AH     ;вызов к телефону
;CMD_SMN     EQU     8CH     ;смена направления
;
;CMD_IR      EQU     91H     ;искусственная разделка
;;CMD_oipsr   EQU     92H     ;отмена исключения перевода стрелок предварительная
;;CMD_ozp     EQU     92H     ;отмена закрытия (т.е. открытия переезда)
;;CMD_isp     EQU     93H     ;исключение перевода стрелок
;;CMD_WDG     EQU     94H     ;включение ДГА
;;CMD_ODG     EQU     98H     ;выключене ДГА
;CMD_URO      EQU     9AH     ;разрешение отправления
;CMD_UORO     EQU     9CH     ;отмена разрешения отправления
;CMD_RAB      EQU     0A1H    ;признак рабочей команды
;CMD_PRW     EQU     0A2H    ;прзнак предварительной команды
;CMD_VOS      EQU     0A4H    ;включение обогрева стрелок
;CMD_OVOS     EQU     0A8H    ;выключение обогрева стрелок
;;CMD_oipsp   EQU     0B0H    ;отмена исключения перевода стрелок рабочая
;CMD_RH       EQU     0B2H    ;включение очистки стрелок
;CMD_ORH      EQU     0B4H    ;выключение очистки стрелок
;;CMD_uper    EQU     0E0H    ;управление переездом

Type_tGorl  = 0000h
Type_nGorl  = 0008h
Gorochniy   = 'Г'     ;; код  Г
Fiktivniy	= 'Ф'

CONTINUE_ACTION		= 'C';переход на следующюю фазу action-а
RETURN_IF_NEXT		= 'N';переход на следующий action без проверки промежуточного условия
RETURN_IF_JUMP		= 'J';переход на указанный action без проверки промежуточного условия
RETURN_IF_NOEXE		= 'B';выход из команды с ошибкой выполнения
RETURN_IF_EXIT		= 'E';закончить воздействия без ошибок
RETURN_IF_EXE		= 'G';норм выход - переход на проверку промежуточного условия и выполнение след action-а


NULL = 00000000h
Flag_Cont_Par = 0;флаг переноса строки
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
;				IFIDN <'&Opt'>,<'Pg_Prib'>
;					TypePar = TypePar OR 0040h  ;перегон с которого обычно только прибывают(не неправльный путь перегона, при двусторонке)
;					UsePar = 1
;				ENDIF
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
;				IFIDN <'&Opt'>,<'NoAddMar'>
;						TypePar = TypePar OR 0020h  ;не выводить неисправности
;						UsePar = 1
;				ENDIF
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
;				IFIDN <'&Opt'>,<'NoAddMar'>
;						TypePar = TypePar OR 0020h  ;не выводить неисправности
;						UsePar = 1
;				ENDIF
				IFIDN <'&Opt'>,<'LastRCStn'>
						TypePar = TypePar OR 0040h  ;крайняя РЦ станции(для всех станций)
						UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'SPasKP'>
					TypePar = TypePar OR 0010h	;секция в виде пути(огражденный хотя бы с одной стороны выходным светофором)
					UsePar = 1
				ENDIF
			ENDIF

			IFIDN <?CLS&ClsObj>,<?CLSTM> ;;если объект является Таймером
				UsePar = 1
			ENDIF
			
			IF UsePar EQ 0
				.ERR   <НЕИСПОЛЬЗОВАННЫЙ ПАРАМЕТР ПРИ ОПРЕДЕЛЕНИИ ОБЪЕКТА, класс:код:параметр - &ClsObj:&KodObjRts:&Opt>
			ENDIF
		ENDM
	ENDIF
	
	DW ?CLS&ClsObj OR TypePar	;; класс объекта
	
	;;--------для таймера----------	
	IFIDN <?CLS&ClsObj>,<?CLSTM> ;;если объект является Таймером
		DD Options
		;LCTM&Options = Lab
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
TypePar	= 0000h
	DD LinkComunObj				;; указатель на следующий связанный объект
	DD 0						;;свободное место для загрузки адреса объекта в rts(для ускорения поиска)
	
	;;-------------------тип и класс------------------------------------
	IFNB <Options>
		FOR Opt,<Options>
			UsePar = 0 ;;флаг использованности параметра

			IFIDN <?CLS&ClsObj>,<?CLSTM> ;;если объект является Таймером
				IFIDN <'&Opt'>,<'TimeAV'>
					TypePar = TypePar OR 0001h	;выставляется таймер АВ
					UsePar = 1
				ENDIF
				IFIDN <'&Opt'>,<'TimeTrans'>
					TypePar = TypePar OR 0002h	;выставляется таймер перевода стрелки
					UsePar = 1
				ENDIF
								
				IFIDN <'&Opt'>,<'TimeOpenPr'>
					TypePar = TypePar OR 0001h	;выставляется таймер Открытия переезда
					UsePar = 1
				ENDIF
			ENDIF
			
			IF UsePar EQ 0
				.ERR   <НЕИСПОЛЬЗОВАННЫЙ ПАРАМЕТР ПРИ ОПРЕДЕЛЕНИИ ОБЪЕКТА, класс:код:параметр - &ClsObj:&KodObjRts:&Opt>
			ENDIF
		ENDM
	ENDIF
	
	DW ?CLS&ClsObj OR TypePar	;; класс объекта
	;;-------------------------------------------------------
	
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
BlokTU MACRO	NumBlk,Generators

	;;назначим имена генераторам
	NumGener = 0;
	FOR Generator,<Generators>
		NumGener = NumGener + 1
		IFIDN	<'&Generator'>,<'?'>
		ELSE
			Generator = (((NumBlk Shl 4)  And 0FFF0h) + NumGener) And 0FFFFh;1 байт - номер блока, 2-ой - номер генератора
		ENDIF
	ENDM
	
	IF NumGener NE 8
		.ERR   <Количество генераторов не равно 8>	
    ENDIF
ENDM
;----------------------------------------------------------------------------
;			Проверка параметра на принадлежность классу
;----------------------------------------------------------------------------
CheckClass MACRO Par
thisClass = 1
	IfnDef ?CLS&Par
		thisClass = 0
	ENDIF


;	FOR ??xxx,<BS,DP,DS,KP,KS,NU,PG,PGB,PR,SO,SP,ST,TM,UP>
;		IFIDN <??xxx>,<Par>
;			thisClass = 1
;		ENDIF
;	EndM
ENDM
;----------------------------------------------------------------------------
;			Соседние станции
;----------------------------------------------------------------------------
LcNStn	MACRO KodStn,EcpStnOwn

	IF	@SizeStr(KodStn) NE 6
		.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО СИМВОЛОВ В КОДЕ СТАНЦИИ>
	ENDIF
	IF	@SizeStr(EcpStnOwn) NE 6
		.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО СИМВОЛОВ В СЕТЕВОЙ РАЗМЕТКЕ>
	ENDIF

	DB KodStn,0						;; код станции
	EcpStn EcpStnOwn				;; сетевая разметка станции
ENDM
;----------------------------------------------------------------------------
;			IM - элементарные воздействия
;----------------------------------------------------------------------------
LcRKP MACRO	ChlNum,RkpCode
	DW 0&ChlNum&H			;; уникальный номер RtsChannel
	DB &RkpCode,0			;; код RtsRkp
	DD 0 					;; RtsRkp* (загружается)выбранный РКП
ENDM
;------
ImpObj  MACRO RKPLink,TypeImpact,CMD
	Local Lab
Lab:
	DD LinkImpact				;; указатель на следующий объект в списке
	
	DD RKPLink	;;указатель на описание РКП

	IfIdn	<'&TypeImpact'>,<'IM_TU'>
		DB 'T'
		Dw	CMD
	ELSE
		IfIdn	<'&TypeImpact'>,<'IM_PI'>		
			DB 'P'
			Dd	CMD
		ELSE		
			IfIdn	<'&TypeImpact'>,<'IM_CMDTXT'>
				DB 'C'
				LcFrmNm CMD
            ELSE
            		.ERR   <Неизвестный тип воздействия>	
            ENDIF
		ENDIF		
	ENDIF

LinkImpact		= Lab
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
;ChekPointerUsl MACRO Pointer
;		Local kolsym
;kolsym = 0
;ChkSumP = 0
;		FORC   ??c, <Pointer>
;			IFNB <'&??c'>
;				ChkSumP = ChkSumP + '&??c' + kolsym
;				kolsym = kolsym + 1
;			ENDIF
;		ENDM
;ENDM
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
;LcFrmNm1 MACRO	NmCmd,Txt,KodCmd1,KodCmd2
;		Local	LabKmd,LabWrk2
;
;LabKmd:
;		Db 10 dup(0)		;; место для титула команды
;LabWrk2:
;
;	Org LabKmd
;		IFNB <'CMD_&NmCmd'>;комнда ЧП,ЧО,НП,НО
;			KodPar <NmCmd>
;		ELSE
;		.ERR <Нет такой команды &NmCmd>
;		ENDIF
;		IFNB <'&Txt'>
;			KodPar <Txt>
;		ENDIF
;	Org LabWrk2
;
;	IFNB   <KodCmd1>
;		Db CMD_&KodCmd1
;	ELSE
;		Db 0
;	ENDIF 
;	
;	IFNB <KodCmd2>
;		Db CMD_&KodCmd2
;	ELSE
;		Db 0
;	ENDIF 
;	
;ENDM
;;----------------------------------------------------------
Off32Lc_O_U  MACRO   List,Kol

F_Cont_Par = 0 
	FOR     xxx,<List>
		
		IFIDN <'&xxx'>,<'Cont_Par'>
			F_Cont_Par = 1
		ELSE

			??TPar = ??TPar +01h
			
			IF (??TPar EQ 01h)
				if (?CLS&xxx EQ ?CLSPGB)
					DB 'B';объект из dcltrack.dat
				else
					if (?CLS&xxx EQ ?CLSTM)
						DB 'L';объект из dcl_lc.dat
					else
						DB 'R';объект из dcl.dat
					EndIf
				EndIf
				Dw ?CLS&xxx    	;; класс объекта	
			EndIf

			IF (??TPar EQ 02h)
				if(@SizeStr(xxx) EQ 8)
					KodName <%@SubStr(xxx, 2, 6)> ;; код объекта в rts
				else
					.ERR <неверное кол-во символов в коде объекта &xxx>
				endif
			EndIf

			IF (??TPar EQ 03h)
				DD 0	;; приготовили место для адреса объекта из rts 4 байта
				IfIdn <'&xxx'>,<'?'>
					Dw 0	
				ELSE
					Dw xxx   ;;атрибут объекта 2байта
				EndIf
			EndIf
				
			IF	(??TPar  EQ 3)
				??TPar =   0
				IF	(Kol  EQ 1);;считать кол-во объектов(3 параметра = 1 объект)
					??KolList = ??KolList +1
				ENDIF
			ENDIF
		ENDIF
	ENDM
	
	If (F_Cont_Par EQ 1)
	
	else
		??TEnd_Par = 1
		DB 'N';конечный объект
	EndIf
ENDM
;;**********************************************************
Off32_Funs  MACRO   List

F_Cont_Par = 0 

	FOR ??xxx,<List>
		??KolList = ??KolList +1
		IFIDN <'&??xxx'>,<'Cont_Par'>
			F_Cont_Par = 1
		ELSE
			Dd ??xxx
			;Dd 0;выравнивание объединения
		ENDIF
	EndM
	
	If (F_Cont_Par EQ 1)
		Flag_Cont_Par = 1;;выставим флаг
	else
		Flag_Cont_Par = 0;;сбросим флаг
		Dd 0;конечный объект
		;Dw 0    ;; класс объекта
		;DD 0	;;	код объекта
		;DD 0	;; приготовили место для адреса объекта из rts 4 байта
		;Dw 0	;;атрибут объекта 2байта
	EndIf
ENDM
;;**********************************************************
Off32_S_D  MACRO   List
	FOR ??xxx,<List>
		??KolList = ??KolList +1
		IFIDN <'&??xxx'>,<'Cont_Par'>
		ELSE
			Dd ??xxx
		ENDIF
	EndM
	
	IfIdn	<'&??xxx'>,<'Cont_Par'>
	
	else
		Dd 0;конечный объект
		;Dw 0    ;; класс объекта
		;DD 0	;;	код объекта
		;DD 0	;; приготовили место для адреса объекта из rts 4 байта
		;Dw 0	;;атрибут объекта 2байта
	EndIf
ENDM
;;**********************************************************
;;              ОБЪЕКТЫ КОМАНД
;;**********************************************************
OBJ_CMD		MACRO   ListWork
		Local	LWLabUsl, locChkSumP

??TPar = 0
??TEnd_Par = 0

		IFNB <ListWork>
			Off32Lc_O_U	<ListWork>,1  ;;с подсчетом кол-ва объектов
			IF ??TPar NE 0
				;;If ??TEnd_Par NE 1
					.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО ПАРАМЕТРОВ, в условии команды>
				;;ENDIF
			ENDIF
		ENDIF
ENDM
;;**********************************************************
COMP_CMD	MACRO   ListWork

	Off32_Funs <ListWork>

ENDM
;;**********************************************************
;;         обычные команды ЧП,ЧО,НП,НО,маневровые
;;**********************************************************
LCcmdTU	MACRO   TextCmd,Fun_Acess,Fun_ConfAcess,List_Actions,Fun_Exp,Lab_SimpleCmd,Lab_Objs
		Local	Lab
Lab:
	DD LinkCmd ;;Адрес следующей команды этой станции

KolCmd = KolCmd+1
errcod = 0
	LcFrmNm TextCmd
	IF errcod EQ 1
		.ERR <ОШИБКА В КОДЕ КОМАНДЫ>
	ENDIF
??KolList	=	0
??TPar = 0
	
	DD		0;; Дополнительная информация (указатель)
	DD		Fun_Acess		;;функция доступности команд
	DD		Fun_ConfAcess	;;функция подтверждаемой доступности команд
	DD		List_Actions	;;список воздействий
	DD		Fun_Exp			;;функция отслеживания выполненности
	DD		Lab_SimpleCmd	;;список составных команд
	DD		Lab_Objs		;;список составных команд

	
LinkCmd = Lab
ENDM
;;**********************************************************
;;провека символа
;;**********************************************************
ChkSym MACRO Cods
	if( not ((('&Cods' GE 'а') AND ('&Cods' LE 'я')) OR (('&Cods' GE '0') AND ('&Cods' LE '9')) OR ('&Cods' EQ '-')));; срочная русская буква или цифра или '-'
		errcod = 1
	else
		errcod = 0
	endif
ENDM
;;**********************************************************
RT_OBJ	MACRO   Params

	IFNB <Params>

		??TPar = 0
		??FPrintAlias = 0
		FOR     Par,<Params>
			??TPar = ??TPar + 01h
			IFIDN <'&Par'>,<'Cont_Par'>
			ELSE
				if (??TPar EQ 01h)
					CheckClass Par
				ENDIF
			
				if ((??TPar EQ 01h) and thisClass) or (??TPar EQ 02h) or (??TPar EQ 03h);;это класс
					IF (??TPar EQ 01h)
						if  (??FPrintAlias EQ 0);alias станции не был напечатан
							DD 0;указатель на alias станции
						EndIf
						
						if (?CLS&Par EQ ?CLSPGB)
							DB 'B';объект из dcltrack.dat
						else
							if (?CLS&Par EQ ?CLSTM)
								DB 'L';объект из dcl_lc.dat
							else
								DB 'R';объект из dcl.dat
							EndIf
						EndIf
						Dw ?CLS&Par    	;; класс объекта
					EndIf

					IF (??TPar EQ 02h)
						KodName <%@SubStr(Par, 2, 6)> ;; код объекта в rts
						DD 0	;; приготовили место для адреса объекта из rts 4 байта
					EndIf
					IF (??TPar EQ 03h)
						IfIdn <'&Par'>,<'?'>
							Dw 0	
						ELSE
							Dw Par   ;;атрибут объекта 2байта
						EndIf
					EndIf
				else;;дальше описывается объект другой станции
					DD Par;указатель на alias станции
					??TPar =   0
					??FPrintAlias = 1
				ENDIF
			
			ENDIF
			;сброс на третьем параметре
			IF (??TPar EQ 03h)
				??FPrintAlias = 0
				??TPar =   0
			EndIf
		ENDM

		If ??TPar NE 0
			.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО ПАРАМЕТРОВ, в условии команды>
		ENDIF
			
		IfIdn	<'&Par'>,<'Cont_Par'>
		
		else
			DD 0;указатель на alias станции
			DB 'N';конечный объект
		EndIf
		
	else;;пустой список
		DD 0;указатель на alias станции
		DB 'N';конечный объект
	ENDIF
ENDM
;;**********************************************************
COMP_RT	MACRO   ListWork

	Off32_Funs <ListWork>

ENDM
;;**********************************************************
;;         Маршруты
;;**********************************************************
LCRoute	MACRO   CodeRt,RtAcc, Rt_KS, Rt_RC, Rt_ST, Rt_ADD, Rt_SFT, OwnCmd,OtmOwnCmd, SimpleRts

		Local	Lab,LabBegCode,LabEndCode, Nsym
Lab:
	DD 		LinkRt ;;Адрес следующего маршрута

	DD		RtAcc			;; доступность
	DD		Rt_KS			;; предучасток и светофоры
	DD		Rt_RC			;; РЦ маршрута
	DD		Rt_ST			;; стрелки
	DD		Rt_ADD			;; прочие объекты(боксы приема-отправления, негаборитные учстки)
	DD		Rt_SFT			;; условия безопасности
	DD		OwnCmd			;; Ссылка на соответствующую команду на установку данного маршрута
	DD		OtmOwnCmd		;; Ссылка на соответствующую команду на отмену данного маршрута
	DD		SimpleRts		;; вложенные маршруты
	DD		0				;; Дополнительная информация

	IF	@SizeStr(CodeRt) GT 22
		.ERR <ПРЕВЫШЕНО ДОПУСТИМОЕ КОЛИЧЕСТВО СИМВОЛОВ В КОДЕ МАРШРУТА>
	ENDIF
	
	Nsym = 0
	forc ??x, <CodeRt>
	Nsym = Nsym + 1
		if ((Nsym GE 2) and (Nsym LE (@SizeStr(CodeRt) - 1)))
			ChkSym <??x>
			IF errcod EQ 1
				.ERR <ОШИБКА В КОДЕ МАРШРУТА: символ &??x>
			ENDIF
		ENDIF
	ENDM
	
LabBegCode:
	DB 20 dup(0)		;; место для титула маршрута
LabEndCode:
	Org LabBegCode
		DB		CodeRt		;; титул маршрута
	Org LabEndCode
	
LinkRt = Lab
ENDM
;;**********************************************************
;;         вызов функции
;;**********************************************************
Call_Fun	MACRO   NameFun,Params

IFNB <NameFun>
	DB 'F'	
	DD Fun1&NameFun	;указатель на функцию
ENDIF


	??TPar = 0
	??KPar = 0
	??FPrintAlias = 0
	FOR     Par,<Params>
		??TPar = ??TPar + 01h
		??KPar = ??KPar + 01h
		IFIDN <'&Par'>,<'Cont_Par'>
		ELSE
			if (??TPar EQ 01h)
				CheckClass Par
			ENDIF
			if ((??TPar EQ 01h) and thisClass) or (??TPar EQ 02h);;это класс
				IF (??TPar EQ 01h)
					if  (??FPrintAlias EQ 0)
						DD 0;указатель на alias станции
					EndIf
					
					if (?CLS&Par EQ ?CLSPGB)
						DB 'B';объект из dcltrack.dat
					else
						if (?CLS&Par EQ ?CLSTM)
							DB 'L';объект из dcl_lc.dat
						else
							if (?CLS&Par EQ ?CLSSTN)
								DB 'S';объект станция
							else
								DB 'R';объект из dcl.dat
							EndIf
						EndIf
					EndIf
					Dw ?CLS&Par    	;; класс объекта
				EndIf

				IF (??TPar EQ 02h)
					KodName <%@SubStr(Par, 2, 6)> ;; код объекта в rts
					DD 0	;; приготовили место для адреса объекта из rts 4 байта
				EndIf
			
			else;;дальше описывается объект другой станции
				DD Par;указатель на alias станции
				??TPar =   0
				??FPrintAlias = 1
			ENDIF
		
		ENDIF
		IF	(??TPar  EQ 2)
			??TPar =   0
			??FPrintAlias = 0
		ENDIF
	ENDM

	If ??TPar NE 0
		.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО ПАРАМЕТРОВ, в условии команды>
	ENDIF
		
	IfIdn	<'&Par'>,<'Cont_Par'>
	
	else
		DD 0;указатель на alias станции
		DB 'N';конечный объект
	EndIf

ENDM
;;**********************************************************
;;         вызов списка функций (по умолчанию AND) из списка
;;**********************************************************
Call_Funs	MACRO   Funs
	Call_Funs_And <Funs>
ENDM
;;**********************************************************
;;         вызов списка функций по AND из списка
;;**********************************************************
Call_Funs_And	MACRO   Funs
	IF (Flag_Cont_Par EQ 1);;это перенос строки или нет 
	Else
		DB 'A'	
	EndIF
	Off32_Funs <Funs>
ENDM
;;**********************************************************
;;         вызов списка функций по OR из списка
;;**********************************************************
Call_Funs_OR	MACRO   Funs
	IF (Flag_Cont_Par EQ 1);;это перенос строки или нет 
	Else
		DB 'O'	
	EndIF
	Off32_Funs <Funs>
ENDM
;;**********************************************************
;;         вызов списка функций по NOT из списка
;;**********************************************************
Call_Funs_NO	MACRO   Funs
	IF (Flag_Cont_Par EQ 1);;это перенос строки или нет 
	Else
		DB 'N'	
	EndIF
	Off32_Funs <Funs>
ENDM

;;**********************************************************
ConctructRetIF MACRO	ReturnFun
	Local	Lab, Lab1

	??KPar = 0
	FOR     Par,<ReturnFun>
		??KPar = ??KPar + 1
		IF (??KPar EQ 01h)
		
			If (('&Par' EQ 'CONTINUE_ACTION')or('&Par' EQ 'RETURN_IF_NEXT')or('&Par' EQ 'RETURN_IF_JUMP')or('&Par' EQ 'RETURN_IF_NOEXE')or('&Par' EQ 'RETURN_IF_EXE')or('&Par' EQ 'RETURN_IF_EXIT'))
				Db		Par ;;'G'норм выход, 'B'выход с ошибкой или 'C' переход на следующюю фазу action-а
				Lab:
				DD		0
				Lab1:
			Else
				Db		0
				DD		Par	;;или вызвать еще функцию
			ENDIF
			
		ELSE
			IF (??KPar EQ 02h)
			;;есть второй параметр скорее свего до этого был RETURN_IF_JUMP
			org Lab
				DD		Par
			org Lab1
			ELSE
				.ERR <Непредусмотернный параметр>
			ENDIF
		ENDIF
	ENDM
	
;	If (('&ReturnFun1' EQ 'CONTINUE_ACTION')or('&ReturnFun1' EQ 'RETURN_IF_NEXT')or('&ReturnFun1' EQ 'RETURN_IF_JUMP')or('&ReturnFun1' EQ 'RETURN_IF_NOEXE')or('&ReturnFun1' EQ 'RETURN_IF_EXE'))
;		Db		ReturnFun1 ;;'G'норм выход, 'B'выход с ошибкой или 'C' переход на следующюю фазу action-а
;		If('&ReturnFun1' EQ 'RETURN_IF_JUMP')
;			ifNB ReturnFun2
;				DD ReturnFun2;;указатель на другой action
;			Else
;				DD		0
;			ENDIF		
;		Else
;			DD		0
;		ENDIF
;	Else
;		Db		0
;		DD		ReturnFun1	;;или вызвать еще функцию
;	ENDIF

ENDM

Call_IF	MACRO	FunIF,FunTRUE,FunFALSE


	DB 'Y'			;ветвление по IF
	DD		FunIF	;;функция проверки условия
	
	ConctructRetIF <FunTRUE>
	ConctructRetIF <FunFALSE>
ENDM
;;**********************************************************
Call_Act	MACRO	Acts

	Off32_Funs <Acts>

ENDM
;;**********************************************************
IMPACTS_TU	MACRO List_Impacts
	IF (Flag_Cont_Par EQ 1);;это перенос строки или нет 
	Else
		DB 'I' 				;;функция Воздействия
		DB 'T'				;;напрямую на блок ТУ
	EndIF
	Off32_Funs <List_Impacts>	
ENDM
;;**********************************************************
IMPACT_PI	MACRO List_Impacts
	IF (Flag_Cont_Par EQ 1);;это перенос строки или нет 
	Else
		DB 'I' 				;;функция Воздействия
		DB 'P'				;;в блок ПИ,
	EndIF
	Off32_Funs <List_Impacts>	
		
ENDM
;;**********************************************************
IMPACT_CMDTXT	MACRO ImpactTxtCmd
	IF (Flag_Cont_Par EQ 1);;это перенос строки или нет 
	Else
		DB 'I' 				;;функция Воздействия
		DB 'C'				;;Текстовая команда
	EndIF
	
	Off32_Funs <ImpactTxtCmd>
ENDM
;;**********************************************************
StartAction	MACRO PrefCond, ActionIMPACT, PostCond

	DD		PrefCond		;;функция доступности команд
	DD		ActionIMPACT	;;функция доступности команд
	DD		PostCond		;;функция доступности команд
ENDM

;;**********************************************************
EndAction	MACRO

ENDM
;;**********************************************************
BegLcFun	MACRO
Cseg	ENDS
FuntionsSeg	Segment PUBLIC  Byte 'FuntionsSeg'
		ASSUME  CS:FuntionsSeg
ENDM
;;---------------------------------------
EndLcFun	MACRO
FuntionsSeg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
BegCmdTU	MACRO
Cseg	ENDS
CmdTUCseg	Segment PUBLIC  Byte 'CmdTUCseg'
		ASSUME  CS:CmdTUCseg
ENDM
;;---------------------------------------
EndCmdTU	MACRO
CmdTUCseg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
BegCmdTUMr	MACRO
Cseg	ENDS
CmdTUMrCseg	Segment PUBLIC  Byte 'CmdTUMrCseg'
		ASSUME  CS:CmdTUMrCseg
ENDM
;;---------------------------------------
EndCmdTUMr	MACRO
CmdTUMrCseg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
BegRoute	MACRO
Cseg	ENDS
RtCseg	Segment PUBLIC  Byte 'RtCseg'
		ASSUME  CS:RtCseg
ENDM
;;---------------------------------------
EndRoute	MACRO
RtCseg	ENDS
Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg
ENDM
;;**********************************************************
BegMRoute	MACRO
Cseg	ENDS
RtmCseg	Segment PUBLIC  Byte 'RtmCseg'
		ASSUME  CS:RtmCseg
ENDM
;;---------------------------------------
EndMRoute	MACRO
RtmCseg	ENDS
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
BegStnLc	MACRO KodStn,EcpStnOwn,NameStn,CondDU,CondRU,CondSU,CondTRANS,CondKF1,CondKF2,CondKF12,CondKFnorm

OPTION MZ :20h ;;адрес начала таблицы смещения
STACK	Segment para STACK 'STACK'
STACK	ends

Cseg	Segment PUBLIC  Byte 'CODE'
	ASSUME  CS:Cseg
Cseg	ENDS

CmdTUCseg	Segment PUBLIC  Byte 'CmdTUCseg'
	ASSUME  CS:CmdTUCseg
CmdTUCseg	ENDS

CmdTUMrCseg	Segment PUBLIC  Byte 'CmdTUMrCseg'
	ASSUME  CS:CmdTUMrCseg
CmdTUMrCseg	ENDS

RtCseg	Segment PUBLIC  Byte 'RtCseg';;поездные маршруты
	ASSUME  CS:RtCseg
RtCseg	ENDS
RtmCseg	Segment PUBLIC  Byte 'RtmCseg';;маневровые маршруты
	ASSUME  CS:RtmCseg
RtmCseg	ENDS

FuntionsSeg	Segment PUBLIC  Byte 'FuntionsSeg'
	ASSUME  CS:FuntionsSeg
FuntionsSeg	ENDS

Cseg	Segment PUBLIC  Byte 'CODE'
	ASSUME  CS:Cseg

start:

KolObjStn	=  0
KolCmd		=  0
KolComunObj	=  0

	IF	@SizeStr(KodStn) NE 6
		.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО СИМВОЛОВ В КОДЕ СТАНЦИИ>
	ENDIF
	IF	@SizeStr(EcpStnOwn) NE 6
		.ERR <НЕВЕРНОЕ КОЛИЧЕСТВО СИМВОЛОВ В СЕТЕВОЙ РАЗМЕТКЕ>
	ENDIF

	DB KodStn,0						;; код станции
	EcpStn EcpStnOwn				;; сетевая разметка станции
	DW KolObjStn_MainStuct			;; число объектов станции	
	DD LinkObj_MainStuct			;; адрес размещения объектов	
	DW KolCmd_MainStuct				;; число команд общего назначения
	DD LinkCmd_MainStuct			;; адрес размещения описания команд
	DD LinkRt_MainStuct				;; адрес размещения описания маршрутов
	DD LinkChangGr_MainStuct		;; адрес размещения описания изменений в матрицу ТС	
	DD LinkImpact_MainStuct			;; адрес размещения первого воздействия
	
	DD CondDU						;; функция проверки режима ДУ станции
	DD CondRU						;; функция проверки режима РУ станции
	DD CondSU						;; функция проверки режима СУ станции
	DD CondTRANS					;; функция проверки переходного режима станции
	
	DD CondKF1						;; функция проверки аварии 1-го фидера
	DD CondKF2						;; функция проверки аварии 2-го фидера
	DD CondKF12						;; функция проверки аварии 2-х фидеров
	DD CondKFnorm					;; функция проверки отсутствия
	
	DB MaxLenDNCStack				;; максим кол-во команд в очереди слож команд(ДНЦ)
	DB MaxLenSimpStack				;; максим кол-во команд переданных в канал
	DD 0							;; Дополнительная информация к станции 						
	DB "&NameStn",0					;; название станции
	DB   8 dup(0)					;; резерв

LinkComunObj =  0
LinkObj 	 =  0
LinkImpact	 =  0
LinkCmd 	 =  0
LinkRt		 =	0
LinkChangGr	 =  0
        ENDM
;;**********************************************************
EndStnLc   MACRO
	DB 4 dup(0FFh)
	Cseg	ENDS
	KolObjStn_MainStuct  	= KolObjStn
	KolCmd_MainStuct 		= KolCmd
	LinkObj_MainStuct 		= LinkObj
	LinkImpact_MainStuct 	= LinkImpact
	LinkCmd_MainStuct 		= LinkCmd
	LinkRt_MainStuct		= LinkRt
	LinkChangGr_MainStuct 	= LinkChangGr

	end start
ENDM
