.
. PATEXCIO.INC
. ------------
. Filename     : patexcNN
. Description  : File I/O requests for Extraction File C for Management 
.                Analysis Generation
. Variables    : OVRCD    FORM    1
.                KEY12    DIM    12
.
RAPTEXC1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      PATEXTC1,KEY12;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTEXC1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      PATEXTC1,KEY12;;
          RETURN
.
RDPTEXC1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      PATEXTC1,KEY12;DPTXCADM,PTXCTYPE,DPTXCUNQ,PTXCCTYP:
                                   PTXCCODE,PTXCDATE,PTXCOPCO,PTXCMADC:
                                   PTXCMADT,PTXCMWRD,PTXCMBED,PTXCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTXCOPCO,PTXCCOST
          MOVE      DPTXCADM,PTXCADMN
          MOVE      DPTXCUNQ,PTXCUNIQ
          RETURN
.
RKPTEXC1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READKS    PATEXTC1;DPTXCADM,PTXCTYPE,DPTXCUNQ,PTXCCTYP,PTXCCODE:
                             PTXCDATE,PTXCOPCO,PTXCMADC,PTXCMADT,PTXCMWRD:
                             PTXCMBED,PTXCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTXCOPCO,PTXCCOST
          MOVE      DPTXCADM,PTXCADMN
          MOVE      DPTXCUNQ,PTXCUNIQ
          RETURN
.
RPPTEXC1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READKP    PATEXTC1;DPTXCADM,PTXCTYPE,DPTXCUNQ,PTXCCTYP,PTXCCODE:
                             PTXCDATE,PTXCOPCO,PTXCMADC,PTXCMADT,PTXCMWRD:
                             PTXCMBED,PTXCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTXCADM,PTXCADMN
          MOVE      PTXCOPCO,PTXCCOST
          MOVE      DPTXCUNQ,PTXCUNIQ
          RETURN
.
WRPTEXC1  MOVE      ZERO,OVRCD
          MOVE      PTXCCOST,PTXCOPCO
          RESET     KEY12
          WRITE     PATEXTC1,KEY12;KEY12,PTXCCTYP,PTXCCODE,PTXCDATE,PTXCOPCO:
                                   PTXCMADC,PTXCMADT,PTXCMWRD,PTXCMBED:
                                   PTXCSPAR
          RETURN
.
UPPTEXC1  MOVE      PTXCADMN,DPTXCADM
          MOVE      PTXCCOST,PTXCOPCO
          MOVE      PTXCUNIQ,DPTXCUNQ
          UPDATE    PATEXTC1;DPTXCADM,PTXCTYPE,DPTXCUNQ,PTXCCTYP,PTXCCODE:
                             PTXCDATE,PTXCOPCO,PTXCMADC,PTXCMADT,PTXCMWRD:
                             PTXCMBED,PTXCSPAR
          RETURN
.
DEPTEXC1  RESET     KEY12
          DELETE    PATEXTC1,KEY12
          RETURN
.
