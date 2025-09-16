.
. FMSEPTIO    
. --------
. Filename     : fmseptaf.dat
.
RSFMEPT1  RESET     KEY18                                                       
          READ      FMSEPTA1,KEY18;;                                            
          RETURN
.
RAFMEPT1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      FMSEPTA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMEPT1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      FMSEPTA1,KEY18;FMEPCHQA,FMEPPPID,FMEPACTV,FMEPADDR,FMEPPORT:
                        FMEPDESC,FMEPCDAT,FMEPCTIM,FMEPCUID,FMEPUDAT,FMEPUTIM:  
                        FMEPUUID,FMEPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMEPT1  MOVE      ZERO,OVRCD                                                  
          READKS    FMSEPTA1;FMEPCHQA,FMEPPPID,FMEPACTV,FMEPADDR,FMEPPORT:      
                        FMEPDESC,FMEPCDAT,FMEPCTIM,FMEPCUID,FMEPUDAT,FMEPUTIM:  
                        FMEPUUID,FMEPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMEPT1  MOVE      ZERO,OVRCD                                                  
          READKP    FMSEPTA1;FMEPCHQA,FMEPPPID,FMEPACTV,FMEPADDR,FMEPPORT:      
                        FMEPDESC,FMEPCDAT,FMEPCTIM,FMEPCUID,FMEPUDAT,FMEPUTIM:  
                        FMEPUUID,FMEPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMEPT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    FMSEPTA1;FMEPCHQA,FMEPPPID,FMEPACTV,FMEPADDR,FMEPPORT:      
                        FMEPDESC,FMEPCDAT,FMEPCTIM,FMEPCUID,FMEPUDAT,FMEPUTIM:  
                        FMEPUUID,FMEPSPAR                                       
          RETURN
.
WRFMEPT1  RESET     KEY18                                                       
          WRITE     FMSEPTA1,KEY18;FMEPCHQA,FMEPPPID,FMEPACTV,FMEPADDR,FMEPPORT:
                        FMEPDESC,FMEPCDAT,FMEPCTIM,FMEPCUID,FMEPUDAT,FMEPUTIM:  
                        FMEPUUID,FMEPSPAR                                       
          RETURN
.
DEFMEPT1  RESET     KEY18                                                       
          DELETE    FMSEPTA1,KEY18                                              
          RETURN
.
