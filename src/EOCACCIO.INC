.
. EOCACCIO    
. --------
. Filename     : eocaccaf.dat
.
RSECACC1  RESET     KEY20                                                       
          READ      EOCACCA1,KEY20;;                                            
          RETURN
.
RAECACC1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      EOCACCA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDECACC1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      EOCACCA1,KEY20;ECACACCN,ECACACCA,ECACDAT1,ECACTIM1,ECACDAT2:
                        ECACTIM2,ECACDAT3,ECACTIM3,ECACDAT4,ECACTIM4,ECACDAT5:  
                        ECACTIM5,ECACDAT6,ECACTIM6,ECACDOC1,ECACDOC2,ECACDOC3:  
                        ECACDOC4,ECACDOC5,ECACDOC6,ECACDIA1,ECACDIA2,ECACDIA3:  
                        ECACDIA4,ECACDIA5,ECACDIA6,ECACYNO1,ECACYNO2,ECACYNO3:  
                        ECACYNO4,ECACYNO5,ECACYNO6,ECACFRE1,ECACFRE2,ECACFRE3:  
                        ECACFRE4,ECACFRE5,ECACFRE6,ECACFRE7,ECACFRE8,ECACFRE9:  
                        ECACFR10,ECACCOD1,ECACCOD2,ECACCOD3,ECACCOD4,ECACCOD5:  
                        ECACCOD6,ECACCOD7,ECACCOD8,ECACCOD9,ECACNUM1,ECACNUM2:  
                        ECACDACC,ECACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKECACC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EOCACCA1;ECACACCN,ECACACCA,ECACDAT1,ECACTIM1,ECACDAT2:      
                        ECACTIM2,ECACDAT3,ECACTIM3,ECACDAT4,ECACTIM4,ECACDAT5:  
                        ECACTIM5,ECACDAT6,ECACTIM6,ECACDOC1,ECACDOC2,ECACDOC3:  
                        ECACDOC4,ECACDOC5,ECACDOC6,ECACDIA1,ECACDIA2,ECACDIA3:  
                        ECACDIA4,ECACDIA5,ECACDIA6,ECACYNO1,ECACYNO2,ECACYNO3:  
                        ECACYNO4,ECACYNO5,ECACYNO6,ECACFRE1,ECACFRE2,ECACFRE3:  
                        ECACFRE4,ECACFRE5,ECACFRE6,ECACFRE7,ECACFRE8,ECACFRE9:  
                        ECACFR10,ECACCOD1,ECACCOD2,ECACCOD3,ECACCOD4,ECACCOD5:  
                        ECACCOD6,ECACCOD7,ECACCOD8,ECACCOD9,ECACNUM1,ECACNUM2:  
                        ECACDACC,ECACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPECACC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EOCACCA1;ECACACCN,ECACACCA,ECACDAT1,ECACTIM1,ECACDAT2:      
                        ECACTIM2,ECACDAT3,ECACTIM3,ECACDAT4,ECACTIM4,ECACDAT5:  
                        ECACTIM5,ECACDAT6,ECACTIM6,ECACDOC1,ECACDOC2,ECACDOC3:  
                        ECACDOC4,ECACDOC5,ECACDOC6,ECACDIA1,ECACDIA2,ECACDIA3:  
                        ECACDIA4,ECACDIA5,ECACDIA6,ECACYNO1,ECACYNO2,ECACYNO3:  
                        ECACYNO4,ECACYNO5,ECACYNO6,ECACFRE1,ECACFRE2,ECACFRE3:  
                        ECACFRE4,ECACFRE5,ECACFRE6,ECACFRE7,ECACFRE8,ECACFRE9:  
                        ECACFR10,ECACCOD1,ECACCOD2,ECACCOD3,ECACCOD4,ECACCOD5:  
                        ECACCOD6,ECACCOD7,ECACCOD8,ECACCOD9,ECACNUM1,ECACNUM2:  
                        ECACDACC,ECACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPECACC1                                                                        
          UPDATE    EOCACCA1;ECACACCN,ECACACCA,ECACDAT1,ECACTIM1,ECACDAT2:      
                        ECACTIM2,ECACDAT3,ECACTIM3,ECACDAT4,ECACTIM4,ECACDAT5:  
                        ECACTIM5,ECACDAT6,ECACTIM6,ECACDOC1,ECACDOC2,ECACDOC3:  
                        ECACDOC4,ECACDOC5,ECACDOC6,ECACDIA1,ECACDIA2,ECACDIA3:  
                        ECACDIA4,ECACDIA5,ECACDIA6,ECACYNO1,ECACYNO2,ECACYNO3:  
                        ECACYNO4,ECACYNO5,ECACYNO6,ECACFRE1,ECACFRE2,ECACFRE3:  
                        ECACFRE4,ECACFRE5,ECACFRE6,ECACFRE7,ECACFRE8,ECACFRE9:  
                        ECACFR10,ECACCOD1,ECACCOD2,ECACCOD3,ECACCOD4,ECACCOD5:  
                        ECACCOD6,ECACCOD7,ECACCOD8,ECACCOD9,ECACNUM1,ECACNUM2:  
                        ECACDACC,ECACSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRECACC1  RESET     KEY20                                                       
          WRITE     EOCACCA1,KEY20;ECACACCN,ECACACCA,ECACDAT1,ECACTIM1,ECACDAT2:
                        ECACTIM2,ECACDAT3,ECACTIM3,ECACDAT4,ECACTIM4,ECACDAT5:  
                        ECACTIM5,ECACDAT6,ECACTIM6,ECACDOC1,ECACDOC2,ECACDOC3:  
                        ECACDOC4,ECACDOC5,ECACDOC6,ECACDIA1,ECACDIA2,ECACDIA3:  
                        ECACDIA4,ECACDIA5,ECACDIA6,ECACYNO1,ECACYNO2,ECACYNO3:  
                        ECACYNO4,ECACYNO5,ECACYNO6,ECACFRE1,ECACFRE2,ECACFRE3:  
                        ECACFRE4,ECACFRE5,ECACFRE6,ECACFRE7,ECACFRE8,ECACFRE9:  
                        ECACFR10,ECACCOD1,ECACCOD2,ECACCOD3,ECACCOD4,ECACCOD5:  
                        ECACCOD6,ECACCOD7,ECACCOD8,ECACCOD9,ECACNUM1,ECACNUM2:  
                        ECACDACC,ECACSPAR                                       
          RETURN
.
DEECACC1  RESET     KEY20                                                       
          DELETE    EOCACCA1,KEY20                                              
          RETURN
.
RLECACC1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     EOCACCA1,KEY20;ECACACCN,ECACACCA,ECACDAT1,ECACTIM1,ECACDAT2:
                        ECACTIM2,ECACDAT3,ECACTIM3,ECACDAT4,ECACTIM4,ECACDAT5:  
                        ECACTIM5,ECACDAT6,ECACTIM6,ECACDOC1,ECACDOC2,ECACDOC3:  
                        ECACDOC4,ECACDOC5,ECACDOC6,ECACDIA1,ECACDIA2,ECACDIA3:  
                        ECACDIA4,ECACDIA5,ECACDIA6,ECACYNO1,ECACYNO2,ECACYNO3:  
                        ECACYNO4,ECACYNO5,ECACYNO6,ECACFRE1,ECACFRE2,ECACFRE3:  
                        ECACFRE4,ECACFRE5,ECACFRE6,ECACFRE7,ECACFRE8,ECACFRE9:  
                        ECACFR10,ECACCOD1,ECACCOD2,ECACCOD3,ECACCOD4,ECACCOD5:  
                        ECACCOD6,ECACCOD7,ECACCOD8,ECACCOD9,ECACNUM1,ECACNUM2:  
                        ECACDACC,ECACSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLECACC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EOCACCA1;ECACACCN,ECACACCA,ECACDAT1,ECACTIM1,ECACDAT2:      
                        ECACTIM2,ECACDAT3,ECACTIM3,ECACDAT4,ECACTIM4,ECACDAT5:  
                        ECACTIM5,ECACDAT6,ECACTIM6,ECACDOC1,ECACDOC2,ECACDOC3:  
                        ECACDOC4,ECACDOC5,ECACDOC6,ECACDIA1,ECACDIA2,ECACDIA3:  
                        ECACDIA4,ECACDIA5,ECACDIA6,ECACYNO1,ECACYNO2,ECACYNO3:  
                        ECACYNO4,ECACYNO5,ECACYNO6,ECACFRE1,ECACFRE2,ECACFRE3:  
                        ECACFRE4,ECACFRE5,ECACFRE6,ECACFRE7,ECACFRE8,ECACFRE9:  
                        ECACFR10,ECACCOD1,ECACCOD2,ECACCOD3,ECACCOD4,ECACCOD5:  
                        ECACCOD6,ECACCOD7,ECACCOD8,ECACCOD9,ECACNUM1,ECACNUM2:  
                        ECACDACC,ECACSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLECACC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EOCACCA1;ECACACCN,ECACACCA,ECACDAT1,ECACTIM1,ECACDAT2:      
                        ECACTIM2,ECACDAT3,ECACTIM3,ECACDAT4,ECACTIM4,ECACDAT5:  
                        ECACTIM5,ECACDAT6,ECACTIM6,ECACDOC1,ECACDOC2,ECACDOC3:  
                        ECACDOC4,ECACDOC5,ECACDOC6,ECACDIA1,ECACDIA2,ECACDIA3:  
                        ECACDIA4,ECACDIA5,ECACDIA6,ECACYNO1,ECACYNO2,ECACYNO3:  
                        ECACYNO4,ECACYNO5,ECACYNO6,ECACFRE1,ECACFRE2,ECACFRE3:  
                        ECACFRE4,ECACFRE5,ECACFRE6,ECACFRE7,ECACFRE8,ECACFRE9:  
                        ECACFR10,ECACCOD1,ECACCOD2,ECACCOD3,ECACCOD4,ECACCOD5:  
                        ECACCOD6,ECACCOD7,ECACCOD8,ECACCOD9,ECACNUM1,ECACNUM2:  
                        ECACDACC,ECACSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUECACC1  RESET     KEY20                                                       
          UNLOCK    EOCACCA1                                                    
          RETURN
.
