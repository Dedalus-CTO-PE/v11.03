.
. CASXHDIO    
. --------
. Filename     : casxhdaf.dat
.
RSCAXH1   RESET     KEY16                                                       
          READ      CASXHDA1,KEY16;;                                            
          RETURN
.
RACAXH1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CASXHDA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAXH1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CASXHDA1,KEY16;CAXHTOE,CAXHSTY,CAXHKEY,CAXHDES,CAXHSUM:     
                        CAXHSUMA,CAXHSUMB,CAXHSUMC,CAXHSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCAXH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CASXHDA1;CAXHTOE,CAXHSTY,CAXHKEY,CAXHDES,CAXHSUM:           
                        CAXHSUMA,CAXHSUMB,CAXHSUMC,CAXHSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCAXH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CASXHDA1;CAXHTOE,CAXHSTY,CAXHKEY,CAXHDES,CAXHSUM:           
                        CAXHSUMA,CAXHSUMB,CAXHSUMC,CAXHSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCAXH1                                                                         
          UPDATE    CASXHDA1;CAXHTOE,CAXHSTY,CAXHKEY,CAXHDES,CAXHSUM:           
                        CAXHSUMA,CAXHSUMB,CAXHSUMC,CAXHSPA                      
          RETURN
.
WRCAXH1   RESET     KEY16                                                       
          WRITE     CASXHDA1,KEY16;CAXHTOE,CAXHSTY,CAXHKEY,CAXHDES,CAXHSUM:     
                        CAXHSUMA,CAXHSUMB,CAXHSUMC,CAXHSPA                      
          RETURN
.
DECAXH1   RESET     KEY16                                                       
          DELETE    CASXHDA1,KEY16                                              
          RETURN
.
RSCAXH2   RESET     KEY26                                                       
          READ      CASXHDA2,KEY26;;                                            
          RETURN
.
RACAXH2   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      CASXHDA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAXH2   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      CASXHDA2,KEY26;CAXHTOE,CAXHSTY,CAXHKEY,CAXHDES,CAXHSUM:     
                        CAXHSUMA,CAXHSUMB,CAXHSUMC,CAXHSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCAXH2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CASXHDA2;CAXHTOE,CAXHSTY,CAXHKEY,CAXHDES,CAXHSUM:           
                        CAXHSUMA,CAXHSUMB,CAXHSUMC,CAXHSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCAXH2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CASXHDA2;CAXHTOE,CAXHSTY,CAXHKEY,CAXHDES,CAXHSUM:           
                        CAXHSUMA,CAXHSUMB,CAXHSUMC,CAXHSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCAXH2                                                                         
          UPDATE    CASXHDA2;CAXHTOE,CAXHSTY,CAXHKEY,CAXHDES,CAXHSUM:           
                        CAXHSUMA,CAXHSUMB,CAXHSUMC,CAXHSPA                      
          RETURN
.
WRCAXH2   RESET     KEY26                                                       
          WRITE     CASXHDA2,KEY26;CAXHTOE,CAXHSTY,CAXHKEY,CAXHDES,CAXHSUM:     
                        CAXHSUMA,CAXHSUMB,CAXHSUMC,CAXHSPA                      
          RETURN
.
DECAXH2   RESET     KEY26                                                       
          DELETE    CASXHDA2,KEY26                                              
          RETURN
.
