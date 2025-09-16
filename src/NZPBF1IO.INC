.
. NZPBFEIO    
. --------
. Filename     : nzpbfeaf.dat
.
RSNZBF11  RESET     KEY37                                                       
          READ      NZPBF1A1,KEY37;;                                            
          RETURN
.
RANZBF11  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPBF1A1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZBF11  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      NZPBF1A1,KEY37;NZBFHOSP,NZBFCLMC,NZBFCNTR,NZBFFTAB,NZBFATYP:
                        NZBFBTYP,NZBFEFDT,NZBFEDAY,NZBFRATE,NZBFREBA,NZBFDESC:  
                        NZBFCDAT,NZBFCTIM,NZBFCUID,NZBFUDAT,NZBFUTIM,NZBFUUID:  
                        NZBFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZBF11  MOVE      ZERO,OVRCD
          READKS    NZPBF1A1;NZBFHOSP,NZBFCLMC,NZBFCNTR,NZBFFTAB,NZBFATYP:      
                        NZBFBTYP,NZBFEFDT,NZBFEDAY,NZBFRATE,NZBFREBA,NZBFDESC:  
                        NZBFCDAT,NZBFCTIM,NZBFCUID,NZBFUDAT,NZBFUTIM,NZBFUUID:  
                        NZBFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZBF11  MOVE      ZERO,OVRCD
          READKP    NZPBF1A1;NZBFHOSP,NZBFCLMC,NZBFCNTR,NZBFFTAB,NZBFATYP:      
                        NZBFBTYP,NZBFEFDT,NZBFEDAY,NZBFRATE,NZBFREBA,NZBFDESC:  
                        NZBFCDAT,NZBFCTIM,NZBFCUID,NZBFUDAT,NZBFUTIM,NZBFUUID:  
                        NZBFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZBF11  UPDATE    NZPBF1A1;NZBFHOSP,NZBFCLMC,NZBFCNTR,NZBFFTAB,NZBFATYP:      
                        NZBFBTYP,NZBFEFDT,NZBFEDAY,NZBFRATE,NZBFREBA,NZBFDESC:  
                        NZBFCDAT,NZBFCTIM,NZBFCUID,NZBFUDAT,NZBFUTIM,NZBFUUID:  
                        NZBFSPAR                                                
          RETURN
.
WRNZBF11  RESET     KEY37                                                       
          WRITE     NZPBF1A1,KEY37;NZBFHOSP,NZBFCLMC,NZBFCNTR,NZBFFTAB,NZBFATYP:
                        NZBFBTYP,NZBFEFDT,NZBFEDAY,NZBFRATE,NZBFREBA,NZBFDESC:  
                        NZBFCDAT,NZBFCTIM,NZBFCUID,NZBFUDAT,NZBFUTIM,NZBFUUID:  
                        NZBFSPAR                                                
          RETURN
.
DENZBF11  RESET     KEY37                                                       
          DELETE    NZPBF1A1,KEY37                                              
          RETURN
.
