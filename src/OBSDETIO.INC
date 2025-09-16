.
. OBSDETIO    
. --------
. Filename     : obsdetaf.dat
.
RSOBDE1   RESET     KEY24                                                       
          READ      OBSDETA1,KEY24;;                                            
          RETURN
.
RAOBDE1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OBSDETA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBDE1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OBSDETA1,KEY24;OBDEVIST,OBDEDATE,OBDETIME,OBDETYP,OBDEPULS: 
                        OBDETEMP,OBDEBPSY,OBDEBPDI,OBDERESP,OBDEPOX,OBDEO2F:    
                        OBDEPFL,OBDEFOC,OBDEFIC,OBDEFOT,OBDEFIN,OBDEEYEO:       
                        OBDEVERB,OBDEMOTO,OBDEPSL,OBDEPSR,OBDEPRL,OBDEPRR:      
                        OBDELMLA,OBDELMRM,OBDELMLL,OBDELMRL,OBDEACT,OBDEUY1:    
                        OBDEUY2,OBDEUY3,OBDEUY4,OBDEUC1,OBDEUC2,OBDEUN1:        
                        OBDEUN2,OBDEUN3,OBDEUN4,OBDEUID,OBDEMDAT,OBDEMTIM:      
                        OBDECOM1,OBDECOM2,OBDECOM3,OBDEPNSC,OBDECVPS,OBDESPA    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBDE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSDETA1;OBDEVIST,OBDEDATE,OBDETIME,OBDETYP,OBDEPULS:       
                        OBDETEMP,OBDEBPSY,OBDEBPDI,OBDERESP,OBDEPOX,OBDEO2F:    
                        OBDEPFL,OBDEFOC,OBDEFIC,OBDEFOT,OBDEFIN,OBDEEYEO:       
                        OBDEVERB,OBDEMOTO,OBDEPSL,OBDEPSR,OBDEPRL,OBDEPRR:      
                        OBDELMLA,OBDELMRM,OBDELMLL,OBDELMRL,OBDEACT,OBDEUY1:    
                        OBDEUY2,OBDEUY3,OBDEUY4,OBDEUC1,OBDEUC2,OBDEUN1:        
                        OBDEUN2,OBDEUN3,OBDEUN4,OBDEUID,OBDEMDAT,OBDEMTIM:      
                        OBDECOM1,OBDECOM2,OBDECOM3,OBDEPNSC,OBDECVPS,OBDESPA    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBDE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSDETA1;OBDEVIST,OBDEDATE,OBDETIME,OBDETYP,OBDEPULS:       
                        OBDETEMP,OBDEBPSY,OBDEBPDI,OBDERESP,OBDEPOX,OBDEO2F:    
                        OBDEPFL,OBDEFOC,OBDEFIC,OBDEFOT,OBDEFIN,OBDEEYEO:       
                        OBDEVERB,OBDEMOTO,OBDEPSL,OBDEPSR,OBDEPRL,OBDEPRR:      
                        OBDELMLA,OBDELMRM,OBDELMLL,OBDELMRL,OBDEACT,OBDEUY1:    
                        OBDEUY2,OBDEUY3,OBDEUY4,OBDEUC1,OBDEUC2,OBDEUN1:        
                        OBDEUN2,OBDEUN3,OBDEUN4,OBDEUID,OBDEMDAT,OBDEMTIM:      
                        OBDECOM1,OBDECOM2,OBDECOM3,OBDEPNSC,OBDECVPS,OBDESPA    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBDE1                                                                         
          UPDATE    OBSDETA1;OBDEVIST,OBDEDATE,OBDETIME,OBDETYP,OBDEPULS:       
                        OBDETEMP,OBDEBPSY,OBDEBPDI,OBDERESP,OBDEPOX,OBDEO2F:    
                        OBDEPFL,OBDEFOC,OBDEFIC,OBDEFOT,OBDEFIN,OBDEEYEO:       
                        OBDEVERB,OBDEMOTO,OBDEPSL,OBDEPSR,OBDEPRL,OBDEPRR:      
                        OBDELMLA,OBDELMRM,OBDELMLL,OBDELMRL,OBDEACT,OBDEUY1:    
                        OBDEUY2,OBDEUY3,OBDEUY4,OBDEUC1,OBDEUC2,OBDEUN1:        
                        OBDEUN2,OBDEUN3,OBDEUN4,OBDEUID,OBDEMDAT,OBDEMTIM:      
                        OBDECOM1,OBDECOM2,OBDECOM3,OBDEPNSC,OBDECVPS,OBDESPA    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBDE1   RESET     KEY24                                                       
          WRITE     OBSDETA1,KEY24;OBDEVIST,OBDEDATE,OBDETIME,OBDETYP,OBDEPULS: 
                        OBDETEMP,OBDEBPSY,OBDEBPDI,OBDERESP,OBDEPOX,OBDEO2F:    
                        OBDEPFL,OBDEFOC,OBDEFIC,OBDEFOT,OBDEFIN,OBDEEYEO:       
                        OBDEVERB,OBDEMOTO,OBDEPSL,OBDEPSR,OBDEPRL,OBDEPRR:      
                        OBDELMLA,OBDELMRM,OBDELMLL,OBDELMRL,OBDEACT,OBDEUY1:    
                        OBDEUY2,OBDEUY3,OBDEUY4,OBDEUC1,OBDEUC2,OBDEUN1:        
                        OBDEUN2,OBDEUN3,OBDEUN4,OBDEUID,OBDEMDAT,OBDEMTIM:      
                        OBDECOM1,OBDECOM2,OBDECOM3,OBDEPNSC,OBDECVPS,OBDESPA    
          RETURN
.
DEOBDE1   RESET     KEY24                                                       
          DELETE    OBSDETA1,KEY24                                              
          RETURN
.
RLOBDE1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     OBSDETA1,KEY24;OBDEVIST,OBDEDATE,OBDETIME,OBDETYP,OBDEPULS: 
                        OBDETEMP,OBDEBPSY,OBDEBPDI,OBDERESP,OBDEPOX,OBDEO2F:    
                        OBDEPFL,OBDEFOC,OBDEFIC,OBDEFOT,OBDEFIN,OBDEEYEO:       
                        OBDEVERB,OBDEMOTO,OBDEPSL,OBDEPSR,OBDEPRL,OBDEPRR:      
                        OBDELMLA,OBDELMRM,OBDELMLL,OBDELMRL,OBDEACT,OBDEUY1:    
                        OBDEUY2,OBDEUY3,OBDEUY4,OBDEUC1,OBDEUC2,OBDEUN1:        
                        OBDEUN2,OBDEUN3,OBDEUN4,OBDEUID,OBDEMDAT,OBDEMTIM:      
                        OBDECOM1,OBDECOM2,OBDECOM3,OBDEPNSC,OBDECVPS,OBDESPA    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBDE1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSDETA1;OBDEVIST,OBDEDATE,OBDETIME,OBDETYP,OBDEPULS:       
                        OBDETEMP,OBDEBPSY,OBDEBPDI,OBDERESP,OBDEPOX,OBDEO2F:    
                        OBDEPFL,OBDEFOC,OBDEFIC,OBDEFOT,OBDEFIN,OBDEEYEO:       
                        OBDEVERB,OBDEMOTO,OBDEPSL,OBDEPSR,OBDEPRL,OBDEPRR:      
                        OBDELMLA,OBDELMRM,OBDELMLL,OBDELMRL,OBDEACT,OBDEUY1:    
                        OBDEUY2,OBDEUY3,OBDEUY4,OBDEUC1,OBDEUC2,OBDEUN1:        
                        OBDEUN2,OBDEUN3,OBDEUN4,OBDEUID,OBDEMDAT,OBDEMTIM:      
                        OBDECOM1,OBDECOM2,OBDECOM3,OBDEPNSC,OBDECVPS,OBDESPA    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBDE1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSDETA1;OBDEVIST,OBDEDATE,OBDETIME,OBDETYP,OBDEPULS:       
                        OBDETEMP,OBDEBPSY,OBDEBPDI,OBDERESP,OBDEPOX,OBDEO2F:    
                        OBDEPFL,OBDEFOC,OBDEFIC,OBDEFOT,OBDEFIN,OBDEEYEO:       
                        OBDEVERB,OBDEMOTO,OBDEPSL,OBDEPSR,OBDEPRL,OBDEPRR:      
                        OBDELMLA,OBDELMRM,OBDELMLL,OBDELMRL,OBDEACT,OBDEUY1:    
                        OBDEUY2,OBDEUY3,OBDEUY4,OBDEUC1,OBDEUC2,OBDEUN1:        
                        OBDEUN2,OBDEUN3,OBDEUN4,OBDEUID,OBDEMDAT,OBDEMTIM:      
                        OBDECOM1,OBDECOM2,OBDECOM3,OBDEPNSC,OBDECVPS,OBDESPA    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBDE1   RESET     KEY24                                                       
          UNLOCK    OBSDETA1                                                    
          RETURN
.
