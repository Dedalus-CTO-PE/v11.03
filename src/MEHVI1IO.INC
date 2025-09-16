.
. MEHVI1IO.INC
. ------------
. Related FD   : MEHVI1FD.INC
. Filenames    : mehvi1af , mehaudi1 (audits)
. Description  : Mental Health System 'Visit file'
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY8    DIM     8          KEY FOR MEHVI1A1
.                KEY9    DIM     9          KEY FOR MEHVI1A2
.                KEY16   DIM     16         KEY FOR MEHVI1A3
.                KEY19   DIM     19         KEY FOR MEHAUDVI
.
RSMHVIS1  RESET     KEY8                    * positional read
          READ      MEHVI1A1,KEY8;;
          RETURN
.
RAMHVIS1  RESET     KEY8                    * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHVI1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHVIS1  RESET     KEY8                    * full read
          MOVE      ZERO,OVRCD
          READ      MEHVI1A1,KEY8;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                                  MHVIADD1,MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST:
                                  MHVISPR1,MHVIACTY:
                                  MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                                  MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                                  MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                                  MHVIMCAT,MHVIPSPS:
                                  MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                                  MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                                  MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                                  MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                                  MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
RKMHVIS1  MOVE      ZERO,OVRCD              * next read
          READKS    MEHVI1A1;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1,MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST:
                             MHVISPR1,MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
RPMHVIS1  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHVI1A1;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1,MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST:
                             MHVISPR1,MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
UPMHVIS1  MOVE      MHVIADMN,DMHVIADM       * update
          MOVE      MHVISTAT,DMHVISTA
          UPDATE    MEHVI1A1;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1,MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST:
                             MHVISPR1,MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          RETURN
.
WRMHVIS1  RESET     KEY8                    * write
          MOVE      MHVIADMN,DMHVIADM
          MOVE      MHVISTAT,DMHVISTA
          WRITE     MEHVI1A1,KEY8;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                                  MHVIADD1,MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST:
                                  MHVISPR1,MHVIACTY:
                                  MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                                  MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                                  MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                                  MHVIMCAT,MHVIPSPS:
                                  MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                                  MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                                  MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                                  MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                                  MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          RETURN
.
DEMHVIS1  RESET     KEY8                    * delete
          DELETE    MEHVI1A1,KEY8
          RETURN
.
.
RSMHVIS2  RESET     KEY9                    * positional read
          READ      MEHVI1A2,KEY9;;
          RETURN
.
RAMHVIS2  RESET     KEY9                    * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHVI1A2,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHVIS2  RESET     KEY9                    * full read
          MOVE      ZERO,OVRCD
          READ      MEHVI1A2,KEY9;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                                  MHVIADD1,MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST:
                                  MHVISPR1,MHVIACTY:
                                  MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                                  MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                                  MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                                  MHVIMCAT,MHVIPSPS:
                                  MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                                  MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                                  MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                                  MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                                  MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
RKMHVIS2  MOVE      ZERO,OVRCD              * next read
          READKS    MEHVI1A2;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1,MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST:
                             MHVISPR1,MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
RPMHVIS2  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHVI1A2;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1,MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST:
                             MHVISPR1,MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
UPMHVIS2  MOVE      MHVIADMN,DMHVIADM       * update
          MOVE      MHVISTAT,DMHVISTA
          UPDATE    MEHVI1A2;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1,MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST:
                             MHVISPR1,MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          RETURN
.
.
RSMHVIS3  RESET     KEY16                   * positional read
          READ      MEHVI1A3,KEY16;;
          RETURN
.
RAMHVIS3  RESET     KEY16                   * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHVI1A3,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHVIS3  RESET     KEY16                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHVI1A3,KEY16;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                                   MHVIADD1:
                                   MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                                   MHVIACTY:
                                   MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                                   MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                                   MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                                   MHVIMCAT,MHVIPSPS:
                                   MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                                   MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                                   MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                                   MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                                   MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
RKMHVIS3  MOVE      ZERO,OVRCD              * next read
          READKS    MEHVI1A3;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1:
                             MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                             MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
RPMHVIS3  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHVI1A3;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1:
                             MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                             MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
UPMHVIS3  MOVE      MHVIADMN,DMHVIADM       * update
          MOVE      MHVISTAT,DMHVISTA
          UPDATE    MEHVI1A3;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1:
                             MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                             MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          RETURN

RSMHVIS4  RESET     KEY16                   * positional read
          READ      MEHVI1A4,KEY16;;
          RETURN
.
RAMHVIS4  RESET     KEY16                   * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHVI1A4,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHVIS4  RESET     KEY16                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHVI1A4,KEY16;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                                   MHVIADD1:
                                   MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                                   MHVIACTY:
                                   MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                                   MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                                   MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                                   MHVIMCAT,MHVIPSPS:
                                   MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                                   MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                                   MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                                   MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                                   MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
RKMHVIS4  MOVE      ZERO,OVRCD              * next read
          READKS    MEHVI1A4;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1:
                             MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                             MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
RPMHVIS4  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHVI1A4;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1:
                             MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                             MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
UPMHVIS4  MOVE      MHVIADMN,DMHVIADM       * update
          MOVE      MHVISTAT,DMHVISTA
          UPDATE    MEHVI1A4;DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER:
                             MHVIADD1:
                             MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                             MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          RETURN
.
.
ASMHVIS   RESET     KEY19                   * positional read
          READ      MEHAUVI1,KEY19;;
          RETURN
.
AKMHVIS   MOVE      ZERO,OVRCD              * next read
          READKS    MEHAUVI1;MHVIAUDD,MHVIAUDT,MHVIAUDP,MHVIAUDR,MHVIAUDS:
                             MHVIAUDO:
                             DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER,MHVIADD1:
                             MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                             MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
AWMHVIS   RESET     KEY19                   * write
          MOVE      MHVIADMN,DMHVIADM
          MOVE      MHVISTAT,DMHVISTA
          WRITE     MEHAUVI1,KEY19;MHVIAUDD,MHVIAUDT,MHVIAUDP,MHVIAUDR:
                                   MHVIAUDS,MHVIAUDO:
                                   DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER,MHVIADD1:
                                   MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                                   MHVIACTY:
                                   MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                                   MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                                   MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                                   MHVIMCAT,MHVIPSPS:
                                   MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                                   MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                                   MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                                   MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                                   MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          RETURN
.
AUMHVIS   MOVE      MHVIADMN,DMHVIADM       * update
          MOVE      MHVISTAT,DMHVISTA
          UPDATE    MEHAUVI1;MHVIAUDD,MHVIAUDT,MHVIAUDP,MHVIAUDR:
                             MHVIAUDS,MHVIAUDO:
                             DMHVIADM,DMHVISTA,MHVILSRV,MHVITHER,MHVIADD1:
                             MHVIADD2,MHVISUBR,MHVIADD4,MHVIPOST,MHVISPR1:
                             MHVIACTY:
                             MHVIRFDT,MHVIFCDT,MHVIRODT,MHVIVISI,MHVIBENE:
                             MHVIBEPD,MHVIMXBE,MHVIMXDT,MHVISUPP,MHVIUSR1:
                             MHVIUSR2,MHVIUSR3,MHVIUSR4,MHVIUSR5,MHVIATYP:
                             MHVIMCAT,MHVIPSPS:
                             MHVILAWR,MHVIORDH,MHVICJAR,MHVIREDD:
                             MHVIS76R,MHVIURNO,MHVIROTM,MHVIPDDT:
                             MHVIPDTM,MHVICSMN,MHVIPYCL,MHVITROR:
                             MHVIPDGV,MHVIACDE,MHVIRMHA,MHVIRMHC:
                             MHVIRFTM,MHVIAMDT,MHVIAMTM,MHVIMHOR,MHVISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHVIADM,MHVIADMN
          MOVE      DMHVISTA,MHVISTAT
          RETURN
.
ADMHVIS   RESET     KEY19                   * delete
          DELETE    MEHAUVI1,KEY19
          RETURN
+
.

