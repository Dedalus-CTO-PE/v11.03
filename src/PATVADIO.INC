.
. PATVADIO.INC
. ------------
. Filename        : patvadaf
. Description     : Transfer Source Code file
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY5    DIM   5      Key for PATVADA1
.                   KEY35   DIM   35     Key for PATVADA2
.                   KEY19   DIM   19     Key for PATAUDVA
. Modifications   : 
.                  V11.02.01 07.04.2022  DA Sarkies    TSK 0887346
.                            Added new read files for new index PATVADA3
.                  V10.04.02 17/03/2014  Patrick Adair CAR 297193
.                            Added Establishment Name to SPARE
.                  V10.04.01 18/12/2013
.                            Moved PTVACNAM out of SPARE
.                  V10.03.01 23/08/2012  Don Nguyen   CAR 239154
.                            Added Coded Name (PTVACNME)
.                   V9.04.01 22/02/2005  Peter Vela CAR 57547
.                            Add Provider Number
.                   V5.07.00 20/10/1999  Nicole Harrington
.                            Added PTVAACTV - Active Indicator
.                   V5.01.00 21/06/90 Glen Hobby
.                            Upgraded from V5.00 to V5.01
.
. -------- I/O routines for PATVADA1 -------
.
RAPTVAD1  MOVE      ZERO,OVRCD
          RESET     KEY5
          READ      PATVADA1,KEY5;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTVAD1  RESET     KEY5
          READ      PATVADA1,KEY5;;
          RETURN
.
RDPTVAD1  MOVE      ZERO,OVRCD
          RESET     KEY5
          READ      PATVADA1,KEY5;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RLPTVAD1  MOVE      ZERO,OVRCD
          RESET     KEY5
          READL     PATVADA1,KEY5;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTVAD1  MOVE      ZERO,OVRCD
          READKS    PATVADA1;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTVAD1  MOVE      ZERO,OVRCD
          READKP    PATVADA1;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTVAD1  RESET     KEY5
          MOVE      ZERO,OVRCD
          TRAP      OVERLOCK IF IO
          WRITE     PATVADA1,KEY5;KEY5,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          TRAPCLR   IO
          RETURN
.
UPPTVAD1  UPDATE    PATVADA1;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          RETURN
.
ULPTVAD1  UNLOCK    PATVADA1
          RETURN
.
DEPTVAD1  RESET     KEY5
          DELETE    PATVADA1,KEY5
          RETURN
.
. -------- I/O routines for PATVADA2 -------
.
RAPTVAD2  MOVE      ZERO,OVRCD
          RESET     KEY35
          READ      PATVADA2,KEY35;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTVAD2  RESET     KEY35
          READ      PATVADA2,KEY35;;
          RETURN
.
RDPTVAD2  MOVE      ZERO,OVRCD
          RESET     KEY35
          READ      PATVADA2,KEY35;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTVAD2  MOVE      ZERO,OVRCD
          READKS    PATVADA2;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTVAD2  MOVE      ZERO,OVRCD
          READKP    PATVADA2;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. -------- I/O routines for PATVADA3 -------
.
RAPTVAD3  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATVADA3,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTVAD3  RESET     KEY9 
          READ      PATVADA3,KEY9;;
          RETURN
.
RDPTVAD3  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATVADA3,KEY9;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTVAD3  MOVE      ZERO,OVRCD
          READKS    PATVADA3;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTVAD3  MOVE      ZERO,OVRCD
          READKP    PATVADA3;PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERCOND IF OVER
.
. ------- I/O routines for PATAUDVA (Audit file) -------
.
ASPTVAD   RESET     KEY19
          READ      PATAUDVA,KEY19;;
          RETURN
.
AKPTVAD   MOVE      ZERO,OVRCD
          READKS    PATAUDVA;PTVAAUDD,PTVAAUDT,PTVAAUDP,PTVAAUDR,PTVAAUDS:
                             PTVAAUDO,PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                             PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                             PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                             PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                             PTVACNME,PTVAESTB,PTVASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AWPTVAD   RESET     KEY19
          WRITE     PATAUDVA,KEY19;KEY19,PTVAAUDS,PTVAAUDO:
                                   PTVACODE,PTVADESC,PTVANHSC,PTVAACTV:
                                   PTVASDAT,PTVASUPD,PTVAEDAT,PTVAEUPD:
                                   PTVACDAT,PTVACTIM,PTVACUID,PTVAUDAT,PTVAUTIM:
                                   PTVAUUID,PTVAPROV,PTVAPNAM,PTVAPPCD,PTVADTYP:
                                   PTVACNME,PTVAESTB,PTVASPAR
          RETURN
.
ADPTVAD   RESET     KEY19
          DELETE    PATAUDVA,KEY19
          RETURN
.
