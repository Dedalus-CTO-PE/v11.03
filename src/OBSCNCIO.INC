. 23/12/2010  Saroeun Soeur CAR 235856
.             added OBCDTYP
.
. OBSCNCIO    
. --------
. Filename     : obscncaf.dat
.
RSOBCC1   RESET     KEY3                                                        
          READ      OBSCNCA1,KEY3;;                                             
          RETURN
.
RAOBCC1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      OBSCNCA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBCC1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      OBSCNCA1,KEY3;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:      
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBCC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSCNCA1;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:           
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBCC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSCNCA1;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:           
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBCC1                                                                         
          UPDATE    OBSCNCA1;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:           
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBCC1   RESET     KEY3                                                        
          WRITE     OBSCNCA1,KEY3;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:      
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          RETURN
.
DEOBCC1   RESET     KEY3                                                        
          DELETE    OBSCNCA1,KEY3                                               
          RETURN
.
RLOBCC1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     OBSCNCA1,KEY3;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:      
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBCC1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSCNCA1;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:           
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBCC1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSCNCA1;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:           
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBCC1   RESET     KEY3                                                        
          UNLOCK    OBSCNCA1                                                    
          RETURN
.
RSOBCC2   RESET     KEY38                                                       
          READ      OBSCNCA2,KEY38;;                                            
          RETURN
.
RAOBCC2   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      OBSCNCA2,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBCC2   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      OBSCNCA2,KEY38;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:     
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBCC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSCNCA2;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:           
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBCC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSCNCA2;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:           
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBCC2                                                                         
          UPDATE    OBSCNCA2;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:           
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBCC2   RESET     KEY38                                                       
          WRITE     OBSCNCA2,KEY38;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:     
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          RETURN
.
DEOBCC2   RESET     KEY38                                                       
          DELETE    OBSCNCA2,KEY38                                              
          RETURN
.
RLOBCC2   RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READL     OBSCNCA2,KEY38;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:     
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBCC2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSCNCA2;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:           
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBCC2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSCNCA2;OBCCTYP,OBCCDES,OBCCTMI,OBCCTMO,OBCCSLV:           
                        OBCCDHL,OBCDTYP,OBCCSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBCC2   RESET     KEY38                                                       
          UNLOCK    OBSCNCA2                                                    
          RETURN
.
