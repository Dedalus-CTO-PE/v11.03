.
. NZPCFNIO    
. --------
. Filename     : nzpcfnaf.dat
.
RSNZCF11  RESET     KEY30                                                       
          READ      NZPCFN11,KEY30;;                                            
          RETURN
.
RANZCF11  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCFN11,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCF11  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCFN11,KEY30;NZCFHOSP,NZCFCLMC,NZCFCNTR,NZCFCPRC,NZCFSTYP:
                        NZCFSDAT,NZCFEDAT,NZCFBDET,NZCFHNAM,NZCFHAD1,NZCFHAD2:  
                        NZCFHAD3,NZCFHAD4,NZCFSPRI,NZCFDPRI,NZCFRPRO,NZCFREFN:  
                        NZCFVNID,NZCFELOS,NZCFDOCS,NZCFCDAT,NZCFCTIM,NZCFCUID:  
                        NZCFUDAT,NZCFUTIM,NZCFUUID,NZCFSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZCF11                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCFN11;NZCFHOSP,NZCFCLMC,NZCFCNTR,NZCFCPRC,NZCFSTYP:      
                        NZCFSDAT,NZCFEDAT,NZCFBDET,NZCFHNAM,NZCFHAD1,NZCFHAD2:  
                        NZCFHAD3,NZCFHAD4,NZCFSPRI,NZCFDPRI,NZCFRPRO,NZCFREFN:  
                        NZCFVNID,NZCFELOS,NZCFDOCS,NZCFCDAT,NZCFCTIM,NZCFCUID:  
                        NZCFUDAT,NZCFUTIM,NZCFUUID,NZCFSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZCF11                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCFN11;NZCFHOSP,NZCFCLMC,NZCFCNTR,NZCFCPRC,NZCFSTYP:      
                        NZCFSDAT,NZCFEDAT,NZCFBDET,NZCFHNAM,NZCFHAD1,NZCFHAD2:  
                        NZCFHAD3,NZCFHAD4,NZCFSPRI,NZCFDPRI,NZCFRPRO,NZCFREFN:  
                        NZCFVNID,NZCFELOS,NZCFDOCS,NZCFCDAT,NZCFCTIM,NZCFCUID:  
                        NZCFUDAT,NZCFUTIM,NZCFUUID,NZCFSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZCF11                                                                        
          UPDATE    NZPCFN11;NZCFHOSP,NZCFCLMC,NZCFCNTR,NZCFCPRC,NZCFSTYP:      
                        NZCFSDAT,NZCFEDAT,NZCFBDET,NZCFHNAM,NZCFHAD1,NZCFHAD2:  
                        NZCFHAD3,NZCFHAD4,NZCFSPRI,NZCFDPRI,NZCFRPRO,NZCFREFN:  
                        NZCFVNID,NZCFELOS,NZCFDOCS,NZCFCDAT,NZCFCTIM,NZCFCUID:  
                        NZCFUDAT,NZCFUTIM,NZCFUUID,NZCFSPAR                     
          RETURN
.
WRNZCF11  RESET     KEY30                                                       
          WRITE     NZPCFN11,KEY30;NZCFHOSP,NZCFCLMC,NZCFCNTR,NZCFCPRC,NZCFSTYP:
                        NZCFSDAT,NZCFEDAT,NZCFBDET,NZCFHNAM,NZCFHAD1,NZCFHAD2:  
                        NZCFHAD3,NZCFHAD4,NZCFSPRI,NZCFDPRI,NZCFRPRO,NZCFREFN:  
                        NZCFVNID,NZCFELOS,NZCFDOCS,NZCFCDAT,NZCFCTIM,NZCFCUID:  
                        NZCFUDAT,NZCFUTIM,NZCFUUID,NZCFSPAR                     
          RETURN
.
DENZCF11  RESET     KEY30                                                       
          DELETE    NZPCFN11,KEY30                                              
          RETURN
.
