.
. WATTX1IO    
. --------
. Filename     : wattx1af.dat
.
RSWTTX11  RESET     KEY19                                                       
          READ      WATTX1A1,KEY19;;                                            
          RETURN
.
RAWTTX11  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      WATTX1A1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTTX11  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      WATTX1A1,KEY19;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:
                                   WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:
                                   WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:
                                   WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:
                                   WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:
                                   WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:
                                   WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:
                                   WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:
                                   WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:
                                   WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:
                                   WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:
                                   WTTXUD13,WTTXSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTTX11  MOVE      ZERO,OVRCD                                                  
          READKS    WATTX1A1;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:      
                             WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:      
                             WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:      
                             WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:      
                             WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:      
                             WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:      
                             WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:      
                             WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:      
                             WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:      
                             WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:      
                             WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:      
                             WTTXUD13,WTTXSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTTX11  MOVE      ZERO,OVRCD                                                  
          READKP    WATTX1A1;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:      
                             WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:      
                             WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:      
                             WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:      
                             WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:      
                             WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:      
                             WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:      
                             WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:      
                             WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:      
                             WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:      
                             WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:      
                             WTTXUD13,WTTXSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTTX11  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATTX1A1;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:      
                             WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:      
                             WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:      
                             WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:      
                             WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:      
                             WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:      
                             WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:      
                             WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:      
                             WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:      
                             WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:      
                             WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:      
                             WTTXUD13,WTTXSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTTX11  RESET     KEY19                                                       
          WRITE     WATTX1A1,KEY19;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:
                                   WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:
                                   WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:
                                   WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:
                                   WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:
                                   WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:
                                   WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:
                                   WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:
                                   WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:
                                   WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:
                                   WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:
                                   WTTXUD13,WTTXSPAR                            
          RETURN
.
DEWTTX11  RESET     KEY19                                                       
          DELETE    WATTX1A1,KEY19                                              
          RETURN
.
RLWTTX11  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     WATTX1A1,KEY19;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:
                                   WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:
                                   WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:
                                   WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:
                                   WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:
                                   WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:
                                   WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:
                                   WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:
                                   WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:
                                   WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:
                                   WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:
                                   WTTXUD13,WTTXSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTTX11  MOVE      ZERO,OVRCD                                                  
          READLKS   WATTX1A1;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:      
                             WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:      
                             WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:      
                             WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:      
                             WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:      
                             WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:      
                             WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:      
                             WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:      
                             WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:      
                             WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:      
                             WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:      
                             WTTXUD13,WTTXSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTTX11  MOVE      ZERO,OVRCD                                                  
          READLKP   WATTX1A1;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:      
                             WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:      
                             WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:      
                             WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:      
                             WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:      
                             WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:      
                             WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:      
                             WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:      
                             WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:      
                             WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:      
                             WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:      
                             WTTXUD13,WTTXSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTTX11  RESET     KEY19                                                       
          UNLOCK    WATTX1A1                                                    
          RETURN
.
RSWTTX12  RESET     KEY27                                                       
          READ      WATTX1A2,KEY27;;                                            
          RETURN
.
RAWTTX12  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WATTX1A2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTTX12  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WATTX1A2,KEY27;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:
                                   WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:
                                   WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:
                                   WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:
                                   WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:
                                   WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:
                                   WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:
                                   WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:
                                   WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:
                                   WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:
                                   WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:
                                   WTTXUD13,WTTXSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTTX12  MOVE      ZERO,OVRCD                                                  
          READKS    WATTX1A2;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:      
                             WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:      
                             WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:      
                             WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:      
                             WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:      
                             WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:      
                             WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:      
                             WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:      
                             WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:      
                             WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:      
                             WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:      
                             WTTXUD13,WTTXSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTTX12  MOVE      ZERO,OVRCD                                                  
          READKP    WATTX1A2;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:      
                             WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:      
                             WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:      
                             WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:      
                             WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:      
                             WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:      
                             WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:      
                             WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:      
                             WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:      
                             WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:      
                             WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:      
                             WTTXUD13,WTTXSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTTX12  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATTX1A2;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:      
                             WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:      
                             WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:      
                             WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:      
                             WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:      
                             WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:      
                             WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:      
                             WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:      
                             WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:      
                             WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:      
                             WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:      
                             WTTXUD13,WTTXSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTTX12  RESET     KEY27                                                       
          WRITE     WATTX1A2,KEY27;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:
                                   WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:
                                   WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:
                                   WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:
                                   WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:
                                   WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:
                                   WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:
                                   WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:
                                   WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:
                                   WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:
                                   WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:
                                   WTTXUD13,WTTXSPAR                            
          RETURN
.
DEWTTX12  RESET     KEY27                                                       
          DELETE    WATTX1A2,KEY27                                              
          RETURN
.
RLWTTX12  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     WATTX1A2,KEY27;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:
                                   WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:
                                   WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:
                                   WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:
                                   WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:
                                   WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:
                                   WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:
                                   WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:
                                   WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:
                                   WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:
                                   WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:
                                   WTTXUD13,WTTXSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTTX12  MOVE      ZERO,OVRCD                                                  
          READLKS   WATTX1A2;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:      
                             WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:      
                             WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:      
                             WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:      
                             WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:      
                             WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:      
                             WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:      
                             WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:      
                             WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:      
                             WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:      
                             WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:      
                             WTTXUD13,WTTXSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTTX12  MOVE      ZERO,OVRCD                                                  
          READLKP   WATTX1A2;WTTXURNO,WTTXPCOD,WTTXPCNT,WTTXPLST,WTTXPOWD:      
                             WTTXADMW,WTTXPSTY,WTTXIDYC,WTTXADMF,WTTXEQR1:      
                             WTTXEQR2,WTTXPAST,WTTXCNSN,WTTXNTGP,WTTXPATM:      
                             WTTXUIDR,WTTXLEQR,WTTXDPRC,WTTXDPCN,WTTXCDTE:      
                             WTTXCTIM,WTTXWEBC,WTTXLUPD,WTTXLUPT,WTTXWEBU:      
                             WTTXCTYP,WTTXEQR3,WTTXPTIM,WTTXPOTM,WTTXPANS:      
                             WTTXPANT,WTTX23HR,WTTXANAE,WTTXBOTY,WTTXTEAM:      
                             WTTXFUND,WTTXWARD,WTTXPREF,WTTXNWHC,WTTXINTD:      
                             WTTXMAUT,WTTXEXPD,WTTXTCRS,WTTXDISC,WTTXRTIM:      
                             WTTXRCLI,WTTXRCLP,WTTXPSAH,WTTXPHOS,WTTXPRPB:      
                             WTTXAASC,WTTXUD09,WTTXUD10,WTTXUD11,WTTXUD12:      
                             WTTXUD13,WTTXSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTTX12  RESET     KEY27                                                       
          UNLOCK    WATTX1A2                                                    
          RETURN
.
