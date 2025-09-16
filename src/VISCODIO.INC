.
. VISCODIO    
. --------
. Filename     : viscodaf.dat
.
RSVSCOD1  RESET     KEY37                                                       
          READ      VISCODA1,KEY37;;                                            
          RETURN
.
RAVSCOD1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      VISCODA1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSCOD1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      VISCODA1,KEY37;VSCOTYPE,VSCOTKEY,VSCOCATG,VSCOCODE,VSCOTEXT:
                        VSCOCDAT,VSCOCTIM,VSCOCUID,VSCODELT,VSCODDAT,VSCODTIM:  
                        VSCODUID,VSCOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSCOD1  MOVE      ZERO,OVRCD                                                  
          READKS    VISCODA1;VSCOTYPE,VSCOTKEY,VSCOCATG,VSCOCODE,VSCOTEXT:      
                        VSCOCDAT,VSCOCTIM,VSCOCUID,VSCODELT,VSCODDAT,VSCODTIM:  
                        VSCODUID,VSCOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSCOD1  MOVE      ZERO,OVRCD                                                  
          READKP    VISCODA1;VSCOTYPE,VSCOTKEY,VSCOCATG,VSCOCODE,VSCOTEXT:      
                        VSCOCDAT,VSCOCTIM,VSCOCUID,VSCODELT,VSCODDAT,VSCODTIM:  
                        VSCODUID,VSCOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSCOD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    VISCODA1;VSCOTYPE,VSCOTKEY,VSCOCATG,VSCOCODE,VSCOTEXT:      
                        VSCOCDAT,VSCOCTIM,VSCOCUID,VSCODELT,VSCODDAT,VSCODTIM:  
                        VSCODUID,VSCOSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRVSCOD1  RESET     KEY37                                                       
          WRITE     VISCODA1,KEY37;VSCOTYPE,VSCOTKEY,VSCOCATG,VSCOCODE,VSCOTEXT:
                        VSCOCDAT,VSCOCTIM,VSCOCUID,VSCODELT,VSCODDAT,VSCODTIM:  
                        VSCODUID,VSCOSPAR                                       
          RETURN
.
DEVSCOD1  RESET     KEY37                                                       
          DELETE    VISCODA1,KEY37                                              
          RETURN
.
RLVSCOD1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READL     VISCODA1,KEY37;VSCOTYPE,VSCOTKEY,VSCOCATG,VSCOCODE,VSCOTEXT:
                        VSCOCDAT,VSCOCTIM,VSCOCUID,VSCODELT,VSCODDAT,VSCODTIM:  
                        VSCODUID,VSCOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLVSCOD1  MOVE      ZERO,OVRCD                                                  
          READLKS   VISCODA1;VSCOTYPE,VSCOTKEY,VSCOCATG,VSCOCODE,VSCOTEXT:      
                        VSCOCDAT,VSCOCTIM,VSCOCUID,VSCODELT,VSCODDAT,VSCODTIM:  
                        VSCODUID,VSCOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLVSCOD1  MOVE      ZERO,OVRCD                                                  
          READLKP   VISCODA1;VSCOTYPE,VSCOTKEY,VSCOCATG,VSCOCODE,VSCOTEXT:      
                        VSCOCDAT,VSCOCTIM,VSCOCUID,VSCODELT,VSCODDAT,VSCODTIM:  
                        VSCODUID,VSCOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUVSCOD1  RESET     KEY37                                                       
          UNLOCK    VISCODA1                                                    
          RETURN
.
