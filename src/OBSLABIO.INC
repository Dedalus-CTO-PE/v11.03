.
. OBSLABIO    
. --------
. Filename     : obslabaf.dat
.
RSOBLAB1  RESET     KEY11                                                       
          READ      OBSLABA1,KEY11;;                                            
          RETURN
.
RAOBLAB1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSLABA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBLAB1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSLABA1,KEY11;OBLBVISN,OBLBLINE,OBLBDESC,OBLBSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBLAB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSLABA1;OBLBVISN,OBLBLINE,OBLBDESC,OBLBSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBLAB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSLABA1;OBLBVISN,OBLBLINE,OBLBDESC,OBLBSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBLAB1                                                                        
          UPDATE    OBSLABA1;OBLBVISN,OBLBLINE,OBLBDESC,OBLBSPAR                
          RETURN
.
WROBLAB1  RESET     KEY11                                                       
          WRITE     OBSLABA1,KEY11;OBLBVISN,OBLBLINE,OBLBDESC,OBLBSPAR          
          RETURN
.
DEOBLAB1  RESET     KEY11                                                       
          DELETE    OBSLABA1,KEY11                                              
          RETURN
.
