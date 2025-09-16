.
. PMSEVTIO    
. --------
. Filename     : pmsevtaf.dat
.
RSPMEVT1  RESET     KEY8                                                        
          READ      PMSEVTA1,KEY8;;                                             
          RETURN
.
RAPMEVT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSEVTA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEVT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSEVTA1,KEY8;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON: 
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEVT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEVTA1;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEVT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEVTA1;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEVT1                                                                        
          UPDATE    PMSEVTA1;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMEVT1  RESET     KEY8                                                        
          WRITE     PMSEVTA1,KEY8;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON: 
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          RETURN
.
DEPMEVT1  RESET     KEY8                                                        
          DELETE    PMSEVTA1,KEY8                                               
          RETURN
.
RLPMEVT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSEVTA1,KEY8;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON: 
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMEVT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSEVTA1;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMEVT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSEVTA1;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMEVT1  RESET     KEY8                                                        
          UNLOCK    PMSEVTA1                                                    
          RETURN
.
RSPMEVT2  RESET     KEY19                                                       
          READ      PMSEVTA2,KEY19;;                                            
          RETURN
.
RAPMEVT2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEVTA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEVT2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEVTA2,KEY19;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEVT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEVTA2;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEVT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEVTA2;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEVT2                                                                        
          UPDATE    PMSEVTA2;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMEVT2  RESET     KEY19                                                       
          WRITE     PMSEVTA2,KEY19;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          RETURN
.
DEPMEVT2  RESET     KEY19                                                       
          DELETE    PMSEVTA2,KEY19                                              
          RETURN
.
RLPMEVT2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PMSEVTA2,KEY19;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMEVT2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSEVTA2;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMEVT2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSEVTA2;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMEVT2  RESET     KEY19                                                       
          UNLOCK    PMSEVTA2                                                    
          RETURN
.
RSPMEVT3  RESET     KEY19                                                       
          READ      PMSEVTA3,KEY19;;                                            
          RETURN
.
RAPMEVT3  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEVTA3,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEVT3  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEVTA3,KEY19;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEVT3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEVTA3;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEVT3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEVTA3;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEVT3                                                                        
          UPDATE    PMSEVTA3;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMEVT3  RESET     KEY19                                                       
          WRITE     PMSEVTA3,KEY19;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          RETURN
.
DEPMEVT3  RESET     KEY19                                                       
          DELETE    PMSEVTA3,KEY19                                              
          RETURN
.
RLPMEVT3  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PMSEVTA3,KEY19;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMEVT3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSEVTA3;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMEVT3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSEVTA3;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMEVT3  RESET     KEY19                                                       
          UNLOCK    PMSEVTA3                                                    
          RETURN
.
RSPMEVT4  RESET     KEY16                                                       
          READ      PMSEVTA4,KEY16;;                                            
          RETURN
.
RAPMEVT4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEVTA4,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEVT4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEVTA4,KEY16;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEVT4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEVTA4;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEVT4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEVTA4;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEVT4                                                                        
          UPDATE    PMSEVTA4;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMEVT4  RESET     KEY16                                                       
          WRITE     PMSEVTA4,KEY16;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          RETURN
.
DEPMEVT4  RESET     KEY16                                                       
          DELETE    PMSEVTA4,KEY16                                              
          RETURN
.
RLPMEVT4  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSEVTA4,KEY16;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMEVT4                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSEVTA4;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMEVT4                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSEVTA4;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMEVT4  RESET     KEY16                                                       
          UNLOCK    PMSEVTA4                                                    
          RETURN
.
RSPMEVT5  RESET     KEY14                                                       
          READ      PMSEVTA5,KEY14;;                                            
          RETURN
.
RAPMEVT5  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEVTA5,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEVT5  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEVTA5,KEY14;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEVT5                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEVTA5;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEVT5                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEVTA5;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEVT5                                                                        
          UPDATE    PMSEVTA5;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMEVT5  RESET     KEY14                                                       
          WRITE     PMSEVTA5,KEY14;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          RETURN
.
DEPMEVT5  RESET     KEY14                                                       
          DELETE    PMSEVTA5,KEY14                                              
          RETURN
.
RLPMEVT5  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     PMSEVTA5,KEY14;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMEVT5                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSEVTA5;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMEVT5                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSEVTA5;PMEVVISN,PMEVEVNT,PMEVADTE,PMEVATIM,PMEVACON:      
                        PMEVPPRB,PMEVUNIT,PMEVSPHN,PMEVPLOC,PMEVPWRD,PMEVPBED:  
                        PMEVDDTE,PMEVDTIM,PMEVSITE,PMEVCTYP,PMEVCLID,PMEVCCOD:  
                        PMEVATYP,PMEVASTT,PMEVADMT,PMEVBTYP,PMEVREFB,PMEVDSTT:  
                        PMEVHOSN,PMEVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMEVT5  RESET     KEY14                                                       
          UNLOCK    PMSEVTA5                                                    
          RETURN
.
