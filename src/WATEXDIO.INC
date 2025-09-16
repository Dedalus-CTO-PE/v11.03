.
. WATEXDIO    
. --------
. Filename     : watexdaf.dat
.
RSWTEXD1  RESET     KEY40                                                       
          READ      WATEXDA1,KEY40;;                                            
          RETURN
.
RAWTEXD1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WATEXDA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTEXD1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WATEXDA1,KEY40;WTXDNLV1,WTXDNLV2,WTXDNLV3,WTXDNLV4,WTXDNLEP:
                        WTXDNTL1,WTXDNMN1,WTXDNMX1,WTXDNSV1,WTXDNTL2,WTXDNMN2:  
                        WTXDNMX2,WTXDNSV2,WTXDNTL3,WTXDNMN3,WTXDNMX3,WTXDNSV3:  
                        WTXDNSPA                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTEXD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATEXDA1;WTXDNLV1,WTXDNLV2,WTXDNLV3,WTXDNLV4,WTXDNLEP:      
                        WTXDNTL1,WTXDNMN1,WTXDNMX1,WTXDNSV1,WTXDNTL2,WTXDNMN2:  
                        WTXDNMX2,WTXDNSV2,WTXDNTL3,WTXDNMN3,WTXDNMX3,WTXDNSV3:  
                        WTXDNSPA                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTEXD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATEXDA1;WTXDNLV1,WTXDNLV2,WTXDNLV3,WTXDNLV4,WTXDNLEP:      
                        WTXDNTL1,WTXDNMN1,WTXDNMX1,WTXDNSV1,WTXDNTL2,WTXDNMN2:  
                        WTXDNMX2,WTXDNSV2,WTXDNTL3,WTXDNMN3,WTXDNMX3,WTXDNSV3:  
                        WTXDNSPA                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTEXD1                                                                        
          UPDATE    WATEXDA1;WTXDNLV1,WTXDNLV2,WTXDNLV3,WTXDNLV4,WTXDNLEP:      
                        WTXDNTL1,WTXDNMN1,WTXDNMX1,WTXDNSV1,WTXDNTL2,WTXDNMN2:  
                        WTXDNMX2,WTXDNSV2,WTXDNTL3,WTXDNMN3,WTXDNMX3,WTXDNSV3:  
                        WTXDNSPA                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTEXD1  RESET     KEY40                                                       
          WRITE     WATEXDA1,KEY40;WTXDNLV1,WTXDNLV2,WTXDNLV3,WTXDNLV4,WTXDNLEP:
                        WTXDNTL1,WTXDNMN1,WTXDNMX1,WTXDNSV1,WTXDNTL2,WTXDNMN2:  
                        WTXDNMX2,WTXDNSV2,WTXDNTL3,WTXDNMN3,WTXDNMX3,WTXDNSV3:  
                        WTXDNSPA                                                
          RETURN
.
DEWTEXD1  RESET     KEY40                                                       
          DELETE    WATEXDA1,KEY40                                              
          RETURN
.
RLWTEXD1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READL     WATEXDA1,KEY40;WTXDNLV1,WTXDNLV2,WTXDNLV3,WTXDNLV4,WTXDNLEP:
                        WTXDNTL1,WTXDNMN1,WTXDNMX1,WTXDNSV1,WTXDNTL2,WTXDNMN2:  
                        WTXDNMX2,WTXDNSV2,WTXDNTL3,WTXDNMN3,WTXDNMX3,WTXDNSV3:  
                        WTXDNSPA                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTEXD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATEXDA1;WTXDNLV1,WTXDNLV2,WTXDNLV3,WTXDNLV4,WTXDNLEP:      
                        WTXDNTL1,WTXDNMN1,WTXDNMX1,WTXDNSV1,WTXDNTL2,WTXDNMN2:  
                        WTXDNMX2,WTXDNSV2,WTXDNTL3,WTXDNMN3,WTXDNMX3,WTXDNSV3:  
                        WTXDNSPA                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTEXD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATEXDA1;WTXDNLV1,WTXDNLV2,WTXDNLV3,WTXDNLV4,WTXDNLEP:      
                        WTXDNTL1,WTXDNMN1,WTXDNMX1,WTXDNSV1,WTXDNTL2,WTXDNMN2:  
                        WTXDNMX2,WTXDNSV2,WTXDNTL3,WTXDNMN3,WTXDNMX3,WTXDNSV3:  
                        WTXDNSPA                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTEXD1  RESET     KEY40                                                       
          UNLOCK    WATEXDA1                                                    
          RETURN
.
