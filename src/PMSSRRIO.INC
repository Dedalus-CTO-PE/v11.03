.
. PMSSRRIO    
. --------
. Filename     : pmssrraf.dat
.
RSPMSRR1  RESET     KEY18                                                       
          READ      PMSSRRA1,KEY18;;                                            
          RETURN
.
RAPMSRR1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSRRA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSRR1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSRRA1,KEY18;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSRR1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSRRA1;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSRR1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSRRA1;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSRR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSRRA1;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSRR1  RESET     KEY18                                                       
          WRITE     PMSSRRA1,KEY18;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          RETURN
.
DEPMSRR1  RESET     KEY18                                                       
          DELETE    PMSSRRA1,KEY18                                              
          RETURN
.
RLPMSRR1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSRRA1,KEY18;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSRR1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSRRA1;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSRR1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSRRA1;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSRR1  RESET     KEY18                                                       
          UNLOCK    PMSSRRA1                                                    
          RETURN
.
RSPMSRR2  RESET     KEY26                                                       
          READ      PMSSRRA2,KEY26;;                                            
          RETURN
.
RAPMSRR2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSRRA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSRR2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSRRA2,KEY26;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSRR2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSRRA2;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSRR2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSRRA2;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSRR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSRRA2;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSRR2  RESET     KEY26                                                       
          WRITE     PMSSRRA2,KEY26;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          RETURN
.
DEPMSRR2  RESET     KEY26                                                       
          DELETE    PMSSRRA2,KEY26                                              
          RETURN
.
RLPMSRR2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSRRA2,KEY26;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSRR2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSRRA2;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSRR2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSRRA2;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSRR2  RESET     KEY26                                                       
          UNLOCK    PMSSRRA2                                                    
          RETURN
.
RSPMSRR3  RESET     KEY34                                                       
          READ      PMSSRRA3,KEY34;;                                            
          RETURN
.
RAPMSRR3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSRRA3,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSRR3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSRRA3,KEY34;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSRR3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSRRA3;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSRR3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSRRA3;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSRR3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSRRA3;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSRR3  RESET     KEY34                                                       
          WRITE     PMSSRRA3,KEY34;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          RETURN
.
DEPMSRR3  RESET     KEY34                                                       
          DELETE    PMSSRRA3,KEY34                                              
          RETURN
.
RLPMSRR3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSRRA3,KEY34;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSRR3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSRRA3;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSRR3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSRRA3;PMRRUMID,PMRRUCNT,PMRRMNUM,PMRRURNO,PMRRMTYP:      
                        PMRRRKEY,PMRRRDTE,PMRRRTIM,PMRRRESA,PMRRRESB,PMRRRESC:  
                        PMRRRESD,PMRRRESE,PMRRRESF,PMRRSTAT,PMRRMAPD,PMRRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSRR3  RESET     KEY34                                                       
          UNLOCK    PMSSRRA3                                                    
          RETURN
.
