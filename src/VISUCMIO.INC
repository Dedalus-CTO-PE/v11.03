.
. VISUCMIO    
. --------
. Filename     : visucmaf.dat
.
RSVSUCM1  RESET     KEY17                                                       
          READ      VISUCMA1,KEY17;;                                            
          RETURN
.
RAVSUCM1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      VISUCMA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSUCM1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      VISUCMA1,KEY17;VSUCVISN,VSUCCTYP,VSUCUCNT,VSUCLNUM,VSUCLINE:
                                   VSUCCDAT,VSUCCTIM,VSUCCUID,VSUCUDAT,VSUCUTIM:
                                   VSUCUUID,VSUCSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSUCM1  MOVE      ZERO,OVRCD                                                  
          READKS    VISUCMA1;VSUCVISN,VSUCCTYP,VSUCUCNT,VSUCLNUM,VSUCLINE:      
                             VSUCCDAT,VSUCCTIM,VSUCCUID,VSUCUDAT,VSUCUTIM:      
                             VSUCUUID,VSUCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSUCM1  MOVE      ZERO,OVRCD                                                  
          READKP    VISUCMA1;VSUCVISN,VSUCCTYP,VSUCUCNT,VSUCLNUM,VSUCLINE:      
                             VSUCCDAT,VSUCCTIM,VSUCCUID,VSUCUDAT,VSUCUTIM:      
                             VSUCUUID,VSUCSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSUCM1  MOVE      ZERO,OVRCD                                                  
          UPDATE    VISUCMA1;VSUCVISN,VSUCCTYP,VSUCUCNT,VSUCLNUM,VSUCLINE:      
                             VSUCCDAT,VSUCCTIM,VSUCCUID,VSUCUDAT,VSUCUTIM:      
                             VSUCUUID,VSUCSPAR                                  
          RETURN
.
WRVSUCM1  RESET     KEY17                                                       
          WRITE     VISUCMA1,KEY17;VSUCVISN,VSUCCTYP,VSUCUCNT,VSUCLNUM,VSUCLINE:
                                   VSUCCDAT,VSUCCTIM,VSUCCUID,VSUCUDAT,VSUCUTIM:
                                   VSUCUUID,VSUCSPAR                            
          RETURN
.
DEVSUCM1  RESET     KEY17                                                       
          DELETE    VISUCMA1,KEY17                                              
          RETURN
.
