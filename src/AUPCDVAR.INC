+
.******************************************************************************
.*                                                                            *
.* Include Name     : AUPCDVAR.INC                                            *
.*                                                                            *
.* Description      : Variables required by AUTOPCOD.PBL                      *
.*                                                                            *
.* Modifications    :                                                         *
.*       V10.04.01  17/06/2014  Steve Armstrong  CAR 301693                   *
.*                  Added FNAMPOST                                            *
.******************************************************************************
.*        V5.08.01  27/04/2001  Greg Horvat                                   *
.*                  Added IBASTATE & removed SAVSKYLN & SAVSUBRB              *
.******************************************************************************
FNAMPOST  DIM       8                       * Temp file name
IBAADLN2  DIM       45                      * 2nd address line
IBAADLN3  DIM       45                      * 3rd address line
IBAPCOD   DIM       4                       * Postcode
IBASTATE  DIM       3                       * State
SUBKYLIN  FORM      1                       * Suburb keyin line (2 or 3)
+
.

