.
. SINIMFA1  Sequential Read of Text File
.
RKSIMF1C  MOVE      ZERO,OVRCD
          MOVE      ZERO,EXIT 
          TRAP      SETEX000 IF FORMAT
          READ      SINIMFA1,SEQ;SIMFTYPC,SIMFDATC,SIMFCSTC,SIMFDELC:
                                 SIMFWARC,SIMFCATC,SIMFQTYC
          GOTO      OVERCOND IF OVER
          PACK      SIMFTYPC,SIMFTYPC,SP70
          PACK      SIMFDATC,SIMFDATC,SP70
          PACK      SIMFCSTC,SIMFCSTC,SP70
          PACK      SIMFDELC,SIMFDELC,SP70
          PACK      SIMFWARC,SIMFWARC,SP70
          PACK      SIMFCATC,SIMFCATC,SP70
          RETURN
.
SETEX000  MOVE      ONE,EXIT
          RETURN
.
.
. SINIMFFD    
. --------
. Filename     : sinimfaf.dat
.
RSSIMF1   RESET     KEY68                                                       
          READ      SINIMFB1,KEY68;;                                            
          RETURN
.
RASIMF1   RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMFB1,KEY68;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIMF1   RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMFB1,KEY68;SIMFTYP,SIMFDAT,SIMFCST,SIMFDEL,SIMFWAR:    
                                   SIMFCAT,SIMFQTY
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIMF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINIMFB1;SIMFTYP,SIMFDAT,SIMFCST,SIMFDEL,SIMFWAR:    
                             SIMFCAT,SIMFQTY
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIMF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINIMFB1;SIMFTYP,SIMFDAT,SIMFCST,SIMFDEL,SIMFWAR:    
                             SIMFCAT,SIMFQTY
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIMF1                                                                         
          UPDATE    SINIMFB1;SIMFTYP,SIMFDAT,SIMFCST,SIMFDEL,SIMFWAR:    
                             SIMFCAT,SIMFQTY
          RETURN
.
WRSIMF1   RESET     KEY68                                                       
          WRITE     SINIMFB1,KEY68;SIMFTYP,SIMFDAT,SIMFCST,SIMFDEL,SIMFWAR:    
                                   SIMFCAT,SIMFQTY
          RETURN
.
DESIMF1   RESET     KEY68                                                       
          DELETE    SINIMFB1,KEY68                                              
          RETURN
.
