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
??Par215 =  7Eh        ;; код Ч
??Par247 =  7Eh        ;; код ч
??Par195 =  64h+80h    ;; код Г
??Par227 =  64h+80h    ;; код г
??Par202 =  6Bh+80h    ;; код К
??Par234 =  6Bh+80h    ;; код к

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
CMD_MR      EQU     34H
CMD_OMR     EQU     38H	
CMD_MUP     EQU     46H     ;местное управление
CMD_OMUP    EQU     49H     ;отмена местного управления
;CMD_SU     EQU     4AH     ;сезонное управление
;CMD_OSU    EQU     4CH     ;отмена сезонного управления
CMD_WA      EQU     51H     ;вызов аккустический
;CMD_ONB     EQU     52H     ;отмена набора
CMD_ROP     EQU     54H     ;отключить от линии генератор станции
CMD_RVP     EQU     58H     ;подключить к линии генератор станции
;CMD_GS      EQU     68H     ;громкоговорящая связь
;CMD_SG      EQU     70H     ;swetofor otkrytx
;CMD_RS      EQU     72H     ;радиосвязь
;CMD_OSG     EQU     83H     ;swetofor zakrytx
;CMD_WDSN    EQU     85H     ;включение ДСН
;CMD_ODSN    EQU     86H     ;отмена включения ДСН
;CMD_OGS     EQU     89H     ;отмена громкоговорящей связи
CMD_WT      EQU     8AH     ;вызов к телефону
;CMD_SMN     EQU     8CH     ;смена направления
;CMD_IR      EQU     91H     ;искусственная разделка
;CMD_oipsr   EQU     92H     ;отмена исключения перевода стрелок предварительная
;CMD_ozp     EQU     92H     ;отмена закрытия (т.е. открытия переезда)
;CMD_isp     EQU     93H     ;исключение перевода стрелок
;CMD_WDG     EQU     94H     ;включение ДГА
;CMD_ODG     EQU     98H     ;выключене ДГА
CMD_URO      EQU     9AH     ;разрешение отправления
CMD_UORO     EQU     9CH     ;отмена разрешения отправления
;CMD_RAB     EQU     0A1H    ;признак рабочей команды
;CMD_PRW     EQU     0A2H    ;прзнак предварительной команды
CMD_VOS      EQU     0A4H    ;включение обогрева стрелок
CMD_OVOS     EQU     0A8H    ;выключение обогрева стрелок
;CMD_oipsp   EQU     0B0H    ;отмена исключения перевода стрелок рабочая
CMD_RH       EQU     0B2H    ;включение очистки стрелок
CMD_ORH      EQU     0B4H    ;выключение очистки стрелок
;CMD_uper    EQU     0E0H    ;управление переездом

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
BegCmdTU MACRO   NameStn
                PUBLIC DclCmdTu&NameStn
DclCmdTu&NameStn  LABEL   BYTE
        ENDM
;;**********************************************************
EndCmdTU MACRO   NameStn
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
        IFNB   <KodCmd>
__KolSym =      __KolSym + 1  ;; количество символов в команде
         Db      CMD_&KodCmd
        EndIf 
LabWrk2:
        Org     LabKmd
        Db      __KolSym      ;; количество символов в команде
        Org     LabWrk2       ;; + байт кода команды
        ENDM

;;**********************************************************
IcmdTU	MACRO   TextCmd,ListWork
		Local	LabCnt,LabWrk
;;		Db	"Cmd->"
__KolCmd  =     __KolCmd+1
        FrmNm   TextCmd
??KolLIst	=	0
		Db		'O'
LabCnt:
		Db		0
        Off32	<ListWork>
LabWrk:
        Org     LabCnt
        Db      ??KolList	  ;; количество параметров
        Org     LabWrk        ;; 
        ENDM
;;**********************************************************
IcmdTU_S	MACRO   TextCmd,ListWork
		Local	LabCnt,LabWrk
__KolCmd  =     __KolCmd+1
;;;;		Db	'CmdS->'
        FrmNm   TextCmd
??KolLIst	=	0
		Db		'S'
LabCnt:
		Db		0
        Off32	<ListWork>
LabWrk:
        Org     LabCnt
        Db      ??KolList	  ;; количество параметров
        Org     LabWrk        ;; 
        ENDM
;;**********************************************************
