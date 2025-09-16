.
. IBAALVIO    
. --------
. Filename     : ibaalvaf.dat
.
RSIBALV1  RESET     KEY8                                                        
          READ      IBAALVA1,KEY8;;                                             
          RETURN
.
RAIBALV1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      IBAALVA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBALV1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      IBAALVA1,KEY8;IBAVVISN,IBAVAVIS,IBAVTYPE,IBAVSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBALV1  MOVE      ZERO,OVRCD                                                  
          READKS    IBAALVA1;IBAVVISN,IBAVAVIS,IBAVTYPE,IBAVSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBALV1  MOVE      ZERO,OVRCD                                                  
          READKP    IBAALVA1;IBAVVISN,IBAVAVIS,IBAVTYPE,IBAVSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBALV1  MOVE      ZERO,OVRCD                                                  
          UPDATE    IBAALVA1;IBAVVISN,IBAVAVIS,IBAVTYPE,IBAVSPAR                
          RETURN
.
WRIBALV1  RESET     KEY8                                                        
          WRITE     IBAALVA1,KEY8;IBAVVISN,IBAVAVIS,IBAVTYPE,IBAVSPAR           
          RETURN
.
DEIBALV1  RESET     KEY8                                                        
          DELETE    IBAALVA1,KEY8                                               
          RETURN
.
RSIBALV2  RESET     KEY28                                                       
          READ      IBAALVA2,KEY28;;                                            
          RETURN
.
RAIBALV2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      IBAALVA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBALV2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      IBAALVA2,KEY28;IBAVVISN,IBAVAVIS,IBAVTYPE,IBAVSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBALV2  MOVE      ZERO,OVRCD                                                  
          READKS    IBAALVA2;IBAVVISN,IBAVAVIS,IBAVTYPE,IBAVSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBALV2  MOVE      ZERO,OVRCD                                                  
          READKP    IBAALVA2;IBAVVISN,IBAVAVIS,IBAVTYPE,IBAVSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBALV2  MOVE      ZERO,OVRCD                                                  
          UPDATE    IBAALVA2;IBAVVISN,IBAVAVIS,IBAVTYPE,IBAVSPAR                
          RETURN
.
WRIBALV2  RESET     KEY28                                                       
          WRITE     IBAALVA2,KEY28;IBAVVISN,IBAVAVIS,IBAVTYPE,IBAVSPAR          
          RETURN
.
DEIBALV2  RESET     KEY28                                                       
          DELETE    IBAALVA2,KEY28                                              
          RETURN
.
