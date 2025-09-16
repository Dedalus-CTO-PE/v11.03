. ******************************************************************************
. * Include Name  : PATSCFIO.INC                                               *
. *                                                                            *
. * Function      : I/O Include for the                                        *
. *                 Singapore Bed Fee Table                                    *
. *                                                                            *
. * File Type     : SQL                                                        *
. *                                                                            *
. * File Name     : patscfaf.dat                                               *
. *                                                                            *
. * Keys          : KEY 6                                                      *
. *                                                                            *
. * Modifications : V5.01.00 07.12.93 Paul Howells                             *
. *                          New I/O Created for Mt Alvernia                   *
. *                                                                            *
. ******************************************************************************
.
.
RSPTSCF1  RESET     KEY6
          READ      PATSCFA1,KEY6;;
          RETURN
.
RAPTSCF1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATSCFA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTSCF1  RESET     KEY6
          MOVE      ZERO,OVRCD
          READ      PATSCFA1,KEY6;PTSCPTYP,PTSCBTYP,PTSCDESC,PTSCDART,PTSCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTSCDART,PTSCRATE
          RETURN
.
RKPTSCF1  MOVE      ZERO,OVRCD
          READKS    PATSCFA1;PTSCPTYP,PTSCBTYP,PTSCDESC,PTSCDART,PTSCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTSCDART,PTSCRATE
          RETURN
.
RPPTSCF1  MOVE      ZERO,OVRCD
          READKP    PATSCFA1;PTSCPTYP,PTSCBTYP,PTSCDESC,PTSCDART,PTSCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      PTSCDART,PTSCRATE
          RETURN
.
UPPTSCF1  
          MOVE      PTSCRATE,PTSCDART
          UPDATE    PATSCFA1;PTSCPTYP,PTSCBTYP,PTSCDESC,PTSCDART,PTSCSPAR
          RETURN
.
WRPTSCF1  RESET     KEY6
          MOVE      PTSCRATE,PTSCDART
          WRITE     PATSCFA1,KEY6;PTSCPTYP,PTSCBTYP,PTSCDESC,PTSCDART,PTSCSPAR
          RETURN
.
DEPTSCF1  RESET     KEY6
          DELETE    PATSCFA1,KEY6
          RETURN
.
