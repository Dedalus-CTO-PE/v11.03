.
. IBAHLPIO    
. --------
. Filename     : ibahlpaf.dat
.
RSIBHLP1  RESET     KEY11                                                       
          READ      IBAHLPA1,KEY11;;                                            
          RETURN
.
RAIBHLP1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      IBAHLPA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBHLP1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      IBAHLPA1,KEY11;IBHPNAME,DIBHPLIN,IBHPLINK,IBHPTEXT          
          GOTO      OVERCOND IF OVER
          MOVE      DIBHPLIN,IBHPLINE                                           
          RETURN
.
RKIBHLP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBAHLPA1;IBHPNAME,DIBHPLIN,IBHPLINK,IBHPTEXT                
          GOTO      OVERCOND IF OVER
          MOVE      DIBHPLIN,IBHPLINE                                           
          RETURN
.
RPIBHLP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBAHLPA1;IBHPNAME,DIBHPLIN,IBHPLINK,IBHPTEXT                
          GOTO      OVERCOND IF OVER
          MOVE      DIBHPLIN,IBHPLINE                                           
          RETURN
.
UPIBHLP1                                                                        
          MOVE      IBHPLINE,DIBHPLIN                                           
          UPDATE    IBAHLPA1;IBHPNAME,DIBHPLIN,IBHPLINK,IBHPTEXT                
          RETURN
.
WRIBHLP1  RESET     KEY11                                                       
          MOVE      IBHPLINE,DIBHPLIN                                           
          WRITE     IBAHLPA1,KEY11;IBHPNAME,DIBHPLIN,IBHPLINK,IBHPTEXT          
          RETURN
.
DEIBHLP1  RESET     KEY11                                                       
          DELETE    IBAHLPA1,KEY11                                              
          RETURN
.
RSIBHLP2  RESET     KEY11                                                       
          READ      IBAHLPA2,KEY11;;                                            
          RETURN
.
RAIBHLP2  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      IBAHLPA2,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBHLP2  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      IBAHLPA2,KEY11;IBHPNAME,DIBHPLIN,IBHPLINK,IBHPTEXT          
          GOTO      OVERCOND IF OVER
          MOVE      DIBHPLIN,IBHPLINE                                           
          RETURN
.
RKIBHLP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBAHLPA2;IBHPNAME,DIBHPLIN,IBHPLINK,IBHPTEXT                
          GOTO      OVERCOND IF OVER
          MOVE      DIBHPLIN,IBHPLINE                                           
          RETURN
.
RPIBHLP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBAHLPA2;IBHPNAME,DIBHPLIN,IBHPLINK,IBHPTEXT                
          GOTO      OVERCOND IF OVER
          MOVE      DIBHPLIN,IBHPLINE                                           
          RETURN
.
UPIBHLP2                                                                        
          MOVE      IBHPLINE,DIBHPLIN                                           
          UPDATE    IBAHLPA2;IBHPNAME,DIBHPLIN,IBHPLINK,IBHPTEXT                
          RETURN
.
WRIBHLP2  RESET     KEY11                                                       
          MOVE      IBHPLINE,DIBHPLIN                                           
          WRITE     IBAHLPA2,KEY11;IBHPNAME,DIBHPLIN,IBHPLINK,IBHPTEXT          
          RETURN
.
DEIBHLP2  RESET     KEY11                                                       
          DELETE    IBAHLPA2,KEY11                                              
          RETURN
.
