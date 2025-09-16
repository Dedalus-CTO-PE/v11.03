.
. SINOQAIO    
. --------
. Filename     : sinoqaaf.dat
.
RSSIQA1   RESET     KEY13                                                       
          READ      SINOQAA1,KEY13;;                                            
          RETURN
.
RASIQA1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQAA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIQA1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQAA1,KEY13;SIQACST,SIQARID,SIQACAT,SIQAUNT,SIQAPD:      
                        SIQAPN,SIQAQTY,SIQASTA,SIQAUID,SIQADAT,SIQATIM:         
                        SIQAPOR,SIQANSMO,SIQANSMS,SIQASPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIQA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINOQAA1;SIQACST,SIQARID,SIQACAT,SIQAUNT,SIQAPD:            
                        SIQAPN,SIQAQTY,SIQASTA,SIQAUID,SIQADAT,SIQATIM:         
                        SIQAPOR,SIQANSMO,SIQANSMS,SIQASPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIQA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINOQAA1;SIQACST,SIQARID,SIQACAT,SIQAUNT,SIQAPD:            
                        SIQAPN,SIQAQTY,SIQASTA,SIQAUID,SIQADAT,SIQATIM:         
                        SIQAPOR,SIQANSMO,SIQANSMS,SIQASPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIQA1                                                                         
          UPDATE    SINOQAA1;SIQACST,SIQARID,SIQACAT,SIQAUNT,SIQAPD:            
                        SIQAPN,SIQAQTY,SIQASTA,SIQAUID,SIQADAT,SIQATIM:         
                        SIQAPOR,SIQANSMO,SIQANSMS,SIQASPA                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIQA1   RESET     KEY13                                                       
          WRITE     SINOQAA1,KEY13;SIQACST,SIQARID,SIQACAT,SIQAUNT,SIQAPD:      
                        SIQAPN,SIQAQTY,SIQASTA,SIQAUID,SIQADAT,SIQATIM:         
                        SIQAPOR,SIQANSMO,SIQANSMS,SIQASPA                       
          RETURN
.
DESIQA1   RESET     KEY13                                                       
          DELETE    SINOQAA1,KEY13                                              
          RETURN
.
RLSIQA1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     SINOQAA1,KEY13;SIQACST,SIQARID,SIQACAT,SIQAUNT,SIQAPD:      
                        SIQAPN,SIQAQTY,SIQASTA,SIQAUID,SIQADAT,SIQATIM:         
                        SIQAPOR,SIQANSMO,SIQANSMS,SIQASPA                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIQA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINOQAA1;SIQACST,SIQARID,SIQACAT,SIQAUNT,SIQAPD:            
                        SIQAPN,SIQAQTY,SIQASTA,SIQAUID,SIQADAT,SIQATIM:         
                        SIQAPOR,SIQANSMO,SIQANSMS,SIQASPA                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIQA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINOQAA1;SIQACST,SIQARID,SIQACAT,SIQAUNT,SIQAPD:            
                        SIQAPN,SIQAQTY,SIQASTA,SIQAUID,SIQADAT,SIQATIM:         
                        SIQAPOR,SIQANSMO,SIQANSMS,SIQASPA                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIQA1   RESET     KEY13                                                       
          UNLOCK    SINOQAA1                                                    
          RETURN
.
