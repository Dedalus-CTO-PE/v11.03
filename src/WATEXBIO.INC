.
. WATEXBIO    
. --------
. Filename     : watexbaf.dat
.
RSWTEXB1  RESET     KEY20                                                       
          READ      WATEXBA1,KEY20;;                                            
          RETURN
.
RAWTEXB1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      WATEXBA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTEXB1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      WATEXBA1,KEY20;WTXBNLV1,WTXBNLV2,WTXBNLEP,WTXBNTL1,WTXBNMN1:
                        WTXBNMX1,WTXBNSV1,WTXBNTL2,WTXBNMN2,WTXBNMX2,WTXBNSV2:  
                        WTXBNTL3,WTXBNMN3,WTXBNMX3,WTXBNSV3,WTXBNSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTEXB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATEXBA1;WTXBNLV1,WTXBNLV2,WTXBNLEP,WTXBNTL1,WTXBNMN1:      
                        WTXBNMX1,WTXBNSV1,WTXBNTL2,WTXBNMN2,WTXBNMX2,WTXBNSV2:  
                        WTXBNTL3,WTXBNMN3,WTXBNMX3,WTXBNSV3,WTXBNSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTEXB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATEXBA1;WTXBNLV1,WTXBNLV2,WTXBNLEP,WTXBNTL1,WTXBNMN1:      
                        WTXBNMX1,WTXBNSV1,WTXBNTL2,WTXBNMN2,WTXBNMX2,WTXBNSV2:  
                        WTXBNTL3,WTXBNMN3,WTXBNMX3,WTXBNSV3,WTXBNSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTEXB1                                                                        
          UPDATE    WATEXBA1;WTXBNLV1,WTXBNLV2,WTXBNLEP,WTXBNTL1,WTXBNMN1:      
                        WTXBNMX1,WTXBNSV1,WTXBNTL2,WTXBNMN2,WTXBNMX2,WTXBNSV2:  
                        WTXBNTL3,WTXBNMN3,WTXBNMX3,WTXBNSV3,WTXBNSPA            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTEXB1  RESET     KEY20                                                       
          WRITE     WATEXBA1,KEY20;WTXBNLV1,WTXBNLV2,WTXBNLEP,WTXBNTL1,WTXBNMN1:
                        WTXBNMX1,WTXBNSV1,WTXBNTL2,WTXBNMN2,WTXBNMX2,WTXBNSV2:  
                        WTXBNTL3,WTXBNMN3,WTXBNMX3,WTXBNSV3,WTXBNSPA            
          RETURN
.
DEWTEXB1  RESET     KEY20                                                       
          DELETE    WATEXBA1,KEY20                                              
          RETURN
.
RLWTEXB1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     WATEXBA1,KEY20;WTXBNLV1,WTXBNLV2,WTXBNLEP,WTXBNTL1,WTXBNMN1:
                        WTXBNMX1,WTXBNSV1,WTXBNTL2,WTXBNMN2,WTXBNMX2,WTXBNSV2:  
                        WTXBNTL3,WTXBNMN3,WTXBNMX3,WTXBNSV3,WTXBNSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTEXB1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATEXBA1;WTXBNLV1,WTXBNLV2,WTXBNLEP,WTXBNTL1,WTXBNMN1:      
                        WTXBNMX1,WTXBNSV1,WTXBNTL2,WTXBNMN2,WTXBNMX2,WTXBNSV2:  
                        WTXBNTL3,WTXBNMN3,WTXBNMX3,WTXBNSV3,WTXBNSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTEXB1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATEXBA1;WTXBNLV1,WTXBNLV2,WTXBNLEP,WTXBNTL1,WTXBNMN1:      
                        WTXBNMX1,WTXBNSV1,WTXBNTL2,WTXBNMN2,WTXBNMX2,WTXBNSV2:  
                        WTXBNTL3,WTXBNMN3,WTXBNMX3,WTXBNSV3,WTXBNSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTEXB1  RESET     KEY20                                                       
          UNLOCK    WATEXBA1                                                    
          RETURN
.
