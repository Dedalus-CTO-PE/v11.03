.V9.12.01 Saroeun Soeur CAR 197930
.         Created IO for EMRCLIFD
.
. EMRCLIIO    
. --------
. Filename     : emrcliaf.dat
.
RSEMCLI1  RESET     KEY8                                                        
          READ      EMRCLIA1,KEY8;;                                             
          RETURN
.
RAEMCLI1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRCLIA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMCLI1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRCLIA1,KEY8;EMCIVISN,EMCIOR01,EMCIOR02,EMCIOR03,EMCIOR04: 
                        EMCIOR05,EMCIOR06,EMCIOR07,EMCIOR08,EMCIOR09,EMCIOR10:  
                        EMCIPR01,EMCIPR02,EMCIPR03,EMCIPR04,EMCIPR05,EMCIPR06:  
                        EMCIPR07,EMCIPR08,EMCIPR09,EMCIPR10,EMCIRS01,EMCIRS02:  
                        EMCIRS03,EMCIRS04,EMCIRS05,EMCIRS06,EMCIRS07,EMCIRS08:  
                        EMCIRS09,EMCIRS10,EMCIPCOM,EMCILMDS,EMCILMCD,EMCILMCF:  
                        EMCIRCCD,EMCIRCFF,EMCIRCTM,EMCISCFF,EMCISCVC,EMCITSCT:  
                        EMCIPRDT,EMCIRRFF,EMCIUWCR,EMCIRCDT,EMCITRCD,EMCIUUPD:  
                        EMCIRUDT,EMCITRUP,EMCISPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMCLI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRCLIA1;EMCIVISN,EMCIOR01,EMCIOR02,EMCIOR03,EMCIOR04:      
                        EMCIOR05,EMCIOR06,EMCIOR07,EMCIOR08,EMCIOR09,EMCIOR10:  
                        EMCIPR01,EMCIPR02,EMCIPR03,EMCIPR04,EMCIPR05,EMCIPR06:  
                        EMCIPR07,EMCIPR08,EMCIPR09,EMCIPR10,EMCIRS01,EMCIRS02:  
                        EMCIRS03,EMCIRS04,EMCIRS05,EMCIRS06,EMCIRS07,EMCIRS08:  
                        EMCIRS09,EMCIRS10,EMCIPCOM,EMCILMDS,EMCILMCD,EMCILMCF:  
                        EMCIRCCD,EMCIRCFF,EMCIRCTM,EMCISCFF,EMCISCVC,EMCITSCT:  
                        EMCIPRDT,EMCIRRFF,EMCIUWCR,EMCIRCDT,EMCITRCD,EMCIUUPD:  
                        EMCIRUDT,EMCITRUP,EMCISPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMCLI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRCLIA1;EMCIVISN,EMCIOR01,EMCIOR02,EMCIOR03,EMCIOR04:      
                        EMCIOR05,EMCIOR06,EMCIOR07,EMCIOR08,EMCIOR09,EMCIOR10:  
                        EMCIPR01,EMCIPR02,EMCIPR03,EMCIPR04,EMCIPR05,EMCIPR06:  
                        EMCIPR07,EMCIPR08,EMCIPR09,EMCIPR10,EMCIRS01,EMCIRS02:  
                        EMCIRS03,EMCIRS04,EMCIRS05,EMCIRS06,EMCIRS07,EMCIRS08:  
                        EMCIRS09,EMCIRS10,EMCIPCOM,EMCILMDS,EMCILMCD,EMCILMCF:  
                        EMCIRCCD,EMCIRCFF,EMCIRCTM,EMCISCFF,EMCISCVC,EMCITSCT:  
                        EMCIPRDT,EMCIRRFF,EMCIUWCR,EMCIRCDT,EMCITRCD,EMCIUUPD:  
                        EMCIRUDT,EMCITRUP,EMCISPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMCLI1                                                                        
          UPDATE    EMRCLIA1;EMCIVISN,EMCIOR01,EMCIOR02,EMCIOR03,EMCIOR04:      
                        EMCIOR05,EMCIOR06,EMCIOR07,EMCIOR08,EMCIOR09,EMCIOR10:  
                        EMCIPR01,EMCIPR02,EMCIPR03,EMCIPR04,EMCIPR05,EMCIPR06:  
                        EMCIPR07,EMCIPR08,EMCIPR09,EMCIPR10,EMCIRS01,EMCIRS02:  
                        EMCIRS03,EMCIRS04,EMCIRS05,EMCIRS06,EMCIRS07,EMCIRS08:  
                        EMCIRS09,EMCIRS10,EMCIPCOM,EMCILMDS,EMCILMCD,EMCILMCF:  
                        EMCIRCCD,EMCIRCFF,EMCIRCTM,EMCISCFF,EMCISCVC,EMCITSCT:  
                        EMCIPRDT,EMCIRRFF,EMCIUWCR,EMCIRCDT,EMCITRCD,EMCIUUPD:  
                        EMCIRUDT,EMCITRUP,EMCISPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMCLI1  RESET     KEY8                                                        
          WRITE     EMRCLIA1,KEY8;EMCIVISN,EMCIOR01,EMCIOR02,EMCIOR03,EMCIOR04: 
                        EMCIOR05,EMCIOR06,EMCIOR07,EMCIOR08,EMCIOR09,EMCIOR10:  
                        EMCIPR01,EMCIPR02,EMCIPR03,EMCIPR04,EMCIPR05,EMCIPR06:  
                        EMCIPR07,EMCIPR08,EMCIPR09,EMCIPR10,EMCIRS01,EMCIRS02:  
                        EMCIRS03,EMCIRS04,EMCIRS05,EMCIRS06,EMCIRS07,EMCIRS08:  
                        EMCIRS09,EMCIRS10,EMCIPCOM,EMCILMDS,EMCILMCD,EMCILMCF:  
                        EMCIRCCD,EMCIRCFF,EMCIRCTM,EMCISCFF,EMCISCVC,EMCITSCT:  
                        EMCIPRDT,EMCIRRFF,EMCIUWCR,EMCIRCDT,EMCITRCD,EMCIUUPD:  
                        EMCIRUDT,EMCITRUP,EMCISPAR                              
          RETURN
.
DEEMCLI1  RESET     KEY8                                                        
          DELETE    EMRCLIA1,KEY8                                               
          RETURN
.
RLEMCLI1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     EMRCLIA1,KEY8;EMCIVISN,EMCIOR01,EMCIOR02,EMCIOR03,EMCIOR04: 
                        EMCIOR05,EMCIOR06,EMCIOR07,EMCIOR08,EMCIOR09,EMCIOR10:  
                        EMCIPR01,EMCIPR02,EMCIPR03,EMCIPR04,EMCIPR05,EMCIPR06:  
                        EMCIPR07,EMCIPR08,EMCIPR09,EMCIPR10,EMCIRS01,EMCIRS02:  
                        EMCIRS03,EMCIRS04,EMCIRS05,EMCIRS06,EMCIRS07,EMCIRS08:  
                        EMCIRS09,EMCIRS10,EMCIPCOM,EMCILMDS,EMCILMCD,EMCILMCF:  
                        EMCIRCCD,EMCIRCFF,EMCIRCTM,EMCISCFF,EMCISCVC,EMCITSCT:  
                        EMCIPRDT,EMCIRRFF,EMCIUWCR,EMCIRCDT,EMCITRCD,EMCIUUPD:  
                        EMCIRUDT,EMCITRUP,EMCISPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMCLI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRCLIA1;EMCIVISN,EMCIOR01,EMCIOR02,EMCIOR03,EMCIOR04:      
                        EMCIOR05,EMCIOR06,EMCIOR07,EMCIOR08,EMCIOR09,EMCIOR10:  
                        EMCIPR01,EMCIPR02,EMCIPR03,EMCIPR04,EMCIPR05,EMCIPR06:  
                        EMCIPR07,EMCIPR08,EMCIPR09,EMCIPR10,EMCIRS01,EMCIRS02:  
                        EMCIRS03,EMCIRS04,EMCIRS05,EMCIRS06,EMCIRS07,EMCIRS08:  
                        EMCIRS09,EMCIRS10,EMCIPCOM,EMCILMDS,EMCILMCD,EMCILMCF:  
                        EMCIRCCD,EMCIRCFF,EMCIRCTM,EMCISCFF,EMCISCVC,EMCITSCT:  
                        EMCIPRDT,EMCIRRFF,EMCIUWCR,EMCIRCDT,EMCITRCD,EMCIUUPD:  
                        EMCIRUDT,EMCITRUP,EMCISPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMCLI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRCLIA1;EMCIVISN,EMCIOR01,EMCIOR02,EMCIOR03,EMCIOR04:      
                        EMCIOR05,EMCIOR06,EMCIOR07,EMCIOR08,EMCIOR09,EMCIOR10:  
                        EMCIPR01,EMCIPR02,EMCIPR03,EMCIPR04,EMCIPR05,EMCIPR06:  
                        EMCIPR07,EMCIPR08,EMCIPR09,EMCIPR10,EMCIRS01,EMCIRS02:  
                        EMCIRS03,EMCIRS04,EMCIRS05,EMCIRS06,EMCIRS07,EMCIRS08:  
                        EMCIRS09,EMCIRS10,EMCIPCOM,EMCILMDS,EMCILMCD,EMCILMCF:  
                        EMCIRCCD,EMCIRCFF,EMCIRCTM,EMCISCFF,EMCISCVC,EMCITSCT:  
                        EMCIPRDT,EMCIRRFF,EMCIUWCR,EMCIRCDT,EMCITRCD,EMCIUUPD:  
                        EMCIRUDT,EMCITRUP,EMCISPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMCLI1  RESET     KEY8                                                        
          UNLOCK    EMRCLIA1                                                    
          RETURN
.
