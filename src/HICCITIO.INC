.
. HICCITIO    
. --------
. Filename     : hiccitaf.dat
.
RSHCCIT1  RESET     KEY18                                                       
          READ      HICCITA1,KEY18;;                                            
          RETURN
.
RAHCCIT1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      HICCITA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCCIT1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      HICCITA1,KEY18;HCCICLMN,HCCIVISN,HCCITRAN,HCCIPMCI,HCCIPYEE:
                        HCCIPSRV,HCCIBTCH,HCCIIFLG,HCCIITMN,HCCISUBN,HCCIIDAT:  
                        HCCICAMT,HCCIRCVA,HCCIREJA,HCCIWOFF,HCCITRIN,HCCIADJM:  
                        HCCIREJR,HCCIREJD,HCCIRWOF,HCCIWOFD,HCCITRND,HCCICDAT:  
                        HCCICTIM,HCCICUID,HCCIUDAT,HCCIUTIM,HCCIUUID,HCCIIDES:  
                        HCCIRDAT,HCCIADJR,HCCIADJD,HCCIIPOS,HCCIPUSE,HCCISPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCCIT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICCITA1;HCCICLMN,HCCIVISN,HCCITRAN,HCCIPMCI,HCCIPYEE:      
                        HCCIPSRV,HCCIBTCH,HCCIIFLG,HCCIITMN,HCCISUBN,HCCIIDAT:  
                        HCCICAMT,HCCIRCVA,HCCIREJA,HCCIWOFF,HCCITRIN,HCCIADJM:  
                        HCCIREJR,HCCIREJD,HCCIRWOF,HCCIWOFD,HCCITRND,HCCICDAT:  
                        HCCICTIM,HCCICUID,HCCIUDAT,HCCIUTIM,HCCIUUID,HCCIIDES:  
                        HCCIRDAT,HCCIADJR,HCCIADJD,HCCIIPOS,HCCIPUSE,HCCISPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCCIT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICCITA1;HCCICLMN,HCCIVISN,HCCITRAN,HCCIPMCI,HCCIPYEE:      
                        HCCIPSRV,HCCIBTCH,HCCIIFLG,HCCIITMN,HCCISUBN,HCCIIDAT:  
                        HCCICAMT,HCCIRCVA,HCCIREJA,HCCIWOFF,HCCITRIN,HCCIADJM:  
                        HCCIREJR,HCCIREJD,HCCIRWOF,HCCIWOFD,HCCITRND,HCCICDAT:  
                        HCCICTIM,HCCICUID,HCCIUDAT,HCCIUTIM,HCCIUUID,HCCIIDES:  
                        HCCIRDAT,HCCIADJR,HCCIADJD,HCCIIPOS,HCCIPUSE,HCCISPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCCIT1  PACK      HCCIUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCIUDAT  
          CLOCK     TIME,HCCIUTIM
.
          UPDATE    HICCITA1;HCCICLMN,HCCIVISN,HCCITRAN,HCCIPMCI,HCCIPYEE:      
                        HCCIPSRV,HCCIBTCH,HCCIIFLG,HCCIITMN,HCCISUBN,HCCIIDAT:  
                        HCCICAMT,HCCIRCVA,HCCIREJA,HCCIWOFF,HCCITRIN,HCCIADJM:  
                        HCCIREJR,HCCIREJD,HCCIRWOF,HCCIWOFD,HCCITRND,HCCICDAT:  
                        HCCICTIM,HCCICUID,HCCIUDAT,HCCIUTIM,HCCIUUID,HCCIIDES:  
                        HCCIRDAT,HCCIADJR,HCCIADJD,HCCIIPOS,HCCIPUSE,HCCISPAR   
          RETURN
.
WRHCCIT1  PACK      HCCICDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCICDAT  
          CLOCK     TIME,HCCICTIM
.
          RESET     KEY18                                                       
          WRITE     HICCITA1,KEY18;HCCICLMN,HCCIVISN,HCCITRAN,HCCIPMCI,HCCIPYEE:
                        HCCIPSRV,HCCIBTCH,HCCIIFLG,HCCIITMN,HCCISUBN,HCCIIDAT:  
                        HCCICAMT,HCCIRCVA,HCCIREJA,HCCIWOFF,HCCITRIN,HCCIADJM:  
                        HCCIREJR,HCCIREJD,HCCIRWOF,HCCIWOFD,HCCITRND,HCCICDAT:  
                        HCCICTIM,HCCICUID,HCCIUDAT,HCCIUTIM,HCCIUUID,HCCIIDES:  
                        HCCIRDAT,HCCIADJR,HCCIADJD,HCCIIPOS,HCCIPUSE,HCCISPAR   
          RETURN
.
DEHCCIT1  RESET     KEY18                                                       
          DELETE    HICCITA1,KEY18                                              
          RETURN
.
RSHCCIT2  RESET     KEY18                                                       
          READ      HICCITA2,KEY18;;                                            
          RETURN
.
RAHCCIT2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      HICCITA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCCIT2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      HICCITA2,KEY18;HCCICLMN,HCCIVISN,HCCITRAN,HCCIPMCI,HCCIPYEE:
                        HCCIPSRV,HCCIBTCH,HCCIIFLG,HCCIITMN,HCCISUBN,HCCIIDAT:  
                        HCCICAMT,HCCIRCVA,HCCIREJA,HCCIWOFF,HCCITRIN,HCCIADJM:  
                        HCCIREJR,HCCIREJD,HCCIRWOF,HCCIWOFD,HCCITRND,HCCICDAT:  
                        HCCICTIM,HCCICUID,HCCIUDAT,HCCIUTIM,HCCIUUID,HCCIIDES:  
                        HCCIRDAT,HCCIADJR,HCCIADJD,HCCIIPOS,HCCIPUSE,HCCISPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCCIT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICCITA2;HCCICLMN,HCCIVISN,HCCITRAN,HCCIPMCI,HCCIPYEE:      
                        HCCIPSRV,HCCIBTCH,HCCIIFLG,HCCIITMN,HCCISUBN,HCCIIDAT:  
                        HCCICAMT,HCCIRCVA,HCCIREJA,HCCIWOFF,HCCITRIN,HCCIADJM:  
                        HCCIREJR,HCCIREJD,HCCIRWOF,HCCIWOFD,HCCITRND,HCCICDAT:  
                        HCCICTIM,HCCICUID,HCCIUDAT,HCCIUTIM,HCCIUUID,HCCIIDES:  
                        HCCIRDAT,HCCIADJR,HCCIADJD,HCCIIPOS,HCCIPUSE,HCCISPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCCIT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICCITA2;HCCICLMN,HCCIVISN,HCCITRAN,HCCIPMCI,HCCIPYEE:      
                        HCCIPSRV,HCCIBTCH,HCCIIFLG,HCCIITMN,HCCISUBN,HCCIIDAT:  
                        HCCICAMT,HCCIRCVA,HCCIREJA,HCCIWOFF,HCCITRIN,HCCIADJM:  
                        HCCIREJR,HCCIREJD,HCCIRWOF,HCCIWOFD,HCCITRND,HCCICDAT:  
                        HCCICTIM,HCCICUID,HCCIUDAT,HCCIUTIM,HCCIUUID,HCCIIDES:  
                        HCCIRDAT,HCCIADJR,HCCIADJD,HCCIIPOS,HCCIPUSE,HCCISPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCCIT2  PACK      HCCIUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCIUDAT  
          CLOCK     TIME,HCCIUTIM
.
          UPDATE    HICCITA2;HCCICLMN,HCCIVISN,HCCITRAN,HCCIPMCI,HCCIPYEE:      
                        HCCIPSRV,HCCIBTCH,HCCIIFLG,HCCIITMN,HCCISUBN,HCCIIDAT:  
                        HCCICAMT,HCCIRCVA,HCCIREJA,HCCIWOFF,HCCITRIN,HCCIADJM:  
                        HCCIREJR,HCCIREJD,HCCIRWOF,HCCIWOFD,HCCITRND,HCCICDAT:  
                        HCCICTIM,HCCICUID,HCCIUDAT,HCCIUTIM,HCCIUUID,HCCIIDES:  
                        HCCIRDAT,HCCIADJR,HCCIADJD,HCCIIPOS,HCCIPUSE,HCCISPAR   
          RETURN
.
WRHCCIT2  PACK      HCCICDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCCICDAT  
          CLOCK     TIME,HCCICTIM
.
          RESET     KEY18                                                       
          WRITE     HICCITA2,KEY18;HCCICLMN,HCCIVISN,HCCITRAN,HCCIPMCI,HCCIPYEE:
                        HCCIPSRV,HCCIBTCH,HCCIIFLG,HCCIITMN,HCCISUBN,HCCIIDAT:  
                        HCCICAMT,HCCIRCVA,HCCIREJA,HCCIWOFF,HCCITRIN,HCCIADJM:  
                        HCCIREJR,HCCIREJD,HCCIRWOF,HCCIWOFD,HCCITRND,HCCICDAT:  
                        HCCICTIM,HCCICUID,HCCIUDAT,HCCIUTIM,HCCIUUID,HCCIIDES:  
                        HCCIRDAT,HCCIADJR,HCCIADJD,HCCIIPOS,HCCIPUSE,HCCISPAR   
          RETURN
.
DEHCCIT2  RESET     KEY18                                                       
          DELETE    HICCITA2,KEY18                                              
          RETURN
.
