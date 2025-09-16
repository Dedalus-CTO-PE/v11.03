.
. HICCLMIO    
. --------
. Filename     : hicclmaf.dat
.
RSHCCLM1  RESET     KEY8                                                        
          READ      HICCLMA1,KEY8;;                                             
          RETURN
.
RAHCCLM1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      HICCLMA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCCLM1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      HICCLMA1,KEY8;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP: 
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCCLM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICCLMA1;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCCLM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICCLMA1;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCCLM1  PACK      HCCLUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLUDAT  
          CLOCK     TIME,HCCLUTIM
.
          UPDATE    HICCLMA1;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
WRHCCLM1  PACK      HCCLCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLCDAT  
          CLOCK     TIME,HCCLCTIM
.
          RESET     KEY8                                                        
          WRITE     HICCLMA1,KEY8;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP: 
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
DEHCCLM1  RESET     KEY8                                                        
          DELETE    HICCLMA1,KEY8                                               
          RETURN
.
RSHCCLM2  RESET     KEY16                                                       
          READ      HICCLMA2,KEY16;;                                            
          RETURN
.
RAHCCLM2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCCLM2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA2,KEY16;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCCLM2                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICCLMA2;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCCLM2                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICCLMA2;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCCLM2  PACK      HCCLUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLUDAT  
          CLOCK     TIME,HCCLUTIM
.
          UPDATE    HICCLMA2;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
WRHCCLM2  PACK      HCCLCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLCDAT  
          CLOCK     TIME,HCCLCTIM
.
          RESET     KEY16                                                       
          WRITE     HICCLMA2,KEY16;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
DEHCCLM2  RESET     KEY16                                                       
          DELETE    HICCLMA2,KEY16                                              
          RETURN
.
RSHCCLM3  RESET     KEY16                                                       
          READ      HICCLMA3,KEY16;;                                            
          RETURN
.
RAHCCLM3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCCLM3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA3,KEY16;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCCLM3                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICCLMA3;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCCLM3                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICCLMA3;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCCLM3  PACK      HCCLUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLUDAT  
          CLOCK     TIME,HCCLUTIM
.
          UPDATE    HICCLMA3;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
WRHCCLM3  PACK      HCCLCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLCDAT  
          CLOCK     TIME,HCCLCTIM
.
          RESET     KEY16                                                       
          WRITE     HICCLMA3,KEY16;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
DEHCCLM3  RESET     KEY16                                                       
          DELETE    HICCLMA3,KEY16                                              
          RETURN
.
RSHCCLM4  RESET     KEY26                                                       
          READ      HICCLMA4,KEY26;;                                            
          RETURN
.
RAHCCLM4  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA4,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCCLM4  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA4,KEY26;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCCLM4                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICCLMA4;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCCLM4                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICCLMA4;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCCLM4  PACK      HCCLUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLUDAT  
          CLOCK     TIME,HCCLUTIM
.
          UPDATE    HICCLMA4;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
WRHCCLM4  PACK      HCCLCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLCDAT  
          CLOCK     TIME,HCCLCTIM
.
          RESET     KEY26                                                       
          WRITE     HICCLMA4,KEY26;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
DEHCCLM4  RESET     KEY26                                                       
          DELETE    HICCLMA4,KEY26                                              
          RETURN
.
RSHCCLM5  RESET     KEY28                                                       
          READ      HICCLMA5,KEY28;;                                            
          RETURN
.
RAHCCLM5  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA5,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCCLM5  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA5,KEY28;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCCLM5                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICCLMA5;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCCLM5                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICCLMA5;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCCLM5  PACK      HCCLUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLUDAT  
          CLOCK     TIME,HCCLUTIM
.
          UPDATE    HICCLMA5;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
WRHCCLM5  PACK      HCCLCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLCDAT  
          CLOCK     TIME,HCCLCTIM
.
          RESET     KEY28                                                       
          WRITE     HICCLMA5,KEY28;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
DEHCCLM5  RESET     KEY28                                                       
          DELETE    HICCLMA5,KEY28                                              
          RETURN
.
RSHCCLM6  RESET     KEY28                                                       
          READ      HICCLMA6,KEY28;;                                            
          RETURN
.
RAHCCLM6  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA6,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCCLM6  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA6,KEY28;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCCLM6                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICCLMA6;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCCLM6                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICCLMA6;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCCLM6  PACK      HCCLUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLUDAT  
          CLOCK     TIME,HCCLUTIM
.
          UPDATE    HICCLMA6;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
WRHCCLM6  PACK      HCCLCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLCDAT  
          CLOCK     TIME,HCCLCTIM
.
          RESET     KEY28                                                       
          WRITE     HICCLMA6,KEY28;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
DEHCCLM6  RESET     KEY28                                                       
          DELETE    HICCLMA6,KEY28                                              
          RETURN
.
RSHCCLM7  RESET     KEY15                                                       
          READ      HICCLMA7,KEY15;;                                            
          RETURN
.
RAHCCLM7  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA7,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCCLM7  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA7,KEY15;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCCLM7                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICCLMA7;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCCLM7                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICCLMA7;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCCLM7  PACK      HCCLUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLUDAT  
          CLOCK     TIME,HCCLUTIM
.
          UPDATE    HICCLMA7;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
WRHCCLM7  PACK      HCCLCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLCDAT  
          CLOCK     TIME,HCCLCTIM
.
          RESET     KEY15                                                       
          WRITE     HICCLMA7,KEY15;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
DEHCCLM7  RESET     KEY15                                                       
          DELETE    HICCLMA7,KEY15                                              
          RETURN
.
RSHCCLM8  RESET     KEY18                                                       
          READ      HICCLMA8,KEY18;;                                            
          RETURN
.
RAHCCLM8  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA8,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCCLM8  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      HICCLMA8,KEY18;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCCLM8                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICCLMA8;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCCLM8                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICCLMA8;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCCLM8  PACK      HCCLUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLUDAT  
          CLOCK     TIME,HCCLUTIM
.
          UPDATE    HICCLMA8;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:      
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
WRHCCLM8  PACK      HCCLCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCLCDAT  
          CLOCK     TIME,HCCLCTIM
.
          RESET     KEY18                                                       
          WRITE     HICCLMA8,KEY18;HCCLCLMN,HCCLSTAT,HCCLBTCH,HCCLVISN,HCCLVTYP:
                        HCCLURNO,HCCLPMCI,HCCLPYEE,HCCLPSRV,HCCLMPRA,HCCLDATE:  
                        HCCLADOC,HCCLSITE,HCCLCTYP,HCCLCLID,HCCLPIND,HCCLMITM:  
                        HCCLSENT,HCCLRECP,HCCLPBAT,HCCLNBAT,HCCLCAMN,HCCLRCVA:  
                        HCCLREJA,HCCLWOFF,HCCLTRIN,HCCLADJM,HCCLCDAT,HCCLCTIM:  
                        HCCLCUID,HCCLUDAT,HCCLUTIM,HCCLUUID,HCCLVPOS,HCCLPNUM:
                        HCCLSPAR   
          RETURN
.
DEHCCLM8  RESET     KEY18                                                       
          DELETE    HICCLMA8,KEY18                                              
          RETURN
.
