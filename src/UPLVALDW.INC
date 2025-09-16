.------------------------------------------------------------------------------
. Uploading data validation working variables for UPLVALDS.PBL                 
.------------------------------------------------------------------------------
. Modifications
.------------------------------------------------------------------------------
. V11.03.00  23/10/2023  Thanh T        TSK 0928468 
.            Initial Version.
.------------------------------------------------------------------------------
.
VINFIELD  DIM       100
VINFIELF  DIM       30
VINTLEN   FORM      3
VDECLEN   FORM      2
VNEGALLW  FORM      1
VTOTLEN   FORM      2
.
VFLDNAME  DIM       40
VFLDNAM1  DIM       40
VERRFLAG  FORM      1
VERRDESC  DIM       60
VERRMSG   DIM       70
VERRMSG2  DIM       70
.
TEMPDATE  DIM       8
TEMPTIME  DIM       8
DIM2C     DIM       2
DIM2Y     DIM       2
DIM2M     DIM       2
DIM2D     DIM       2
DIMHH     DIM       2
DIMMM     DIM       2
DIMSS     DIM       2
DIMSEP1   DIM       1
DIMSEP2   DIM       1
.
WORKFLD   DIM       30
WORKFLDI  DIM       30
WORKFLDD  DIM       30
.
CINVALID  INIT      "Invalid"
CCMAXLEN  INIT      "Total Char Length > Max Length Allowed"
CTMAXLEN  INIT      "Total Length > Max Length Allowed"
CNOTNUM   INIT      "Not Numeric"
.
HYPHEN    INIT      "-"
