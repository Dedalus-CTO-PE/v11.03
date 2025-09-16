.
. VISPMAIO    
. --------
. Filename     : vispmaaf.dat
.
RSVSPMA1  RESET     KEY23                                                       
          READ      VISPMAA1,KEY23;;                                            
          RETURN
.
RAVSPMA1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      VISPMAA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSPMA1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      VISPMAA1,KEY23;VSPMVISN,VSPMPAYC,VSPMMACN,VSPMMNAM:
                                   VSPMRLTP,VSPMMPID,VSPMMPIT,VSPMMAD1:
                                   VSPMMAD2,VSPMMAD3,VSPMMAD4,VSPMMPCD:
                                   VSPMEAMT,VSPMEPEC,VSPMCDAT,VSPMCTIM:
                                   VSPMCUID,VSPMUDAT,VSPMUTIM,VSPMUUID:
                                   VSPMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSPMA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    VISPMAA1;VSPMVISN,VSPMPAYC,VSPMMACN,VSPMMNAM:
                                   VSPMRLTP,VSPMMPID,VSPMMPIT,VSPMMAD1:
                                   VSPMMAD2,VSPMMAD3,VSPMMAD4,VSPMMPCD:
                                   VSPMEAMT,VSPMEPEC,VSPMCDAT,VSPMCTIM:
                                   VSPMCUID,VSPMUDAT,VSPMUTIM,VSPMUUID:
                                   VSPMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSPMA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    VISPMAA1;VSPMVISN,VSPMPAYC,VSPMMACN,VSPMMNAM:
                                   VSPMRLTP,VSPMMPID,VSPMMPIT,VSPMMAD1:
                                   VSPMMAD2,VSPMMAD3,VSPMMAD4,VSPMMPCD:
                                   VSPMEAMT,VSPMEPEC,VSPMCDAT,VSPMCTIM:
                                   VSPMCUID,VSPMUDAT,VSPMUTIM,VSPMUUID:
                                   VSPMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSPMA1                                                                        
          UPDATE    VISPMAA1;VSPMVISN,VSPMPAYC,VSPMMACN,VSPMMNAM:
                                   VSPMRLTP,VSPMMPID,VSPMMPIT,VSPMMAD1:
                                   VSPMMAD2,VSPMMAD3,VSPMMAD4,VSPMMPCD:
                                   VSPMEAMT,VSPMEPEC,VSPMCDAT,VSPMCTIM:
                                   VSPMCUID,VSPMUDAT,VSPMUTIM,VSPMUUID:
                                   VSPMSPAR
          RETURN
.
WRVSPMA1  RESET     KEY23                                                       
          WRITE     VISPMAA1,KEY23;VSPMVISN,VSPMPAYC,VSPMMACN,VSPMMNAM:
                                   VSPMRLTP,VSPMMPID,VSPMMPIT,VSPMMAD1:
                                   VSPMMAD2,VSPMMAD3,VSPMMAD4,VSPMMPCD:
                                   VSPMEAMT,VSPMEPEC,VSPMCDAT,VSPMCTIM:
                                   VSPMCUID,VSPMUDAT,VSPMUTIM,VSPMUUID:
                                   VSPMSPAR
          RETURN
.
DEVSPMA1  RESET     KEY23                                                       
          DELETE    VISPMAA1,KEY23                                              
          RETURN
.
RSVSPMA2  RESET     KEY29                                                       
          READ      VISPMAA2,KEY29;;                                            
          RETURN
.
RAVSPMA2  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      VISPMAA2,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSPMA2  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      VISPMAA2,KEY29;VSPMVISN,VSPMPAYC,VSPMMACN,VSPMMNAM:
                                   VSPMRLTP,VSPMMPID,VSPMMPIT,VSPMMAD1:
                                   VSPMMAD2,VSPMMAD3,VSPMMAD4,VSPMMPCD:
                                   VSPMEAMT,VSPMEPEC,VSPMCDAT,VSPMCTIM:
                                   VSPMCUID,VSPMUDAT,VSPMUTIM,VSPMUUID:
                                   VSPMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSPMA2                                                                        
          MOVE      ZERO,OVRCD
          READKS    VISPMAA2;VSPMVISN,VSPMPAYC,VSPMMACN,VSPMMNAM:
                                   VSPMRLTP,VSPMMPID,VSPMMPIT,VSPMMAD1:
                                   VSPMMAD2,VSPMMAD3,VSPMMAD4,VSPMMPCD:
                                   VSPMEAMT,VSPMEPEC,VSPMCDAT,VSPMCTIM:
                                   VSPMCUID,VSPMUDAT,VSPMUTIM,VSPMUUID:
                                   VSPMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSPMA2                                                                        
          MOVE      ZERO,OVRCD
          READKP    VISPMAA2;VSPMVISN,VSPMPAYC,VSPMMACN,VSPMMNAM:
                                   VSPMRLTP,VSPMMPID,VSPMMPIT,VSPMMAD1:
                                   VSPMMAD2,VSPMMAD3,VSPMMAD4,VSPMMPCD:
                                   VSPMEAMT,VSPMEPEC,VSPMCDAT,VSPMCTIM:
                                   VSPMCUID,VSPMUDAT,VSPMUTIM,VSPMUUID:
                                   VSPMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSPMA2                                                                        
          UPDATE    VISPMAA2;VSPMVISN,VSPMPAYC,VSPMMACN,VSPMMNAM:
                                   VSPMRLTP,VSPMMPID,VSPMMPIT,VSPMMAD1:
                                   VSPMMAD2,VSPMMAD3,VSPMMAD4,VSPMMPCD:
                                   VSPMEAMT,VSPMEPEC,VSPMCDAT,VSPMCTIM:
                                   VSPMCUID,VSPMUDAT,VSPMUTIM,VSPMUUID:
                                   VSPMSPAR
          RETURN
.
WRVSPMA2  RESET     KEY29                                                       
          WRITE     VISPMAA2,KEY29;VSPMVISN,VSPMPAYC,VSPMMACN,VSPMMNAM:
                                   VSPMRLTP,VSPMMPID,VSPMMPIT,VSPMMAD1:
                                   VSPMMAD2,VSPMMAD3,VSPMMAD4,VSPMMPCD:
                                   VSPMEAMT,VSPMEPEC,VSPMCDAT,VSPMCTIM:
                                   VSPMCUID,VSPMUDAT,VSPMUTIM,VSPMUUID:
                                   VSPMSPAR
          RETURN
.
DEVSPMA2  RESET     KEY29                                                       
          DELETE    VISPMAA2,KEY29                                              
          RETURN
.
