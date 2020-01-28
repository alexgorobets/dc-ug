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
??Tu			=	01
??Ts			=	02
OrdCmd			=	04;;команды заказные
;;ConfOrdCmd		=	08;;заказные команды с подтверждением
;;-----------------------------------------------------------
Dsek   Macro    NameSek
       Local    Ldsek
Ldsek:
       Dd       LinkSek
       db		@CatStr(!',@SubStr(&NameSek, 2, @SizeStr(&NameSek) -2),!'),0
LinkSek =       Ldsek
       EndM
;;-----------------------------------------------------------
DclInf Macro    ListInf
       For      ??x,<ListInf>
       IfDif    <'&??x'>,<'***'>
??Inf&??x =  ??NumInf
       Db       '&??x',0
;;;;		 Dd  ??Inf&??x
		EndIf 
??NumInf =  ??NumInf + 1
       EndM
       EndM
;;-----------------------------------------------------------
BegFkl Macro	Kstr,Kstb
??NumLine = -1
??MaxStr  = Kstr
??MaxStb  = Kstb
		Dw	??MaxStr,??MaxStb
       EndM
;;-----------------------------------------------------------
DclLine Macro	Nl,LstLine
	If       Nl EQ ??NumLine +1
??KolS  =	0
		For	??x,<LstLine>
   	    	Db    @CatStr(0,@SubStr(&??x, 3, @SizeStr(&??x)-2),h)
			??KolS = ??KolS +1
		EndM
       	If ??KolS NE ??MaxStb
			.ERR   <ЧИСЛО СИМВОЛОВ В СТРОКЕ НЕ РАВНО ??MaxStb >
		EndIf
??NumLine = Nl
    Else
    	ERR  <НАРУШЕН ПОРЯДОК СЛЕДОВАНИЯ СТРОК >
	EndIf
EndM
;;-----------------------------------------------------------
EndFkl Macro
	If       ??NumLine NE ??MaxStr-1
		.ERR   <ЧИСЛО СТРОК НЕ РАВНО ??MaxStr >
	EndIf
EndM
;;-----------------------------------------------------------
FklStn MACRO  NameStn,KodTuTs,Inf_Stn,Inf_OWD,Inf_Gr1,Inf_Grf      ;; 00
       Local  AddrNameSt
BeginDeffParam EndS
BeginStnParam Segment
               ASSUME  CS:BeginStnParam
AddrNameSt:
            Db     @CatStr(!',@SubStr(&NameStn, 2, @SizeStr(&NameStn) -2),!'),0
BeginStnParam EndS
BeginDeffParam Segment
      ASSUME  CS:BeginDeffParam
      Dd     AddrNameSt
      IfNb  <KodTuTs>
      	Db		??&KodTuTs
		Else
			Db		0
		EndIf
      IfNb  <Inf_Stn>
		Db	??Inf&Inf_Stn
      Else
		Db		0
      EndIf
      IfNb	<Inf_OWD>
		Db		??Inf&Inf_OWD
      Else
		Db		0
      EndIf
      IfNb	<Inf_Gr1>
		Db		??Inf&Inf_Gr1
      Else
		Db		0
      EndIf
      IfNb  <Inf_Grf>
		Db		??Inf&Inf_Grf
      Else
		Db		0
      EndIf
EndM
;;-----------------------------------------------------------
BegParam Macro

OPTION MZ :20h ;;адрес начала таблицы смещения
STACK segment para STACK 'STACK'
STACK ends

??Inf0   = 0
??NumInf = 0
LinkSek  = 0
LinkSysParam = 0
BeginDeffParam Segment PUBLIC  Byte 'CODE'
               ASSUME  CS:BeginDeffParam
         start:
         DD    EndSek
BeginDeffParam EndS
BeginStnParam Segment PUBLIC  Byte 'STN'
               ASSUME  CS:BeginStnParam
BeginStnParam EndS
BeginDeffParam Segment PUBLIC  Byte 'CODE'
               ASSUME  CS:BeginDeffParam

LinkSek = 0
         EndM
;;-----------------------------------------------------------
EndParam Macro
BeginDeffParam EndS
EndSek   =     LinkSek


end start
         Endm

DevPlt     = 0
DevPrn     = 1
;;-----------------------------------------------------------
System_Int Macro  NameParam,ValParam
           Local Lint
           Db    @CatStr(!',@SubStr(&NameParam, 2, @SizeStr(&NameParam) -2),!'),0,2
           Dw    ValParam
           EndM
System_Byte Macro  NameParam,ValParam
           Local Bbyte,Kbyte
           Db    NameParam,0
Bbyte:
           Db   0
           Irp   @x,<ValParam>
           Db    @x
           EndM
Kbyte:
           ORG    Bbyte
           Db     Kbyte-Bbyte-1
           ORG    Kbyte
           EndM
;;-----------------------------------------------------------
System_End Macro
           Db    0
           EndM
