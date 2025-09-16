.
. NZPCFNIO    
. --------
. Filename     : nzpcfnaf.dat
.
RSNZCFN1  RESET     KEY30                                                       
          READ      NZPCFNA1,KEY30;;                                            
          RETURN
.
RANZCFN1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCFNA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCFN1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCFNA1,KEY30;NZCFHOSP,NZCFCLMC,NZCFCNTR,NZCFCPRC,NZCFSTYP:
                        NZCFSDAT,NZCFEDAT,NZCFBDET,NZCFHNAM,NZCFHAD1,NZCFHAD2:  
                        NZCFHAD3,NZCFHAD4,NZCFSPRI,NZCFDPRI,NZCFRPRO,NZCFREFN:  
                        NZCFVNID,NZCFELOS,NZCFDOCS,NZCFCDAT,NZCFCTIM,NZCFCUID:  
                        NZCFUDAT,NZCFUTIM,NZCFUUID,NZCFSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZCFN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCFNA1;NZCFHOSP,NZCFCLMC,NZCFCNTR,NZCFCPRC,NZCFSTYP:      
                        NZCFSDAT,NZCFEDAT,NZCFBDET,NZCFHNAM,NZCFHAD1,NZCFHAD2:  
                        NZCFHAD3,NZCFHAD4,NZCFSPRI,NZCFDPRI,NZCFRPRO,NZCFREFN:  
                        NZCFVNID,NZCFELOS,NZCFDOCS,NZCFCDAT,NZCFCTIM,NZCFCUID:  
                        NZCFUDAT,NZCFUTIM,NZCFUUID,NZCFSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZCFN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCFNA1;NZCFHOSP,NZCFCLMC,NZCFCNTR,NZCFCPRC,NZCFSTYP:      
                        NZCFSDAT,NZCFEDAT,NZCFBDET,NZCFHNAM,NZCFHAD1,NZCFHAD2:  
                        NZCFHAD3,NZCFHAD4,NZCFSPRI,NZCFDPRI,NZCFRPRO,NZCFREFN:  
                        NZCFVNID,NZCFELOS,NZCFDOCS,NZCFCDAT,NZCFCTIM,NZCFCUID:  
                        NZCFUDAT,NZCFUTIM,NZCFUUID,NZCFSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZCFN1                                                                        
          UPDATE    NZPCFNA1;NZCFHOSP,NZCFCLMC,NZCFCNTR,NZCFCPRC,NZCFSTYP:      
                        NZCFSDAT,NZCFEDAT,NZCFBDET,NZCFHNAM,NZCFHAD1,NZCFHAD2:  
                        NZCFHAD3,NZCFHAD4,NZCFSPRI,NZCFDPRI,NZCFRPRO,NZCFREFN:  
                        NZCFVNID,NZCFELOS,NZCFDOCS,NZCFCDAT,NZCFCTIM,NZCFCUID:  
                        NZCFUDAT,NZCFUTIM,NZCFUUID,NZCFSPAR                     
          RETURN
.
WRNZCFN1  RESET     KEY30                                                       
          WRITE     NZPCFNA1,KEY30;NZCFHOSP,NZCFCLMC,NZCFCNTR,NZCFCPRC,NZCFSTYP:
                        NZCFSDAT,NZCFEDAT,NZCFBDET,NZCFHNAM,NZCFHAD1,NZCFHAD2:  
                        NZCFHAD3,NZCFHAD4,NZCFSPRI,NZCFDPRI,NZCFRPRO,NZCFREFN:  
                        NZCFVNID,NZCFELOS,NZCFDOCS,NZCFCDAT,NZCFCTIM,NZCFCUID:  
                        NZCFUDAT,NZCFUTIM,NZCFUUID,NZCFSPAR                     
          RETURN
.
DENZCFN1  RESET     KEY30                                                       
          DELETE    NZPCFNA1,KEY30                                              
          RETURN
.
