.
. EMRSTAIO    
. --------
. Filename     : emrstaaf.dat
.
RSEMSTA1  RESET     KEY13                                                       
          READ      EMRSTAA1,KEY13;;                                            
          RETURN
.
RAEMSTA1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      EMRSTAA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMSTA1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      EMRSTAA1,KEY13;EMSTCATA,EMSTCODE,EMSTDATE,EMSTNUMB,EMSTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMSTA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRSTAA1;EMSTCATA,EMSTCODE,EMSTDATE,EMSTNUMB,EMSTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMSTA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRSTAA1;EMSTCATA,EMSTCODE,EMSTDATE,EMSTNUMB,EMSTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMSTA1                                                                        
          UPDATE    EMRSTAA1;EMSTCATA,EMSTCODE,EMSTDATE,EMSTNUMB,EMSTSPAR       
          RETURN
.
WREMSTA1  RESET     KEY13                                                       
          WRITE     EMRSTAA1,KEY13;EMSTCATA,EMSTCODE,EMSTDATE,EMSTNUMB,EMSTSPAR 
          RETURN
.
DEEMSTA1  RESET     KEY13                                                       
          DELETE    EMRSTAA1,KEY13                                              
          RETURN
.
