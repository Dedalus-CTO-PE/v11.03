.******************************************************************************
. PCPCRLIO.INC
. ------------
. Filename     : pcpcrlaf
. Description  : Patient Care Plan clinic condition related factors file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY36        : PCPCRLA1
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCCRL1  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      PCPCRLA1,KEY36;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCCRL1  RESET     KEY36
          READ      PCPCRLA1,KEY36;;
          RETURN
.
RDPCCRL1  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      PCPCRLA1,KEY36;PCCRCTYP,PCCRCLIN,PCCRDIAG,PCCRRELT,PCCRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPCCRL1  MOVE      ZERO,OVRCD
          READKS    PCPCRLA1;PCCRCTYP,PCCRCLIN,PCCRDIAG,PCCRRELT,PCCRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPCCRL1  MOVE      ZERO,OVRCD
          READKP    PCPCRLA1;PCCRCTYP,PCCRCLIN,PCCRDIAG,PCCRRELT,PCCRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPCCRL1  RESET     KEY36
          WRITE     PCPCRLA1,KEY36;PCCRCTYP,PCCRCLIN,PCCRDIAG,PCCRRELT,PCCRSPAR
          RETURN
.
UPPCCRL1  
          UPDATE    PCPCRLA1;PCCRCTYP,PCCRCLIN,PCCRDIAG,PCCRRELT,PCCRSPAR
          RETURN
.
DEPCCRL1  RESET     KEY36
          DELETE    PCPCRLA1,KEY36
          RETURN
.******************************************************************************
.
. ------  I/O routines for Audits------
.
ASPCCRL   RESET     KEY19
          READ      PCPAUDCR,KEY19;;
          RETURN
.
AKPCCRL   MOVE      ZERO,OVRCD
          READKS    PCPAUDCR;PCCRAUDD,PCCRAUDT,PCCRAUDP,PCCRAUDR,PCCRAUDS:
                    PCCRAUDO,PCCRCTYP,PCCRCLIN,PCCRDIAG,PCCRRELT,PCCRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AWPCCRL   RESET     KEY19
          WRITE     PCPAUDCR,KEY19;KEY19,PCCRAUDS,PCCRAUDO,PCCRCTYP,PCCRCLIN:
                    PCCRDIAG,PCCRRELT,PCCRSPAR
          RETURN
.
ADPCCRL   RESET     KEY19
          DELETE    PCPAUDCR,KEY19
          RETURN
.******************************************************************************
