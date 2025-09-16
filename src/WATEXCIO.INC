.
. WATEXCIO    
. --------
. Filename     : watexcaf.dat
.
RSWTEXC1  RESET     KEY30                                                       
          READ      WATEXCA1,KEY30;;                                            
          RETURN
.
RAWTEXC1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WATEXCA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTEXC1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WATEXCA1,KEY30;WTXCNLV1,WTXCNLV2,WTXCNLV3,WTXCNLEP,WTXCNTL1:
                        WTXCNMN1,WTXCNMX1,WTXCNSV1,WTXCNTL2,WTXCNMN2,WTXCNMX2:  
                        WTXCNSV2,WTXCNTL3,WTXCNMN3,WTXCNMX3,WTXCNSV3,WTXCNSPA   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTEXC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATEXCA1;WTXCNLV1,WTXCNLV2,WTXCNLV3,WTXCNLEP,WTXCNTL1:      
                        WTXCNMN1,WTXCNMX1,WTXCNSV1,WTXCNTL2,WTXCNMN2,WTXCNMX2:  
                        WTXCNSV2,WTXCNTL3,WTXCNMN3,WTXCNMX3,WTXCNSV3,WTXCNSPA   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTEXC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATEXCA1;WTXCNLV1,WTXCNLV2,WTXCNLV3,WTXCNLEP,WTXCNTL1:      
                        WTXCNMN1,WTXCNMX1,WTXCNSV1,WTXCNTL2,WTXCNMN2,WTXCNMX2:  
                        WTXCNSV2,WTXCNTL3,WTXCNMN3,WTXCNMX3,WTXCNSV3,WTXCNSPA   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTEXC1                                                                        
          UPDATE    WATEXCA1;WTXCNLV1,WTXCNLV2,WTXCNLV3,WTXCNLEP,WTXCNTL1:      
                        WTXCNMN1,WTXCNMX1,WTXCNSV1,WTXCNTL2,WTXCNMN2,WTXCNMX2:  
                        WTXCNSV2,WTXCNTL3,WTXCNMN3,WTXCNMX3,WTXCNSV3,WTXCNSPA   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTEXC1  RESET     KEY30                                                       
          WRITE     WATEXCA1,KEY30;WTXCNLV1,WTXCNLV2,WTXCNLV3,WTXCNLEP,WTXCNTL1:
                        WTXCNMN1,WTXCNMX1,WTXCNSV1,WTXCNTL2,WTXCNMN2,WTXCNMX2:  
                        WTXCNSV2,WTXCNTL3,WTXCNMN3,WTXCNMX3,WTXCNSV3,WTXCNSPA   
          RETURN
.
DEWTEXC1  RESET     KEY30                                                       
          DELETE    WATEXCA1,KEY30                                              
          RETURN
.
RLWTEXC1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     WATEXCA1,KEY30;WTXCNLV1,WTXCNLV2,WTXCNLV3,WTXCNLEP,WTXCNTL1:
                        WTXCNMN1,WTXCNMX1,WTXCNSV1,WTXCNTL2,WTXCNMN2,WTXCNMX2:  
                        WTXCNSV2,WTXCNTL3,WTXCNMN3,WTXCNMX3,WTXCNSV3,WTXCNSPA   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTEXC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATEXCA1;WTXCNLV1,WTXCNLV2,WTXCNLV3,WTXCNLEP,WTXCNTL1:      
                        WTXCNMN1,WTXCNMX1,WTXCNSV1,WTXCNTL2,WTXCNMN2,WTXCNMX2:  
                        WTXCNSV2,WTXCNTL3,WTXCNMN3,WTXCNMX3,WTXCNSV3,WTXCNSPA   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTEXC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATEXCA1;WTXCNLV1,WTXCNLV2,WTXCNLV3,WTXCNLEP,WTXCNTL1:      
                        WTXCNMN1,WTXCNMX1,WTXCNSV1,WTXCNTL2,WTXCNMN2,WTXCNMX2:  
                        WTXCNSV2,WTXCNTL3,WTXCNMN3,WTXCNMX3,WTXCNSV3,WTXCNSPA   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTEXC1  RESET     KEY30                                                       
          UNLOCK    WATEXCA1                                                    
          RETURN
.
