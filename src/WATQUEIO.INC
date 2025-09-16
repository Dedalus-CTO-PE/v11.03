.*****************************************************************************
.*        WATQUEIO.INC                                                       *
.*****************************************************************************
.
RSWTQUE1  RESET     KEY20
          READ      WATQUEA1,KEY20;;
          RETURN
.
RAWTQUE1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      WATQUEA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTQUE1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      WATQUEA1,KEY20;DWTQUMES,WMURNO,WMCODE,WMTIME,WMDESC:
                                  WMREASON,WMDATE1,WMDATE2,WMDATE3,WMDATE4:
                                  WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY,WMPTY:
                                  WMNOTICE,WMPTYPE,WMPCAT,WMUDEF1,WMUDEF2:
                                  WMUDEF3,WMUDEF4,WMBOOK,WMKEYDT,WTWMREAD:
                                  WTWMDEDA,WTWMCLSS,WTWMDTAD,WTWMACAT,WTWMGADD:
                                  WTWMDABD,WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                  WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO,WTWMGPPT:
                                  WTWMDOFR,WTWMIHSP,WTWMVLSF,WTWMPRO2,WTWMPRO3:
                                  WTWMTRPA,WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                  WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA,WTWMPHSP:
                                  WTWMBSCD,WTTXPLST,WTTXPOWD,WTTXADMW,WTTXPSTY:
                                  WTTXIDYC,WTTXADMF,WTTXEQR1,WTTXEQR2,WTTXPAST:
                                  WTTXCNSN,WTTXNTGP,WTTXPATM,WTTXLEQR,WTTXDPRC:
                                  WTTXDPCN,WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM:
                                  WTTXPANS,WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY:
                                  WTTXTEAM,WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC:
                                  WTTXINTD,WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC:
                                  WTTXRTIM,WTTXRCLI,WTTXRCLP,SAVTXWRD,WTWMPDSC:
                                  WTWMRSFL,WTWMECNT,WTWMCSST,WTWMCSDT,WTWMASSR:
                                  WTWMACPR,WTTXPSAH,WTTXPHOS,WTTXPRPB,WTTXAASC:
                                  WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12,WTTXUD13:
                                  DWMSTAT,WTQUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTQUMES,WTQUMESI
          RETURN
.
RKWTQUE1  MOVE      ZERO,OVRCD
          READKS    WATQUEA1;DWTQUMES,WMURNO,WMCODE,WMTIME,WMDESC:
                                  WMREASON,WMDATE1,WMDATE2,WMDATE3,WMDATE4:
                                  WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY,WMPTY:
                                  WMNOTICE,WMPTYPE,WMPCAT,WMUDEF1,WMUDEF2:
                                  WMUDEF3,WMUDEF4,WMBOOK,WMKEYDT,WTWMREAD:
                                  WTWMDEDA,WTWMCLSS,WTWMDTAD,WTWMACAT,WTWMGADD:
                                  WTWMDABD,WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                  WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO,WTWMGPPT:
                                  WTWMDOFR,WTWMIHSP,WTWMVLSF,WTWMPRO2,WTWMPRO3:
                                  WTWMTRPA,WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                  WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA,WTWMPHSP:
                                  WTWMBSCD,WTTXPLST,WTTXPOWD,WTTXADMW,WTTXPSTY:
                                  WTTXIDYC,WTTXADMF,WTTXEQR1,WTTXEQR2,WTTXPAST:
                                  WTTXCNSN,WTTXNTGP,WTTXPATM,WTTXLEQR,WTTXDPRC:
                                  WTTXDPCN,WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM:
                                  WTTXPANS,WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY:
                                  WTTXTEAM,WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC:
                                  WTTXINTD,WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC:
                                  WTTXRTIM,WTTXRCLI,WTTXRCLP,SAVTXWRD,WTWMPDSC:
                                  WTWMRSFL,WTWMECNT,WTWMCSST,WTWMCSDT,WTWMASSR:
                                  WTWMACPR,WTTXPSAH,WTTXPHOS,WTTXPRPB,WTTXAASC:
                                  WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12,WTTXUD13:
                                  DWMSTAT,WTQUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTQUMES,WTQUMESI
          RETURN
.
RPWTQUE1  MOVE      ZERO,OVRCD
          READKP    WATQUEA1;DWTQUMES,WMURNO,WMCODE,WMTIME,WMDESC:
                                  WMREASON,WMDATE1,WMDATE2,WMDATE3,WMDATE4:
                                  WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY,WMPTY:
                                  WMNOTICE,WMPTYPE,WMPCAT,WMUDEF1,WMUDEF2:
                                  WMUDEF3,WMUDEF4,WMBOOK,WMKEYDT,WTWMREAD:
                                  WTWMDEDA,WTWMCLSS,WTWMDTAD,WTWMACAT,WTWMGADD:
                                  WTWMDABD,WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                  WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO,WTWMGPPT:
                                  WTWMDOFR,WTWMIHSP,WTWMVLSF,WTWMPRO2,WTWMPRO3:
                                  WTWMTRPA,WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                  WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA,WTWMPHSP:
                                  WTWMBSCD,WTTXPLST,WTTXPOWD,WTTXADMW,WTTXPSTY:
                                  WTTXIDYC,WTTXADMF,WTTXEQR1,WTTXEQR2,WTTXPAST:
                                  WTTXCNSN,WTTXNTGP,WTTXPATM,WTTXLEQR,WTTXDPRC:
                                  WTTXDPCN,WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM:
                                  WTTXPANS,WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY:
                                  WTTXTEAM,WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC:
                                  WTTXINTD,WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC:
                                  WTTXRTIM,WTTXRCLI,WTTXRCLP,SAVTXWRD,WTWMPDSC:
                                  WTWMRSFL,WTWMECNT,WTWMCSST,WTWMCSDT,WTWMASSR:
                                  WTWMACPR,WTTXPSAH,WTTXPHOS,WTTXPRPB,WTTXAASC:
                                  WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12,WTTXUD13:
                                  DWMSTAT,WTQUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWTQUMES,WTQUMESI
          RETURN
.
UPWTQUE1  MOVE      WTQUMESI,DWTQUMES
          UPDATE    WATQUEA1;DWTQUMES,WMURNO,WMCODE,WMTIME,WMDESC:
                                  WMREASON,WMDATE1,WMDATE2,WMDATE3,WMDATE4:
                                  WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY,WMPTY:
                                  WMNOTICE,WMPTYPE,WMPCAT,WMUDEF1,WMUDEF2:
                                  WMUDEF3,WMUDEF4,WMBOOK,WMKEYDT,WTWMREAD:
                                  WTWMDEDA,WTWMCLSS,WTWMDTAD,WTWMACAT,WTWMGADD:
                                  WTWMDABD,WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                  WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO,WTWMGPPT:
                                  WTWMDOFR,WTWMIHSP,WTWMVLSF,WTWMPRO2,WTWMPRO3:
                                  WTWMTRPA,WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                  WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA,WTWMPHSP:
                                  WTWMBSCD,WTTXPLST,WTTXPOWD,WTTXADMW,WTTXPSTY:
                                  WTTXIDYC,WTTXADMF,WTTXEQR1,WTTXEQR2,WTTXPAST:
                                  WTTXCNSN,WTTXNTGP,WTTXPATM,WTTXLEQR,WTTXDPRC:
                                  WTTXDPCN,WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM:
                                  WTTXPANS,WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY:
                                  WTTXTEAM,WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC:
                                  WTTXINTD,WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC:
                                  WTTXRTIM,WTTXRCLI,WTTXRCLP,SAVTXWRD,WTWMPDSC:
                                  WTWMRSFL,WTWMECNT,WTWMCSST,WTWMCSDT,WTWMASSR:
                                  WTWMACPR,WTTXPSAH,WTTXPHOS,WTTXPRPB,WTTXAASC:
                                  WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12,WTTXUD13:
                                  DWMSTAT,WTQUSPAR
          RETURN
.
WRWTQUE1  RESET     KEY20
          MOVE      WTQUMESI,DWTQUMES
          WRITE     WATQUEA1,KEY20;DWTQUMES,WMURNO,WMCODE,WMTIME,WMDESC:
                                  WMREASON,WMDATE1,WMDATE2,WMDATE3,WMDATE4:
                                  WMREMOVE,WMUNIT,WMDOCTOR,WMSTAY,WMPTY:
                                  WMNOTICE,WMPTYPE,WMPCAT,WMUDEF1,WMUDEF2:
                                  WMUDEF3,WMUDEF4,WMBOOK,WMKEYDT,WTWMREAD:
                                  WTWMDEDA,WTWMCLSS,WTWMDTAD,WTWMACAT,WTWMGADD:
                                  WTWMDABD,WTWMEATY,WTWMADMC,WTWMECRA,WTWMGPFA:
                                  WTWMRFGP,WTWMGPPC,WTWMNAFR,WTWMNATO,WTWMGPPT:
                                  WTWMDOFR,WTWMIHSP,WTWMVLSF,WTWMPRO2,WTWMPRO3:
                                  WTWMTRPA,WMUDEF5,WMUDEF6,WMUDEF7,WMUDEF8:
                                  WTWMRANK,WTWMSRCR,WTWMDRSA,WTWMDOSA,WTWMPHSP:
                                  WTWMBSCD,WTTXPLST,WTTXPOWD,WTTXADMW,WTTXPSTY:
                                  WTTXIDYC,WTTXADMF,WTTXEQR1,WTTXEQR2,WTTXPAST:
                                  WTTXCNSN,WTTXNTGP,WTTXPATM,WTTXLEQR,WTTXDPRC:
                                  WTTXDPCN,WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM:
                                  WTTXPANS,WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY:
                                  WTTXTEAM,WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC:
                                  WTTXINTD,WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC:
                                  WTTXRTIM,WTTXRCLI,WTTXRCLP,SAVTXWRD,WTWMPDSC:
                                  WTWMRSFL,WTWMECNT,WTWMCSST,WTWMCSDT,WTWMASSR:
                                  WTWMACPR,WTTXPSAH,WTTXPHOS,WTTXPRPB,WTTXAASC:
                                  WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12,WTTXUD13:
                                  DWMSTAT,WTQUSPAR
          RETURN
.
DEWTQUE1  RESET     KEY20
          DELETE    WATQUEA1,KEY20
          RETURN
+
