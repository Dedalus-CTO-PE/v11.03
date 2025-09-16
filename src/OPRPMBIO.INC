.
. OPRPMBIO    
. --------
. Filename     : oprpmbaf.dat
.
RSOPPMB1  RESET     KEY14                                                       
          READ      OPRPMBA1,KEY14;;                                            
          RETURN
.
RAOPPMB1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPMBA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPPMB1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPMBA1,KEY14;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:
                                   OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
RKOPPMB1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRPMBA1;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:      
                             OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
RPOPPMB1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRPMBA1;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:      
                             OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
UPOPPMB1  MOVE      ZERO,OVRCD                                                  
          MOVE      OPPMCNTR,DOPPMCNT                                           
          UPDATE    OPRPMBA1;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:      
                             OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPPMB1  RESET     KEY14                                                       
          MOVE      OPPMCNTR,DOPPMCNT                                           
          WRITE     OPRPMBA1,KEY14;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:
                                   OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR          
          RETURN
.
DEOPPMB1  RESET     KEY14                                                       
          DELETE    OPRPMBA1,KEY14                                              
          RETURN
.
RLOPPMB1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     OPRPMBA1,KEY14;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:
                                   OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
KLOPPMB1  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRPMBA1;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:      
                             OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
PLOPPMB1  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRPMBA1;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:      
                             OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
UUOPPMB1  RESET     KEY14                                                       
          UNLOCK    OPRPMBA1                                                    
          RETURN
.
RSOPPMB2  RESET     KEY23                                                       
          READ      OPRPMBA2,KEY23;;                                            
          RETURN
.
RAOPPMB2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPMBA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPPMB2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPMBA2,KEY23;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:
                                   OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
RKOPPMB2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRPMBA2;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:      
                             OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
RPOPPMB2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRPMBA2;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:      
                             OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
UPOPPMB2  MOVE      ZERO,OVRCD                                                  
          MOVE      OPPMCNTR,DOPPMCNT                                           
          UPDATE    OPRPMBA2;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:      
                             OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPPMB2  RESET     KEY23                                                       
          MOVE      OPPMCNTR,DOPPMCNT                                           
          WRITE     OPRPMBA2,KEY23;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:
                                   OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR          
          RETURN
.
DEOPPMB2  RESET     KEY23                                                       
          DELETE    OPRPMBA2,KEY23                                              
          RETURN
.
RLOPPMB2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     OPRPMBA2,KEY23;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:
                                   OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
KLOPPMB2  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRPMBA2;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:      
                             OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
PLOPPMB2  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRPMBA2;OPPMUNID,OPPMTMNO,OPPMCMBS,DOPPMCNT,OPPMSERV:      
                             OPPMGSTA,OPPMGSTC,OPPMREFN,OPPMSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPMCNT,OPPMCNTR                                           
          RETURN
.
UUOPPMB2  RESET     KEY23                                                       
          UNLOCK    OPRPMBA2                                                    
          RETURN
.
