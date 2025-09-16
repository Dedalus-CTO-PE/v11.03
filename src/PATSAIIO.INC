. ******************************************************************************
. *                                                                            *
. *       Include Name   :    PATIOSAI.INC                                     *
. *                                                                            *
. *       Function       :    File definition include for South Australian     *
. *                           Extract Item file                                *
. *                                                                            *
. *       File Type      :    SQL                                              *
. *                                                                            *
. *       File Name      :    patsaiaf.dat                                     *
. *                                                                            *
. *       Keys           :    KEY3                                             *
. *                                                                            *
. *       Modifications  :    V9.08.00  10.01.2007  Janet George               *
. *                           Ported from V6 to V9                             *
. *                                                                            *
. ******************************************************************************
.
RSPASAI1  RESET     KEY3
          READ      PATSAIA1,KEY3;;
          RETURN
.
RAPASAI1  RESET     KEY3
          MOVE      ZERO,OVRCD
          READ      PATSAIA1,KEY3;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPASAI1  RESET     KEY3
          MOVE      ZERO,OVRCD
          READ      PATSAIA1,KEY3;PTSAINO,PTIBANO,PTSADESC,PTSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPASAI1  MOVE      ZERO,OVRCD
          READKS    PATSAIA1;PTSAINO,PTIBANO,PTSADESC,PTSASPAR
          GOTO      OVERCOND IF OVER          
          RETURN
.
RPPASAI1  MOVE      ZERO,OVRCD
          READKP    PATSAIA1;PTSAINO,PTIBANO,PTSADESC,PTSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPASAI1  UPDATE    PATSAIA1;PTSAINO,PTIBANO,PTSADESC,PTSASPAR
          RETURN
.
WRPASAI1  RESET     KEY3
          WRITE     PATSAIA1,KEY3;PTSAINO,PTIBANO,PTSADESC,PTSASPAR
          RETURN
.
DEPASAI1  RESET     KEY3
          DELETE    PATSAIA1,KEY3
          RETURN
.
RSPASAI2  RESET     KEY3
          READ      PATSAIA2,KEY3;;
          RETURN
.
RAPASAI2  RESET     KEY3
          MOVE      ZERO,OVRCD
          READ      PATSAIA2,KEY3;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPASAI2  RESET     KEY3
          MOVE      ZERO,OVRCD
          READ      PATSAIA2,KEY3;PTSAINO,PTIBANO,PTSADESC,PTSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPASAI2  MOVE      ZERO,OVRCD
          READKS    PATSAIA2;PTSAINO,PTIBANO,PTSADESC,PTSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPASAI2  MOVE      ZERO,OVRCD
          READKP    PATSAIA2;PTSAINO,PTIBANO,PTSADESC,PTSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPASAI2  UPDATE    PATSAIA2;PTSAINO,PTIBANO,PTSADESC,PTSASPAR
          RETURN
.
WRPASAI2  RESET     KEY3
          WRITE     PATSAIA2,KEY3;PTSAINO,PTIBANO,PTSADESC,PTSASPAR
          RETURN
.
DEPASAI2  RESET     KEY3
          DELETE    PATSAIA2,KEY3
          RETURN
+
.

