.
. SINCUAIO    
. --------
. Filename     : sincuaaf.dat
.
RSSICU1   RESET     KEY18                                                       
          READ      SINCUAA1,KEY18;;                                            
          RETURN
.
RASICU1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      SINCUAA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICU1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      SINCUAA1,KEY18;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:     
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICU1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCUAA1;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:           
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICU1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCUAA1;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:           
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICU1                                                                         
          UPDATE    SINCUAA1;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:           
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          RETURN
.
WRSICU1   RESET     KEY18                                                       
          WRITE     SINCUAA1,KEY18;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:     
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          RETURN
.
DESICU1   RESET     KEY18                                                       
          DELETE    SINCUAA1,KEY18                                              
          RETURN
.
RSSICU2   RESET     KEY25                                                       
          READ      SINCUAA2,KEY25;;                                            
          RETURN
.
RASICU2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      SINCUAA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICU2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      SINCUAA2,KEY25;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:     
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICU2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCUAA2;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:           
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICU2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCUAA2;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:           
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICU2                                                                         
          UPDATE    SINCUAA2;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:           
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          RETURN
.
WRSICU2   RESET     KEY25                                                       
          WRITE     SINCUAA2,KEY25;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:     
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          RETURN
.
DESICU2   RESET     KEY25                                                       
          DELETE    SINCUAA2,KEY25                                              
          RETURN
.
RSSICU3   RESET     KEY23                                                       
          READ      SINCUAA3,KEY23;;                                            
          RETURN
.
RASICU3   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      SINCUAA3,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICU3   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      SINCUAA3,KEY23;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:     
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICU3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCUAA3;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:           
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICU3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCUAA3;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:           
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICU3                                                                         
          UPDATE    SINCUAA3;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:           
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          RETURN
.
WRSICU3   RESET     KEY23                                                       
          WRITE     SINCUAA3,KEY23;SICUDAT,SICUTIM,SICUUNI,SICUSUP,SICUCAT:     
                        SICUSUT,SICUTYP,SICUDES1,SICUDES2,SICUSPA               
          RETURN
.
DESICU3   RESET     KEY23                                                       
          DELETE    SINCUAA3,KEY23                                              
          RETURN
.
