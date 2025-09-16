.
. NZPBFEIO    
. --------
. Filename     : nzpbfeaf.dat
.
RSNZBFE1  RESET     KEY37                                                       
          READ      NZPBFEA1,KEY37;;                                            
          RETURN
.
RANZBFE1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPBFEA1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZBFE1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPBFEA1,KEY37;NZBFHOSP,NZBFCLMC,NZBFCNTR,NZBFFTAB,NZBFATYP:
                        NZBFBTYP,NZBFEFDT,NZBFEDAY,NZBFRATE,NZBFREBA,NZBFDESC:  
                        NZBFCDAT,NZBFCTIM,NZBFCUID,NZBFUDAT,NZBFUTIM,NZBFUUID:  
                        NZBFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZBFE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPBFEA1;NZBFHOSP,NZBFCLMC,NZBFCNTR,NZBFFTAB,NZBFATYP:      
                        NZBFBTYP,NZBFEFDT,NZBFEDAY,NZBFRATE,NZBFREBA,NZBFDESC:  
                        NZBFCDAT,NZBFCTIM,NZBFCUID,NZBFUDAT,NZBFUTIM,NZBFUUID:  
                        NZBFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZBFE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPBFEA1;NZBFHOSP,NZBFCLMC,NZBFCNTR,NZBFFTAB,NZBFATYP:      
                        NZBFBTYP,NZBFEFDT,NZBFEDAY,NZBFRATE,NZBFREBA,NZBFDESC:  
                        NZBFCDAT,NZBFCTIM,NZBFCUID,NZBFUDAT,NZBFUTIM,NZBFUUID:  
                        NZBFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZBFE1                                                                        
          UPDATE    NZPBFEA1;NZBFHOSP,NZBFCLMC,NZBFCNTR,NZBFFTAB,NZBFATYP:      
                        NZBFBTYP,NZBFEFDT,NZBFEDAY,NZBFRATE,NZBFREBA,NZBFDESC:  
                        NZBFCDAT,NZBFCTIM,NZBFCUID,NZBFUDAT,NZBFUTIM,NZBFUUID:  
                        NZBFSPAR                                                
          RETURN
.
WRNZBFE1  RESET     KEY37                                                       
          WRITE     NZPBFEA1,KEY37;NZBFHOSP,NZBFCLMC,NZBFCNTR,NZBFFTAB,NZBFATYP:
                        NZBFBTYP,NZBFEFDT,NZBFEDAY,NZBFRATE,NZBFREBA,NZBFDESC:  
                        NZBFCDAT,NZBFCTIM,NZBFCUID,NZBFUDAT,NZBFUTIM,NZBFUUID:  
                        NZBFSPAR                                                
          RETURN
.
DENZBFE1  RESET     KEY37                                                       
          DELETE    NZPBFEA1,KEY37                                              
          RETURN
.
