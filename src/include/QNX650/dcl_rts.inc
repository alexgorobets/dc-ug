ModePas		EQU 0
ModeAct		EQU 1

ModeTS		EQU 0
ModeTU		EQU 1

CHDC_66		EQU 0
CHDC_CNII	EQU 1

Usil_x1		EQU 3
Usil_x2		EQU 2
Usil_x5		EQU 1

;----------------------------------------------------------------------------
BegRtsServer	MACRO SrvCode,SrvNum,SrvType,SrvAlias,SrvName
Local Lab

Cseg	ENDS
RtsServerCseg	Segment
			ASSUME  CS:RtsServerCseg

LevelSrv	= LevelSrv + 1

Lab:
SrvOwn_&SrvCode:
;SrvOwn_&LevelSrv:
        DD LinkSrv				;; указатель на следующий RtsServer в списке

		DD firstSrv
		DD nextSrv
		DD ownSrv

		DD firstChl&SrvCode

        DW 0&SrvNum&H			;; уникальный номер RtsServer
        DB 0&SrvType&H			;; тип RtsServer
		DB '&SrvCode',0			;; код RtsServer
								;; псевдоним RtsServer
		DB  @CatStr(!',@SubStr(&SrvAlias, 2, @SizeStr(&SrvAlias) -2),!'),0
								;; название RtsServer
		DB @CatStr(!',@SubStr(&SrvName, 2, @SizeStr(&SrvName) -2),!'),0

LinkSrv = Lab
nextSrv	= Lab
ownSrv	= SrvOwn_&SrvCode
;ownSrv	= SrvOwn_&LevelSrv

nextChl	= 0

        ENDM
;----------------------------------------------------------------------------
EndRtsServer	MACRO SrvCode

LevelSrv	= LevelSrv - 1
;ownSrv	= SrvOwn_&LevelSrv

firstChl&SrvCode	= nextChl

RtsServerCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ENDM
;----------------------------------------------------------------------------
BegRtsChannel	MACRO ChlCode,ChlNum,ChlType,MdmSpeed,ChlAlias,ChlName
		Local Lab

Lab:
ChlOwn_&ChlCode:
		DD LinkChl				;; указатель на следующий RtsChannel в списке

		DD nextChl				;; указатель на следующий RtsChannel, принадлежащий OwnSrv
		DD OwnSrv				;; RtsServer, которому принадлежит RtsChannel

		DD firstRkp&ChlCode		;; указатель на первый RtsRkp, принадлежащий этому RtsChannel
		
        DW 0&ChlNum&H			;; уникальный номер RtsChannel
        DB &ChlType			;; тип RtsChannel
		DD MdmSpeed				;; скорость модема
		DB '&ChlCode',0			;; код RtsChannel
								;; псевдоним RtsChannel
		DB @CatStr(!',@SubStr(&ChlAlias, 2, @SizeStr(&ChlAlias) -2),!'),0
								;; название RtsChannel
		DB @CatStr(!',@SubStr(&ChlName, 2, @SizeStr(&ChlName) -2),!'),0

		IF &ChlType EQ 'N'	;; если канал Невы,
			NevaParam			;; то резервируем память для работы драйвера Drv.adsp
		ENDIF
		IF &ChlType EQ 'C'	;; если канал ЧДЦ,
			ChdcParam &ChlCode;; то резервируем память для работы драйвера Drv.adsp
		ENDIF

LinkChl	= Lab
nextChl	= Lab
ownChl = ChlOwn_&ChlCode
nextRkp			= 0
LinkChlGrpChDC	= 0
		ENDM
;----------------------------------------------------------------------------
EndRtsChannel	MACRO ChlCode

firstRkp&ChlCode	= nextRkp

		IFDEF firstGrpChDC&ChlCode
			firstGrpChDC&ChlCode = LinkChlGrpChDC
			cntGrpChDC&ChlCode = __cntGrpChDC
		ENDIF

		ENDM
;----------------------------------------------------------------------------
RtsChlRkp	MACRO ChlNid,ChlDev,ChlName,ChlLev


		DW 0&ChlNid&H		;; номер узла основного/резервного канала
		DB &ChlDev,0		;; имя устройства для основного/резервного канала
							;; название основного/резервного канала
		DB @CatStr(!',@SubStr(&ChlName, 2, @SizeStr(&ChlName) -2),!'),0
		DW ChlLev			;; уровень выходного сигнала модема основного/резервного канала

		ENDM
;----------------------------------------------------------------------------
RtsChlNeva	MACRO ChlNid,ChlDev,ChlName,ModeActPas,ModeTSTU

		DW 0&ChlNid&H		;; номер узла основного/резервного канала
		DB &ChlDev,0		;; имя устройства для основного/резервного канала
							;; название основного/резервного канала
		DB @CatStr(!',@SubStr(&ChlName, 2, @SizeStr(&ChlName) -2),!'),0
		DW ModeActPas
		DW ModeTSTU

		ENDM
;----------------------------------------------------------------------------
RtsChlChdc	MACRO Nid,Dev,ChName,MdActPas,MdTSTU,MdChdc,UsilTS,UsilTSP,LnReadyTS,LnKvitImp,LvPok,LvQryTS,LvKvit,LvImpTS,LvFrq

		DW 0&Nid&H		;; номер узла основного/резервного канала
		DB &Dev,0		;; имя устройства для основного/резервного канала
						;; название основного/резервного канала
		DB  @CatStr(!',@SubStr(&ChName, 2, @SizeStr(&ChName) -2),!'),0
		DW MdActPas
		DW MdTSTU
		DW MdChdc
		DW UsilTS
		DW UsilTSP
		DW LnReadyTS
		DW LnKvitImp
		DW LvPok
		DW LvQryTS
		DW LvKvit
		DW LvImpTS
		DW LvFrq

		ENDM
;----------------------------------------------------------------------------
ChdcParam	MACRO ChlCode

		DD	firstGrpChDC&ChlCode
		DW  cntGrpChDC&ChlCode	;; количество групп ТС в канале ЧДЦ
		DW 1					;; NumOutChl
		DW 0					;; CountTS
		DW 0					;; NoCountTS
		DW 0					;; CurOutStat - признак вывода статистики (суммарно/проценты)
		DW 0					;; TraceGroup
		DW 0					;; CurStrTraceGroup
		DW 1					;; OutLev     - единицы измерения уровня (мВ,Нп,Дб)
		DW 0					;; OutUsil    - коэффициент усиления АЦП на L-1250 (5,2,1)
		DW 0					;; CurBuf
		DW 1					;; EnableWait
		DW 0					;; ModeADSP
		DW 0					;; FlgLoadOK
firstGrpChDC&ChlCode = 0
;cntGrpChDC&ChlCode = 0
__cntGrpChDC = 0

		ENDM
;----------------------------------------------------------------------------
ChdcGroup	MACRO GrpNum
		Local Lab
Lab:
		DD LinkChlGrpChDC		;; указатель на предыдущую группу в списке групп ТС для RtsChannel
		DD LinkRkpGrpChDC		;; указатель на предыдущую группу в списке групп ТС для RtsChdc
		DD LinkRkp				;; указатель на RtsChdc, которому принадлежит группа

__ChdcGrpNum = 0
		FORC ??c,<GrpNum>
			IF ('&??c' GE '1') AND ('&??c' LE '9')
				Bit = '&??c' - 30h
				__ChdcGrpNum = __ChdcGrpNum OR (1 Shl ( 9 - Bit))
			ENDIF
		ENDM

		DW __ChdcGrpNum			;; номер группы ЧДЦ
		DB __RtsNumStb			;; соответствующий номер блока (столбца) в матрице ТС
		DD 0					;; allSost
		DW 0					;; длительность 0 импульса
		DW 0					;; длительность 1-19 импульсов
		DW 0					;; длительность 20 импульса
		DW 0					;; уровень частоты 1650 Гц
		DW 0					;; уровень частоты 1950 Гц
		DW 0					;; уровень частоты 2250 Гц
		DW 0					;; уровень частоты 2550 Гц

		DD 0					;; время последнего приема группы
		DW 0					;; Correct
		DW 0					;; Bad20
		DW 0					;; BadImp
		DW 0					;; BadGrp
		DW 21 DUP(00)			;; CntBadImp[BIT_IN_GRP]
		DW 0					;; rx_first
		DW 0					;; rx_error

LinkChlGrpChDC	= Lab
LinkRkpGrpChDC	= Lab
		ENDM
;----------------------------------------------------------------------------
NevaParam	MACRO
		NevaChannel <1,2,3,4>	;; [MAX_NUM_CHL_NEVA]
		DW 1					;; NumOutChl
		DW 0					;; CountTS
		DW 0					;; NoCountTS
		DW 0					;; CurOutStat - признак вывода статистики (суммарно/проценты)
		DW 0					;; TraceGroup
		DW 0					;; CurStrTraceGroup
		DW 1					;; OutLev     - единицы измерения уровня (мВ,Нп,Дб)
		DW 0					;; OutUsil    - коэффициент усиления АЦП на L-1250 (5,2,1)
		DW 0					;; CurBuf
		DW 1					;; EnableWait
		DW 0					;; ModeADSP
		DW 0					;; FlgLoadOK

		ENDM
;----------------------------------------------------------------------------
NevaChannel	MACRO LstChl

		FOR NumChl,<LstChl>
			DB '&NumChl'																;; ChlNum;
			NevaGroup <1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23>		;; SostGrp[GRP_IN_CHL];
			NevaGroup <1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23>		;; NewSostGrp0[GRP_IN_CHL];
			NevaGroup <1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23>		;; NewSostGrp1[GRP_IN_CHL];
			NevaStat  <1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23>		;; StatGrp[GRP_IN_CHL];
			DW 0																		;; CurGrpStat
		ENDM

		ENDM
;----------------------------------------------------------------------------
NevaGroup	MACRO LstGrp

		FOR NumGrp,<LstGrp>
			DD 0					;; allSost
			DW 0					;; BegTime
			DW 0					;; Density
		ENDM

		ENDM
;----------------------------------------------------------------------------
NevaStat	MACRO LstGrp

		FOR NumGrp,<LstGrp>
			DW 0					;; Correct
			DW 0					;; Bad22
			DW 0					;; BadImp
			DW 0					;; BadGrp
			DW 22 DUP(00)			;; CntBadImp[BIT_IN_GRP]
			DW 0					;; rx_first
			DW 0					;; rx_error
		ENDM

		ENDM
;----------------------------------------------------------------------------
RtsRkp	MACRO RkpNum,RkpCode
		Local Lab
Lab:
@CatStr(RkpOwn_,@SubStr(RkpCode, 2, @SizeStr(RkpCode) -2)):
		DD LinkRkp				;; указатель на следующий RtsRkp в списке

		DD nextRkp				;; указатель на следующий RtsRkp, принадлежащий OwnChl
		DD OwnChl				;; RtsChannel, которому принадлежит RtsRkp
@CatStr(nextStnRkp,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2)):
								;; следующие два поля заполнятся в RtsStation
		DD 0					;; указатель на следующий RtsRkp, принадлежащий OwnStn
		DD 0					;; RtsStation, которой принадлежит RtsRkp

        DB RkpNum				;; порядковый номер РКП в канале связи
		DB &RkpCode,0			;; код RtsRkp
		DW 0					;; CntGrTS    - число групп сигналов ТС для данного РКП
		DD 0					;; *DclTS     - адрес размещения таблицы ТС для данного РКП
		DW 0					;; CntCmdTU   - число команд ТУ общего назначения
		DD 0					;; *DclCmdTU  - адрес размещения описания команд общего назначения
		DW 0					;; CntCmdOTU  - число команд ОТУ
		DD 0					;; *DclCmdOTU - адрес размещения описания команд ОТУ
		DW 0					;; CntBlkTS   число блоков ТС
		DD 0					;; *DclBlkTS  адрес размещения описания блоков ТС
		DD 0					;; *DclMatrOTU адрес размещения описания матрицы ОТУ
		DW 0					;; CntCmdRkpTU число команд общего назначения, хранящихся на ЦП
		DD 0					;; *DclCmdRkpTU адрес размещения списка команд общего назначения, хранящихся на ЦП
		DD 0					;; время приема последнего сообщения от 0 комлекта РКП
		DD 0					;; время приема последнего сообщения от 1 комлекта РКП
		DB 16 DUP(0FFh)			;; буфер для последнего сообщения от 0 комплекта РКП
		DB 16 DUP(0FFh)			;; буфер для последнего сообщения от 1 комплекта РКП
		DD 0					;; время передачи последней команды 0 комлекту РКП
		DD 0					;; время передачи последней команды 1 комлекту РКП
		DB 16 DUP(0FFh)			;; буфер для последней команды 0 комплекту РКП
		DB 16 DUP(0FFh)			;; буфер для последней команды 1 комплекту РКП
		DB  2 DUP(0)			;; LineConfig[2] - состояние реле конфигурации линии связи K1K2 0 и 1 комплектов РКП
		DB  2 DUP(0)			;; LevelRx[2]    - уровень сигнала в dB на приеме у модемов 0 и 1 комплектов РКП
		DB  2 DUP(0)			;; LevelTx[2]    - уровень сигнала в dB на передачу у модемов 0 и 1 комплектов РКП
		DW  0					;; CntMsgRxOK    - количество правильно принятых сообщений модемом 0 комплекта РКП
		DW  0					;; CntMsgRxOK    - количество правильно принятых сообщений модемом 1 комплекта РКП
		DW  0					;; CntMsgRxERR   - количество ошибочных принятых сообщений модемом 0 комплекта РКП
		DW  0					;; CntMsgRxERR   - количество ошибочных принятых сообщений модемом 1 комплекта РКП
		DB 16 DUP(0)			;; резерв
LinkRkp	= Lab
nextRkp	= Lab
		ENDM
;----------------------------------------------------------------------------
RtsChDC	MACRO RkpNum,RkpCode,ListGrpChdc
		RtsRkp RkpNum,&RkpCode;; начальная структура как и для РКП

LinkRkpGrpChDC	= 0
__RtsNumStb		= 0
									;; указатель на начальную группу ТС, принадлежащую RtsChDC
		DD	@CatStr(firstGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2))
									;; указатель на текущую группу ТС для вывода при отсутствии изменений
		DD  @CatStr(curGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2))
									;; количество групп ТС, принадлежащих RtsChDC
		DW  @CatStr(cntGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2))
		DB 0						;; CountTime

		FOR grpChdc,<ListGrpChdc>
__RtsNumStb = __RtsNumStb + 1
__cntGrpChDC = __cntGrpChDC + 1
			IF '&grpChdc'NE '?'
			ChdcGroup &grpChdc
			ENDIF
		ENDM

@CatStr(firstGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2)) = LinkRkpGrpChDC
@CatStr(curGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2)) = LinkRkpGrpChDC
@CatStr(cntGrpChDC,@SubStr(&RkpCode, 2, @SizeStr(&RkpCode) -2)) = __RtsNumStb
		ENDM
;----------------------------------------------------------------------------
RtsNeva	MACRO RkpNum,RkpCode,BegGrp,EndGrp
		RtsRkp RkpNum, &RkpCode	;; начальная структура как и для РКП
		DB BegGrp				;; начальный номер канала / номер группы "Невы"
		DB EndGrp				;; конечный  номер канала / номер группы "Невы"
		DB EndGrp				;; номер текущей группы для вывода при отсутствии изменений
		DB 0					;; CountTime
		ENDM
;----------------------------------------------------------------------------
RtsDncRegion	MACRO RegCode,RegNum,RegType,RegAlias,RegName
		Local Lab
Lab:
RegOwn_&RegCode:
;RegOwn_&LevelReg:
        DD LinkReg				;; указатель на следующий RtsDncRegion в списке
firstReg&RegCode:
		DD 0					;; указатель на первый вложенный RtsDncRegion
		DD nextReg				;; указатель на следующий вложенный RtsDncRegion
		DD ownReg				;; указатель на RtsDncRegion, в который вложен этот RtsDncRegion
firstStnReg&RegCode:
		DD 0					;; указатель на первую станцию, принадлежащую этому RtsDncRegion
        DW 0&RegNum&H			;; уникальный номер RtsDncRegion
        DB 0&RegType&H			;; тип RtsDncRegion
		DB '&RegCode',0			;; код RtsDncRegion
								;; псевдоним RtsDncRegion
		DB @CatStr(!',@SubStr(&RegAlias, 2, @SizeStr(&RegAlias) -2),!'),0
								;; название RtsDncRegion
		DB @CatStr(!',@SubStr(&RegName, 2, @SizeStr(&RegName) -2),!'),0

nextStnReg&RegCode	= 0
LinkReg = Lab
nextReg	= Lab
        ENDM
;----------------------------------------------------------------------------
BegRtsDncRegion	MACRO RegCode,RegNum,RegType,RegAlias,RegName

Cseg	ENDS
RtsDncRegionCseg	Segment
		ASSUME  CS:RtsDncRegionCseg

LevelReg	= LevelReg + 1
nextReg		= 0
ownReg		= 0					;; пока допускаем только одно вложение для RtsDncRegion
		RtsDncRegion RegCode,RegNum,RegType,RegAlias,RegName
nextReg		= 0
ownReg		= RegOwn_&RegCode
;ownReg		= RegOwn_&LevelReg
        ENDM
;----------------------------------------------------------------------------
EndRtsDncRegion	MACRO RegCode
		Local Lab
Lab:
		ORG firstReg&RegCode
		DD  nextReg
		ORG Lab
LevelReg	= LevelReg - 1
nextReg		= 0
ownReg		= 0					;; пока допускаем только одно вложение для RtsDncRegion
;ownReg		= RegOwn_&LevelReg

RtsDncRegionCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ENDM
;----------------------------------------------------------------------------
EcpStn	MACRO StnEcp
		DB (0&StnEcp&H Shr 16) And 0FFh
		DB (0&StnEcp&H Shr 8) And 0FFh
		DB  0&StnEcp&H And 0FFh
		ENDM
;----------------------------------------------------------------------------
RtsDncRegionStation	MACRO StnCode, ListReg
LinkRegStn	= 0
		FOR _RegCode,<ListReg>
			IFNB <_RegCode>
				RtsRegStn &StnCode, _RegCode
			ENDIF
		ENDM
		ENDM
;----------------------------------------------------------------------------
RtsRegStn	MACRO StnCode, RegCode
		Local Lab, Lab1
Lab:

		DD nextStnReg&RegCode
		DD RegOwn_&RegCode
		DD LinkRegStn
		DD @CatStr(StnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
Lab1:
nextStnReg&RegCode	= Lab
LinkRegStn			= Lab

Cseg	ENDS
RtsDncRegionCseg	Segment
		ASSUME  CS:RtsDncRegionCseg

		ORG firstStnReg&RegCode
		DD nextStnReg&RegCode
		ORG Lab1

RtsDncRegionCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ENDM
;----------------------------------------------------------------------------
RtsStation	MACRO StnCode,StnType,StnEcp,StnOrd,StnDir,StnAlias,StnName,ListReg,ListRkp
		Local Lab, Lab1
Lab:
@CatStr(StnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2)):
		DD LinkStn				;; указатель на следующую RtsStation в списке
@CatStr(firstStn,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2)):
		DD 0					;; указатель на первую вложенную RtsStation
		DD nextStn              ;; указатель на следующую вложенную RtsStation
		DD ownStn               ;; указатель на RtsStation, в которую вложена эта станция
Lab1:
??nextRkp	= 0

Cseg	ENDS
RtsServerCseg	Segment
		ASSUME  CS:RtsServerCseg

		FOR _RkpCode,<ListRkp>
			IFNB <_RkpCode>
				ORG @CatStr(nextStnRkp,@SubStr(&_RkpCode, 2, @SizeStr(&_RkpCode) -2))
				DD ??nextRkp
				DD @CatStr(StnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
				??nextRkp	= @CatStr(RkpOwn_,@SubStr(&_RkpCode, 2, @SizeStr(&_RkpCode) -2))
			ENDIF
        ENDM

RtsServerCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ORG Lab1
		DD ??nextRkp			;; указатель на первый RtsRkp, принадлежащий станции
		DD @CatStr(firstRegStn,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
								;; указатель на первый RtsDncRegion, в который входит станция

        DB StnType				;; тип RtsStation
		DB &StnCode,0			;; код RtsStation
		EcpStn StnEcp			;; сетевая разметка станции
		DD StnOrd				;; ордината оси станции
		DB StnDir				;; количество направлений от станции
		DB @CatStr(!',@SubStr(&StnAlias, 2, @SizeStr(&StnAlias) -2),!'),0		;; псевдоним RtsStation
		DB @CatStr(!',@SubStr(&StnName, 2, @SizeStr(&StnName) -2),!'),0			;; название RtsStation
		DD 0					;; *PromStn	  адрес расположения описания станции
		DW 0					;; CntObj	  число объектов станции
		DW 0					;; CntGrTS	  число групп сигналов ТС
		DD 0					;; *DclTS	  адрес размещения таблиц ТС станции
		DW 0					;; CntBlkTU	  число блоков ТУ
		DD 0					;; *DclBlkTU  адрес размещения описания блоков ТУ
		DW 0					;; CntBlkOTU  число блоков ОТУ
		DD 0					;; *DclBlkOTU адрес размещения описания блоков ОТУ
		DW 0					;; CntBlkTI	  число блоков ТИ
		DD 0					;; *DclBlkTI  адрес размещения описания блоков ТИ
		DW 0					;; CntDisk	  число ДИСКов
		DD 0					;; *DclDisk	  адрес размещения описания ДИСКов
		DW 0					;; CntCmdTU	  число команд общего назначения
		DD 0					;; *DclCmdTU  адрес размещения списка команд общего назначения
		DW 0					;; CntCmdOTU  число ответственных команд
		DD 0					;; *DclCmdOTU адрес размещения списка ответственных команд
		DW 0					;; CntBlkTS   число блоков ТС
		DD 0					;; *DclBlkTS  адрес размещения описания блоков ТС
		DD 0					;; *DclMatrOTU адрес размещения описания матрицы ОТУ
		DW 0					;; CntCmdRkpTU число команд общего назначения, хранящихся на ЦП
		DD 0					;; *DclCmdRkpTU адрес размещения списка команд общего назначения, хранящихся на ЦП
		DB 16 DUP(0)			;; резерв


		RtsDncRegionStation &StnCode, <ListReg>
@CatStr(firstRegStn,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))	= LinkRegStn

LinkStn	= @CatStr(stnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))	;; = Lab - тогда нужно ставить эти две строки
nextStn	= @CatStr(stnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))	;; = Lab   выше двух предыдущих

		ENDM
;----------------------------------------------------------------------------
BegRtsStation	MACRO StnCode,StnType,StnEcp,StnOrd,StnDir,StnAlias,StnName,ListReg,ListRkp

LevelStn	= LevelStn + 1
nextStn		= 0
ownStn		= 0					;; пока допускаем только одно вложение для RtsStation
		RtsStation	&StnCode,StnType,StnEcp,StnOrd,StnDir,&StnAlias,&StnName,<ListReg>,<ListRkp>
nextStn		= 0
ownStn	= @CatStr(StnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
;ownStn	= StnOwn_&LevelStn
		ENDM
;----------------------------------------------------------------------------
EndRtsStation	MACRO StnCode
		Local Lab
Lab:
		ORG @CatStr(firstStn,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
		DD  nextStn
		ORG Lab
LevelStn	= LevelStn - 1
nextStn		= 0
ownStn		= 0					;; пока допускаем только одно вложение для RtsStation
;ownStn		= StnOwn_&LevelStn
		ENDM
;----------------------------------------------------------------------------
BegRtsNode	MACRO NodeCode,NodeNum,NodeNid,NodeAlias,NodeName,ListGate
		Local Lab, Lab1
Lab:
@CatStr(nodeOwn_,@SubStr(&NodeCode, 2, @SizeStr(&NodeCode) -2)):
        DD LinkNode			;; указатель на следующий RtsNode в списке
							;; указатель на первую RtsTask, принадлежащую этому RtsNode
		DD @CatStr(firstTask,@SubStr(&NodeCode, 2, @SizeStr(&NodeCode) -2))
Lab1:
??nextGate	= 0

Cseg	ENDS
IpGateCseg	Segment
		ASSUME  CS:IpGateCseg

		FOR _GateCode,<ListGate>
			IFNB <_GateCode>
				ORG nextGateNode&_GateCode
				DD ??nextGate
				DD @CatStr(NodeOwn_,@SubStr(&NodeCode, 2, @SizeStr(&NodeCode) -2))
			
				??nextGate	= gateOwn_&_GateCode
			ENDIF
        ENDM

IpgateCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ORG Lab1
		DD ??nextGate			;; указатель на первый RtsIpGate, принадлежащий этому RtsNode

        DD NodeNum				;; уникальный номер RtsNode
        DW NodeNid				;; nid узла
		DB &NodeCode,0			;; код RtsNode
								;; псевдоним RtsNode
		DB @CatStr(!',@SubStr(&NodeAlias, 2, @SizeStr(&NodeAlias) -2),!'),0
								;; название RtsNode
		DB @CatStr(!',@SubStr(&NodeName, 2, @SizeStr(&NodeName) -2),!'),0

LinkNode = Lab
ownNode = @CatStr(nodeOwn_,@SubStr(&NodeCode, 2, @SizeStr(&NodeCode) -2))
nextTask = 0

        ENDM
;----------------------------------------------------------------------------
EndRtsNode	MACRO NodeCode

firstTask&NodeCode	= nextTask
		ENDM
;----------------------------------------------------------------------------
RtsTask	MACRO TaskNum
		Local Lab
Lab:
        DD LinkTask				;; указатель на следующую RtsTask в списке

		DD nextTask				;; указатель на следующую RtsTask, принадлежащую OwnNode
		DD OwnNode				;; RtsNode, которому принадлежит RtsTask

        DD TaskNum				;; уникальный номер RtsTask

LinkTask = Lab
nextTask = Lab
        ENDM
;----------------------------------------------------------------------------
BegRtsIpNet	MACRO NetCode,NetAddr
		Local Lab
Cseg	ENDS
IpGateCseg	Segment
		ASSUME  CS:IpGateCseg


Lab:
@CatStr(netOwn_,@SubStr(&NetCode, 2, @SizeStr(&NetCode) -2)):
        DD LinkIpNet			;; указатель на следующий RtsIpNet в списке

		DD @CatStr(firstGate,@SubStr(&NetCode, 2, @SizeStr(&NetCode) -2))

		DB &NetCode,0			;; код RtsIpNet
		DB &NetAddr,0			;; адрес RtsIpNet

LinkIpNet	= Lab
ownNet		= @CatStr(netOwn_,@SubStr(&NetCode, 2, @SizeStr(&NetCode) -2))
nextIpGate	= 0

        ENDM
;----------------------------------------------------------------------------
EndRtsIpNet	MACRO NetCode

firstGate&NetCode	= nextIpGate

IpgateCseg	ENDS
Cseg	Segment
		ASSUME  CS:Cseg

		ENDM
;----------------------------------------------------------------------------
BegRtsIpGate	MACRO GateCode,GateAddr,GateMask
		Local Lab
Lab:
@CatStr(gateOwn_,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2)):
		DD LinkIpGate				;; указатель на следующий RtsGate в списке

		DD nextIpGate				;; указатель на следующий RtsIpGate, принадлежащий RtsIpNet
		DD ownNet					;; указатель на RtsIpNet, которой принадлежит этот шлюз
@CatStr(nextGateNode,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2)):
									;; следующие два поля заполнятся в BegRtsNode
		DD 0						;; указатель на следующий RtsIpGate, принадлежащий RtsNode
		DD 0						;; указатель на RtsNode, которому принадлежит этот шлюз
									;; указатель на первый RtsMsgRoute, принадлежащий этому RtsIpGate
		DD @CatStr(firstMsgRoute,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
									;; указатель на первый RtsMsgFilter, принадлежащий этому RtsIpGate
		DD @CatStr(firstMsgFilter,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
									;; указатель на первый RtsIpSocket из пула сокетов для соединений с клиентами
		DD @CatStr(firstSocket,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
		
		DB &GateCode,0				;; код RtsIpGate
		DB &GateAddr,0				;; адрес RtsIpGate в сети
		DB &GateMask,0				;; маска RtsIpGate для пула адресов
		DD 00						;; время начала работы сокета после инициализации
		DD 00						;; время последнего подключения к сокету
		DD 00						;; время последнего ошибочного подключения к сокету
		DD 00						;; количество подключений к сокету
		DD 00						;; количество ошибочных подключений к сокету
		DB 16 DUP(0)				;; резерв

		SockAddr					;; описание параметров сокета для шлюза

LinkIpGate		= @CatStr(gateOwn_,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
nextIpGate		= @CatStr(gateOwn_,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
ownGate			= @CatStr(gateOwn_,@SubStr(&GateCode, 2, @SizeStr(&GateCode) -2))
nextRoute		= 0
nextFilterGate	= 0
nextSocket		= 0

		ENDM
;----------------------------------------------------------------------------
EndRtsIpGate	MACRO GateCode

firstMsgRoute&GateCode	= nextRoute
firstMsgFilter&GateCode	= nextFilterGate
firstSocket&GateCode	= nextSocket
		ENDM
;----------------------------------------------------------------------------
BegRtsMsgRoute	MACRO RouteGate1,RouteGate2,RouteGate3
		Local Lab,Lab1
Lab:
        DD LinkMsgRoute			;; указатель на следующий RtsMsgRoute в списке

		DD nextRoute			;; указатель на следующий RtsMsgRoute, принадлежащий OwnGate
		DD ownGate				;; RtsIpGate, которому принадлежит RtsMsgRoute
Lab1:
		DD 00					;; указатель на начало списка фильтров сообщений
		DD 00					;; указатель на первый RtsRouteGate

LinkMsgRoute	= Lab
nextRoute		= Lab
ownRoute		= Lab
LabRoute		= Lab1

nextFilterRoute	= 0
LinkRouteGate	= 0
;		RtsRouteGate	LinkMsgRoute, <RouteGate1>
		IFNB <RouteGate1>
			RtsGateParam	LinkMsgRoute, RouteGate1
		ENDIF
		IFNB <RouteGate2>
			RtsGateParam	LinkMsgRoute, RouteGate2
		ENDIF
		IFNB <RouteGate3>
			RtsGateParam	LinkMsgRoute, RouteGate3
		ENDIF

        ENDM
;----------------------------------------------------------------------------
EndRtsMsgRoute	MACRO
		Local Llab
Llab:
		ORG LabRoute
		DD nextFilterRoute
		DD LinkRouteGate
		ORG Llab

		ENDM
;----------------------------------------------------------------------------
FILTER_IN		= 0001H
FILTER_OUT		= 0002H
FILTER_INOUT	= 0003H

FILTER_ACCEPT	= 0000H
FILTER_EXCEPT	= 0004H

RtsMsgFilter	MACRO ListMsgType,ListDncReg,ListChl,ListStn,TypeInout,TypeExcept
		Local Lab,Lab1,Lllab
Lab:
        DD LinkMsgFilter		;; указатель на следующий RtsMsgFilter в списке
		DD nextFilterGate		;; указатель на следующий RtsMsgFilter, принадлежащий OwnGate
		DD ownGate				;; RtsIpGate, которому принадлежит RtsMsgFilter
		DD nextFilterRoute		;; указатель на следующий RtsMsgFilter, принадлежащий OwnRoute
		DD ownRoute				;; RtsMsgRoute, которому принадлежит RtsMsgFilter

		IFNB <TypeInout>
			??TypeFilter = TypeInout
		ELSE
			??TypeFilter = FILTER_OUT
		ENDIF

		IFNB <TypeExcept>
			??TypeFilter = ??TypeFilter OR TypeExcept
		ELSE
			??TypeFilter = ??TypeFilter OR FILTER_ACCEPT
		ENDIF

		DW ??TypeFilter			;; признаки фильтра (пока только - входной/выходной и включающий/исключающий)
Lab1:
		DD 00					;; указатель на начало списка типов сообщений
		DD 00					;; указатель на первый RtsDncRegion
		DD 00					;; указатель на первый RtsChannel
		DD 00					;; указатель на первую RtsStation

LinkMsgFilter	= Lab
nextFilterGate	= Lab
nextFilterRoute	= Lab
LabFilter		= Lab1

		RtsFilterMsgType	LinkMsgFilter, <ListMsgType>
		RtsFilterDncReg		LinkMsgFilter, <ListDncReg>
		RtsFilterChl		LinkMsgFilter, <ListChl>
		RtsFilterStn		LinkMsgFilter, <ListStn>
Lllab:
		ORG LabFilter
		DD LinkFilterMsgType
		DD LinkFilterDncReg
		DD LinkFilterChl
		DD LinkFilterStn
		ORG Lllab

        ENDM
;----------------------------------------------------------------------------
;RtsRouteGate	MACRO ownMsgRoute, RouteGate

;		IFNB <RouteGate>
;			FOR ??GateParam,<RouteGate>
;				IFNB <&??GateParam>
;					RtsGateParam ownMsgRoute, &??GateParam
;				ENDIF
;	        ENDM
;		ENDIF
;		ENDM
;----------------------------------------------------------------------------
RtsIpSocket	MACRO ownRouteGate,LstSock

		IFNB <LstSock>
			FORC ??item,<LstSock>
				IFNB <??item>
					RtsIpSkt ownRouteGate
				ENDIF
			ENDM
		ENDIF
		ENDM

;----------------------------------------------------------------------------
RtsIpSkt	MACRO ownRouteGate
		Local Lab,LabSkt,msgBuf,LabSkt1
Lab:
		DD nextSocket				;; указатель на следующий RtsIpSocket из пула сокетов, принадлежащий RtsIpGate
		DD ownGate					;; указатель на RtsIpGate, которому принадлежит этот RtsIpSocket
		DD nextSocketRoute			;; указатель на следующий RtsIpSocket из пула сокетов, принадлежащий RtsRouteGate
		DD ownRouteGate				;; указатель на RtsRouteGate, которому принадлежит этот RtsIpSocket
nextSocket		= Lab
nextSocketRoute	= Lab

LabSkt:
		DD 00						;; указатель на буфер для приема очередного сообщения (буфер выделяется динамически)
		DD 00						;; текущий указатель в буфере для приема сообщения
		DB 00						;; оставшееся количество байт для считывания очередного сообщения
		DB 00						;; текущая стадия приема сообщения (RECV_MSGHEAD/RECV_MSGBODY)
		DD 00						;; время последнего соединения (после connect или accept)
		DD 00						;; время последней неудачной попытки соединения
		DD 00						;; время приема последнего сообщения из сокета
		DD 00						;; время передачи последнего сообщения в сокет
		DD 00						;; количество сообщений принятых через сокет
		DD 00						;; количество сообщений отправленных через сокет
		DD 00						;; количество байт принятых через сокет
		DD 00						;; количество байт отправленных через сокет
		DD 00						;; количество ошибок при приеме сообщений через сокет
		DD 00						;; количество ошибок при передаче сообщений через сокет
		DD 00						;; количество подключений к сокету
		DD 00						;; количество ошибочных подключений к сокету
		DB 16 DUP(0)				;; резерв
		SockAddr					;; struct sockaddr_in - структура для описания сокета

msgBuf:
		DB 256 DUP(00)				;; msgBuf[256] - буфер для приема сообщений из этого сокета
LabSkt1:
		ORG LabSkt
		DD msgBuf
		DD msgBuf
		ORG LabSkt1

		ENDM
;----------------------------------------------------------------------------
SockAddr	MACRO
										;; struct sockaddr_in - структура для описания сокета
		DB 00							;;	char  sin_len;
		DB 0							;;	char  sin_family;
		DW 0DC30H						;;	short sin_port;
		DD 0							;;	struct in_addr sin_addr { int s_addr; }
		DB 8 DUP(00)					;;	char sin_zero[8];

		DD 00							;; int sockfd - дескриптор сокета для шлюза

		ENDM
;----------------------------------------------------------------------------
AUTO_CONNECT		= 0000H
QUERY_CONNECT		= 0001H
RESERVING_CONNECT	= 0002H
TUNNEL				= 0004H

RtsGateParam	MACRO ownMsgRoute,GateCode,ListMaxConnect,GateTypeConnect
		Local Lab,Lab1,Lab2

		IFNB <GateCode>
Lab:
			DD 00
			DD gateOwn_&GateCode
			DD LinkRouteGate
			DD ownMsgRoute
Lab1:
			DD 0
			DW 0
			DW 0

LinkRouteGate	= Lab
ParamLab		= Lab1

			??GateTypeCon = AUTO_CONNECT
			??GateMaxCon = 1

nextSocketRoute	= 0

			IFNB <ListMaxConnect>
				RtsIpSocket LinkRouteGate, ListMaxConnect

				IFNB <GateTypeConnect>
					??GateTypeCon = GateTypeConnect
				ELSE
					??GateTypeCon = AUTO_CONNECT
				ENDIF

				??MaxConnect = 0
				FORC ??maxcon,<ListMaxConnect>
					IFNB <??maxcon>
						??MaxConnect = ??MaxConnect + 1
					ENDIF
				ENDM
				??GateMaxCon = ??MaxConnect
			ELSE
				RtsIpSocket LinkRouteGate,?
				??GateTypeCon = AUTO_CONNECT
				??GateMaxCon = 1
			ENDIF
Lab2:
			ORG ParamLab
			DD nextSocketRoute		;; указатель на первый RtsIpSocket из пула сокетов, принадлежащий RtsRouteGate
			DW ??GateTypeCon		;; признаки шлюза ( тип соединения RtsIpGate (авто или по запросу), резервируемое или нет)
			DW ??GateMaxCon			;; максимальное количество соединений для пула адресов
			ORG Lab2
			
		ENDIF
		ENDM
;----------------------------------------------------------------------------
RtsFilterMsgType	MACRO ownMsgFilter, ListMsgType
		Local Lab, Lab1
Lab:
		FOR	??x,<ListMsgType>
			IFNB <??x>
				IFIDN	<??x>,<?>
					DW 0
				ELSE
					DW ??x
				ENDIF
			ELSE
				DW 0FFH
			ENDIF
		ENDM
Lab1:
		IF	Lab EQ Lab1 ;Если в память ничего не вводилось(IFNB <??x> - в FOR не работает если ListMsgType пустой)
			DW 0FFH
		ENDIF
		
		DW 0				;; признак окончания списка
LinkFilterMsgType	= Lab
		ENDM
;----------------------------------------------------------------------------
RtsFilterDncReg	MACRO ownMsgFilter, ListDncReg
LinkFilterDncReg	= 0
		FOR _RegCode,<ListDncReg>
			IFNB <_RegCode>
			IFIDN <_RegCode>,<?>
			ELSE
				RtsFltReg ownMsgFilter, _RegCode
			ENDIF
			ENDIF
        ENDM
		ENDM
;----------------------------------------------------------------------------
RtsFltReg	MACRO ownMsgFilter, RegCode
		Local Lab
Lab:
		DD 00
		DD RegOwn_&RegCode
		DD LinkFilterDncReg
		DD ownMsgFilter
LinkFilterDncReg	= Lab
		ENDM
;----------------------------------------------------------------------------
RtsFilterChl	MACRO ownMsgFilter, ListChl
LinkFilterChl	= 0
		FOR _ChlCode,<ListChl>
			IFNB <_ChlCode>
			IFIDN <_ChlCode>,<?>
			ELSE
				RtsFltChl ownMsgFilter, _ChlCode
			ENDIF
			ENDIF
        ENDM
		ENDM
;----------------------------------------------------------------------------
RtsFltChl	MACRO ownMsgFilter, ChlCode
		Local Lab
Lab:
		DD 00
		DD ChlOwn_&ChlCode
		DD LinkFilterChl
		DD ownMsgFilter
LinkFilterChl	= Lab
		ENDM
;----------------------------------------------------------------------------
RtsFilterStn	MACRO ownMsgFilter, ListStn
LinkFilterStn	= 0
		FOR _StnCode,<ListStn>
			IFNB <_StnCode>
			IFIDN <_StnCode>,<?>
			ELSE
				RtsFltStn ownMsgFilter, _StnCode
			ENDIF
			ENDIF
        ENDM
		ENDM
;----------------------------------------------------------------------------
RtsFltStn	MACRO ownMsgFilter, StnCode
		Local Lab
Lab:
		DD 00
		DD @CatStr(StnOwn_,@SubStr(&StnCode, 2, @SizeStr(&StnCode) -2))
		DD LinkFilterStn
		DD ownMsgFilter
LinkFilterStn	= Lab
		ENDM
;----------------------------------------------------------------------------
BegRts	MACRO

OPTION MZ :20h ;;адрес начала таблицы смещения
STACK segment para STACK 'STACK'
STACK ends

Cseg	Segment PUBLIC  Byte 'CODE'
		ASSUME  CS:Cseg

Cseg	ENDS

RtsServerCseg	Segment PUBLIC  Byte 'RtsServerCseg'
		ASSUME  CS:RtsServerCseg

RtsServerCseg	ENDS

RtsDncRegionCseg	Segment PUBLIC  Byte 'RtsDncRegionCseg'
		ASSUME  CS:RtsDncRegionCseg
RtsDncRegionCseg	ENDS

IpGateCseg	Segment PUBLIC  Byte 'IpGateCseg'
		ASSUME  CS:IpGateCseg
IpGateCseg	ENDS

Cseg	Segment
		ASSUME  CS:Cseg

start:

LinkChl		= 0
LinkSrv		= 0
LevelSrv	= 0
firstSrv	= 0
nextSrv		= 0
SrvOwn_0	= 0
ownSrv		= SrvOwn_0

LinkReg		= 0
LevelReg	= 0
firstReg	= 0
nextReg		= 0
RegOwn_0	= 0
ownReg		= RegOwn_0

LinkStn		= 0
LevelStn	= 0
firstStn	= 0
nextStn		= 0
StnOwn_0	= 0
ownStn		= StnOwn_0


LinkRkp		= 0

LinkNode		= 0
ownNode			= 0

LinkTask		= 0

LinkIpNet		= 0
ownNet			= 0

LinkIpGate		= 0
ownGate			= 0

LinkMsgRoute	= 0
LinkMsgFilter	= 0

LinkFilterMsgType	= 0
LinkFilterDncReg	= 0
LinkFilterChl		= 0
LinkFilterStn		= 0
LinkRouteGate		= 0

LabRoute			= 0
LabFilter			= 0
ParamLab			= 0

		DD	_RtsSrv			;; указатель на первый RtsServer
		DD	_RtsChannel		;; указатель на первый RtsChannel
		DD  _RtsRkp			;; указатель на первый RtsRkp
		DD	_RtsDncReg		;; указатель на первый RtsDncRegion
		DD  _RtsStation		;; указатель на первую RtsStation
		DD	_RtsNode		;; указатель на первый RtsNode
		DD	_RtsTask		;; указатель на первую RtsTask
		DD	_RtsIpNet		;; указатель на первую RtsIpNet
		DD	_RtsIpGate		;; указатель на первый RtsIpGate
		DD	_RtsMsgRoute	;; указатель на первый RtsMsgRoute
		DD	_RtsMsgFilter	;; указатель на первый RtsMsgFilter

		ENDM
;----------------------------------------------------------------------------
EndRts	MACRO
Cseg	ENDS
_RtsSrv			= LinkSrv
_RtsChannel		= LinkChl
_RtsRkp			= LinkRkp
_RtsDncReg		= LinkReg
_RtsStation		= LinkStn
_RtsNode		= LinkNode
_RtsTask		= LinkTask
_RtsIpNet		= LinkIpNet
_RtsIpGate		= LinkIpGate
_RtsMsgRoute	= LinkMsgRoute
_RtsMsgFilter	= LinkMsgFilter

end start
		ENDM
;----------------------------------------------------------------------------
