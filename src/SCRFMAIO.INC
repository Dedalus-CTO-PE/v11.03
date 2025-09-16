.
. SCRFMAIO    
. --------
. Filename     : scrfmaaf.dat
.
RSSCFM1   RESET     KEY16                                                       
          READ      SCRFMAA1,KEY16;;                                            
          RETURN
.
RASCFM1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFMAA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCFM1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFMAA1,KEY16;SCFMFID,SCFMPID,SCFMDES,SCFMTYP,SCFMSFI:     
                        SCFMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCFM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRFMAA1;SCFMFID,SCFMPID,SCFMDES,SCFMTYP,SCFMSFI:           
                        SCFMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCFM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRFMAA1;SCFMFID,SCFMPID,SCFMDES,SCFMTYP,SCFMSFI:           
                        SCFMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCFM1                                                                         
          UPDATE    SCRFMAA1;SCFMFID,SCFMPID,SCFMDES,SCFMTYP,SCFMSFI:           
                        SCFMSPA                                                 
          RETURN
.
WRSCFM1   RESET     KEY16                                                       
          WRITE     SCRFMAA1,KEY16;SCFMFID,SCFMPID,SCFMDES,SCFMTYP,SCFMSFI:     
                        SCFMSPA                                                 
          RETURN
.
DESCFM1   RESET     KEY16                                                       
          DELETE    SCRFMAA1,KEY16                                              
          RETURN
.
RSSCFM2   RESET     KEY16                                                       
          READ      SCRFMAA2,KEY16;;                                            
          RETURN
.
RASCFM2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFMAA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCFM2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFMAA2,KEY16;SCFMFID,SCFMPID,SCFMDES,SCFMTYP,SCFMSFI:     
                        SCFMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCFM2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRFMAA2;SCFMFID,SCFMPID,SCFMDES,SCFMTYP,SCFMSFI:           
                        SCFMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCFM2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRFMAA2;SCFMFID,SCFMPID,SCFMDES,SCFMTYP,SCFMSFI:           
                        SCFMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCFM2                                                                         
          UPDATE    SCRFMAA2;SCFMFID,SCFMPID,SCFMDES,SCFMTYP,SCFMSFI:           
                        SCFMSPA                                                 
          RETURN
.
WRSCFM2   RESET     KEY16                                                       
          WRITE     SCRFMAA2,KEY16;SCFMFID,SCFMPID,SCFMDES,SCFMTYP,SCFMSFI:     
                        SCFMSPA                                                 
          RETURN
.
DESCFM2   RESET     KEY16                                                       
          DELETE    SCRFMAA2,KEY16                                              
          RETURN
.
