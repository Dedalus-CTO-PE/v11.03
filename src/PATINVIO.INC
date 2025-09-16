.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOINV                              *
. *                                                        *
. *  Function     :  I/O for patinvrf file                 *
. *                                                        *
. *  Keys         :  KEY8  KEY16 KEY16  KEY32  KEY32 KEY38 *
. *                                                        *
. **********************************************************
.
RSPTINV1
RDSINV1
         RESET     KEY8
         READ      PATINVR1,KEY8;;
         RETURN  
.
RDPTINV1
RDINV1
         MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATINVR1,KEY8;PINVNO,PINVDTE,PINALPHA:
                                 DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RLPTINV1 MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATINVR1,KEY8;PINVNO,PINVDTE,PINALPHA:
                                 DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
UUPTINV1 UNLOCK    PATINVR1
         RETURN  
.
RKPTINV1
RDKINV1
         MOVE      ZERO,OVRCD
         READKS    PATINVR1;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RPPTINV1
RDPINV1
         MOVE      ZERO,OVRCD
         READKP    PATINVR1;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
UPPTINV1
UPINV1   MOVE      SP2,PINVLOCK
.
UPLINV1  MOVE      PINVADM,DPINVADM
         MOVE      PINVSYS,DPINVSYS
         MOVE      PTINCMIX,DPTINCMX
         MOVE      PTINEDSF,DPTINEDS
         UPDATE    PATINVR1;PINVNO,PINVDTE,PINALPHA:
                                 DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
.
         RETURN  
.
WRPTINV1
WRINV1   RESET     KEY8
         MOVE      PINVADM,DPINVADM
         MOVE      PINVSYS,DPINVSYS
         MOVE      PTINCMIX,DPTINCMX
         MOVE      PTINEDSF,DPTINEDS
         WRITE     PATINVR1,KEY8;KEY8,PINVDTE,PINALPHA:
                                 DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
.
         RETURN  
.
DEPTINV1
DEINV1
         RESET     KEY8
         DELETE    PATINVR1,KEY8
.
         RETURN
.
RSPTINV2
RDSINV2
         RESET     KEY16
         READ      PATINVR2,KEY16;;
         RETURN  
.
RDPTINV2
RDINV2
         MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATINVR2,KEY16;PINVNO,PINVDTE,PINALPHA:
                                 DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RKPTINV2
RDKINV2
         MOVE      ZERO,OVRCD
         READKS    PATINVR2;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RPPTINV2
RDPINV2
         MOVE      ZERO,OVRCD
         READKP    PATINVR2;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RSPTINV3
RDSINV3  RESET     KEY16
         READ      PATINVR3,KEY16;;
         RETURN  
.
RDPTINV3
RDINV3   MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATINVR3,KEY16;PINVNO,PINVDTE,PINALPHA:
                                 DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RKPTINV3
RDKINV3
         MOVE      ZERO,OVRCD
         READKS    PATINVR3;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RPPTINV3
RDPINV3
         MOVE      ZERO,OVRCD
         READKP    PATINVR3;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
UPPTINV3
UPINV3   MOVE      PINVADM,DPINVADM
         MOVE      PINVSYS,DPINVSYS
         MOVE      PTINCMIX,DPTINCMX
         MOVE      PTINEDSF,DPTINEDS
         UPDATE    PATINVR3;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
.
         RETURN  
.
RDSINV4
         RESET     KEY32
         READ      PATINVR4,KEY32;;
         RETURN  
.
RDINV4
         MOVE      ZERO,OVRCD
         RESET     KEY32
         READ      PATINVR4,KEY32;PINVNO,PINVDTE,PINALPHA:
                                 DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RDKINV4  MOVE      ZERO,OVRCD
         READKS    PATINVR4;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.

RDPINV4  MOVE      ZERO,OVRCD
         READKP    PATINVR4;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RDSINV5
         RESET     KEY32
         READ      PATINVR5,KEY32;;
         RETURN  
.
RDINV5
         MOVE      ZERO,OVRCD
         RESET     KEY32
         READ      PATINVR5,KEY32;PINVNO,PINVDTE,PINALPHA:
                                 DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RDKINV5  MOVE      ZERO,OVRCD
         READKS    PATINVR5;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.

RDPINV5  MOVE      ZERO,OVRCD
         READKP    PATINVR5;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN  
.
RDSINV6
         RESET     KEY38
         READ      PATINVR6,KEY38;;
         RETURN
.
RDINV6
         MOVE      ZERO,OVRCD
         RESET     KEY38
         READ      PATINVR6,KEY38;PINVNO,PINVDTE,PINALPHA:
                                 DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN
.
RDKINV6  MOVE      ZERO,OVRCD
         READKS    PATINVR6;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN
.

RDPINV6  MOVE      ZERO,OVRCD
         READKP    PATINVR6;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN
.
RDSINV7
         RESET     KEY38
         READ      PATINVR7,KEY38;;
         RETURN
.
RDINV7
         MOVE      ZERO,OVRCD
         RESET     KEY38
         READ      PATINVR7,KEY38;PINVNO,PINVDTE,PINALPHA:
                                 DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN
.
RDKINV7  MOVE      ZERO,OVRCD
         READKS    PATINVR7;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN
.

RDPINV7  MOVE      ZERO,OVRCD
         READKP    PATINVR7;PINVNO,PINVDTE,PINALPHA,DPINVADM,PINVUR:
                                 DPINVSYS,PINVSITE,PINVCLM,PINVLOCK:
                                 PINVAMT,PINVPATA,PINVHFDA,PINVOTHA:
                                 PINVJOUR,PINVREB,PINVCANC,PINVPCSH:
                                 PINVTYP,PINVBLCD,PINVCADM,DPTINCMX:
                                 DPTINEDS,PTINGSTA,PTINGSTJ,PTINCMCD:
                                 PTINPMD1,PTINPMD2,PTINPMAM,PTINCRST:
                                 PTINCRTT,PTINMVDY,PTINDISC,PTINROUN:
                                 PTINHFND,PTINCDAT,PTINCTIM,PTINCUID:
                                 PTINUDAT,PTINUTIM,PTINUUID,PTINCNID:
                                 PTINAPIN,PINVSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPINVSYS,PINVSYS
         MOVE      DPINVADM,PINVADM
         MOVE      PINVDTE,SPINVDTE
         MOVE      PINVADM,SPINVADM
         MOVE      PINVCLM,SPINVCLM
         MOVE      PINALPHA,SPINALPH
         MOVE      DPTINCMX,PTINCMIX
         MOVE      DPTINEDS,PTINEDSF
         RETURN
.
