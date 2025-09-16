.
. PMSBEVIO    
. --------
. Filename     : pmsbevaf.dat
.
RSPMBEV1  RESET     KEY42                                                       
          READ      PMSBEVA1,KEY42;;                                            
          RETURN
.
RAPMBEV1  RESET     KEY42                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBEVA1,KEY42;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBEV1  RESET     KEY42                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBEVA1,KEY42;PMBEUNIQ,PMBEBUNQ,PMBEEDAT,PMBEETIM,PMBETYPE:
                        PMBEETYP,PMBEESTA,PMBEDES1,PMBEDES2,PMBEWEBC,PMBEDATC:  
                        PMBETIMC,PMBEWEBU,PMBEDATU,PMBETIMU,PMBERECS,PMBEWEBD:  
                        PMBEDATD,PMBETIMD,PMBESPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBEV1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBEVA1;PMBEUNIQ,PMBEBUNQ,PMBEEDAT,PMBEETIM,PMBETYPE:      
                        PMBEETYP,PMBEESTA,PMBEDES1,PMBEDES2,PMBEWEBC,PMBEDATC:  
                        PMBETIMC,PMBEWEBU,PMBEDATU,PMBETIMU,PMBERECS,PMBEWEBD:  
                        PMBEDATD,PMBETIMD,PMBESPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBEV1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBEVA1;PMBEUNIQ,PMBEBUNQ,PMBEEDAT,PMBEETIM,PMBETYPE:      
                        PMBEETYP,PMBEESTA,PMBEDES1,PMBEDES2,PMBEWEBC,PMBEDATC:  
                        PMBETIMC,PMBEWEBU,PMBEDATU,PMBETIMU,PMBERECS,PMBEWEBD:  
                        PMBEDATD,PMBETIMD,PMBESPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBEV1                                                                        
          UPDATE    PMSBEVA1;PMBEUNIQ,PMBEBUNQ,PMBEEDAT,PMBEETIM,PMBETYPE:      
                        PMBEETYP,PMBEESTA,PMBEDES1,PMBEDES2,PMBEWEBC,PMBEDATC:  
                        PMBETIMC,PMBEWEBU,PMBEDATU,PMBETIMU,PMBERECS,PMBEWEBD:  
                        PMBEDATD,PMBETIMD,PMBESPAR                              
          RETURN
.
WRPMBEV1  RESET     KEY42                                                       
          WRITE     PMSBEVA1,KEY42;PMBEUNIQ,PMBEBUNQ,PMBEEDAT,PMBEETIM,PMBETYPE:
                        PMBEETYP,PMBEESTA,PMBEDES1,PMBEDES2,PMBEWEBC,PMBEDATC:  
                        PMBETIMC,PMBEWEBU,PMBEDATU,PMBETIMU,PMBERECS,PMBEWEBD:  
                        PMBEDATD,PMBETIMD,PMBESPAR                              
          RETURN
.
DEPMBEV1  RESET     KEY42                                                       
          DELETE    PMSBEVA1,KEY42                                              
          RETURN
.
