.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOFAC                              *
. *                                                        *
. *  Function     :  I/O for patfactf file                 *
. *                                                        *
. *  Keys         :  KEY19, KEY19, KEY27                   *
. *                                                        *
. **********************************************************
.
RDAFACT1
         MOVE      ZERO,OVRCD
         RESET     KEY19
         READ      PATFACT1,KEY19;ANS;
         GOTO      OVERCOND IF OVER
         RETURN
.
RDFACT1
         MOVE      ZERO,OVRCD
         RESET     KEY19
         READ      PATFACT1,KEY19;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO:
                            PTFCDTCP,PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DFADMNO,FADMNO
         RETURN
.
RDKFACT1
         MOVE      ZERO,OVRCD
         READKS    PATFACT1;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO,PTFCDTCP:
                            PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DFADMNO,FADMNO
         RETURN
.
RDPFACT1
         MOVE      ZERO,OVRCD
         READKP    PATFACT1;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO,PTFCDTCP:
                            PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DFADMNO,FADMNO
         RETURN
.
WRFACT1
         RESET     KEY19
         MOVE      FADMNO,DFADMNO
         WRITE     PATFACT1,KEY19;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO:
                            PTFCDTCP,PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         RETURN
.
UPFACT1
         MOVE      FADMNO,DFADMNO
         UPDATE    PATFACT1;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO,PTFCDTCP:
                            PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         RETURN
.
DEFACT1
         RESET     KEY19
         DELETE    PATFACT1,KEY19
         RETURN
.
RDSFACT1
         RESET     KEY19
         READ      PATFACT1,KEY19;;
         RETURN
.
RDFACT2
         MOVE      ZERO,OVRCD
         RESET     KEY19
         READ      PATFACT2,KEY19;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO:
                            PTFCDTCP,PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DFADMNO,FADMNO
         RETURN
.
RDKFACT2
         MOVE      ZERO,OVRCD
         READKS    PATFACT2;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO,PTFCDTCP:
                            PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DFADMNO,FADMNO
         RETURN
.
RDPFACT2
         MOVE      ZERO,OVRCD
         READKP    PATFACT2;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO,PTFCDTCP:
                            PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DFADMNO,FADMNO
         RETURN
.
WRFACT2  RESET     KEY19
         WRITE     PATFACT2,KEY19;KEY19,FACODE,FACOMM,PTFCURNO,PTFCDTCP:
                            PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         RETURN
.
UPFACT2
         MOVE      FADMNO,DFADMNO
         UPDATE    PATFACT2;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO,PTFCDTCP:
                            PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         RETURN
.
DEFACT2
         RESET     KEY19
         DELETE    PATFACT2,KEY19
         RETURN
.
RDSFACT2
         RESET     KEY19
         READ      PATFACT2,KEY19;;
         RETURN
.
RDAFACT3
         MOVE      ZERO,OVRCD
         RESET     KEY27
         READ      PATFACT3,KEY27;ANS;
         GOTO      OVERCOND IF OVER
         RETURN
.
RDFACT3
         MOVE      ZERO,OVRCD
         RESET     KEY27
         READ      PATFACT3,KEY27;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO:
                            PTFCDTCP,PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DFADMNO,FADMNO
         RETURN
.
RDKFACT3
         MOVE      ZERO,OVRCD
         READKS    PATFACT3;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO,PTFCDTCP:
                            PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DFADMNO,FADMNO
         RETURN
.
RDPFACT3
         MOVE      ZERO,OVRCD
         READKP    PATFACT3;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO,PTFCDTCP:
                            PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DFADMNO,FADMNO
         RETURN
.
WRFACT3  RESET     KEY27
         MOVE      FADMNO,DFADMNO
         WRITE     PATFACT3,KEY27;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO:
                            PTFCDTCP,PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         RETURN
.
UPFACT3
         MOVE      FADMNO,DFADMNO
         UPDATE    PATFACT3;FADATE,DFADMNO,FACODE,FACOMM,PTFCURNO,PTFCDTCP:
                            PTFCOCGR,PTFCHFND,PTFCSTAT,PTFCINVN:
                            PTFCCDAT,PTFCCTIM,PTFCCUID,PTFCUDAT,PTFCUTIM:
                            PTFCUUID,PTFCSPAR
         RETURN
.
DEFACT3
         RESET     KEY27
         DELETE    PATFACT3,KEY27
         RETURN
.
RDSFACT3
         RESET     KEY27
         READ      PATFACT3,KEY27;;
         RETURN
