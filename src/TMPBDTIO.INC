.
. TMPBDTIO    
. --------
. Filename     : tmpbdtaf.dat
.
RSTMBDT1  RESET     KEY15                                                       
          READ      TMPBDTA1,KEY15;;                                            
          RETURN
.
RATMBDT1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBDTA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMBDT1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBDTA1,KEY15;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMBDT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    TMPBDTA1;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:      
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMBDT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    TMPBDTA1;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:      
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMBDT1                                                                        
          UPDATE    TMPBDTA1;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:      
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          RETURN
.
WRTMBDT1  RESET     KEY15                                                       
          WRITE     TMPBDTA1,KEY15;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          RETURN
.
DETMBDT1  RESET     KEY15                                                       
          DELETE    TMPBDTA1,KEY15                                              
          RETURN
.
RSTMBDT2  RESET     KEY23                                                       
          READ      TMPBDTA2,KEY23;;                                            
          RETURN
.
RATMBDT2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBDTA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMBDT2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBDTA2,KEY23;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMBDT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    TMPBDTA2;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:      
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMBDT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    TMPBDTA2;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:      
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMBDT2                                                                        
          UPDATE    TMPBDTA2;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:      
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          RETURN
.
WRTMBDT2  RESET     KEY23                                                       
          WRITE     TMPBDTA2,KEY23;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          RETURN
.
DETMBDT2  RESET     KEY23                                                       
          DELETE    TMPBDTA2,KEY23                                              
          RETURN
.
RSTMBDT3  RESET     KEY27                                                       
          READ      TMPBDTA3,KEY27;;                                            
          RETURN
.
RATMBDT3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBDTA3,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMBDT3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBDTA3,KEY27;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMBDT3                                                                        
          MOVE      ZERO,OVRCD
          READKS    TMPBDTA3;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:      
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMBDT3                                                                        
          MOVE      ZERO,OVRCD
          READKP    TMPBDTA3;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:      
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMBDT3                                                                        
          UPDATE    TMPBDTA3;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:      
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          RETURN
.
WRTMBDT3  RESET     KEY27                                                       
          WRITE     TMPBDTA3,KEY27;TMBDTDAT,TMBDRECN,TMBDUNIQ,TMBDMHOS,TMBDMDHS:
                        TMBDPTYP,TMBDPAMT,TMBDPAYD,TMBDCHQN,TMBDDRAW,TMBDBANK:  
                        TMBDBRCH,TMBDCRDT,TMBDSTRF,TMBDEFTT,TMBDCDAT,TMBDCTIM:  
                        TMBDCUID,TMBDUDAT,TMBDUTIM,TMBDUUID,TMBDPCOD,TMBDSPAR            
          RETURN
.
DETMBDT3  RESET     KEY27                                                       
          DELETE    TMPBDTA3,KEY27                                              
          RETURN
.
