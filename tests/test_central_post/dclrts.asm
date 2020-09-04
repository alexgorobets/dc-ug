BegRts
	BegRtsServer RSTNOD,100,2,"РстРУ1","РУ-1 Ростовский регион         "
			BegRtsChannel RSTUZL,0101,'=',9600,"РстУзл","Ростовский Узел                "
				RtsChlRkp 5,'mod1 ',"БТК[5] ЦВ66-04 ",-27
				RtsChlRkp 6,'mod1 ',"НВЧ[6] ОГМ 1-1 ",-10
				RtsRkp  0,'CPU3'
				RtsRkp  1,'ZPD '
				RtsRkp  2,'TMR '
				RtsRkp  3,'ZSD '
				RtsRkp  4,'RTV '
				RtsRkp  5,'RZV '
				RtsRkp  6,'KZT '
				RtsRkp  7,'ALK '
				RtsRkp  8,'NVC '
				RtsRkp  9,'PRT '
				RtsRkp 10,'ZLG '
;				RtsRkp 11,'RGL '
				RtsRkp 12,'ZRC '
				RtsRkp 13,'B52 '
				RtsRkp 14,'BT2 '
				RtsRkp 18,'KZC '
				RtsRkp 19,'B19 '
				RtsRkp 20,'RG1 '
				RtsRkp 21,'RG2 '
			EndRtsChannel RSTUZL
			BegRtsChannel LIHNVC,0103,'=',9600,"НвчЛих","Новочеркасск - Лихая           "
				RtsChlRkp 0,'mod1 ',"[5] ЦВ23-16    ",-10
				RtsChlRkp 0,'mod1 ',"[6] 04-5-7     ",-10
				RtsRkp 10,'LKS '
				RtsRkp 11,'HTN '
			EndRtsChannel LIHNVC
			BegRtsChannel BTKSTM,0102,'=',9600,"БткСтм","Батайск - Староминская         "
				RtsChlRkp 0,'mod1 ',"БТК [5] ЦВ63-07",-26
				RtsChlRkp 0,'mod1 ',"СТМ [6] ЦВ61-15",-26
				RtsRkp 15,'BT1 '
				RtsRkp 16,'B21 '
				RtsRkp 17,'BT3 '
				RtsRkp  1,'KM7 '
			EndRtsChannel BTKSTM
			BegRtsChannel BTKUSP,0108,'=',38400,"БткУсп","Батайск - Успенская            "
				RtsChlRkp 0,'ock1 ',"[5] УСП 2-ОГМ30",-25
				RtsChlRkp 0,'ock1 ',"[6] РБг 1-ОГМ30",-25
				RtsRkp  11,'HPR '
				RtsRkp  12,'GNL '
				RtsRkp  13,'RBG '
			EndRtsChannel BTKUSP
	EndRtsServer RSTNOD

;------------------------------------------------------------------------------------------------------

	BegRtsDncRegion  RSTNOD,100,2,"РстРУ1","РУ-1 Ростовский регион         "
		RtsDncRegion RSTUZL,101,1,"РстУзл","Ростовский узел                "
		RtsDncRegion BTKSTM,102,1,"БткСтм","Батайск - Староминская         "
		RtsDncRegion LIHNVC,103,1,"НвчЛих","Новочеркасск - Лихая           "
		RtsDncRegion LIHCRT,104,1,"ЛихЧрт","Лихая - Чертково               "
		RtsDncRegion SLSTHR,105,1,"СлсТхр","Сальск - Тихорецкая            "
		RtsDncRegion SLSKTL,106,1,"СлсКтл","Сальск - Котельниково          "
		RtsDncRegion BTKUSP,108,1,"БткУсп","Батайск - Успенская            "
	EndRtsDncRegion  RSTNOD

	BegRtsDncRegion  KRSNOD,700,2,"КрсРУ2","РУ-2 Краснодарский регион      "
		RtsDncRegion STMTIM,703,1,"СтмТим","Староминская - Тимашевская     "
		RtsDncRegion TIMKRV,704,1,"ТимКрв","Тимашевская - Кривенковская    "
		RtsDncRegion KRSTHR,705,1,"КрсТхр","Краснодар - Тихорецкая         "
		RtsDncRegion TPSADR,707,1,"ТпсАдр","Туапсе - Адлер                 "
		RtsDncRegion KRSKRM,710,1,"КрдКрм","Краснодар - Крымская           "
		RtsDncRegion NVRKRM,711,1,"НврКрм","Новороссийск - Крымская        "
	EndRtsDncRegion  KRSNOD

;------------------------------------------------------------------------------------------------------
	RtsStation 'ZPD ',1,510401,000000000,2,"Зпд   ","Ростов Западный                ",<RSTUZL>,<'ZPD '>
 	RtsStation 'TMR ',1,510238,000000000,3,"Тмр   ","Темерник                       ",<RSTUZL>,<'TMR '>
	RtsStation 'ZSD ',1,510153,000000000,3,"Зсд   ","Зоологический Сад              ",<RSTUZL>,<'ZSD '>
	RtsStation 'RTV ',1,510100,000000000,2,"Ртв   ","Ростов Товарная                ",<RSTUZL>,<'RTV '>
	RtsStation 'RZV ',1,510126,000000000,3,"Рзв   ","Развилка                       ",<RSTUZL>,<'RZV '>
	RtsStation 'KZT ',1,513607,000000000,3,"Кзт   ","Кизитеринка                    ",<RSTUZL>,<'KZT '>
	RtsStation 'ALK ',1,513541,000000000,2,"Алк   ","Александровка                  ",<RSTUZL>,<'ALK '>
	RtsStation 'NVC ',1,513503,000000000,2,"Нвч   ","Новочеркасск                   ",<RSTUZL>,<'NVC '>
	RtsStation 'PRT ',1,510064,000000000,3,"Прт   ","Проточный                      ",<RSTUZL>,<'PRT '>
	RtsStation 'ZLG ',1,510050,000000000,2,"Злг   ","Зеленый Луг                    ",<RSTUZL>,<'ZLG '>
	RtsStation 'RGL ',1,510204,000000000,4,"Ргл   ","Ростов Главный                 ",<RSTUZL>,<'RG2 ','RG1 '>
	RtsStation 'ZRC ',1,510702,000000000,2,"Зрч   ","Заречная                       ",<RSTUZL>,<'ZRC '>
	RtsStation 'B52 ',1,510011,000000000,2,"БП1352","Блок-пост 1352 км              ",<RSTUZL>,<'B52 '>
	RtsStation 'BT2 ',1,510007,000000000,2,"БТ ЭЦ2","Батайск ЭЦ-2                   ",<RSTUZL>,<'BT2 '>
	RtsStation 'BT1 ',1,510007,000000000,2,"БТ ЭЦ1","Батайск ЭЦ-1                   ",<BTKSTM>,<'BT1 '>
	RtsStation 'B21 ',1,510007,000000000,2,"БТ М21","Батайск МЭЦ-21                 ",<BTKSTM>,<'B21 '>
	RtsStation 'BT3 ',1,510007,000000000,2,"БТ ЭЦ3","Батайск ЭЦ-3                   ",<BTKSTM>,<'BT3 '>
	RtsStation 'KZC ',1,510079,000000000,2,"Кзч   ","Казачья                        ",<RSTUZL>,<'KZC '>
	RtsStation 'B19 ',1,510089,000000000,4,"БП-19 ","Блок-пост 19 км                ",<RSTUZL>,<'B19 '>

	RtsStation 'LKS ',1,513306,000000000,2,"Лкс   ","Локомотивстрой                 ",<LIHNVC>,<'LKS '>
	RtsStation 'HTN ',1,513403,000000000,2,"Хтн   ","Хотунок                        ",<LIHNVC>,<'HTN '>

	RtsStation 'KM7 ',1,510030,000000000,4,"Км7   ","Блок-пост 7 км                 ",<BTKSTM>,<'KM7 '>


	RtsStation 'RBG ',1,510219,000000000,2,"Рбг   ","Ростов Берег                   ",<BTKUSP>,<'RBG '>
	RtsStation 'GNL ',1,510609,171800000,3,"Гнл   ","Гниловская                     ",<BTKUSP>,<'GNL '>
	RtsStation 'HPR ',1,510505,172730000,3,"Хпр   ","Хапры                          ",<BTKUSP>,<'HPR '>
;------------------------------------------------------------------------------------------------------

	BegRtsIpNet 'Intranet  ','10.0.0.0       '

		BegRtsIpGate 'GateSpd   ','10.0.0.0       ','255.0.0.0      '
		EndRtsIpGate GateSpd

		BegRtsIpGate 'SrvNILSDKU','10.51.28.247   ','255.255.255.255'
		EndRtsIpGate SrvNILSDKU

		BegRtsIpGate 'SrvUral   ','10.52.19.190   ','255.255.255.255'
		EndRtsIpGate SrvUral

		BegRtsIpGate 'SrvUralold','10.52.20.80    ','255.255.255.255'
		EndRtsIpGate SrvUralold

		BegRtsIpGate 'Broadcast ','10.52.19.170   ','255.255.255.255'
		EndRtsIpGate Broadcast

		BegRtsIpGate 'SrvLIHNVC ','10.52.19.105   ','255.255.255.255'
		EndRtsIpGate SrvLIHNVC

		BegRtsIpGate 'SrvLIHNVCr','10.52.19.106   ','255.255.255.255'
		EndRtsIpGate SrvLIHNVCr

		BegRtsIpGate 'SrvBTKUSP ','10.52.19.109   ','255.255.255.255'
		EndRtsIpGate SrvBTKUSP

		BegRtsIpGate 'SrvBTKUSPr','10.52.19.110   ','255.255.255.255'
		EndRtsIpGate SrvBTKUSPr

		BegRtsIpGate 'SrvBTKSTM ','10.52.19.111   ','255.255.255.255'
		EndRtsIpGate SrvBTKSTM

		BegRtsIpGate 'SrvBTKSTMr','10.52.19.112   ','255.255.255.255'
		EndRtsIpGate SrvBTKSTMr

		BegRtsIpGate 'SrvRSTUZL ','10.52.19.107   ','255.255.255.255'
;			BegRtsMsgRoute <GateSpd,???,QUERY_CONNECT>
;				RtsMsgFilter <>,<>,<>,<>,FILTER_INOUT,FILTER_ACCEPT
;				RtsMsgFilter <6>,<>,<>,<>,FILTER_IN,FILTER_EXCEPT
;			EndRtsMsgRoute
			BegRtsMsgRoute <SrvNILSDKU,?,QUERY_CONNECT>
				RtsMsgFilter <>,<>,<>,<>,FILTER_INOUT
			EndRtsMsgRoute
			BegRtsMsgRoute <SrvUral,?,QUERY_CONNECT>,<SrvUralold,?,QUERY_CONNECT>
				RtsMsgFilter <3>,<>,<>,<>,FILTER_OUT,FILTER_ACCEPT
				RtsMsgFilter <6,36>,<>,<>,<>,FILTER_IN,FILTER_ACCEPT
			EndRtsMsgRoute
			BegRtsMsgRoute <Broadcast,?,QUERY_CONNECT>
				RtsMsgFilter <>,<>,<>,<>,FILTER_INOUT,FILTER_ACCEPT
				RtsMsgFilter <9>,<>,<>,<>,FILTER_OUT,FILTER_EXCEPT
				RtsMsgFilter <6>,<>,<>,<>,FILTER_IN,FILTER_EXCEPT
			EndRtsMsgRoute
;			BegRtsMsgRoute <SrvLIHNVC,?,AUTO_CONNECT>
;				RtsMsgFilter <2,4,16>,<>,<>,<'NVC ','ALK '>,FILTER_OUT
;				RtsMsgFilter <2,4>,<>,<>,<'HTN ','LKS '>,FILTER_IN
;				RtsMsgFilter <16>,<>,<>,<'NVC ','ALK '>,FILTER_IN
;			EndRtsMsgRoute
;			BegRtsMsgRoute <SrvBTKSTM,?,AUTO_CONNECT>
;				RtsMsgFilter <2,4,16>,<>,<>,<'B19 ','BT2 '>,FILTER_OUT
;				RtsMsgFilter <16>,<>,<>,<'KM7 ','BT1 ','B21 ','BT3 '>,FILTER_OUT
;				RtsMsgFilter <2,4,16>,<>,<>,<'KM7 ','BT1 ','B21 ','BT3 '>,FILTER_IN
;				RtsMsgFilter <16>,<>,<>,<'B19 ','BT2 '>,FILTER_IN
;			EndRtsMsgRoute
;			BegRtsMsgRoute <SrvBTKUSP,?,AUTO_CONNECT>
;				RtsMsgFilter <2,4,16>,<>,<>,<'ZPD ','RGL ','B19 '>,FILTER_OUT
;				RtsMsgFilter <2,4>,<>,<>,<'HPR ','RBG ','GNL '>,FILTER_IN
;				RtsMsgFilter <16>,<>,<>,<'ZPD ','RGL ','B19 '>,FILTER_IN
;			EndRtsMsgRoute
		EndRtsIpGate SrvRSTUZL

		BegRtsIpGate 'SrvRSTUZLr','10.52.19.108   ','255.255.255.255'
;			BegRtsMsgRoute <GateSpd,???,QUERY_CONNECT>
;				RtsMsgFilter <>,<>,<>,<>,FILTER_INOUT,FILTER_ACCEPT
;				RtsMsgFilter <6>,<>,<>,<>,FILTER_IN,FILTER_EXCEPT
;			EndRtsMsgRoute
			BegRtsMsgRoute <SrvNILSDKU,?,QUERY_CONNECT>
				RtsMsgFilter <>,<>,<>,<>,FILTER_INOUT
			EndRtsMsgRoute
			BegRtsMsgRoute <SrvUral,?,QUERY_CONNECT>,<SrvUralold,?,QUERY_CONNECT>
				RtsMsgFilter <3>,<>,<>,<>,FILTER_OUT,FILTER_ACCEPT
				RtsMsgFilter <6,36>,<>,<>,<>,FILTER_IN,FILTER_ACCEPT
			EndRtsMsgRoute
			BegRtsMsgRoute <Broadcast,?,QUERY_CONNECT>
				RtsMsgFilter <>,<>,<>,<>,FILTER_INOUT,FILTER_ACCEPT
				RtsMsgFilter <9>,<>,<>,<>,FILTER_OUT,FILTER_EXCEPT
				RtsMsgFilter <6>,<>,<>,<>,FILTER_IN,FILTER_EXCEPT
			EndRtsMsgRoute
			BegRtsMsgRoute <SrvLIHNVCr,?,AUTO_CONNECT>
				RtsMsgFilter <2,4,16>,<>,<>,<'NVC ','ALK '>,FILTER_OUT
				RtsMsgFilter <2,4>,<>,<>,<'HTN ','LKS '>,FILTER_IN
				RtsMsgFilter <16>,<>,<>,<'NVC ','ALK '>,FILTER_IN
			EndRtsMsgRoute
			BegRtsMsgRoute <SrvBTKSTMr,?,AUTO_CONNECT>
				RtsMsgFilter <2,4,16>,<>,<>,<'B19 ','BT2 '>,FILTER_OUT
				RtsMsgFilter <16>,<>,<>,<'KM7 ','BT1 ','B21 ','BT3 '>,FILTER_OUT
				RtsMsgFilter <2,4,16>,<>,<>,<'KM7 ','BT1 ','B21 ','BT3 '>,FILTER_IN
				RtsMsgFilter <16>,<>,<>,<'B19 ','BT2 '>,FILTER_IN
			EndRtsMsgRoute
			BegRtsMsgRoute <SrvBTKUSPr,?,AUTO_CONNECT>
				RtsMsgFilter <2,4,16>,<>,<>,<'ZPD ','RGL ','B19 '>,FILTER_OUT
				RtsMsgFilter <2,4>,<>,<>,<'HPR ','RBG ','GNL '>,FILTER_IN
				RtsMsgFilter <16>,<>,<>,<'ZPD ','RGL ','B19 '>,FILTER_IN
			EndRtsMsgRoute
		EndRtsIpGate SrvRSTUZLr

	EndRtsIpNet Intranet

	BegRtsNode 'SrvRSTUZL ',5110402,3,"СрвРстУзл ","Сервер Ростовский узел         ",<SrvRSTUZL>
		RtsTask 517040301
	EndRtsNode SrvRSTUZL

	BegRtsNode 'SrvRSTUZLr',5110402,4,"СрвРстУзл ","Сервер Ростовский узел         ",<SrvRSTUZLr>
		RtsTask 517040301
	EndRtsNode SrvRSTUZLr
	
EndRts
	END
