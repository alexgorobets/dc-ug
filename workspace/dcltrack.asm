;----------------------------------------------------------------------------
; �������� ��������� �������� ��� ���������� �������� �� ��������
;----------------------------------------------------------------------------

        BegTrack
;----------------------------------------------------------------------------
; �������� ����������� ��������
;----------------------------------------------------------------------------
		
		DclStnBox {NVC,<���...>,"  "}
        DclStnBox {ALK,<���...>,"  "}
		DclStnBox {KZT,<���...>,"  "}
		DclStnBox {PRT,<���...>,"  "}
		DclStnBox {RZV,<���...>,"  "}
		DclStnBox {ZLG,<���...>,"  "}
		DclStnBox {RTV,<���...>,"  "}
		DclStnBox {ZSD,<���...>,"  "}
		DclStnBox {TMR,<���...>,"  "}
		DclStnBox {ZPD,<���...>,"  "}
		DclStnBox {RGL,<���...>,"  "}
		DclStnBox {ZRC,<���...>,"  "}
		DclStnBox {B52,<�52...>,"  "}
		DclStnBox {KZC,<���...>,"  "}
		DclStnBox {B19,<�19...>,"  "}

		DclStnBox {KM7,<��7...>,"  "}
		DclStnBox {BT2,<��2...>,"  "}
		DclStnBox {HTN,<���...>,"  "}
		DclStnBox {GNL,<���...>,"  "}
		DclStnBox {RBG,<���...>,"  "}
		DclStnBox {HPR,<���...>,"  "}

		DclStnBox {BTK,<���...>,"  "}
;----------------------------------------------------------------------------
; �������� ���������� ��������
;----------------------------------------------------------------------------
        DclPrgBox {NVCHTN, <������>,"  ",2,0,20} ; ����� ������� ��� 2-� ��������
  	 	DclPrgBox {HTNNVC, <������>,"  ",2,0,20} ; LIHNVC � RSTUZL
        DclPrgBox {B19KM7, <�19��7>,"  ",3,0,30} ; ����� ������� ��� 2-� ��������
		DclPrgBox {KM7B19, <��7�19>,"  ",3,0,30} ; BTKSTM � RSTUZL
		DclPrgBox {B19GNL, <�19���>,"  ",2,0,30} ; BTKUSP � RSTUZL
		DclPrgBox {RGLRBG, <������>,"  ",2,0,30} ; RSTUZL � BTKUSP
        DclPrgBox {ZPDHPR, <������>,"  ",3,0,30},{HPRZPD, <������>,"  ",3,0,30}


        DclPrgBox {NVCALK, <������>,"  ",3,0,30},{ALKNVC, <������>,"  ",3,0,30}
        DclPrgBox {ALKKZT, <������>,"  ",3,1,30},{KZTALK, <������>,"  ",3,1,30}
        DclPrgBox {KZTPRT, <������>,"  ",3,0,30},{PRTKZT, <������>,"  ",3,0,30}
        DclPrgBox {KZTRZV, <������>,"  ",3,0,20},{RZVKZT, <������>,"  ",3,0,20}
        DclPrgBox {PRTRZV, <������>,"  ",3,0,20}
        DclPrgBox {PRTZLG, <������>,"  ",3,0,20}
        DclPrgBox {RZVRTV, <������>,"  ",3,0,30},{RTVRZV, <������>,"  ",3,0,30}
        DclPrgBox {RTVZSD, <������>,"  ",3,0,30},{ZSDRTV, <������>,"  ",3,0,30}
        DclPrgBox {ZSDTMR, <������>,"  ",3,0,30}
        DclPrgBox {ZSDRGL, <������>,"  ",3,0,30},{RGLZSD, <������>,"  ",3,0,30}
        DclPrgBox {ZPDTMR, <������>,"  ",3,0,30},{TMRZPD, <������>,"  ",3,0,30}
        DclPrgBox {TMRRGL, <������>,"  ",3,0,30},{RGLTMR, <������>,"  ",3,0,30}
        DclPrgBox {RGLZRC, <������>,"  ",3,0,30},{ZRCRGL, <������>,"  ",3,0,30}
        DclPrgBox {ZLGBT2, <�����2>,"  ",3,0,30},{BT2ZLG, <��2���>,"  ",3,0,30}
        DclPrgBox {ZRCB52, <����52>,"  ",3,0,30},{B52ZRC, <�52���>,"  ",3,0,30}
        DclPrgBox {B52BT2, <�52��2>,"  ",3,0,30},{BT2B52, <��2�52>,"  ",3,0,30}
        DclPrgBox {B52B19, <�52�19>,"  ",3,0,30},{B19B52, <�19�52>,"  ",3,0,30}
        DclPrgBox {KZCBT2, <�����2>,"  ",3,0,30}
        DclPrgBox {B19KZC, <�19���>,"  ",3,0,30}
        
;----------------------------------------------------------------------------
; �������� ���������
;----------------------------------------------------------------------------
        DclPrg KM7B19,<��7�19>,KM7B19,<KM7,B19>
        DclPrg B19KM7,<�19��7>,B19KM7,<B19,KM7>
        DclPrg B19GNL,<�19���>,B19GNL,<B19,GNL>
        DclPrg RGLRBG,<������>,RGLRBG,<RGL,RBG>

        DclPrg ZPDHPR,<������>,ZPDHPR,<ZPD,HPR>
        DclPrg HPRZPD,<������>,HPRZPD,<HPR,ZPD>

		DclPrg NVCHTN,<������>,NVCHTN,<NVC,HTN>
        DclPrg HTNNVC,<������>,HTNNVC,<HTN,NVC>

		DclPrg NVCALK,<������>,NVCALK,<NVC,ALK>
        DclPrg ALKNVC,<������>,ALKNVC,<ALK,NVC>
        DclPrg ALKKZT,<������>,ALKKZT,<ALK,KZT>
        DclPrg KZTALK,<������>,KZTALK,<KZT,ALK>
        DclPrg KZTPRT,<������>,KZTPRT,<KZT,PRT>
        DclPrg PRTKZT,<������>,PRTKZT,<PRT,KZT>
        DclPrg KZTRZV,<������>,KZTRZV,<KZT,RZV>
        DclPrg RZVKZT,<������>,RZVKZT,<RZV,KZT>
        DclPrg PRTRZV,<������>,PRTRZV,<PRT,RZV>
        DclPrg PRTZLG,<������>,PRTZLG,<PRT,ZLG>
        DclPrg RZVRTV,<������>,RZVRTV,<RZV,RTV>
        DclPrg RTVRZV,<������>,RTVRZV,<RTV,RZV>
        DclPrg RTVZSD,<������>,RTVZSD,<RTV,ZSD>
        DclPrg ZSDRTV,<������>,ZSDRTV,<ZSD,RTV>
        DclPrg ZSDTMR,<������>,ZSDTMR,<ZSD,TMR>
        DclPrg ZSDRGL,<������>,ZSDRGL,<ZSD,RGL>
        DclPrg RGLZSD,<������>,RGLZSD,<RGL,ZSD>
        DclPrg TMRRGL,<������>,TMRRGL,<TMR,RGL>
        DclPrg RGLTMR,<������>,RGLTMR,<RGL,TMR>
        DclPrg ZPDTMR,<������>,ZPDTMR,<ZPD,TMR>
		DclPrg TMRZPD,<������>,TMRZPD,<TMR,ZPD>
		DclPrg RGLZRC,<������>,RGLZRC,<RGL,ZRC>
        DclPrg ZRCRGL,<������>,ZRCRGL,<ZRC,RGL>
        DclPrg ZLGBT2,<�����2>,ZLGBT2,<ZLG,BT2>
        DclPrg BT2ZLG,<��2���>,BT2ZLG,<BT2,ZLG>
        DclPrg ZRCB52,<����52>,ZRCB52,<ZRC,B52>
        DclPrg B52ZRC,<�52���>,B52ZRC,<B52,ZRC>
		DclPrg B52BT2,<�52��2>,B52BT2,<B52,BT2>
		DclPrg BT2B52,<��2�52>,BT2B52,<BT2,B52>
		DclPrg KZCBT2,<�����2>,KZCBT2,<KZC,BT2>
        DclPrg B52B19,<�52�19>,B52B19,<B52,B19>
        DclPrg B19B52,<�19�52>,B19B52,<B19,B52>
        DclPrg B19KZC,<�19���>,B19KZC,<B19,KZC>

;----------------------------------------------------------------------------
; �������� �������� ��������, ������������� �� �������, �������� � ������
;----------------------------------------------------------------------------
DclTrackKrg <������>,0101,'O',<NVC,ALK,KZT,PRT,RZV,ZLG,RTV,ZSD,TMR,ZPD,RGL,ZRC,B52,BT2,KZC>

	DclObj NVC_up1t, CLASS_UP,<��1�..>,NVC,HTNNVC,<HTN_uu1t,HTN_Spndp>,ODD_BOUND_OBJ,,,HTN,HTN
	DclObj NVC_uu1n, CLASS_UP,<��1�..>,NVC,NVCHTN,<HTN_up1n,HTN_Spnap>,ODD_BOUND_OBJ,,,HTN,HTN
	DclObj NVC_up1n, CLASS_UP,<��1�..>,NVC,ALKNVC,<>,,,,ALK,KZT
	DclObj NVC_up2n, CLASS_UP,<��2�..>,NVC,ALKNVC,<ALK_uu1n>,,,,ALK,KZT
	DclObj NVC_uu1t, CLASS_UP,<��1�..>,NVC,NVCALK,<>,,,,ALK,KZT
	DclObj NVC_uu2t, CLASS_UP,<��2�..>,NVC,NVCALK,<ALK_up2t,ALK_up1t>,,,,ALK,KZT

	DclObj NVC_kp1a, CLASS_KP,<1�....>,NVC,NVC,<>,,1,1
	DclObj NVC_kp1b, CLASS_KP,<1�....>,NVC,NVC,<>,,1,1
	DclObj NVC_kp2a, CLASS_KP,<2�....>,NVC,NVC,<>,,1,2
	DclObj NVC_kp2b, CLASS_KP,<2�....>,NVC,NVC,<>,,1,2
	DclObj NVC_kp3a, CLASS_KP,<3�....>,NVC,NVC,<>,,1,3
	DclObj NVC_kp3b, CLASS_KP,<3�....>,NVC,NVC,<>,,1,3
	DclObj NVC_kp4,  CLASS_KP,<4.....>,NVC,NVC,<>,,1,4
;	DclObj NVC_kp5b, CLASS_KP,<5�....>,NVC,NVC,<>,,1,5
;	DclObj NVC_kp6a, CLASS_KP,<6�....>,NVC,NVC,<>,,1,6

	DclObj NVC_sptp, CLASS_SP,<��....>,NVC,NVC,<>
	DclObj NVC_sptnp,CLASS_SP,<���...>,NVC,NVC,<>
	DclObj NVC_spnp, CLASS_SP,<��....>,NVC,NVC,<>
	DclObj NVC_spnnp,CLASS_SP,<���...>,NVC,NVC,<>
	DclObj NVC_sp1618p,CLASS_SP,<01618�>,NVC,NVC,<>
DclTrackStn NVC,513503,NVC,<NVCALK,ALKNVC,NVCHTN,HTNNVC>,"��_���"

	DclObj ALK_up1t, CLASS_UP,<��1�..>,ALK,NVCALK,<>,,,,NVC,NVC
	DclObj ALK_up2t, CLASS_UP,<��2�..>,ALK,NVCALK,<NVC_uu2t,NVC_uu1t>,,,,NVC,NVC
	DclObj ALK_uu1n, CLASS_UP,<��1�..>,ALK,ALKNVC,<NVC_up2n,NVC_up1n>,,,,NVC,NVC
;	DclObj ALK_uu2n, CLASS_UP,<��2�..>,ALK,ALKNVC,<>,,,,NVC,NVC
	DclObj ALK_up1n, CLASS_UP,<��1�..>,ALK,KZTALK,<>,,,,KZT,KZT
	DclObj ALK_up2n, CLASS_UP,<��2�..>,ALK,KZTALK,<KZT_uu2n,KZT_uu1n>,,,,KZT,KZT
	DclObj ALK_uu1t, CLASS_UP,<��1�..>,ALK,ALKKZT,<KZT_up2t,KZT_up1t>,,,,KZT,KZT
;	DclObj ALK_uu2t, CLASS_UP,<��2�..>,ALK,ALKKZT,<>,,,,KZT,KZT

	DclObj ALK_kp1,  CLASS_KP,<1.....>,ALK,ALK,<>,,1,1
	DclObj ALK_kp2,  CLASS_KP,<2.....>,ALK,ALK,<>,,1,2
	DclObj ALK_kp3,  CLASS_KP,<3.....>,ALK,ALK,<>,,1,3
	DclObj ALK_kp4,  CLASS_KP,<4.....>,ALK,ALK,<>,,1,4

	DclObj ALK_sptp, CLASS_SP,<��....>,ALK,ALK,<>
	DclObj ALK_sptdp,CLASS_SP,<���...>,ALK,ALK,<>
	DclObj ALK_spnp, CLASS_SP,<��....>,ALK,ALK,<>
	DclObj ALK_spndp,CLASS_SP,<���...>,ALK,ALK,<>
DclTrackStn ALK,513541,ALK,<ALKNVC,NVCALK,ALKKZT,KZTALK>,"��_���"

	DclObj KZT_up1t, CLASS_UP,<��1�..>,KZT,ALKKZT,<>,,,,ALK,NVC
	DclObj KZT_up2t, CLASS_UP,<��2�..>,KZT,ALKKZT,<ALK_uu1t>,,,,ALK,NVC
	DclObj KZT_kt6,  CLASS_UP,<��6...>,KZT,ALKKZT,<>,,,,ALK,NVC
	DclObj KZT_kt8,  CLASS_UP,<��8...>,KZT,ALKKZT,<>,,,,ALK,NVC
	DclObj KZT_uu1n, CLASS_UP,<��1�..>,KZT,KZTALK,<>,,,,ALK,NVC
	DclObj KZT_uu2n, CLASS_UP,<��2�..>,KZT,KZTALK,<ALK_up2n,ALK_up1n>,,,,ALK,NVC
	DclObj KZT_kt5,  CLASS_UP,<��5...>,KZT,KZTALK,<>,,,,ALK,NVC
	DclObj KZT_kt7,  CLASS_UP,<��7...>,KZT,KZTALK,<>,,,,ALK,NVC
	DclObj KZT_kt9,  CLASS_UP,<��9...>,KZT,KZTALK,<>,,,,ALK,NVC
	
	DclObj KZT_up1nb,CLASS_UP,<��1��.>,KZT,PRTKZT,<PRT_uu1nk>,,,,PRT,BT2
	DclObj KZT_uu1tb,CLASS_UP,<��1��.>,KZT,KZTPRT,<PRT_up1tk>,,,,PRT,BT2
	DclObj KZT_up1n, CLASS_UP,<��1�..>,KZT,RZVKZT,<>,,,,RZV,ZSD
	DclObj KZT_up2n, CLASS_UP,<��2�..>,KZT,RZVKZT,<RZV_uu1n>,,,,RZV,ZSD
	DclObj KZT_uu1t, CLASS_UP,<��1�..>,KZT,KZTRZV,<RZV_up2t,RZV_up1t>,,,,RZV,ZSD

	DclObj KZT_kp3a, CLASS_KP,<3�....>,KZT,KZT,<>,,1,3
	DclObj KZT_kp3,  CLASS_KP,<3.....>,KZT,KZT,<>,,2,3
	DclObj KZT_kp2,  CLASS_KP,<2.....>,KZT,KZT,<>,,2,2
	DclObj KZT_kp4,  CLASS_KP,<4.....>,KZT,KZT,<>,,2,4
	DclObj KZT_kp5a, CLASS_KP,<5�....>,KZT,KZT,<>,,2,5
	DclObj KZT_kp6a, CLASS_KP,<6�....>,KZT,KZT,<>,,2,6
	DclObj KZT_kp7a, CLASS_KP,<7�....>,KZT,KZT,<>,,2,7
	DclObj KZT_kp1b, CLASS_KP,<1�....>,KZT,KZT,<>,,3,1
	DclObj KZT_kp2b, CLASS_KP,<2�....>,KZT,KZT,<>,,3,2
	DclObj KZT_kp3b, CLASS_KP,<3�....>,KZT,KZT,<>,,3,3

	DclObj KZT_sptp, CLASS_SP,<��....>,KZT,KZT,<>
	DclObj KZT_spnp, CLASS_SP,<��....>,KZT,KZT,<>
	DclObj KZT_spnbp,CLASS_SP,<���...>,KZT,KZT,<>
	DclObj KZT_sp3743,CLASS_SP,<037043>,KZT,KZT,<>
	DclObj KZT_sp5557,CLASS_SP,<055057>,KZT,KZT,<>
	DclObj KZT_sp12, CLASS_SP,<012...>,KZT,KZT,<>
	DclObj KZT_sp33, CLASS_SP,<033...>,KZT,KZT,<>
DclTrackStn KZT,513607,KZT,<ALKKZT,KZTALK,PRTKZT,KZTPRT,RZVKZT,KZTRZV>,"��_���"

	DclObj PRT_up1tk,CLASS_UP,<��1��.>,PRT,KZTPRT,<KZT_uu1tb>,,,,KZT,NVC
	DclObj PRT_uu1nk,CLASS_UP,<��1��.>,PRT,PRTKZT,<KZT_up1nb>,,,,KZT,NVC
	DclObj PRT_up1n, CLASS_UP,<��1�..>,PRT,PRTZLG,<ZLG_up1t>,,,,ZLG,BT2

	DclObj PRT_sp1a, CLASS_SP,<1�....>,PRT,PRT,<RZV_up1tb>
	DclObj PRT_sp01, CLASS_SP,<001...>,PRT,PRT,<>
	DclObj PRT_sp03, CLASS_SP,<003...>,PRT,PRT,<>
	DclObj PRT_sp04, CLASS_SP,<004...>,PRT,PRT,<>
DclTrackStn PRT,510064,PRT,<PRTKZT,KZTPRT,PRTZLG,PRTRZV>,"��_���"

	DclObj ZLG_up1t, CLASS_UP,<��1�..>,ZLG,PRTZLG,<PRT_up1n>,,,,PRT,PRT
	DclObj ZLG_up1nw,CLASS_UP,<��1��.>,ZLG,BT2ZLG,<BT2_uu18n>,,,,BT2,BT2
	DclObj ZLG_up1n, CLASS_UP,<��1�..>,ZLG,ZLGBT2,<BT2_kp4>,,,,BT2,BT2

	DclObj ZLG_kp1,  CLASS_KP,<1.....>,ZLG,ZLG,<>,,1,1
	DclObj ZLG_kp2,  CLASS_KP,<2.....>,ZLG,ZLG,<>,,1,2
	DclObj ZLG_kp3,  CLASS_KP,<3.....>,ZLG,ZLG,<>,,1,3

	DclObj ZLG_sp0204,CLASS_SP,<002004>,ZLG,ZLG,<>
	DclObj ZLG_sp0305,CLASS_SP,<003005>,ZLG,ZLG,<>
	DclObj ZLG_sp01, CLASS_SP,<001...>,ZLG,ZLG,<>
	DclObj ZLG_sp03, CLASS_SP,<003...>,ZLG,ZLG,<>
DclTrackStn ZLG,510050,ZLG,<PRTZLG,ZLGBT2,BT2ZLG>,"��_���"

	DclObj RZV_uu1n, CLASS_UP,<��1�..>,RZV,RZVKZT,<KZT_up2n,KZT_up1n>,,,,KZT,NVC
	DclObj RZV_up1t, CLASS_UP,<��1�..>,RZV,KZTRZV,<>,,,,KZT,NVC
	DclObj RZV_up2t, CLASS_UP,<��2�..>,RZV,KZTRZV,<KZT_uu1t>,,,,KZT,NVC
	DclObj RZV_up1n, CLASS_UP,<��1�..>,RZV,RTVRZV,<>,,,,RTV,ZSD
	DclObj RZV_up2n, CLASS_UP,<��2�..>,RZV,RTVRZV,<RTV_uu1n>,,,,RTV,ZSD
	DclObj RZV_uu1t, CLASS_UP,<��1�..>,RZV,RZVRTV,<>,,,,RTV,ZSD
	DclObj RZV_uu2t, CLASS_UP,<��2�..>,RZV,RZVRTV,<RTV_up1t>,,,,RTV,ZSD
	DclObj RZV_up1tb,CLASS_UP,<��1��.>,RZV,PRTRZV,<PRT_sp1a>,,,,PRT,BT2

	DclObj RZV_kp3,  CLASS_KP,<3.....>,RZV,RZV,<>,,1,3
	DclObj RZV_kp4,  CLASS_KP,<4.....>,RZV,RZV,<>,,1,4

	DclObj RZV_sp02,  CLASS_SP,<002...>,RZV,RZV,<>
	DclObj RZV_sp0305,CLASS_SP,<003005>,RZV,RZV,<>
	DclObj RZV_spndp, CLASS_SP,<���...>,RZV,RZV,<>
	DclObj RZV_sp01,  CLASS_SP,<001...>,RZV,RZV,<>
	DclObj RZV_sp1p,  CLASS_SP,<01�...>,RZV,RZV,<>
DclTrackStn RZV,510126,RZV,<PRTRZV,KZTRZV,RZVKZT,RZVRTV,RTVRZV>,"��_���"

	DclObj RTV_up1t,  CLASS_UP,<��1�..>,RTV,RZVRTV,<RZV_uu2t,RZV_uu1t>,,,,RZV,RZV
	DclObj RTV_uu1n,  CLASS_UP,<��1�..>,RTV,RTVRZV,<RZV_up2n,RZV_up1n>,,,,RZV,RZV
	DclObj RTV_up1n,  CLASS_UP,<��1�..>,RTV,ZSDRTV,<>,,,,ZSD,ZSD
	DclObj RTV_up2n,  CLASS_UP,<��2�..>,RTV,ZSDRTV,<ZSD_uu1n>,,,,ZSD,ZSD
	DclObj RTV_uu1t,  CLASS_UP,<��1�..>,RTV,RTVZSD,<ZSD_up1t>,,,,ZSD,ZSD

	DclObj RTV_kp1a,  CLASS_KP,<1�....>,RTV,RTV,<>,,1,1
	DclObj RTV_kp2a,  CLASS_KP,<2�....>,RTV,RTV,<>,,1,2
	DclObj RTV_kp3a,  CLASS_KP,<3�....>,RTV,RTV,<>,,1,3
	DclObj RTV_kp4a,  CLASS_KP,<4�....>,RTV,RTV,<>,,1,4
	DclObj RTV_kp5a,  CLASS_KP,<5�....>,RTV,RTV,<>,,1,5
	DclObj RTV_kp6a,  CLASS_KP,<6�....>,RTV,RTV,<>,,1,6
	DclObj RTV_kp7a,  CLASS_KP,<7�....>,RTV,RTV,<>,,1,7
	DclObj RTV_kp14a, CLASS_KP,<14�...>,RTV,RTV,<>,,1,14
	DclObj RTV_kp9v,  CLASS_KP,<9�....>,RTV,RTV,<>,,2,9
	DclObj RTV_kp19v, CLASS_KP,<19�...>,RTV,RTV,<>,,2,19
	DclObj RTV_kp20v, CLASS_KP,<20�...>,RTV,RTV,<>,,2,20
	DclObj RTV_kp1v,  CLASS_KP,<1�....>,RTV,RTV,<>,,3,1
	DclObj RTV_kp2v,  CLASS_KP,<2�....>,RTV,RTV,<>,,3,2
	DclObj RTV_kp3v,  CLASS_KP,<3�....>,RTV,RTV,<>,,3,3
	DclObj RTV_kp4v,  CLASS_KP,<4�....>,RTV,RTV,<>,,3,4
	DclObj RTV_kp5v,  CLASS_KP,<5�....>,RTV,RTV,<>,,3,5
	DclObj RTV_kp6v,  CLASS_KP,<6�....>,RTV,RTV,<>,,3,6
	DclObj RTV_kp10v, CLASS_KP,<10�...>,RTV,RTV,<>,,3,10
	DclObj RTV_kp10va,CLASS_KP,<10��..>,RTV,RTV,<>,,4,10

	DclObj RTV_spnop, CLASS_SP,<���...>,RTV,RTV,<>
	DclObj RTV_spnp,  CLASS_SP,<��....>,RTV,RTV,<>
	DclObj RTV_sptop, CLASS_SP,<���...>,RTV,RTV,<>
	DclObj RTV_sptp,  CLASS_SP,<��....>,RTV,RTV,<>
	DclObj RTV_sptsp, CLASS_SP,<���...>,RTV,RTV,<>
	DclObj RTV_sp1828,CLASS_SP,<018028>,RTV,RTV,<>
	DclObj RTV_sp0442,CLASS_SP,<004042>,RTV,RTV,<>
	DclObj RTV_sp2228,CLASS_SP,<022028>,RTV,RTV,<>
	DclObj RTV_sp92102,CLASS_SP,<092102>,RTV,RTV,<>
	DclObj RTV_sp0139,CLASS_SP,<001039>,RTV,RTV,<>
	DclObj RTV_sp0543,CLASS_SP,<005043>,RTV,RTV,<>
	DclObj RTV_sp1531,CLASS_SP,<015031>,RTV,RTV,<>
	DclObj RTV_sp1523,CLASS_SP,<015023>,RTV,RTV,<>
	DclObj RTV_sp0913,CLASS_SP,<009013>,RTV,RTV,<>
DclTrackStn RTV,510100,RTV,<RZVRTV,RTVRZV,RTVZSD,ZSDRTV>,"��_���"

	DclObj ZSD_up1t,  CLASS_UP,<��1�..>,ZSD,RTVZSD,<RTV_uu1t>,,,,RTV,RZV
	DclObj ZSD_uu1n,  CLASS_UP,<��1�..>,ZSD,ZSDRTV,<RTV_up2n,RTV_up1n>,,,,RTV,RZV
	DclObj ZSD_up1n,  CLASS_UP,<��1�..>,ZSD,RGLZSD,<RGL_uu1tl>,,,,RGL,RGL
	DclObj ZSD_uu1t,  CLASS_UP,<��1�..>,ZSD,ZSDRGL,<RGL_up1tl>,,,,RGL,RGL

	DclObj ZSD_kp1,   CLASS_KP,<1.....>,ZSD,ZSD,<>,,1,1
	DclObj ZSD_kp2,   CLASS_KP,<2.....>,ZSD,ZSD,<>,,1,2
	DclObj ZSD_kp3,   CLASS_KP,<3.....>,ZSD,ZSD,<>,,1,3
	DclObj ZSD_kp4,   CLASS_KP,<4.....>,ZSD,ZSD,<>,,1,4

	DclObj ZSD_sptap, CLASS_SP,<���...>,ZSD,ZSD,<>
	DclObj ZSD_sptdp, CLASS_SP,<���...>,ZSD,ZSD,<>
	DclObj ZSD_spnap, CLASS_SP,<���...>,ZSD,ZSD,<>
	DclObj ZSD_spndp, CLASS_SP,<���...>,ZSD,ZSD,<>
	DclObj ZSD_spntp, CLASS_SP,<���...>,ZSD,ZSD,<TMR_sptzap>
	DclObj ZSD_sp1ndp,CLASS_SP,<1���..>,ZSD,ZSD,<>
DclTrackStn ZSD,510153,ZSD,<RTVZSD,ZSDRTV,ZSDTMR,ZSDRGL,RGLZSD>,"��_���"

	DclObj TMR_up1t,  CLASS_UP,<��1�..>,TMR,RGLTMR,<RGL_uu1tm>,,,,RGL,RGL
;	DclObj TMR_up2t,  CLASS_UP,<��2�..>,TMR,RGLTMR,<RGL_uu1nm>,,,,RGL,RGL
	DclObj TMR_uu1n,  CLASS_UP,<��1�..>,TMR,TMRRGL,<RGL_up1tm>,,,,RGL,RGL
	DclObj TMR_up1n,  CLASS_UP,<��1�..>,TMR,ZPDTMR,<ZPD_uu1n>,,,,ZPD,HPR
	DclObj TMR_uu1t,  CLASS_UP,<��1�..>,TMR,TMRZPD,<>,,,,ZPD,HPR
	DclObj TMR_uu2t,  CLASS_UP,<��2�..>,TMR,TMRZPD,<ZPD_up2t,ZPD_up1t>,,,,ZPD,HPR

	DclObj TMR_kp2,   CLASS_KP,<2.....>,TMR,TMR,<>,,1,2
	DclObj TMR_kp3,   CLASS_KP,<3.....>,TMR,TMR,<>,,1,3
	DclObj TMR_kp4,   CLASS_KP,<4.....>,TMR,TMR,<>,,1,4

	DclObj TMR_sptzap,CLASS_SP,<����..>,TMR,TMR,<ZSD_spntp>
	DclObj TMR_sptap, CLASS_SP,<���...>,TMR,TMR,<>
	DclObj TMR_sptdp, CLASS_SP,<���...>,TMR,TMR,<>
	DclObj TMR_spnap, CLASS_SP,<���...>,TMR,TMR,<>
	DclObj TMR_spndp, CLASS_SP,<���...>,TMR,TMR,<>
DclTrackStn TMR,510238,TMR,<ZSDTMR,TMRRGL,RGLTMR,ZPDTMR,TMRZPD>,"��_���"

	DclObj ZPD_uu1t,  CLASS_UP,<��1�..>,ZPD,ZPDHPR,<HPR_up1tz,HPR_sp02>,EVEN_BOUND_OBJ,,,HPR,HPR
	DclObj ZPD_up1n,  CLASS_UP,<��1�..>,ZPD,HPRZPD,<>,,,,HPR,HPR
	DclObj ZPD_up2n,  CLASS_UP,<��2�..>,ZPD,HPRZPD,<HPR_uu1nz,HPR_sp0406>,EVEN_BOUND_OBJ,,,HPR,HPR
	DclObj ZPD_up1t,  CLASS_UP,<��1�..>,ZPD,TMRZPD,<>,,,,TMR,TMR
	DclObj ZPD_up2t,  CLASS_UP,<��2�..>,ZPD,TMRZPD,<TMR_uu2t,TMR_uu1t>,,,,TMR,TMR
	DclObj ZPD_uu1n,  CLASS_UP,<��1�..>,ZPD,ZPDTMR,<TMR_up1n>,,,,TMR,TMR

	DclObj ZPD_kp1,   CLASS_KP,<1.....>,ZPD,ZPD,<>,,1,1
	DclObj ZPD_kp2,   CLASS_KP,<2.....>,ZPD,ZPD,<>,,1,2
	DclObj ZPD_kp3,   CLASS_KP,<3.....>,ZPD,ZPD,<>,,1,3
	DclObj ZPD_kp4,   CLASS_KP,<4.....>,ZPD,ZPD,<>,,1,4
	DclObj ZPD_kp5,   CLASS_KP,<5.....>,ZPD,ZPD,<>,,1,5
	DclObj ZPD_kp6,   CLASS_KP,<6.....>,ZPD,ZPD,<>,,1,6
	DclObj ZPD_kp7,   CLASS_KP,<7.....>,ZPD,ZPD,<>,,1,7
	DclObj ZPD_kp8,   CLASS_KP,<8.....>,ZPD,ZPD,<>,,1,8
	DclObj ZPD_kp9,   CLASS_KP,<9.....>,ZPD,ZPD,<>,,1,9

	DclObj ZPD_sptp,  CLASS_SP,<��....>,ZPD,ZPD,<>
	DclObj ZPD_sptdp, CLASS_SP,<���...>,ZPD,ZPD,<>
	DclObj ZPD_spnp,  CLASS_SP,<��....>,ZPD,ZPD,<>
	DclObj ZPD_spndp, CLASS_SP,<���...>,ZPD,ZPD,<>
	DclObj ZPD_sp0216,CLASS_SP,<002016>,ZPD,ZPD,<>
DclTrackStn ZPD,510401,ZPD,<ZPDTMR,TMRZPD,ZPDHPR,HPRZPD>,"��_���"

	DclObj RGL_up1tm, CLASS_UP,<��1��.>,RGL,TMRRGL,<TMR_uu1n>,,,,TMR,ZPD
	DclObj RGL_uu1tm, CLASS_UP,<��1��.>,RGL,TMRRGL,<TMR_up1t>,,,,TMR,ZPD
	DclObj RGL_up1tl, CLASS_UP,<��1��.>,RGL,ZSDRGL,<ZSD_uu1t>,,,,ZSD,RZV
	DclObj RGL_uu1tl, CLASS_UP,<��1��.>,RGL,ZSDRGL,<ZSD_up1n>,,,,ZSD,RZV
;	DclObj RGL_uu1nl, CLASS_UP,<��1��.>,RGL,RGLZSD,<ZSD_up1n>,,,,ZSD,RZV
;	DclObj RGL_uu1nm, CLASS_UP,<��1��.>,RGL,RGLTMR,<TMR_up2t,TMR_up1t>,,,,TMR,ZPD
	DclObj RGL_uu1t,  CLASS_UP,<��1�..>,RGL,RGLZRC,<ZRC_spbp>,,,,ZRC,KZC

	DclObj RGL_kp1,   CLASS_KP,<1.....>,RGL,RGL,<>,,1,1
	DclObj RGL_kp2,   CLASS_KP,<2.....>,RGL,RGL,<>,,1,2
	DclObj RGL_kp3,   CLASS_KP,<3.....>,RGL,RGL,<>,,1,3
	DclObj RGL_kp4,   CLASS_KP,<4.....>,RGL,RGL,<>,,1,4
	DclObj RGL_kp5,   CLASS_KP,<5.....>,RGL,RGL,<>,,1,5
	DclObj RGL_kp1w,  CLASS_KP,<1�....>,RGL,RGL,<>,,2,1
	DclObj RGL_kp2w,  CLASS_KP,<2�....>,RGL,RGL,<>,,2,2
	DclObj RGL_kp3w,  CLASS_KP,<3�....>,RGL,RGL,<>,,2,3
	DclObj RGL_kp4w,  CLASS_KP,<4�....>,RGL,RGL,<>,,2,4
	DclObj RGL_kp5w,  CLASS_KP,<5�....>,RGL,RGL,<>,,2,5
	DclObj RGL_kp1b,  CLASS_KP,<1�....>,RGL,RGL,<>,,3,1
	DclObj RGL_kp5a,  CLASS_KP,<5�....>,RGL,RGL,<>,,4,5

	DclObj RGL_sptlp, CLASS_SP,<���...>,RGL,RGL,<>
	DclObj RGL_sptmp, CLASS_SP,<���...>,RGL,RGL,<>
	DclObj RGL_spnbp, CLASS_SP,<���...>,RGL,RGL,<RBG_sp302312>,EVEN_BOUND_OBJ,,,RBG,RBG
	DclObj RGL_spnp,  CLASS_SP,<��....>,RGL,RGL,<ZRC_spap>
	DclObj RGL_sp0103,CLASS_SP,<001003>,RGL,RGL,<>
	DclObj RGL_sp0131,CLASS_SP,<001031>,RGL,RGL,<>
	DclObj RGL_sp0228,CLASS_SP,<002028>,RGL,RGL,<>
	DclObj RGL_sp3264,CLASS_SP,<032064>,RGL,RGL,<>
	DclObj RGL_sp6276,CLASS_SP,<062076>,RGL,RGL,<>
	DclObj RGL_sp0363,CLASS_SP,<003063>,RGL,RGL,<>
	DclObj RGL_sp0363a,CLASS_SP,<003064>,RGL,RGL,<>
	DclObj RGL_sp0521,CLASS_SP,<005021>,RGL,RGL,<>
DclTrackStn RGL,510204,RGL,<TMRRGL,RGLTMR,ZSDRGL,RGLZSD,ZRCRGL,RGLZRC,RGLRBG>,"��_���"

	DclObj ZRC_up1n,  CLASS_UP, <��1�..>,ZRC,B52ZRC,<B52_uu1n>,,,,B52,B52
	DclObj ZRC_uu1t,  CLASS_UP, <��1�..>,ZRC,ZRCB52,<B52_up1t>,,,,B52,B52

	DclObj ZRC_kp1,   CLASS_KP, <1.....>,ZRC,ZRC,<>,,1,1
	DclObj ZRC_kp2,   CLASS_KP, <2.....>,ZRC,ZRC,<>,,1,2
	DclObj ZRC_kp3,   CLASS_KP, <3.....>,ZRC,ZRC,<>,,1,3
	DclObj ZRC_kp4,   CLASS_KP, <4.....>,ZRC,ZRC,<>,,1,4
	DclObj ZRC_kp5,   CLASS_KP, <5.....>,ZRC,ZRC,<>,,1,5
	DclObj ZRC_kp6,   CLASS_KP, <6.....>,ZRC,ZRC,<>,,1,6
	DclObj ZRC_kp7,   CLASS_KP, <7.....>,ZRC,ZRC,<>,,1,7
	DclObj ZRC_kp8,   CLASS_KP, <8.....>,ZRC,ZRC,<>,,1,8
	DclObj ZRC_kp3a,  CLASS_KP, <3�....>,ZRC,ZRC,<>,,2,3

	DclObj ZRC_sptwp, CLASS_SP, <���...>,ZRC,ZRC,<>
	DclObj ZRC_spap,  CLASS_SP, <��....>,ZRC,ZRC,<RGL_spnp>
	DclObj ZRC_spbp,  CLASS_SP, <��....>,ZRC,ZRC,<RGL_uu1t>
	DclObj ZRC_spnp,  CLASS_SP, <��....>,ZRC,ZRC,<>
	DclObj ZRC_spnwp, CLASS_SP, <���...>,ZRC,ZRC,<>
	DclObj ZRC_sp0123,CLASS_SP, <001023>,ZRC,ZRC,<>
	DclObj ZRC_sp0321,CLASS_SP, <003021>,ZRC,ZRC,<>
	DclObj ZRC_sp29,  CLASS_SP, <029...>,ZRC,ZRC,<>
DclTrackStn ZRC,510702,ZRC,<RGLZRC,ZRCRGL,ZRCB52,B52ZRC>,"��_���"

	DclObj B52_up1t,  CLASS_UP,<��1�..>,B52,ZRCB52,<ZRC_uu1t>,,,,ZRC,RGL
	DclObj B52_uu1n,  CLASS_UP,<��1�..>,B52,B52ZRC,<ZRC_up1n>,,,,ZRC,RGL
	DclObj B52_up1n,  CLASS_UP,<��1�..>,B52,B19B52,<B19_uunzz,B19_uunzg>,,,,B19,KM7
    DclObj B52_uu1t,  CLASS_UP,<��1�..>,B52,B52B19,<B19_uptz2,B19_uptz1>,,,,B19,KM7
	DclObj B52_sp1r,  CLASS_SP,<1�....>,B52,B52BT2,<BT2_sp606>
	DclObj B52_sptp,  CLASS_SP,<��....>,B52,B52,<>
	DclObj B52_sptdp, CLASS_SP,<���...>,B52,B52,<>
	DclObj B52_sp104, CLASS_SP,<104...>,B52,B52,<>
	DclObj B52_sp102, CLASS_SP,<102...>,B52,B52,<>
	DclObj B52_sp106, CLASS_SP,<106...>,B52,B52,<BT2_sp2r>
DclTrackStn B52,510011,B52,<B52ZRC,ZRCB52,B52BT2,BT2B52,B19B52,B52B19>,"��_���"

	DclObj BT2_uu18n, CLASS_UP,<��18�.>,BT2,BT2ZLG,<ZLG_up1nw>,,,,ZLG,PRT,13	; 4 - ����� ��� ������
	DclObj BT2_up1tg, CLASS_UP,<��1��.>,BT2,KZCBT2,<KZC_sptap,KZC_sp02,KZC_kp1,KZC_kp2>,,,,KZC,B19
	DclObj BT2_up1tk, CLASS_UP,<��1��.>,BT2,BT2ZLG,<>,,,,ZLG,PRT

	DclObj BT2_kp4,   CLASS_KP,<4.....>,BT2,BT2,<ZLG_up1n>,,2,4
	DclObj BT2_kp6,   CLASS_KP,<6.....>,BT2,BT2,<>,,2,6,,,8	; 6 - ����� ��� ������
	DclObj BT2_kp19w, CLASS_KP,<19�...>,BT2,BT2,<>,,4,19
	DclObj BT2_kp1a,  CLASS_KP,<1�....>,BT2,BT2,<BT1_sp765>,   EVEN_BOUND_OBJ,1,1,BT1,BT1
	DclObj BT2_kp5a,  CLASS_KP,<5�....>,BT2,BT2,<BT1_sp71768>, EVEN_BOUND_OBJ,1,5,BT1,BT1
	DclObj BT2_kp6a,  CLASS_KP,<6�....>,BT2,BT2,<BT1_sp8688>,  EVEN_BOUND_OBJ,1,6,BT1,BT1
	DclObj BT2_kp7a,  CLASS_KP,<7�....>,BT2,BT2,<BT1_sp8688>,  EVEN_BOUND_OBJ,1,7,BT1,BT1
	DclObj BT2_kp8a,  CLASS_KP,<8�....>,BT2,BT2,<BT1_sp8094>,  EVEN_BOUND_OBJ,1,8,BT1,BT1
	DclObj BT2_kp9a,  CLASS_KP,<9�....>,BT2,BT2,<BT1_sp8094>,  EVEN_BOUND_OBJ,1,9,BT1,BT1
	DclObj BT2_kp10a, CLASS_KP,<10�...>,BT2,BT2,<BT1_sp7892>,  EVEN_BOUND_OBJ,1,10,BT1,BT1
	DclObj BT2_kp11a, CLASS_KP,<11�...>,BT2,BT2,<BT1_sp7892>,  EVEN_BOUND_OBJ,1,11,BT1,BT1
	DclObj BT2_kp12a, CLASS_KP,<12�...>,BT2,BT2,<BT1_sp7892>,  EVEN_BOUND_OBJ,1,12,BT1,BT1
	DclObj BT2_kp13a, CLASS_KP,<13�...>,BT2,BT2,<BT1_sp7074>,  EVEN_BOUND_OBJ,1,13,BT1,BT1
	DclObj BT2_kp14a, CLASS_KP,<14�...>,BT2,BT2,<BT1_sp7074>,  EVEN_BOUND_OBJ,1,14,BT1,BT1
	DclObj BT2_kp15a, CLASS_KP,<15�...>,BT2,BT2,<BT1_sp69>,    EVEN_BOUND_OBJ,1,15,BT1,BT1
	DclObj BT2_kp12w, CLASS_KP,<12�...>,BT2,BT2,<B21_sp421>,   EVEN_BOUND_OBJ,3,12,B21,B21
	DclObj BT2_kp13w, CLASS_KP,<13�...>,BT2,BT2,<B21_sp421>,   EVEN_BOUND_OBJ,3,13,B21,B21
	DclObj BT2_kp14w, CLASS_KP,<14�...>,BT2,BT2,<B21_sp415417>,EVEN_BOUND_OBJ,3,14,B21,B21
	DclObj BT2_kp15w, CLASS_KP,<15�...>,BT2,BT2,<B21_sp407>,   EVEN_BOUND_OBJ,3,15,B21,B21
	DclObj BT2_kp16w, CLASS_KP,<16�...>,BT2,BT2,<B21_sp407>,   EVEN_BOUND_OBJ,3,16,B21,B21
	DclObj BT2_kp18w, CLASS_KP,<18�...>,BT2,BT2,<B21_sp413>,   EVEN_BOUND_OBJ,3,18,B21,B21
	DclObj BT2_kp19wa,CLASS_KP,<19��..>,BT2,BT2,<B21_sp401403>,EVEN_BOUND_OBJ,3,19,B21,B21

	DclObj BT2_sp2r,    CLASS_SP,<2�....>,BT2,BT2,<B52_sp106>
;	DclObj BT2_sptrp,   CLASS_SP,<���...>,BT2,BT2,<>,,,,,,4		; 7 - ����� ��� ������
	DclObj BT2_sp6b,    CLASS_SP,<6��...>,BT2,BT2,<>
	DclObj BT2_sptgap,  CLASS_SP,<����..>,BT2,BT2,<>
	DclObj BT2_sptgp,   CLASS_SP,<���...>,BT2,BT2,<>
	DclObj BT2_sp2ap,   CLASS_SP,<2��...>,BT2,BT2,<>
	DclObj BT2_sptrmp,  CLASS_SP,<����..>,BT2,BT2,<>,,,,,,4		; 7 - ����� ��� ������
	DclObj BT2_sp52608, CLASS_SP,<052608>,BT2,BT2,<>
	DclObj BT2_sp2p,    CLASS_SP,<2�....>,BT2,BT2,<>,,,,,,6		; 2 - ����� ��� ������
	DclObj BT2_sp3p,    CLASS_SP,<3�....>,BT2,BT2,<>,,,,,,15	; 5 - ����� ��� ������
	DclObj BT2_sp3ap,   CLASS_SP,<3��...>,BT2,BT2,<>
	DclObj BT2_sp1242,  CLASS_SP,<012042>,BT2,BT2,<>
	DclObj BT2_sp4250,  CLASS_SP,<042050>,BT2,BT2,<>
	DclObj BT2_sp14616, CLASS_SP,<014616>,BT2,BT2,<>
	DclObj BT2_sp620,	CLASS_SP,<620...>,BT2,BT2,<>,,,,,,10	; 3 - ����� ��� ������
	DclObj BT2_sp520620,CLASS_SP,<520620>,BT2,BT2,<>
	DclObj BT2_sp522530,CLASS_SP,<522530>,BT2,BT2,<>
	DclObj BT2_sp36530, CLASS_SP,<036530>,BT2,BT2,<>
	DclObj BT2_sp5456,  CLASS_SP,<054056>,BT2,BT2,<>
	DclObj BT2_sp67277, CLASS_SP,<067277>,BT2,BT2,<>
	DclObj BT2_spm203p, CLASS_SP,<�203�.>,BT2,BT2,<>
	DclObj BT2_sp101609,CLASS_SP,<101609>,BT2,BT2,<>
	DclObj BT2_sp35615, CLASS_SP,<035615>,BT2,BT2,<>
	DclObj BT2_sp3549,  CLASS_SP,<035049>,BT2,BT2,<>
	DclObj BT2_sp105617,CLASS_SP,<105617>,BT2,BT2,<>
;	DclObj BT2_sp122124,CLASS_SP,<122124>,BT2,BT2,<>
;	DclObj BT2_sp60112,CLASS_SP,<060112>,BT2,BT2,<>,,,,,,10	; 3 - ����� ��� ������
	DclObj BT2_sp606, CLASS_SP,<606...>,BT2,BT2,<B52_sp1r>
;	DclObj BT2_sp602, CLASS_SP,<602...>,BT2,BT2,<B52_sp2r>
	DclObj BT2_sp6567,CLASS_SP,<065067>,BT2,BT2,<BT1_sp69>,EVEN_BOUND_OBJ,,,BT1,BT1
DclTrackStn BT2,510007,BT2,<ZLGBT2,BT2ZLG,KZCBT2,BT2B52,B52BT2>,"��_���"

;	DclObj KZC_up1n,  CLASS_UP,<��1�..>,KZC,B19KZC,<>
;	DclObj KZC_up2n,  CLASS_UP,<��2�..>,KZC,B19KZC,<>

	DclObj KZC_kp1,   CLASS_KP,<1.....>,KZC,KZC,<>,,1,1
	DclObj KZC_kp2,   CLASS_KP,<2.....>,KZC,KZC,<>,,1,2

	DclObj KZC_spnap, CLASS_SP,<���...>,KZC,KZC,<B19_sptp,B19_sp101>
	DclObj KZC_sptap, CLASS_SP,<���...>,KZC,KZC,<BT2_up1tg,BT2_sptgp>
	DclObj KZC_sp02,  CLASS_SP,<002...>,KZC,KZC,<>
DclTrackStn KZC,510079,KZC,<KZCBT2>,"��_���"
	
;	DclObj B19_up1t,  CLASS_UP,<��1�..>,B19,B19KZC,<>,,,,KZC,BT2
;	DclObj B19_up2t,  CLASS_UP,<��2�..>,B19,B19KZC,<>,,,,KZC,BT2
    DclObj B19_up1n,  CLASS_UP,<��1�..>,B19,B19GNL,<>,,,,GNL,GNL
	DclObj B19_up2n,  CLASS_UP,<��2�..>,B19,B19GNL,<GNL_up2tb,GNL_up1tb>,EVEN_BOUND_OBJ,,,GNL,GNL
    DclObj B19_uunzg, CLASS_UP,<�����.>,B19,B19B52,<>,,,,B52,RGL
	DclObj B19_uunzz, CLASS_UP,<�����.>,B19,B19B52,<B52_up1n,B52_sp104>,,,,B52,RGL
    DclObj B19_uptz1, CLASS_UP,<����1.>,B19,B52B19,<>,,,,B52,RGL
	DclObj B19_uptz2, CLASS_UP,<����2.>,B19,B52B19,<B52_uu1t,B52_sp102>,,,,B52,RGL
    DclObj B19_upns1, CLASS_UP,<����1.>,B19,KM7B19,<>,,,,KM7,KM7
	DclObj B19_upns2, CLASS_UP,<����2.>,B19,KM7B19,<KM7_uu2nk,KM7_uu1nk>,EVEN_BOUND_OBJ,,,KM7,KM7
    DclObj B19_uutsg, CLASS_UP,<�����.>,B19,B19KM7,<>,,,,KM7,KM7
	DclObj B19_uutsz, CLASS_UP,<�����.>,B19,B19KM7,<KM7_up2tk,KM7_up1tk>,EVEN_BOUND_OBJ,,,KM7,KM7

	DclObj B19_kp1,   CLASS_KP,<1.....>,B19,B19,<>,,1,1

	DclObj B19_sptp,  CLASS_SP,<��....>,B19,B19,<KZC_spnap>
	DclObj B19_sp101, CLASS_SP,<101...>,B19,B19,<>
	DclObj B19_sptzp, CLASS_SP,<���...>,B19,B19,<>
	DclObj B19_sptzdp,CLASS_SP,<����..>,B19,B19,<>
DclTrackStn B19,510089,B19,<B19KZC,B19GNL,B19B52,B52B19,B19KM7,KM7B19>,"��_���"

;;----------------------------------------------------------------------------
DclTrackKrg <������>,0102,'S',<KM7,BT1,B21>

	DclObj KM7_uu1nk, CLASS_UP,<��1��.>,KM7,KM7B19,<>,,,,B19,B19
    DclObj KM7_uu2nk, CLASS_UP,<��2��.>,KM7,KM7B19,<B19_upns2,B19_upns1>,ODD_BOUND_OBJ,,,B19,B19
    DclObj KM7_up1tk, CLASS_UP,<��1��.>,KM7,B19KM7,<>,,,,B19,B19
    DclObj KM7_up2tk, CLASS_UP,<��2��.>,KM7,B19KM7,<B19_uutsz,B19_uutsg>,ODD_BOUND_OBJ,,,B19,B19
DclTrackStn KM7,510030,KM7,<KM7B19,B19KM7>,"��_���"

	DclObj B21_sp401403,CLASS_SP,<401403>,B21,BTK,<BT2_kp19wa>,			ODD_BOUND_OBJ,,,BT2,BT2
    DclObj B21_sp413,   CLASS_SP,<413...>,B21,BTK,<BT2_kp18w>,			ODD_BOUND_OBJ,,,BT2,BT2
    DclObj B21_sp407,   CLASS_SP,<407...>,B21,BTK,<BT2_kp16w,BT2_kp15w>,	ODD_BOUND_OBJ,,,BT2,BT2
    DclObj B21_sp415417,CLASS_SP,<415417>,B21,BTK,<BT2_kp14w>,			ODD_BOUND_OBJ,,,BT2,BT2
    DclObj B21_sp421,   CLASS_SP,<421...>,B21,BTK,<BT2_kp13w,BT2_kp12w>,	ODD_BOUND_OBJ,,,BT2,BT2
DclTrackStn B21,510007,BTK,<>,"��_���"

    DclObj BT1_sp69,    CLASS_SP,<69....>,BT1,BTK,<BT2_kp15a,BT2_sp6567>,ODD_BOUND_OBJ,,,BT2,BT2
    DclObj BT1_sp7074,  CLASS_SP,<070074>,BT1,BTK,<BT2_kp14a,BT2_kp13a>,	ODD_BOUND_OBJ,,,BT2,BT2
    DclObj BT1_sp7892,  CLASS_SP,<078092>,BT1,BTK,<BT2_kp12a,BT2_kp11a,BT2_kp10a>,ODD_BOUND_OBJ,,,BT2,BT2
    DclObj BT1_sp8094,  CLASS_SP,<80�094>,BT1,BTK,<BT2_kp8a,BT2_kp9a>,	ODD_BOUND_OBJ,,,BT2,BT2
    DclObj BT1_sp8688,  CLASS_SP,<086088>,BT1,BTK,<BT2_kp6a,BT2_kp7a>,	ODD_BOUND_OBJ,,,BT2,BT2
    DclObj BT1_sp71768, CLASS_SP,<071768>,BT1,BTK,<BT2_kp5a>,			ODD_BOUND_OBJ,,,BT2,BT2
    DclObj BT1_sp765,   CLASS_SP,<765...>,BT1,BTK,<BT2_kp1a>,			ODD_BOUND_OBJ,,,BT2,BT2
DclTrackStn BT1,510007,BTK,<>,"��_���"


;----------------------------------------------------------------------------
DclTrackKrg <������>,0103,'S',<HTN>

	DclObj HTN_up1n,  CLASS_UP,<��1�..>,HTN,NVCHTN,<NVC_uu1n,NVC_sptnp>,EVEN_BOUND_OBJ,,,NVC,KZT
    DclObj HTN_uu1t,  CLASS_UP,<��1�..>,HTN,HTNNVC,<NVC_up1t,NVC_sptp>, EVEN_BOUND_OBJ,,,NVC,KZT
	DclObj HTN_spnap, CLASS_SP,<���...>,HTN,HTN,<>
	DclObj HTN_spndp, CLASS_SP,<���...>,HTN,HTN,<>
DclTrackStn HTN,513403,HTN,<NVCHTN,HTNNVC>,"��_���"
;----------------------------------------------------------------------------
DclTrackKrg <������>,0108,'S',<GNL,RBG,HPR>

	DclObj  GNL_up1tb, CLASS_UP,<��1��.>,GNL,B19GNL,<>,,,,B19,B19
    DclObj  GNL_up2tb, CLASS_UP,<��2��.>,GNL,B19GNL,<B19_up2n,B19_up1n>,ODD_BOUND_OBJ,,,B19,B19
DclTrackStn GNL,510609,GNL,<B19GNL>,"��_���"

	DclObj  RBG_sp302312,CLASS_SP,<302312>,RBG,RBG,<RGL_spnbp,RGL_sp0103>,ODD_BOUND_OBJ,,,RGL,RGL
DclTrackStn RBG,510219,RBG,<RGLRBG>,"��_���"

	DclObj  HPR_up1tz, CLASS_UP,<��1��.>,HPR,ZPDHPR,<ZPD_uu1t,ZPD_spndp>,ODD_BOUND_OBJ,,,ZPD,TMR
	DclObj  HPR_uu1nz, CLASS_UP,<��1��.>,HPR,HPRZPD,<ZPD_up2n,ZPD_up1n>,ODD_BOUND_OBJ,,,ZPD,TMR
	DclObj  HPR_sp02,  CLASS_SP,<002...>,HPR,HPR,<>
	DclObj  HPR_sp0406,CLASS_SP,<004006>,HPR,HPR,<>
DclTrackStn HPR,510505,HPR,<ZPDHPR,HPRZPD>,"��_���"
;----------------------------------------------------------------------------
        EndTrack

         END
