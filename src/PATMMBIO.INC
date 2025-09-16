.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATMMBIO.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Medical Records MBS                             *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patmmbsf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 20, KEY 11                                  *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *    V11.01.01 15/02/2021  Tracey Nguyen   TSK 0888639               *
.  *              Extended PATMMBS1 from KEY10 to KEY11                 *
.  *              Extended PATMMBS2 from KEY19 to KEY20                 *
.  **********************************************************************
.
RDSMMBS1  RESET     KEY11
          READ      PATMMBS1,KEY11;;
          RETURN
.
RDAMMBS1  MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      PATMMBS1,KEY11;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMMBS1   MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      PATMMBS1,KEY11;MMCODE,DMMADMN,DMMRECN,MMDATE,MMSTIM:
                                   MMETIM,PTMMDESC,PTMMOPID,PTMMTMNO,PTMMEDAT:
                                   PTMMRPST,PTMMRPET,PTMMVAID,PTMMAPRA,MMSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DMMADMN,MMADMN
          MOVE      DMMRECN,MMRECN
          MOVE      MMCODE,SMMCODE
          RETURN
.
RDKMMBS1  MOVE      ZERO,OVRCD
          READKS    PATMMBS1;MMCODE,DMMADMN,DMMRECN,MMDATE,MMSTIM:
                             MMETIM,PTMMDESC,PTMMOPID,PTMMTMNO,PTMMEDAT:
                             PTMMRPST,PTMMRPET,PTMMVAID,PTMMAPRA,MMSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DMMADMN,MMADMN
          MOVE      DMMRECN,MMRECN
          MOVE      MMCODE,SMMCODE
          RETURN
.
RDPMMBS1  MOVE      ZERO,OVRCD
          READKP    PATMMBS1;MMCODE,DMMADMN,DMMRECN,MMDATE,MMSTIM:
                             MMETIM,PTMMDESC,PTMMOPID,PTMMTMNO,PTMMEDAT:
                             PTMMRPST,PTMMRPET,PTMMVAID,PTMMAPRA,MMSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DMMADMN,MMADMN
          MOVE      DMMRECN,MMRECN
          MOVE      MMCODE,SMMCODE
          RETURN
.
WRMMBS1   MOVE      MMADMN,DMMADMN
          MOVE      MMRECN,DMMRECN
          RESET     KEY11
          WRITE     PATMMBS1,KEY11;MMCODE,DMMADMN,DMMRECN,MMDATE,MMSTIM:
                                   MMETIM,PTMMDESC,PTMMOPID,PTMMTMNO,PTMMEDAT:
                                   PTMMRPST,PTMMRPET,PTMMVAID,PTMMAPRA,MMSPARE
          RETURN
.
UPMMBS1   MOVE      MMADMN,DMMADMN
          MOVE      MMRECN,DMMRECN
          UPDATE    PATMMBS1;MMCODE,DMMADMN,DMMRECN,MMDATE,MMSTIM:
                             MMETIM,PTMMDESC,PTMMOPID,PTMMTMNO,PTMMEDAT:
                             PTMMRPST,PTMMRPET,PTMMVAID,PTMMAPRA,MMSPARE
          RETURN
.
DEMMBS1   RESET     KEY11
          DELETE    PATMMBS1,KEY11
          RETURN
.
.
RDSMMBS2  RESET     KEY20
          READ      PATMMBS2,KEY20;;
          RETURN
.
RDMMBS2   MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      PATMMBS2,KEY20;MMCODE,DMMADMN,DMMRECN,MMDATE,MMSTIM:
                                   MMETIM,PTMMDESC,PTMMOPID,PTMMTMNO,PTMMEDAT:
                                   PTMMRPST,PTMMRPET,PTMMVAID,PTMMAPRA,MMSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DMMADMN,MMADMN
          MOVE      DMMRECN,MMRECN
          RETURN
.
RDKMMBS2  MOVE      ZERO,OVRCD
          READKS    PATMMBS2;MMCODE,DMMADMN,DMMRECN,MMDATE,MMSTIM:
                             MMETIM,PTMMDESC,PTMMOPID,PTMMTMNO,PTMMEDAT:
                             PTMMRPST,PTMMRPET,PTMMVAID,PTMMAPRA,MMSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DMMADMN,MMADMN
          MOVE      DMMRECN,MMRECN
          RETURN
.
RDPMMBS2  MOVE      ZERO,OVRCD
          READKP    PATMMBS2;MMCODE,DMMADMN,DMMRECN,MMDATE,MMSTIM:
                             MMETIM,PTMMDESC,PTMMOPID,PTMMTMNO,PTMMEDAT:
                             PTMMRPST,PTMMRPET,PTMMVAID,PTMMAPRA,MMSPARE
          GOTO      OVERCOND IF OVER
          MOVE      DMMADMN,MMADMN
          MOVE      DMMRECN,MMRECN
          RETURN
+
.

