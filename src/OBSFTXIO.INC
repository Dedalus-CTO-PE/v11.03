.
. OBSFTXIO    
. --------
. Filename     : obsftxaf.dat
.
RSOBFTX1  RESET     KEY14                                                       
          READ      OBSFTXA1,KEY14;;                                            
          RETURN
.
RAOBFTX1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      OBSFTXA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBFTX1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      OBSFTXA1,KEY14;OBFTVISN,OBFTTYPE,OBFTLINE,OBFTDATA,OBFTUKEY:
                        OBFTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBFTX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSFTXA1;OBFTVISN,OBFTTYPE,OBFTLINE,OBFTDATA,OBFTUKEY:      
                        OBFTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBFTX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSFTXA1;OBFTVISN,OBFTTYPE,OBFTLINE,OBFTDATA,OBFTUKEY:      
                        OBFTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBFTX1                                                                        
          UPDATE    OBSFTXA1;OBFTVISN,OBFTTYPE,OBFTLINE,OBFTDATA,OBFTUKEY:      
                        OBFTSPAR                                                
          RETURN
.
WROBFTX1  RESET     KEY14                                                       
          WRITE     OBSFTXA1,KEY14;OBFTVISN,OBFTTYPE,OBFTLINE,OBFTDATA,OBFTUKEY:
                        OBFTSPAR                                                
          RETURN
.
DEOBFTX1  RESET     KEY14                                                       
          DELETE    OBSFTXA1,KEY14                                              
          RETURN
.
