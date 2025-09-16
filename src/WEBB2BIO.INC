.
. WEBB2BIO    
. --------
. Filename     : webb2baf.dat
.
RSWBB2B1  RESET     KEY71                                                       
          READ      WEBB2BA1,KEY71;;                                            
          RETURN
.
RAWBB2B1  RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      WEBB2BA1,KEY71;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBB2B1  RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      WEBB2BA1,KEY71;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:
                                   WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:
                                   WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:
                                   WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:
                                   WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBB2B1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBB2BA1;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:      
                             WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:      
                             WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:      
                             WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:      
                             WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBB2B1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBB2BA1;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:      
                             WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:      
                             WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:      
                             WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:      
                             WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBB2B1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBB2BA1;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:      
                             WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:      
                             WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:      
                             WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:      
                             WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR       
          RETURN
.
WRWBB2B1  RESET     KEY71                                                       
          WRITE     WEBB2BA1,KEY71;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:
                                   WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:
                                   WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:
                                   WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:
                                   WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR 
          RETURN
.
DEWBB2B1  RESET     KEY71                                                       
          DELETE    WEBB2BA1,KEY71                                              
          RETURN
.
RSWBB2B2  RESET     KEY71                                                       
          READ      WEBB2BA2,KEY71;;                                            
          RETURN
.
RAWBB2B2  RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      WEBB2BA2,KEY71;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBB2B2  RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      WEBB2BA2,KEY71;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:
                                   WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:
                                   WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:
                                   WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:
                                   WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBB2B2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBB2BA2;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:      
                             WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:      
                             WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:      
                             WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:      
                             WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBB2B2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBB2BA2;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:      
                             WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:      
                             WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:      
                             WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:      
                             WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBB2B2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBB2BA2;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:      
                             WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:      
                             WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:      
                             WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:      
                             WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR       
          RETURN
.
WRWBB2B2  RESET     KEY71                                                       
          WRITE     WEBB2BA2,KEY71;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:
                                   WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:
                                   WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:
                                   WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:
                                   WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR 
          RETURN
.
DEWBB2B2  RESET     KEY71                                                       
          DELETE    WEBB2BA2,KEY71                                              
          RETURN
.
RSWBB2B3  RESET     KEY71                                                       
          READ      WEBB2BA3,KEY71;;                                            
          RETURN
.
RAWBB2B3  RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      WEBB2BA3,KEY71;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBB2B3  RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      WEBB2BA3,KEY71;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:
                                   WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:
                                   WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:
                                   WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:
                                   WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBB2B3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBB2BA3;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:      
                             WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:      
                             WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:      
                             WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:      
                             WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBB2B3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBB2BA3;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:      
                             WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:      
                             WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:      
                             WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:      
                             WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBB2B3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBB2BA3;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:      
                             WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:      
                             WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:      
                             WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:      
                             WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR       
          RETURN
.
WRWBB2B3  RESET     KEY71                                                       
          WRITE     WEBB2BA3,KEY71;WBB2DNAM,WBB2ORGR,WBB2LOCN,WBB2HOSP,WBB2ORGN:
                                   WBB2DDES,WBB2DSTA,WBB2DGDT,WBB2DEDT,WBB2ADKS:
                                   WBB2ADKE,WBB2ADDE,WBB2GTTK,WBB2GTDE,WBB2GTKE:
                                   WBB2GTBR,WBB2GTEX,WBB2DPTH,WBB2CUID,WBB2CDAT:
                                   WBB2CTIM,WBB2UUID,WBB2UDAT,WBB2UTIM,WBB2SPAR 
          RETURN
.
DEWBB2B3  RESET     KEY71                                                       
          DELETE    WEBB2BA3,KEY71                                              
          RETURN
.
