.
. MRTCADIO    
. --------
. Filename     : mrtcadaf.dat
.
RSMRCAD1  RESET     KEY27                                                       
          READ      MRTCADA1,KEY27;;                                            
          RETURN
.
RAMRCAD1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      MRTCADA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRCAD1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      MRTCADA1,KEY27;MRCDADMN,MRCDADAT,MRCDATIM,MRCDCNTR,MRCDRTYP:
                                   MRCDPRFX,MRCDDCOD,MRCDDDES,MRCDOFLG,MRCDPCOD:
                                   MRCDPDES,MRCDODAT,MRCDOSTM,MRCDOETM,MRCDSURG:
                                   MRCDDRGD,MRCDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRCAD1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTCADA1;MRCDADMN,MRCDADAT,MRCDATIM,MRCDCNTR,MRCDRTYP:      
                             MRCDPRFX,MRCDDCOD,MRCDDDES,MRCDOFLG,MRCDPCOD:      
                             MRCDPDES,MRCDODAT,MRCDOSTM,MRCDOETM,MRCDSURG:      
                             MRCDDRGD,MRCDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRCAD1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTCADA1;MRCDADMN,MRCDADAT,MRCDATIM,MRCDCNTR,MRCDRTYP:      
                             MRCDPRFX,MRCDDCOD,MRCDDDES,MRCDOFLG,MRCDPCOD:      
                             MRCDPDES,MRCDODAT,MRCDOSTM,MRCDOETM,MRCDSURG:      
                             MRCDDRGD,MRCDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRCAD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTCADA1;MRCDADMN,MRCDADAT,MRCDATIM,MRCDCNTR,MRCDRTYP:      
                             MRCDPRFX,MRCDDCOD,MRCDDDES,MRCDOFLG,MRCDPCOD:      
                             MRCDPDES,MRCDODAT,MRCDOSTM,MRCDOETM,MRCDSURG:      
                             MRCDDRGD,MRCDSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRCAD1  RESET     KEY27                                                       
          WRITE     MRTCADA1,KEY27;MRCDADMN,MRCDADAT,MRCDATIM,MRCDCNTR,MRCDRTYP:
                                   MRCDPRFX,MRCDDCOD,MRCDDDES,MRCDOFLG,MRCDPCOD:
                                   MRCDPDES,MRCDODAT,MRCDOSTM,MRCDOETM,MRCDSURG:
                                   MRCDDRGD,MRCDSPAR                            
          RETURN
.
DEMRCAD1  RESET     KEY27                                                       
          DELETE    MRTCADA1,KEY27                                              
          RETURN
.
RLMRCAD1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     MRTCADA1,KEY27;MRCDADMN,MRCDADAT,MRCDATIM,MRCDCNTR,MRCDRTYP:
                                   MRCDPRFX,MRCDDCOD,MRCDDDES,MRCDOFLG,MRCDPCOD:
                                   MRCDPDES,MRCDODAT,MRCDOSTM,MRCDOETM,MRCDSURG:
                                   MRCDDRGD,MRCDSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRCAD1  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTCADA1;MRCDADMN,MRCDADAT,MRCDATIM,MRCDCNTR,MRCDRTYP:      
                             MRCDPRFX,MRCDDCOD,MRCDDDES,MRCDOFLG,MRCDPCOD:      
                             MRCDPDES,MRCDODAT,MRCDOSTM,MRCDOETM,MRCDSURG:      
                             MRCDDRGD,MRCDSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRCAD1  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTCADA1;MRCDADMN,MRCDADAT,MRCDATIM,MRCDCNTR,MRCDRTYP:      
                             MRCDPRFX,MRCDDCOD,MRCDDDES,MRCDOFLG,MRCDPCOD:      
                             MRCDPDES,MRCDODAT,MRCDOSTM,MRCDOETM,MRCDSURG:      
                             MRCDDRGD,MRCDSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRCAD1  RESET     KEY27                                                       
          UNLOCK    MRTCADA1                                                    
          RETURN
.
