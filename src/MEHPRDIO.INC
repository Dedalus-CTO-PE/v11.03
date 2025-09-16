.
. MEHPRDIO    
. --------
. Filename     : mehprdaf.dat
.
RSMHPRD1  RESET     KEY19                                                       
          READ      MEHPRDA1,KEY19;;                                            
          RETURN
.
RAMHPRD1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPRDA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPRD1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPRDA1,KEY19;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPRD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPRDA1;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:      
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPRD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPRDA1;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:      
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPRD1                                                                        
          UPDATE    MEHPRDA1;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:      
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          RETURN
.
WRMHPRD1  RESET     KEY19                                                       
          WRITE     MEHPRDA1,KEY19;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          RETURN
.
DEMHPRD1  RESET     KEY19                                                       
          DELETE    MEHPRDA1,KEY19                                              
          RETURN
.
RSMHPRD2  RESET     KEY19                                                       
          READ      MEHPRDA2,KEY19;;                                            
          RETURN
.
RAMHPRD2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPRDA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPRD2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPRDA2,KEY19;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPRD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPRDA2;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:      
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPRD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPRDA2;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:      
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPRD2                                                                        
          UPDATE    MEHPRDA2;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:      
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          RETURN
.
WRMHPRD2  RESET     KEY19                                                       
          WRITE     MEHPRDA2,KEY19;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          RETURN
.
DEMHPRD2  RESET     KEY19                                                       
          DELETE    MEHPRDA2,KEY19                                              
          RETURN
.
RSMHPRD3  RESET     KEY27                                                       
          READ      MEHPRDA3,KEY27;;                                            
          RETURN
.
RAMHPRD3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPRDA3,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPRD3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPRDA3,KEY27;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPRD3                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPRDA3;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:      
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPRD3                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPRDA3;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:      
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPRD3                                                                        
          UPDATE    MEHPRDA3;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:      
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          RETURN
.
WRMHPRD3  RESET     KEY27                                                       
          WRITE     MEHPRDA3,KEY27;MHPDXDAT,MHPDXNUM,MHPDVISN,MHPDURNO,MHPDSTAT:
                        MHPDETYP,MHPDECNT,MHPDWCNT,MHPDERID,MHPDFVER,MHPDRFID:  
                        MHPDSORG,MHPDORID,MHPDOTYP,MHPDFDAT,MHPDTDAT,MHPDDELT:  
                        MHPDTEAM,MHPDEHCU,MHPDPSEX,MHPDPDOB,MHPDRFFR,MHPDRFTO:  
                        MHPDECOD,MHPDRSTR,MHPDREND,MHPDSPAR                     
          RETURN
.
DEMHPRD3  RESET     KEY27                                                       
          DELETE    MEHPRDA3,KEY27                                              
          RETURN
.
