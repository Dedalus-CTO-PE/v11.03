.
. MRTBRHIO    
. --------
. Filename     : mrtbrhaf.dat
.
RSMRBRH1  RESET     KEY10                                                       
          READ      MRTBRHA1,KEY10;;                                            
          RETURN
.
RAMRBRH1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      MRTBRHA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRBRH1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      MRTBRHA1,KEY10;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRBRH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTBRHA1;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRBRH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTBRHA1;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRBRH1                                                                        
          UPDATE    MRTBRHA1;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRBRH1  RESET     KEY10                                                       
          WRITE     MRTBRHA1,KEY10;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          RETURN
.
DEMRBRH1  RESET     KEY10                                                       
          DELETE    MRTBRHA1,KEY10                                              
          RETURN
.
RLMRBRH1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     MRTBRHA1,KEY10;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRBRH1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MRTBRHA1;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRBRH1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MRTBRHA1;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRBRH1  RESET     KEY10                                                       
          UNLOCK    MRTBRHA1                                                    
          RETURN
.
RSMRBRH2  RESET     KEY23                                                       
          READ      MRTBRHA2,KEY23;;                                            
          RETURN
.
RAMRBRH2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      MRTBRHA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRBRH2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      MRTBRHA2,KEY23;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRBRH2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTBRHA2;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRBRH2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTBRHA2;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRBRH2                                                                        
          UPDATE    MRTBRHA2;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRBRH2  RESET     KEY23                                                       
          WRITE     MRTBRHA2,KEY23;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          RETURN
.
DEMRBRH2  RESET     KEY23                                                       
          DELETE    MRTBRHA2,KEY23                                              
          RETURN
.
RLMRBRH2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     MRTBRHA2,KEY23;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRBRH2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MRTBRHA2;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRBRH2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MRTBRHA2;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRBRH2  RESET     KEY23                                                       
          UNLOCK    MRTBRHA2                                                    
          RETURN
.
RSMRBRH3  RESET     KEY30                                                       
          READ      MRTBRHA3,KEY30;;                                            
          RETURN
.
RAMRBRH3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MRTBRHA3,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRBRH3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MRTBRHA3,KEY30;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRBRH3                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTBRHA3;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRBRH3                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTBRHA3;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRBRH3                                                                        
          UPDATE    MRTBRHA3;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRBRH3  RESET     KEY30                                                       
          WRITE     MRTBRHA3,KEY30;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          RETURN
.
DEMRBRH3  RESET     KEY30                                                       
          DELETE    MRTBRHA3,KEY30                                              
          RETURN
.
RLMRBRH3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     MRTBRHA3,KEY30;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRBRH3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MRTBRHA3;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRBRH3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MRTBRHA3;MRBRRQNM,MRBRDTRI,MRBRTMRI,MRBRDTRE,MRBRTMRE:      
                        MRBRLOCA,MRBRNUMR,MRBRREQS,MRBRPHON,MRBRPAGR,MRBRRHOS:  
                        MRBRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRBRH3  RESET     KEY30                                                       
          UNLOCK    MRTBRHA3                                                    
          RETURN
.
