.
. PMSGPAIO    
. --------
. Filename     : pmsgpaaf.dat
.
RSPMGPA1  RESET     KEY34                                                       
          READ      PMSGPAA1,KEY34;;                                            
          RETURN
.
RAPMGPA1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSGPAA1,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMGPA1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSGPAA1,KEY34;PMGPURNO,PMGPWEBU,PMGPUGPC,PMGPPGPC,PMGPPPRC:
                        PMGPOVRS,PMGPOVT1,PMGPOVT2,PMGPOVT3,PMGPOVT4,PMGPDATC:  
                        PMGPTIMC,PMGPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMGPA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSGPAA1;PMGPURNO,PMGPWEBU,PMGPUGPC,PMGPPGPC,PMGPPPRC:      
                        PMGPOVRS,PMGPOVT1,PMGPOVT2,PMGPOVT3,PMGPOVT4,PMGPDATC:  
                        PMGPTIMC,PMGPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMGPA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSGPAA1;PMGPURNO,PMGPWEBU,PMGPUGPC,PMGPPGPC,PMGPPPRC:      
                        PMGPOVRS,PMGPOVT1,PMGPOVT2,PMGPOVT3,PMGPOVT4,PMGPDATC:  
                        PMGPTIMC,PMGPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMGPA1                                                                        
          UPDATE    PMSGPAA1;PMGPURNO,PMGPWEBU,PMGPUGPC,PMGPPGPC,PMGPPPRC:      
                        PMGPOVRS,PMGPOVT1,PMGPOVT2,PMGPOVT3,PMGPOVT4,PMGPDATC:  
                        PMGPTIMC,PMGPSPAR                                       
          RETURN
.
WRPMGPA1  RESET     KEY34                                                       
          WRITE     PMSGPAA1,KEY34;PMGPURNO,PMGPWEBU,PMGPUGPC,PMGPPGPC,PMGPPPRC:
                        PMGPOVRS,PMGPOVT1,PMGPOVT2,PMGPOVT3,PMGPOVT4,PMGPDATC:  
                        PMGPTIMC,PMGPSPAR                                       
          RETURN
.
DEPMGPA1  RESET     KEY34                                                       
          DELETE    PMSGPAA1,KEY34                                              
          RETURN
.
RSPMGPA2  RESET     KEY34                                                       
          READ      PMSGPAA2,KEY34;;                                            
          RETURN
.
RAPMGPA2  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSGPAA2,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMGPA2  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSGPAA2,KEY34;PMGPURNO,PMGPWEBU,PMGPUGPC,PMGPPGPC,PMGPPPRC:
                        PMGPOVRS,PMGPOVT1,PMGPOVT2,PMGPOVT3,PMGPOVT4,PMGPDATC:  
                        PMGPTIMC,PMGPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMGPA2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSGPAA2;PMGPURNO,PMGPWEBU,PMGPUGPC,PMGPPGPC,PMGPPPRC:      
                        PMGPOVRS,PMGPOVT1,PMGPOVT2,PMGPOVT3,PMGPOVT4,PMGPDATC:  
                        PMGPTIMC,PMGPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMGPA2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSGPAA2;PMGPURNO,PMGPWEBU,PMGPUGPC,PMGPPGPC,PMGPPPRC:      
                        PMGPOVRS,PMGPOVT1,PMGPOVT2,PMGPOVT3,PMGPOVT4,PMGPDATC:  
                        PMGPTIMC,PMGPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMGPA2                                                                        
          UPDATE    PMSGPAA2;PMGPURNO,PMGPWEBU,PMGPUGPC,PMGPPGPC,PMGPPPRC:      
                        PMGPOVRS,PMGPOVT1,PMGPOVT2,PMGPOVT3,PMGPOVT4,PMGPDATC:  
                        PMGPTIMC,PMGPSPAR                                       
          RETURN
.
WRPMGPA2  RESET     KEY34                                                       
          WRITE     PMSGPAA2,KEY34;PMGPURNO,PMGPWEBU,PMGPUGPC,PMGPPGPC,PMGPPPRC:
                        PMGPOVRS,PMGPOVT1,PMGPOVT2,PMGPOVT3,PMGPOVT4,PMGPDATC:  
                        PMGPTIMC,PMGPSPAR                                       
          RETURN
.
DEPMGPA2  RESET     KEY34                                                       
          DELETE    PMSGPAA2,KEY34                                              
          RETURN
.
