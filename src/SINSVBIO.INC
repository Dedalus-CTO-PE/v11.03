.
. SINSVBIO    
. --------
. Filename     : sinsvbaf.dat
.
RSSIVB1   RESET     KEY7                                                        
          READ      SINSVBA1,KEY7;;                                             
          RETURN
.
RASIVB1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINSVBA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIVB1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINSVBA1,KEY7;SIVBCOD,SIVBLIN,SIVBCOM,SIVBSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIVB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSVBA1;SIVBCOD,SIVBLIN,SIVBCOM,SIVBSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIVB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSVBA1;SIVBCOD,SIVBLIN,SIVBCOM,SIVBSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIVB1                                                                         
          UPDATE    SINSVBA1;SIVBCOD,SIVBLIN,SIVBCOM,SIVBSPA                    
          RETURN
.
WRSIVB1   RESET     KEY7                                                        
          WRITE     SINSVBA1,KEY7;SIVBCOD,SIVBLIN,SIVBCOM,SIVBSPA               
          RETURN
.
DESIVB1   RESET     KEY7                                                        
          DELETE    SINSVBA1,KEY7                                               
          RETURN
.
