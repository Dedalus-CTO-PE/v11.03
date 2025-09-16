.****************************************************************************
.*                         OPLBVARS.INC                                     *
.*            Outpatient labels variables                                   *
.*  Created: 19/09/1995  Steve Armstrong      SRF 611094                    *
.*  NB. THis include was created for common variables used by OUT66 and     *
.*      POE32 for printing labels                                           *
.****************************************************************************
.
ADLABEL   FORM      2                       * for OPLABELS
.
CDEFPRT1  DIM       3                       * for OPLABELS
.
DESCASEN  DIM       1
DIM2A     DIM       2                       * for OPLABELS
DIM4      DIM       4
DIM17     DIM       17
DDAY      DIM       9                       * holds the required day
DMONTH    DIM       9
DJAN      INIT      "January  "
DFEB      INIT      "February "
DMAR      INIT      "March    "
DAPR      INIT      "April    "
DMAY      INIT      "May      "
DJUN      INIT      "June     "
DJUL      INIT      "July     "
DAUG      INIT      "August   "
DSEP      INIT      "September"
DOCT      INIT      "October  "
DNOV      INIT      "November "
DDEC      INIT      "December "
.
ENDFLG    FORM      1
.
LABSIZE   FORM      1
LABTYPE   FORM      2
LABPAGE   FORM      1                       * for OPLABELS
LABPRNT   FORM      3                       * for OPLABELS
.
MAMMFLAG  FORM      1
.
NOLABEL   FORM      3                       * for OPLABELS
.
VSESS     DIM       25                      * for OPLABELS
VSLOT     DIM       3                       * for OPLABELS
VSTIM     DIM       5                       * for OPLABELS
.
WDAY      FORM      3                       * for OPLABELS
+
