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
??Par207 =  70h+80h    ;; код П
??Par239 =  70h+80h    ;; код п
??Par196 =  65h        ;; код Д
??Par228 =  65h        ;; код д
??Par204 =  6Dh+80h    ;; код М
??Par236 =  6Dh+80h    ;; код м
??Par205 =  6Eh+80h    ;; код Н
??Par237 =  6Eh+80h    ;; код н
??Par206 =  6Fh		   ;; код О
??Par238 =  6Fh		   ;; код о
??Par215 =  7Eh        ;; код Ч
??Par247 =  7Eh        ;; код ч

;       Коды команд ТУ  (выдержка из таблицы)
;-----------------------------------------------------
NP      EQU     07H     ;нечетный прием
ONP     EQU     0BH     ;отмена нечетного приема
NO      EQU     0DH     ;нечетное отправление
ONO     EQU     0EH     ;отмена нечетного отправления
NSK     EQU     13H     ;нечетный сквозной пропуск
ONSK    EQU     15H     ;отмена нечетного сквозного пропуска
ADN     EQU     16H     ;автодействие нечетное
OADN    EQU     19H     ;отмена нечетного автодействия
TO      EQU     1AH     ;четное отправление
OTO     EQU     1CH     ;отмена четного отправления
TP      EQU     23H     ;четный прием
OTP     EQU     25H     ;отмена четного приема
TSK     EQU     26H     ;четный скозной пропуск
OTSK    EQU     29H     ;отмена четного сквозного пропуска
ADT     EQU     2AH     ;четное автодействие
OADT    EQU     2CH     ;отмена четного автодействия
MNV     EQU     31H     ;маневровый маршрут
OMNV    EQU     32H     ;отмена маневрового маршрута
MUP     EQU     46H     ;местное управление
OMUP    EQU     49H     ;отмена местного управления
SU      EQU     4AH     ;сезонное управление
OSU     EQU     4CH     ;отмена сезонного управления
WA      EQU     51H     ;вызов аккустический
ONB     EQU     52H     ;отмена набора
ROP     EQU     54H     ;отключить от линии генератор станции
RVP     EQU     58H     ;подключить к линии генератор станции
;GS      EQU     68H     ;громкоговорящая связь
;SG      EQU     70H     ;swetofor otkrytx
;RS      EQU     72H     ;радиосвязь
MM      EQU     74H     ;включение маневрового режима
OMM     EQU     75H     ;выключение маневрового режима
AUM     EQU     76H     ;включение АУМ
OAUM    EQU     78H     ;выключение АУМ
BS       EQU     7AH     ;включение БС (без сигнала)
OBS      EQU     7BH     ;выключение БС
;OSG     EQU     83H     ;swetofor zakrytx
;WDSN    EQU     85H     ;включение ДСН
;ODSN    EQU     86H     ;отмена включения ДСН
;OGS     EQU     89H     ;отмена громкоговорящей связи
WT      EQU     8AH     ;вызов к телефону
SMN     EQU     8CH     ;смена направления
;IR      EQU     91H     ;искусственная разделка
;oipsr   EQU     92H     ;отмена исключения перевода стрелок предварительная
;ozp     EQU     92H     ;отмена закрытия (т.е. открытия переезда)
;isp     EQU     93H     ;исключение перевода стрелок
;WDG     EQU     94H     ;включение ДГА
;ODG     EQU     98H     ;выключене ДГА
URO      EQU     9AH     ;разрешение отправления
UORO     EQU     9CH     ;отмена разрешения отправления
;RAB     EQU     0A1H    ;признак рабочей команды
;PRW     EQU     0A2H    ;прзнак предварительной команды
VOS      EQU     0A4H    ;включение обогрева стрелок
OVOS     EQU     0A8H    ;выключение обогрева стрелок
;oipsp   EQU     0B0H    ;отмена исключения перевода стрелок рабочая
RH       EQU     0B2H    ;включение очистки стрелок
ORH      EQU     0B4H    ;выключение очистки стрелок
;uper    EQU     0E0H    ;управление переездом
PUT     EQU     1BH     ;оповещение монтеров пути
OPUT    EQU     1DH     ;отмена оповещения монтеров пути

;;----------------------------------------------------------
????KodP  Macro  KodSym
        IfDef ??Par&KodSym
          ????kp    =    (??Par&KodSym+0)
        Else
          Dw ??Par&KodSym
        EndIf
EndM
KodPar   MACRO   str
        FORC   ??c, <str>
          IFNB <'&??c'>
            ????KodP  %('&??c'+0)
            Db     ????kp
            __KolSym  = __KolSym + 01h
          ENDIF
        ENDM
ENDM
;;**********************************************************
BegCmdTU   MACRO   NameTu,KodStn
__KolCmd = 0
		Db		'&NameTu',0
		Dw		LinkDclTU
		Dw		CntCmdTU&NameTu
		PUBLIC  DclCmdTU&NameTu
DclCmdTU&NameTu      LABEL   BYTE
LinkDclTU	=	DclCmdTU&NameTu - BegCseg

__KodStn = 0
        FOR     Bit, <KodStn>
__KodStn =    __KodStn + (1 Shl ( 32 - Bit))
        ENDM
        ENDM
;;**********************************************************
EndCmdTU   MACRO   NameTu
CntCmdTU&NameTu  =  __KolCmd
		ENDM
;;**********************************************************
StnCodeTU MACRO KodStn

__KodStn = 0
        FOR     Bit, <KodStn>
__KodStn =    __KodStn + (1 Shl ( 32 - Bit))
        ENDM
        ENDM
;;**********************************************************
FrmNm   MACRO   NmCmd,KodCmd
        Local   LabKmd,LabWrk2
__KolSym =      0
LabKmd:
        Db      0             ;; количество символов в команде
        IFNB    <'&NmCmd'>
          KodPar  <NmCmd>
        ENDIF

        Db      KodCmd
LabWrk2:
        Org     LabKmd
        Db      __KolSym + 1  ;; количество символов в команде
        Org     LabWrk2       ;; + байт кода команды
        ENDM
;;**********************************************************
FrmKn   MACRO   ListBit
        For     Bit,<ListBit>
__KmdNeva =  __KmdNeva + (1 Shl ( 32 - Bit))
        ENDM
        ENDM
;;**********************************************************
CmdTU   MACRO   TextCmd,NumGrp,BodyCmd
        Local   LabKmd
__KolCmd  =     __KolCmd+1
__KmdNeva   =     __KodStn
        FrmNm   TextCmd
        FrmKn   <NumGrp>
        FrmKn   <BodyCmd>
        Dw      (__KmdNeva Shr 16) And 0FFFFh
        Dw       __KmdNeva         And 0FFFFh
        ENDM
;;**********************************************************
DclStnNeva MACRO NumStn,NameStn,NetNumStn,BegGrp,EndGrp
           Local LabStn
LabStn:
      Dd      ??LinkStn
      Db      16 Dup (0FFh)
      Db      NumStn      ;; порядковый номер станции в линии связи
      Db      '&NameStn'  ;; код названия станции
      NetMark NetNumStn   ;; сетевая разметка станции
      Dd      0           ;; *PromStn   адрес расположения описания станции
      Dw      0           ;; KolObj     число объектов станции
      Dw      0           ;; KolGrStn   число групп сигналов ТС
      Dd      0           ;; *PdclTC    адрес размещения таблиц ТС станции
      Dw      0           ;; KolCmd     число команд общего назначения
      Dd      0           ;; *Pcmd
      Dw      0           ;; KolCmdOt   число ответственных команд
      Dd      0           ;; *PcmdOt
      Db      BegGrp      ;; начальный номер канала / номер группы "Невы"
      Db      EndGrp      ;; конечный  номер канала / номер группы "Невы"
      Db      EndGrp      ;; номер текущей группы для вывода при отсутствии изменений
      Db      0           ;; счетчик 5-сек интервалов с момента последнего изменения состояния
   ??Kstn   = ??Kstn+1
   ??LinkStn= LabStn
ENDM
;;**********************************************************
