.
. PMSPWAIO    
. --------
. Filename     : pmspwaaf.dat
.
RSPMPWA1  RESET     KEY10                                                       
          READ      PMSPWAA1,KEY10;;                                            
          RETURN
.
RAPMPWA1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPWAA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPWA1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPWAA1,KEY10;PMPWCNTR,PMPWDRGC,PMPWDRGD,PMPWSDPY,PMPWBICU:
                                   PMPWALOS,PMPWLOWB,PMPWUPPB,PMPWPSRV,PMPWPAED:
                                   PMPWSDAY,PMPWSSOB,PMPWSSOP,PMPWINLI,PMPWLSOP:
                                   PMPWCDAT,PMPWCTIM,PMPWCUID,PMPWUDAT,PMPWUTIM:
                                   PMPWUUID,PMPWSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPWA1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPWAA1;PMPWCNTR,PMPWDRGC,PMPWDRGD,PMPWSDPY,PMPWBICU:      
                             PMPWALOS,PMPWLOWB,PMPWUPPB,PMPWPSRV,PMPWPAED:      
                             PMPWSDAY,PMPWSSOB,PMPWSSOP,PMPWINLI,PMPWLSOP:      
                             PMPWCDAT,PMPWCTIM,PMPWCUID,PMPWUDAT,PMPWUTIM:      
                             PMPWUUID,PMPWSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPWA1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPWAA1;PMPWCNTR,PMPWDRGC,PMPWDRGD,PMPWSDPY,PMPWBICU:      
                             PMPWALOS,PMPWLOWB,PMPWUPPB,PMPWPSRV,PMPWPAED:      
                             PMPWSDAY,PMPWSSOB,PMPWSSOP,PMPWINLI,PMPWLSOP:      
                             PMPWCDAT,PMPWCTIM,PMPWCUID,PMPWUDAT,PMPWUTIM:      
                             PMPWUUID,PMPWSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPWA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPWAA1;PMPWCNTR,PMPWDRGC,PMPWDRGD,PMPWSDPY,PMPWBICU:      
                             PMPWALOS,PMPWLOWB,PMPWUPPB,PMPWPSRV,PMPWPAED:      
                             PMPWSDAY,PMPWSSOB,PMPWSSOP,PMPWINLI,PMPWLSOP:      
                             PMPWCDAT,PMPWCTIM,PMPWCUID,PMPWUDAT,PMPWUTIM:      
                             PMPWUUID,PMPWSPAR                                  
          RETURN
.
WRPMPWA1  RESET     KEY10                                                       
          WRITE     PMSPWAA1,KEY10;PMPWCNTR,PMPWDRGC,PMPWDRGD,PMPWSDPY,PMPWBICU:
                                   PMPWALOS,PMPWLOWB,PMPWUPPB,PMPWPSRV,PMPWPAED:
                                   PMPWSDAY,PMPWSSOB,PMPWSSOP,PMPWINLI,PMPWLSOP:
                                   PMPWCDAT,PMPWCTIM,PMPWCUID,PMPWUDAT,PMPWUTIM:
                                   PMPWUUID,PMPWSPAR                            
          RETURN
.
DEPMPWA1  RESET     KEY10                                                       
          DELETE    PMSPWAA1,KEY10                                              
          RETURN
.
RSPMPWA2  RESET     KEY10                                                       
          READ      PMSPWAA2,KEY10;;                                            
          RETURN
.
RAPMPWA2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPWAA2,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPWA2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPWAA2,KEY10;PMPWCNTR,PMPWDRGC,PMPWDRGD,PMPWSDPY,PMPWBICU:
                                   PMPWALOS,PMPWLOWB,PMPWUPPB,PMPWPSRV,PMPWPAED:
                                   PMPWSDAY,PMPWSSOB,PMPWSSOP,PMPWINLI,PMPWLSOP:
                                   PMPWCDAT,PMPWCTIM,PMPWCUID,PMPWUDAT,PMPWUTIM:
                                   PMPWUUID,PMPWSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPWA2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPWAA2;PMPWCNTR,PMPWDRGC,PMPWDRGD,PMPWSDPY,PMPWBICU:      
                             PMPWALOS,PMPWLOWB,PMPWUPPB,PMPWPSRV,PMPWPAED:      
                             PMPWSDAY,PMPWSSOB,PMPWSSOP,PMPWINLI,PMPWLSOP:      
                             PMPWCDAT,PMPWCTIM,PMPWCUID,PMPWUDAT,PMPWUTIM:      
                             PMPWUUID,PMPWSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPWA2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPWAA2;PMPWCNTR,PMPWDRGC,PMPWDRGD,PMPWSDPY,PMPWBICU:      
                             PMPWALOS,PMPWLOWB,PMPWUPPB,PMPWPSRV,PMPWPAED:      
                             PMPWSDAY,PMPWSSOB,PMPWSSOP,PMPWINLI,PMPWLSOP:      
                             PMPWCDAT,PMPWCTIM,PMPWCUID,PMPWUDAT,PMPWUTIM:      
                             PMPWUUID,PMPWSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPWA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPWAA2;PMPWCNTR,PMPWDRGC,PMPWDRGD,PMPWSDPY,PMPWBICU:      
                             PMPWALOS,PMPWLOWB,PMPWUPPB,PMPWPSRV,PMPWPAED:      
                             PMPWSDAY,PMPWSSOB,PMPWSSOP,PMPWINLI,PMPWLSOP:      
                             PMPWCDAT,PMPWCTIM,PMPWCUID,PMPWUDAT,PMPWUTIM:      
                             PMPWUUID,PMPWSPAR                                  
          RETURN
.
WRPMPWA2  RESET     KEY10                                                       
          WRITE     PMSPWAA2,KEY10;PMPWCNTR,PMPWDRGC,PMPWDRGD,PMPWSDPY,PMPWBICU:
                                   PMPWALOS,PMPWLOWB,PMPWUPPB,PMPWPSRV,PMPWPAED:
                                   PMPWSDAY,PMPWSSOB,PMPWSSOP,PMPWINLI,PMPWLSOP:
                                   PMPWCDAT,PMPWCTIM,PMPWCUID,PMPWUDAT,PMPWUTIM:
                                   PMPWUUID,PMPWSPAR                            
          RETURN
.
DEPMPWA2  RESET     KEY10                                                       
          DELETE    PMSPWAA2,KEY10                                              
          RETURN
.
