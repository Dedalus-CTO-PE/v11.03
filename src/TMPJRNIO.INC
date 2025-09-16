.
. TMPJRNIO    
. --------
. Filename     : tmpjrnaf.dat
.
RSTMJRN1  RESET     KEY35                                                       
          READ      TMPJRNA1,KEY35;;                                            
          RETURN
.
RATMJRN1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      TMPJRNA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMJRN1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      TMPJRNA1,KEY35;TMJRBTCH,TMJRURNO,TMJRVIST,TMJRINVN,TMJRJTYP:
                        TMJRJDAT,TMJRDESC,TMJRAMNT,TMJRGSTC,TMJRSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMJRN1  MOVE      ZERO,OVRCD                                                  
          READKS    TMPJRNA1;TMJRBTCH,TMJRURNO,TMJRVIST,TMJRINVN,TMJRJTYP:      
                        TMJRJDAT,TMJRDESC,TMJRAMNT,TMJRGSTC,TMJRSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMJRN1  MOVE      ZERO,OVRCD                                                  
          READKP    TMPJRNA1;TMJRBTCH,TMJRURNO,TMJRVIST,TMJRINVN,TMJRJTYP:      
                        TMJRJDAT,TMJRDESC,TMJRAMNT,TMJRGSTC,TMJRSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMJRN1  MOVE      ZERO,OVRCD                                                  
          UPDATE    TMPJRNA1;TMJRBTCH,TMJRURNO,TMJRVIST,TMJRINVN,TMJRJTYP:      
                        TMJRJDAT,TMJRDESC,TMJRAMNT,TMJRGSTC,TMJRSPAR            
          RETURN
.
WRTMJRN1  RESET     KEY35                                                       
          WRITE     TMPJRNA1,KEY35;TMJRBTCH,TMJRURNO,TMJRVIST,TMJRINVN,TMJRJTYP:
                        TMJRJDAT,TMJRDESC,TMJRAMNT,TMJRGSTC,TMJRSPAR            
          RETURN
.
DETMJRN1  RESET     KEY35                                                       
          DELETE    TMPJRNA1,KEY35                                              
          RETURN
.
