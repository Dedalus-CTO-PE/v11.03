.
. MEHPLSIO    
. --------
. Filename     : mehplsaf.dat
.
RSMHPLS1  RESET     KEY22                                                       
          READ      MEHPLSA1,KEY22;;                                            
          RETURN
.
RAMHPLS1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPLSA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPLS1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPLSA1,KEY22;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPLS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPLSA1;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:      
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPLS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPLSA1;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:      
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPLS1                                                                        
          UPDATE    MEHPLSA1;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:      
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          RETURN
.
WRMHPLS1  RESET     KEY22                                                       
          WRITE     MEHPLSA1,KEY22;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          RETURN
.
DEMHPLS1  RESET     KEY22                                                       
          DELETE    MEHPLSA1,KEY22                                              
          RETURN
.
RSMHPLS2  RESET     KEY22                                                       
          READ      MEHPLSA2,KEY22;;                                            
          RETURN
.
RAMHPLS2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPLSA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPLS2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPLSA2,KEY22;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPLS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPLSA2;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:      
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPLS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPLSA2;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:      
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPLS2                                                                        
          UPDATE    MEHPLSA2;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:      
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          RETURN
.
WRMHPLS2  RESET     KEY22                                                       
          WRITE     MEHPLSA2,KEY22;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          RETURN
.
DEMHPLS2  RESET     KEY22                                                       
          DELETE    MEHPLSA2,KEY22                                              
          RETURN
.
RSMHPLS3  RESET     KEY30                                                       
          READ      MEHPLSA3,KEY30;;                                            
          RETURN
.
RAMHPLS3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPLSA3,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPLS3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPLSA3,KEY30;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPLS3                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPLSA3;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:      
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPLS3                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPLSA3;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:      
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPLS3                                                                        
          UPDATE    MEHPLSA3;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:      
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          RETURN
.
WRMHPLS3  RESET     KEY30                                                       
          WRITE     MEHPLSA3,KEY30;MHPSXDAT,MHPSXNUM,MHPSVISN,MHPSUNIQ,MHPSURNO:
                        MHPSSTAT,MHPSETYP,MHPSECNT,MHPSWCNT,MHPSERID,MHPSFVER:  
                        MHPSLSID,MHPSSORG,MHPSORID,MHPSFDAT,MHPSTDAT,MHPSDELT:  
                        MHPSOTYP,MHPSEHCU,MHPSPSEX,MHPSPDOB,MHPSLSCD,MHPSRCPN:  
                        MHPSSDAT,MHPSEDAT,MHPSSPAR                              
          RETURN
.
DEMHPLS3  RESET     KEY30                                                       
          DELETE    MEHPLSA3,KEY30                                              
          RETURN
.
