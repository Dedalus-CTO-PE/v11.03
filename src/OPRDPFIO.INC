.
. OPRDPFIO    
. --------
. Filename     : oprdpfaf.dat
.
RSOPDPF1  RESET     KEY37                                                       
          READ      OPRDPFA1,KEY37;;                                            
          RETURN
.
RAOPDPF1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      OPRDPFA1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPDPF1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      OPRDPFA1,KEY37;OPDFCODE,OPDFPREF,OPDFCLSS,OPDFTYPE,OPDFITEM:
                                   OPDFQTY,OPDFHOSP,OPDFSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPDPF1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRDPFA1;OPDFCODE,OPDFPREF,OPDFCLSS,OPDFTYPE,OPDFITEM:      
                             OPDFQTY,OPDFHOSP,OPDFSPAR                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPDPF1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRDPFA1;OPDFCODE,OPDFPREF,OPDFCLSS,OPDFTYPE,OPDFITEM:      
                             OPDFQTY,OPDFHOSP,OPDFSPAR                          
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPDPF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRDPFA1;OPDFCODE,OPDFPREF,OPDFCLSS,OPDFTYPE,OPDFITEM:      
                             OPDFQTY,OPDFHOSP,OPDFSPAR                          
          RETURN
.
WROPDPF1  RESET     KEY37                                                       
          WRITE     OPRDPFA1,KEY37;OPDFCODE,OPDFPREF,OPDFCLSS,OPDFTYPE,OPDFITEM:
                                   OPDFQTY,OPDFHOSP,OPDFSPAR                    
          RETURN
.
DEOPDPF1  RESET     KEY37                                                       
          DELETE    OPRDPFA1,KEY37                                              
          RETURN
.
