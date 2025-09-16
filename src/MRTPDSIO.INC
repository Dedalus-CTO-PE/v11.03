.
. MRTPDSIO    
. --------
. Filename     : mrtpdsaf.dat
.
RSMRPDS1  RESET     KEY8                                                        
          READ      MRTPDSA1,KEY8;;                                             
          RETURN
.
RAMRPDS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MRTPDSA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RLMRPDS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     MRTPDSA1,KEY8;DMRPDADM,MRPDDOCT,MRPDSTAT,MRPDDATE,MRPDTIME:
                                  MRPDRMOR,MRPDSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      DMRPDADM,MRPDADMN                                           
          RETURN
.
RDMRPDS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MRTPDSA1,KEY8;DMRPDADM,MRPDDOCT,MRPDSTAT,MRPDDATE,MRPDTIME:
                                  MRPDRMOR,MRPDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRPDADM,MRPDADMN                                           
          RETURN
.
RKMRPDS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTPDSA1;DMRPDADM,MRPDDOCT,MRPDSTAT,MRPDDATE,MRPDTIME:
                             MRPDRMOR,MRPDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRPDADM,MRPDADMN                                           
          RETURN
.
RPMRPDS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTPDSA1;DMRPDADM,MRPDDOCT,MRPDSTAT,MRPDDATE,MRPDTIME:
                             MRPDRMOR,MRPDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMRPDADM,MRPDADMN                                           
          RETURN
.
UPMRPDS1                                                                        
          MOVE      MRPDADMN,DMRPDADM                                           
          UPDATE    MRTPDSA1;DMRPDADM,MRPDDOCT,MRPDSTAT,MRPDDATE,MRPDTIME:
                             MRPDRMOR,MRPDSPAR
          RETURN
.
WRMRPDS1  RESET     KEY8                                                        
          MOVE      MRPDADMN,DMRPDADM                                           
          WRITE     MRTPDSA1,KEY8;DMRPDADM,MRPDDOCT,MRPDSTAT,MRPDDATE,MRPDTIME:
                             MRPDRMOR,MRPDSPAR
          RETURN
.
DEMRPDS1  RESET     KEY8                                                        
          DELETE    MRTPDSA1,KEY8                                               
          RETURN
.
ULMRPDS1  UNLOCK    MRTPDSA1
          RETURN
