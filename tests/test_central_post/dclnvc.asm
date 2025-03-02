;
    	TITLE '�������� �������� ��. ������������'
;**********************************************************
;       NNNN   NNNN VVVV  VVVV  CCCCCCC 
;        NNN    NN   VV    VV  CC     CC
;        NNNN   NN   VV    VV  CC    
;        NN NN  NN   VV    VV  CC 
;        NN  NN NN    VV  VV   CC     
;        NN   NNNN     VVVV    CC    
;        NN    NNN      VV     CC     CC
;       NNNN   NNNN     VV      CCCCCCC
;**********************************************************
	    NAME	DCLNVC
;----------------------------------------------------------
	    BegStn	NVC
;==========================================================
;	    �����: 1,	������� ��������/�����������
;==========================================================
	    Public	UpNVC
;----------------------------------------------------------
UpNVC:  Cls Up
;
up1n:	DclUp	<��1�..>,<up2n,Ksn>
up2n:	DclUp	<��2�..>,<?,up1n>
;
uu1t:	DclUp	<��1�..>,<uu2t,Ksnn>
uu2t:	DclUp	<��2�..>,<?,uu1t>
;
uu1n:	DclUp	<��1�..>,<Kstn,?>
uu2n:	DclUp	<��2�..>,<?,?>
;
up1t:	DclUp	<��1�..>,<Kst,?>
up2t:	DclUp	<��2�..>,<?,?>
;-----------------------------------------------
Kt1n:   DclUp   <��1�..>,<?,?>
Kt3n:   DclUp   <��3�..>,<?,?>
Kt5n:   DclUp   <��5�..>,<?,?>
;-----------------------------------------------
Kt2n:   DclUp   <��2�..>,<?,?>
Kt4n:   DclUp   <��4�..>,<?,?>
Kt6n:   DclUp   <��6�..>,<?,?>
;===============================================
;*	    �����: 2,	���������
;===============================================
		Public	KsNVC
KsNVC:	Cls	Ks
;-----------------------------------------------
Kst:	DclKs	<�.....>,Svt,<Sptp,up1t>
Kstn:   Dclks   <��....>,Svt,<Sptnp,uu1n>
Kst1:	DclKs	<�1....>,Svt,<Sp1923,Kp1a>
Kst1p:	DclKs	<�1�...>,Svt,<?,?>
Kst2:   DclKs   <�2....>,Svt,<Sp1923,Kp2a>
Kst2p:  DclKs   <�2�...>,Svt,<?,?>
Kst4:   DclKs   <�4....>,Svt,<Sp1521,Kp4>
Kst25:  DclKs   <�25...>,Svt,<Sp1sb,?>
;-----------------------------------------------
Ksn:	DclKs	<�.....>,Svn,<up1n,Spnp>
Ksnn:   DclKs   <��....>,Svn,<uu1t,Spnnp>
Ksn1:   DclKs   <�1....>,Svn,<Sp24,Sp0610>
Ksn1p:	DclKs	<�1�...>,Svn,<?,?>
Ksn3:	DclKs	<�3....>,Svn,<Kp3b,Sp0816>
Ksn3p:	DclKs	<�3�...>,Svn,<?,?>
Ksnm4:	DclKs	<��4...>,Svn,<Kp4,Sp1826>
Ksng:	DclKs	<��....>,Svn,<Sp1618p,Sp0816>
Ksnm6:	DclKs	<��6...>,Svn,<?,Sp1826>
;-----------------------------------------------
Ksm6:   DclKs   <�6....>,Svtm,<Sp02,Sptnp>
Ksm8:   DclKs   <�8....>,Svtm,<Sp0610,Sp04>
Ksm10:  DclKs   <�10...>,Svtm,<Sp0816,Sp02>
Ksm12:  DclKs   <�12...>,Svtm,<Sp22,?>   
Ksm14:  DclKs   <�14...>,Svnm,<Kp2b,Sp0610>
Ksm16:  DclKs   <�16...>,Svnm,<?,Sp1228>   
Ksm18:  DclKs   <�18...>,Svnm,<Kp1b,Sp24> 
Ksm22:  DclKs   <�22...>,Svtm,<Sp1826,Sp1618p> 
Ksm24:  DclKs   <�24...>,Svtm,<Sp1228,Kp1b> 
Ksm26:  DclKs   <�26...>,Svnm,<Kp1a,Sp1228> 
;-----------------------------------------------
Ksm1:   DclKs   <�1....>,Svnm,<sp18p,Sp05> 
Ksm3:   DclKs   <�3....>,Svnm,<Spnnp,Sp0113> 
Ksm5:   DclKs   <�5....>,Svnm,<Spnp,Sp0311>
Ksm7:   DclKs   <�7....>,Svnm,<Sp07,Sp1923>
Ksm9:   DclKs   <�9....>,Svnm,<Sp09,Sp1521>
Ksm11:  DclKs   <�11...>,Svtm,<Sp09,Kp3a>
Ksm13:  DclKs   <�13...>,Svtm,<Sp27,?> 
Ksm15:  DclKs   <�15...>,Svnm,<?,Sp31>   
Ksm17:  DclKs   <�17...>,Svtm,<Sp23a,?>
Ksm19:  DclKs   <�19...>,Svtm,<Sp35,?> 
Ksm21:  DclKs   <�21...>,Svtm,<Sp31,?>   
Ksm23:  DclKs   <�23...>,Svnm,<Sp0311,Sp09>   
;*==============================================
;*	    �����: 3,	����
;===============================================
		Public	KpNVC
KpNVC:  Cls Kp
;-----------------------------------------------
Kp1a:	DclKp	<1�....>,<Kst1,Ksm26>
Kp1b:	DclKp	<1�....>,<Ksm24,Ksm18>
Kp2a:   DclKp   <2�....>,<Kst2,Kp2b>
Kp2b:   DclKp   <2�....>,<Kp2a,ksm14>
Kp3a:	DclKp	<3�....>,<Ksm11,Kp3b>
Kp3b:	DclKp	<3�....>,<Kp3a,Ksn3>
Kp4:    DclKp   <4.....>,<Kst4,Ksnm4>
;===============================================
;*	    �����: 4,	�������
;===============================================
		Public	StNVC
StNVC:	Cls	St
;-----------------------------------------------
St0204: DclSt   <002004>,<Sp02,Sp04>
St0608: DclSt   <006008>,<Sp0610,Sp0816>
St10:   DclSt   <010...>,<Sp0610>
St16:   DclSt   <016...>,<Sp0816>
St1826: DclSt   <018026>,<Sp1826>
St2224: DclSt   <022024>,<Sp24,Sp22>
St1228: DclSt   <012028>,<Sp1228>
;-----------------------------------------------
St1sb:  DclSt   <1��...>,<Sp1sb>
St0103: DclSt   <001003>,<Sp0113,Sp0311>
St0507: DclSt   <005007>,<Sp05,Sp07>
St09:   DclSt   <009...>,<Sp09>
St1113: DclSt   <011013>,<Sp0311,Sp0113>
St15:   DclSt   <015...>,<Sp1521>       
St19:   DclSt   <019...>,<Sp1923>
St2127: DclSt   <021027>,<Sp1521,Sp27>       
St2323a:DclSt   <02323�>,<Sp1923,Sp23a>
St2931: DclSt   <029031>,<Sp31,Sp2933>
St3335: DclSt   <033035>,<Sp2933,Sp35>
;===============================================
;*	    �����: 5,	���������� ������
;===============================================
		Public	SpNVC
SpNVC:	Cls	Sp
;-----------------------------------------------
Sptp:   DclSp   <��....>
		OFF     <Sp04>
        OFF     <Kst> 
Sptnp:  DclSp   <���...>
		OFF     <Ksm6>
        OFF     <Kstn> 
Sp02:   DclSp   <002...>,<St0204>
		OFF     <Ksm10,Sp04>
		OFF     <Ksm6,Ksm6>          
Sp04:  	DclSp   <004...>,<St0204>   
	    OFF	    <Ksm8,Ksm8>          
	    OFF	    <Sptp,Sp02>              
Sp0610:	DclSp   <006010>,<St0608,St10>
	    OFF	    <Ksm14,Ksn1,Sp0816,Sp0816>
	    OFF	    <Ksm8,Ksm8,Ksm8,Ksm8>
Sp0816:	DclSp   <008016>,<St16,St0608>
	    OFF	    <Ksn3,Ksn3,Ksng,Ksng>
	    OFF	    <Ksm10,Sp0610,Ksm10,Sp0610>
Sp1228:	DclSp   <012028>,<St1228>
	    OFF	    <ksm26,ksm16>
	    OFF	    <ksm24,ksm24>
Sp1826:	DclSp   <018026>,<St1826>
	    OFF	    <Ksnm4,Ksnm6>
	    OFF	    <Ksm22,Ksm22>
Sp1618p:DclSp   <01618�>
	    OFF	    <ksm22>
	    OFF	    <ksng>
Sp18p: 	DclSp   <18�...>
	    OFF	    <?>
	    OFF	    <ksm1>  
Sp22:  	DclSp   <022...>,<St2224>
	    OFF	    <?,sp24>
	    OFF	    <Ksm12,Ksm12>  
Sp24:  	DclSp   <024...>,<St2224>
	    OFF	    <Ksm18,Ksm18>
	    OFF	    <Ksn1,Sp22>  
;-----------------------------------------------		
Spnp:   DclSp   <��....>
        OFF     <Ksn> 
		OFF     <Ksm5>
Spnnp:  DclSp   <���...>
        OFF     <Ksnn> 
		OFF     <Ksm3>
Sp0113: DclSp   <001013>,<St0103,St1113>
        OFF     <Ksm3,Sp0311,Ksm3,Sp0311>
		OFF     <Sp07,Sp07,Sp0311,Sp0311>
Sp0311: DclSp   <003011>,<St0103,St1113>
        OFF     <ksm5,Ksm5,Sp0113,Sp0113>
		OFF     <ksm23,Sp0113,ksm23,Sp0113>
Sp05:   DclSp   <005...>,<St0507>
        OFF     <Ksm1,Ksm1>
		OFF     <?,Sp07>
Sp07:   DclSp   <007...>,<St0507>
        OFF     <Sp0113,Sp05>
		OFF     <Ksm7,Ksm7>
Sp09:   DclSp   <009...>,<St09>
        OFF     <ksm23,ksm23>
		OFF     <ksm11,ksm9>
Sp1521: DclSp   <015021>,<St15,St2127>
        OFF     <ksm9,ksm9,ksm9,ksm9>
		OFF     <Sp2933,Sp27,kst4,kst4>
Sp27:   DclSp   <027...>,<St2127>
        OFF     <?,Sp1521>
        OFF     <ksm13,ksm13>
Sp2933: DclSp   <029033>,<St2931,St3335>
        OFF     <Sp1521,Sp1521,Sp1521,Sp1521>
    	OFF     <Sp1sb,Sp35,Sp31,Sp31>
Sp35:   DclSp   <035...>,<St3335>
        OFF     <?,Sp2933>
		OFF     <ksm19,ksm19>
Sp1sb:  DclSp   <1��...>,<St1sb>
        OFF     <?,Sp2933>
		OFF     <kst25,kst25>
Sp31:   DclSp   <031...>,<St2931>   
        OFF     <Ksm15,Sp2933>       
		OFF     <Ksm21,Ksm21>          
Sp1923: DclSp   <019023>,<St19,St2323a>   
        OFF     <Ksm7,Ksm7,Ksm7,Ksm7>       
		OFF     <Kst2,Kst2,Kst1,Sp23a>          
Sp23a:  DclSp   <23�...>,<St2323a>   
        OFF     <?,Sp1923>       
		OFF     <Ksm17,Ksm17>          		
;-----------------------------------------------
;       ��������
;-----------------------------------------------
;PgNVC:   CLS     Pg
;-----------------------------------------------
;np:      DclPg   <��....>,<up1n,up2n>  ; ������� �� ��.�
;tp:      DclPg   <��....>,<up1t,up2t>  ; ������� �� ��.�
;--------------------------------------------------
;       ��������  
;--------------------------------------------------
PrNVC:   CLS     Pr
;--------------------------------------------------
pr1:     DclPr   <��1...>
;**************************************************
;*	     ����� ��������������� ��������
;**************************************************
	     Public	DpNVC
DpNVC:	Cls	DP
;--------------------------------------------------
K1la:   DclDp   <1��...> ;������� 1
K2la:   DclDp   <2��...>
K3la:   DclDp   <3��...>
K4la:   DclDp   <4��...>
K5la:   DclDp   <5��...>
K6la:   DclDp   <6��...>
Knma:   DclDp   <���...>
Ktma:   DclDp   <���...>
Kog:    DclDp   <��....>
Kwz:    DclDp   <��....>,<01h,2Bh,"��� ������   ">,<04h,4Fh,"����� �������">
Krb:    DclDp   <���...>
Kwu:    DclDp   <��....>
Ktm:     DclDp   <��....>
Kt:      DclDp   <�.....>
Knm:     DclDp   <��....> 
n:       DclDp   <�.....>
;-------------------------------------------------
Ktas:   DclDp   <��....> ;������� 2
Knas:   DclDp   <��....>
Knkg:   DclDp   <���...> 
Ktkg:   DclDp   <���...> 
Kdsn:   DclDp   <���...> 
;-------------------------------------------------
Ksg:    DclDp   <��....> ;������� 6  ��������� �������������� �������� ������ �� �������� 
;-------------------------------------------------
Kpa:    DclDp   <���...> ;������� 7 
Knso:   DclDp   <���...> 
Ktso:   DclDp   <���...>
Kmg:    DclDp   <���...>
Kkiz:   DclDp   <��....>
;-------------------------------------------------
Ksz:    DclDp   <��....>
;-------------------------------------------------
Km:     DclDp   <��....> ;������� 11
Kdn:    DclDp   <��....>
Knot:   DclDp   <���...>
dsn:    DclDp   <���...>
Kpp:    DclDp   <���...>,<01h,2Bh,"�������������">,<04h,4Fh,"����� �������">
;-------------------------------------------------
Kf1k:   DclDp   <�1�...>,<01h,2Bh,"����� 1 �����">,<04h,4Fh,"��� 1 ������ "> ;������� 12
Kf1b:   DclDp   <�1�...>
Kf2k:   DclDp   <�2�...>,<01h,2Bh,"����� 2 �����">,<04h,4Fh,"��� 2 ������ ">
Kf2b:   DclDp   <�2�...>
Kos:    DclDp   <��....>
Kom:    DclDp   <��....>
Kop:    DclDp   <��....>
Kgir:   DclDp   <���...>
Kp:     DclDP   <��....>
;-------------------------------------------------
Krs:    DclDp   <��....> ;������� 13
Kgs:    DclDp   <��....>
Kapn:   DclDp   <���...>
;-------------------------------------------------
Kndisk: DclDp   <�����.>,<81h,2Bh,"�������� ��� ">,<84h,4Fh,"�����  ���   "> ;������� 14
Kr1n:   DclDp   <��1�..>
Ktdisk: DclDp   <�����.>,<81h,2Bh,"��� ��� ���  ">,<84h,4Fh,"���  ���     ">            
Kr1t:   DclDp   <��1�..>
;------------------------------------------------
Kugpa:  DclDp   <����..> ;���� ����-��
;************************************************
;       �������� ������� ��������
;************************************************
SoNVC:  Cls SO
;------------------------------------------------
Ktza:   So_Rept <���...>,<St0204+Os,St0608+Os,St10+Os,St16+Os,St1826+Os,St2224+Os>
Knza:   So_Rept <���...>,<St0103+OS,St0507+Os,St09+Os,St1113+Os,St15+Os,St19+Os,Fnza>
Fnza:	So_Rept <......>,<St2127+Os,St2323a+Os,St2931+Os,St3335+Os>
;------------------------------------------------
Kpin:   So_Fun  <��....>,<Fizv>
Kpit:   So_Fun  <��....>,<Fizv>
Fizv:   So_And  <���...>,<Kpin+Tak,Kpit+Tak>,<-Pr1>
;------------------------------------------------
Fs1527: So_Fun	<��1527>,<Fs27>,<Sp1521>
Fs27:	So_And	<......>,<Fs1527+Tps,St15+Tpk,St2127+Tmk>,<-Sp27>

Fz1527: So_Fun  <��1527>,<Fzs27>,<-Sp1521+Zs>
Fzs27:	So_And	<......>,<Fz1527+Tps,St15+Tpk,St2127+Tmk>,<Sp27+Zs>

Fi1527: So_Fun  <��1527>,<Fis27>,<Sp1521+Ir>
Fis27:  So_And  <......>,<Fi1527+Tak,St15+Tpk,St2127+Tmk>,<Sp27+Ir>

Fs2935: So_Fun  <��2935>,<Fs35>,<Sp2933,Fs1sb>
Fs35:   So_And  <......>,<Fs2935+Tps,St2931+Tpk,St3335+Tmk>,<-Sp35>
Fs1sb:  So_And  <......>,<Fs2935+Tps,St2931+Tpk,St3335+Tpk>,<-Sp1sb>

Fz2935: So_Fun  <��2935>,<Fzs35,Fzs1sb>,<-Sp2933+Zs>
Fzs35:  So_And  <......>,<Fz2935+Tps,St2931+Tpk,St3335+Tmk>,<Sp35+Zs>
Fzs1sb: So_And  <......>,<Fz2935+Tps,St2931+Tpk,St3335+Tpk>,<Sp1sb+Zs>

Fi2935: So_Fun  <��2935>,<Fis35,Fis1sb>,<Sp2933+Ir>
Fis35:  So_And  <......>,<Fi2935+Tak,St2931+Tpk,St3335+Tmk>,<Sp35+Ir>
Fis1sb: So_And  <......>,<Fi2935+Tak,St2931+Tpk,St3335+Tpk>,<Sp1sb+Ir>
;------------------------------------------------
; ���������� ������� 23�
;------------------------------------------------
Fs1923: So_Fun  <��1923>,<Fs23a>,<Sp1923>
Fs23a:  So_And  <......>,<Fs1923+Tps,St2323a+Tmk,St19+Tmk>,<-Sp23a>

Fz1923: So_Fun  <��1923>,<Fzs23a>,<-Sp1923+Zs>
Fzs23a: So_And  <......>,<Fz1923+Tps,St2323a+Tmk,St19+Tmk>,<Sp23a+Zs>

Fi1923: So_Fun  <��1923>,<Fis23a>,<Sp1923+Ir>
Fis23a: So_And  <......>,<Fi1923+Tak,St2323a+Tmk,St19+Tmk>,<Sp23a+Ir>
;------------------------------------------------
k3p:	So_Rept	<�3�...>,<kp3a,kp3b>
k2p:	So_Rept	<�2�...>,<kp2b,kp2a>
k2ni:	So_Rept	<�2��..>,<-kp2b+zpn,-kp2a+zpn>
k2ti:	So_Rept	<�2��..>,<-kp2b+zpt,-kp2a+zpt>
k3ni:	So_Rept	<�3��..>,<-kp3a+zpn,-kp3b+zpn>
k3ti:	So_Rept	<�3��..>,<-kp3a+zpt,-kp3b+zpt>
;------------------------------------------------
Ktkz:   So_Fun  <���...>,<Ft1,Ft2,Ft4,Ft25>
Ft1:    So_And  <�1��..>,<Ktkz+Tak,Kst1+Tak>,<-Kst1+Go>
Ft2:    So_And  <�2��..>,<Ktkz+Tak,Kst2+Tak>,<-Kst2+Go>
Ft4:    So_And  <�4��..>,<Ktkz+Tak,Kst4+Tak>,<-Kst4+Go>
;Ft5:    So_And  <�5��..>,<Ktkz+Tak,Kst5+Tak>,<Kst5+Go>
Ft25:   So_And  <�25��.>,<Ktkz+Tak,Kst25+Tak>,<-Kst25+Go>
;------------------------------------------------
Knkz:   So_Fun  <���...>,<Fn1,Fn3,Fn4,Fn6>
Fn1:    So_And  <�1��..>,<Knkz+Tak,Ksn1+Tak>,<-Ksn1+Go>
Fn3:    So_And  <�3��..>,<Knkz+Tak,Ksn3+Tak>,<-Ksn3+Go>
Fn4:    So_And  <�4��..>,<Knkz+Tak,Ksnm4+Tak>,<-Ksnm4+Go>
Fn6:    So_And  <�6��..>,<Knkz+Tak,Ksnm6+Tak>,<-Ksnm6+Go>
;------------------------------------------------
;K3335pk: So_Fun <3335��>,<F3335pk>
;K3335mk: So_Fun <3335��>,<F3335mk>
;F3335pk: So_And <......>,<K3335pk+Tak,K3335mk+Tps>,<-St33+pk,-St35+pk>
;F3335mk: So_And <......>,<K3335mk+Tak,K3335pk+Tps>,<-St33+mk,-St35+mk>
;------------------------------------------------
;K2127pk: So_Fun <2127��>,<F2127pk>
;K2127mk: So_Fun <2127��>,<F2127mk>
;F2127pk: So_And <......>,<K2127pk+Tak,K2127mk+Tps>,<-St21+pk,-St27+pk>
;F2127mk: So_And <......>,<K2127mk+Tak,K2127pk+Tps>,<-St21+mk,-St27+mk>
;------------------------------------------------
;************************************************
;* ������ ����� �������� ��
;************************************************
	    BegGr	NVC
	    Stb	1
GR00:	Gr	<St0204+Pk,St0204+Mk,St0608+Pk,St10+Pk,St16+Pk,St16+Mk,St2224+Mk,-K5la>
GR01:	Gr	<Kp1a,K3p,?,Sp0610,Sp0816,Sp1826,Sp22,-K6la>
GR02:   Gr  <-Sp0610+Zs,-Sp1826+Zs,-Sp22+Zs,-Sp24+Zs,?,?,?,?>
;
	    Stb	2
GR03:	Gr	<St0103+Pk,St0103+Mk,St0507+Pk,St0507+Mk,St09+Pk,St1113+Pk,St19+Pk,St19+Mk>
GR04:	Gr	<St2931+Pk,St2931+Mk,Spnp,Spnnp,Sp0113,Sp0311,Sp05,Sp07>
GR05:	Gr	<Fs1923,Fs1527,Fs2935,-Sp0311+Zs,?,?,?,?>
;
	    Stb	3
GR06:	Gr	<Ksn+Ps,Ksn3+Ps,Ksnm4+Ps,Kst1+Ps,Kst2+Ps,Kst+Ps,-K1la,-K3la>
GR07:	Gr	<-K2la,-K4la,-Knma,-Ktma,-Kog,-Kwz,-Krb,Kwu>
GR08:   Gr  <Ktm,Kt,Knm,n,?,?,?,?>
;
	    Stb	4
GR09:	Gr	<Ktas,Knas,Ksn1,Ksn3,Kst1,Kst2,up1n,up2n>
GR0A:	Gr	<up1t,up2t,-Knkg,-Ktkg,uu2n,Kst1p,Kst2p,Ksn3p>
GR0B:	Gr	<Sptp,Sptnp,?,Sp02,?,?,?,?>
;
	    Stb	5
GR0C:	Gr	<Sp04,-Sptp+Zs,?,-Sp0816+Zs,?,St1sb+AVb,St1sb+AVk,?>
GR0D:   Gr	<dsn,?,-Sp0113+Zs,-Sp05+Zs,?,k2ni,k2ti,k3ni>
GR0E:	Gr	<k3ti,-kp4+zpn,?,?,?,?,?,?>
;
	    Stb	6
GR0F:	Gr	<Sp24,Ksn,Kst,Ksnm4,Ksnm6,?,St1sb+Pk,St1sb+Mk>
GR10:   Gr	<-Kp1a+Zpn,-Kp1a+Zpt,?,?,?,-ksg,-Kp4+Zpt,?>
GR11:	Gr	<?,uu1n,uu1t,?,?,?,?,?>
;
	    Stb	7
GR12:	Gr	<Fz2935,-Sp31+Zs,Knso,Ktso,-Spnnp+Zs,Ktkz,Knkz,Knza>
GR13:   Gr	<Ktza,-Spnp+Zs,Ksn+Ro,?,Kst+Ro,?,Kpa,-Ksn+Go>
GR14:	Gr	<-Kst+Go,Kp4,-Kmg,-Kkiz,?,?,?,?>
;
	    Stb	8
GR15:	Gr	<St0608+Mk,St10+Mk,St1826+Pk,St1826+Mk,?,?,St2224+Pk,?>
GR16:   Gr	<?,St09+Mk,St1113+Mk,St15+Pk,St15+Mk,?,?,St2127+Pk>
GR17:	Gr	<St2127+Mk,St2323a+Pk,St2323a+Mk,Kst4,?,?,?,?>
;
	    Stb	9
GR18:	Gr	<St3335+Pk,St3335+Mk,Sp31,K2p,-Sp02+Zs,-Sp04+Zs,Fz1527,Fz1923>
GR19:   Gr	<-sptnp+zs,?,Kt1n,Kt2n,Kt3n,Kt4n,Kt5n,Kt6n>
GR1A:	Gr	<sp18p,Ksnn,Kstn,Kst25,?,?,?,?>
;
	    Stb	10
GR1B:	Gr	<Ksn1+Ms+Rom,Ksn3+Ms+Rom,Ksnm4+Ms+Rom,?,Ksnm6+Ms+Rom,Kst1+Ms+Rom,Kst2+Ms+Rom,Kst4+Ms+Rom>
GR1C:   Gr	<?,Kst25+Ms+Rom,Ksm6+Rom,Ksm8+Rom,Ksm10+Rom,Ksm12+Rom,Ksm14+Rom,Ksm16+Rom>
GR1D:	Gr	<Ksm18+Rom,?,?,Ksz+sost3m,?,?,?,?>
;
	    Stb	11
GR1E:	Gr	<Ksm1+Rom,Ksm3+Rom,Ksm5+Rom,Ksm7+Rom,Ksm9+Rom,Ksm11+Rom,Ksm13+Rom,Ksm15+Rom>
GR1F:   Gr	<Ksm17+Rom,Ksm19+Rom,Ksm21+Rom,Km,knot,Kdn,Kdsn,Kpp>
GR20:   Gr	<?,?,?,?,?,?,?,?>
;
	    Stb	12
GR21:	Gr	<Kf1k,Kf1b,Kf2k,Kf2b,?,Kos,Kom,Kop>
GR22:   Gr	<Kgir,Kp,Sp0113+Ir,Sp0311+Ir,Sp05+Ir,Sp07+Ir,Fi1923,Fi1527>
GR23:	Gr	<Fi2935,Sp31+Ir,Sptnp+Ir,Sp02+Ir,?,?,?,?>
;
	    Stb	13
GR24:	Gr	<Sp04+Ir,Sp0610+Ir,Sp0816+Ir,Sp22+Ir,Sp1826+Ir,?,?,Spnnp+Ir>
GR25:   Gr	<Spnp+Ir,Sptp+Ir,?,uu2t,Krs,Kgs,Sp24+Ir,Kapn>
GR26:	Gr	<?,?,?,?,?,?,?,?>
;
	    Stb	14
GR27:	Gr	<Kndisk,?,-Kr1n,?,?,Ktdisk,?,-Kr1t>
GR28:	Gr	<Ksng,-ksng+av,ksng+ps,-sp07+zs,?,?,?,Kpin>
GR29:	Gr	<Kpit,-pr1+PrAlrm,?,?,?,?,?,?>
;
	    Stb	15
GR2A:	Gr	<ksm22+rom,ksm24+rom,ksm26+rom,ksm23+rom,ksng+ms+rom,St1228+pk,St1228+mk,Sp1228>
GR2B:	Gr	<-Sp1228+zs,Sp1228+Ir,sp09,-sp09+zs,sp09+ir,Kp1b,-Kp1b+zpn,-Kp1b+zpt>
GR2C:	Gr	<Sp1618p,-Sp1618p+zs,Sp1618p+Ir,Ksn1p,?,?,?,?>
;
	    Stb	16
GR2D:	Gr	<kugpa,?,?,?,?,?,?,?>
GR2E:	Gr	<?,?,?,?,?,?,?,?>
GR2F:	Gr	<?,?,?,?,?,?,?,?>

;--------------------------------------------------
	EndGr	NVC
;--------------------------------------------------
;       �������� ������ ���-��
;--------------------------------------------------
		BegTS NVC
;-----------------------------------------------------------------------------------
TS1:	BLKTS 01,'14-143  '
			GRPTS <'2/4��     ','2/4��     ','6/8��     ','10��      ','16��      '>
			GRPTS <'16��      ','22/24��   ','5��       ','1��       ','3�        '>
			GRPTS <'          ','6-10��    ','8-16��    ','18-20��   ','22��      '>
			GRPTS <'6��       ','6-10�     ','18-20�    ','22�       ','24�       '>
;-----------------------------------------------------------------------------------
TS2:	BLKTS 02,'15-137  '
			GRPTS <'1/3��     ','1/3��     ','5/7��     ','5/7��     ','9��       '>
			GRPTS <'11/13��   ','19��      ','19��      ','29/31��   ','29/31��   '>
			GRPTS <'��        ','���       ','1-13��    ','3-11��    ','5��       '>
			GRPTS <'7��       ','19-23��   ','15-27��   ','29-35��   ','3-11�     '>
;-----------------------------------------------------------------------------------
TS3:	BLKTS 03,'11-064  '
			GRPTS <'���       ','�3��      ','��4��     ','�1��      ','�2��      '>
			GRPTS <'���       ','1��       ','3��       ','2��       ','4��       '>
			GRPTS <'���       ','���       ','��        ','��        ','���       '>
			GRPTS <'��        ','��        ','��        ','��        ','��        '>
;-----------------------------------------------------------------------------------
TS4:	BLKTS 04,'16-024  '
			GRPTS <'���       ','���       ','�1�       ','�3�       ','�1�       '>
			GRPTS <'�2�       ','�1�       ','�2�       ','�1�       ','�2�       '>
			GRPTS <'���       ','���       ','�2�       ','��1�      ','��2�      '>
			GRPTS <'��3�      ','��        ','���       ','          ','2��       '>
;-----------------------------------------------------------------------------------
TS5:	BLKTS 05,'16-025  '
			GRPTS <'4��       ','���       ','          ','8-16�     ','          '>
			GRPTS <'1����-�   ','1����-�   ','          ','����      ','          '>
			GRPTS <'1-13�     ','5�        ','          ','2��       ','2��       '>
			GRPTS <'3��       ','3��       ','4��       ','          ','          '>
;-----------------------------------------------------------------------------------
TS6:	BLKTS 06,'42-028  '
			GRPTS <'24��      ','��        ','��        ','��4�      ','��6�      '>
			GRPTS <'          ','1����1dd  ','1����     ','1���      ','1���      '>
			GRPTS <'          ','          ','          ','          ','4��       '>
			GRPTS <'          ','          ','�1�       ','�1�       ','          '>
;-----------------------------------------------------------------------------------
TS7:	BLKTS 07,'16-028  '
			GRPTS <'29-35�    ','31�       ','���       ','���       ','����      '>
			GRPTS <'���       ','���       ','���       ','���       ','���       '>
			GRPTS <'���       ','          ','���       ','          ','���       '>
			GRPTS <'��1��     ','��1��     ','4�        ','��        ','��        '>
;-----------------------------------------------------------------------------------
TS8:	BLKTS 08,'42-131  '
			GRPTS <'6/8��     ','10��      ','18/26��   ','18/26��   ','          '>
			GRPTS <'          ','22/24��   ','          ','          ','9��       '>
			GRPTS <'11/13��   ','15��      ','15��      ','          ','          '>
			GRPTS <'21/27��   ','21/27��   ','23/23���  ','23/23���  ','�4�       '>
;-----------------------------------------------------------------------------------
TS9:	BLKTS 09,'42-132  '
			GRPTS <'33/35��   ','33/35��   ','31��      ','2�        ','2�        '>
			GRPTS <'4�        ','15-27�    ','19-23�    ','����      ','          '>
			GRPTS <'��1�      ','��2�      ','��3�      ','��4�      ','��5�      '>
			GRPTS <'��6�      ','18�       ','���       ','���       ','�25�      '>
;-----------------------------------------------------------------------------------
TS10:	BLKTS 10,'42-133  '
			GRPTS <'�1��      ','�3��      ','��4��     ','          ','��6��     '>
			GRPTS <'�1��      ','�2��      ','�4��      ','          ','�25��     '>
			GRPTS <'�6�       ','�8�       ','�10�      ','�12�      ','�14�      '>
			GRPTS <'�16�      ','�18�      ','          ','          ','��        '>
;-----------------------------------------------------------------------------------
TS11:	BLKTS 11,'42-134  '
			GRPTS <'�1�       ','�3�       ','�5�       ','�7�       ','�9�       '>
			GRPTS <'�11�      ','�13�      ','�15�      ','�17�      ','�19�      '>
			GRPTS <'�21�      ','��        ','�����     ','�����     ','���       '>
			GRPTS <'���       ','          ','          ','          ','          '>
;-----------------------------------------------------------------------------------
TS12:	BLKTS 12,'42-135  '
			GRPTS <'�1�       ','�1�       ','�2�       ','�2�       ','          '>
			GRPTS <'��        ','��        ','��        ','����      ','��        '>
			GRPTS <'1-13��    ','3-11��    ','5��       ','7��       ','19-23��   '>
			GRPTS <'15-27��   ','29-35��   ','31��      ','�����     ','2��       '>
;-----------------------------------------------------------------------------------
TS13:	BLKTS 13,'42-136  '
			GRPTS <'4��       ','6-10��    ','8-16��    ','22��      ','18-20��   '>
			GRPTS <'          ','          ','�����     ','����      ','����      '>
			GRPTS <'          ','�2�       ','���       ','���       ','24��      '>
			GRPTS <'���       ','          ','          ','          ','          '>
;-----------------------------------------------------------------------------------
TS14:	BLKTS 14,'42-152  '
			GRPTS <'�����     ','          ','��1�      ','          ','          '>
			GRPTS <'�����     ','          ','��1�      ','���       ','���       '>
			GRPTS <'����      ','7�        ','          ','          ','          '>
			GRPTS <'���       ','���       ','��        ','          ','          '>
;-----------------------------------------------------------------------------------
TS15:	BLKTS 15,'53-178  '
			GRPTS <'�22�(�)   ','�24�(�)   ','�26�(�)   ','�23�(�)   ','����      '>
			GRPTS <'12/28��   ','12/28��   ','12-28��   ','12-28�    ','12-28��   '>
			GRPTS <'9��       ','9�        ','9��       ','1��       ','1����     '>
			GRPTS <'1����     ','16/18�    ','16/18�    ','16/18��   ','��1 �     '>
;-----------------------------------------------------------------------------------
Ts16:	BlkTs 16,'16-23   '
			GrpTs <'����-��   ','          ','          ','          ','          '>
			GrpTs <'          ','          ','          ','          ','          '>
			GrpTs <'          ','          ','          ','          ','          '>
			GrpTs <'          ','          ','          ','          ','          '>
;-----------------------------------------------------------------------------------
			EndTs NVC
;--------------------------------------------------
;       �������� ������ ���-��
;--------------------------------------------------
        BegTU NVC 
;--------------------------------------------------
Tu1:    DclTu  01,'K1-421  ',<'        ','        ','        ','        ','        ','        ','        ','        '>
;--------------------------------------------------
        EndTU NVC
;--------------------------------------------------
	EndStn	NVC
	END
