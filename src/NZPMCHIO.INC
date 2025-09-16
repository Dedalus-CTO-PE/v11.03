.
. NZPMCHIO    
. --------
. Filename     : nzpmchaf.dat
.
RSNZMCH1  RESET     KEY37                                                       
          READ      NZPMCHA1,KEY37;;                                            
          RETURN
.
RANZMCH1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPMCHA1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZMCH1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPMCHA1,KEY37;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZMCH1  MOVE      ZERO,OVRCD                                                  
          READKS    NZPMCHA1;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:      
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZMCH1  MOVE      ZERO,OVRCD                                                  
          READKP    NZPMCHA1;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:      
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZMCH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    NZPMCHA1;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:      
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          RETURN
.
WRNZMCH1  RESET     KEY37                                                       
          WRITE     NZPMCHA1,KEY37;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          RETURN
.
DENZMCH1  RESET     KEY37                                                       
          DELETE    NZPMCHA1,KEY37                                              
          RETURN
.
RSNZMCH2  RESET     KEY40                                                       
          READ      NZPMCHA2,KEY40;;                                            
          RETURN
.
RANZMCH2  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPMCHA2,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZMCH2  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPMCHA2,KEY40;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZMCH2  MOVE      ZERO,OVRCD                                                  
          READKS    NZPMCHA2;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:      
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZMCH2  MOVE      ZERO,OVRCD                                                  
          READKP    NZPMCHA2;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:      
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZMCH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    NZPMCHA2;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:      
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          RETURN
.
WRNZMCH2  RESET     KEY40                                                       
          WRITE     NZPMCHA2,KEY40;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          RETURN
.
DENZMCH2  RESET     KEY40                                                       
          DELETE    NZPMCHA2,KEY40                                              
          RETURN
.
RSNZMCH3  RESET     KEY37                                                       
          READ      NZPMCHA3,KEY37;;                                            
          RETURN
.
RANZMCH3  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPMCHA3,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZMCH3  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPMCHA3,KEY37;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZMCH3  MOVE      ZERO,OVRCD                                                  
          READKS    NZPMCHA3;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:      
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZMCH3  MOVE      ZERO,OVRCD                                                  
          READKP    NZPMCHA3;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:      
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZMCH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    NZPMCHA3;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:      
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          RETURN
.
WRNZMCH3  RESET     KEY37                                                       
          WRITE     NZPMCHA3,KEY37;NZMCHOSP,NZMCCLMC,NZMCCNTR,NZMCFTAB,NZMCMCHG:
                        NZMCEFDT,NZMCDESC,NZMCCHGT,NZMCCGRP,NZMCPATP,NZMCREBP:  
                        NZMCINDC,NZMCGSTA,NZMCGSTC,NZMCEDIE,NZMCKPRI,NZMCSHWD:  
                        NZMCCDAT,NZMCCTIM,NZMCCUID,NZMCUDAT,NZMCUTIM,NZMCUUID:  
                        NZMCACFL,NZMCEEDT,NZMCSPAR                              
          RETURN
.
DENZMCH3  RESET     KEY37                                                       
          DELETE    NZPMCHA3,KEY37                                              
          RETURN
.
