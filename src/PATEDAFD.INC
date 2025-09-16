. ************************************************************************
. *                                                                      *
. *  Include Name : PATEDAFD.INC                                         *
. *                                                                      *
. *  Function     : File definition include for the EDI audit file       *
. *                                                                      *
. *  File Type    : SQL                                                  *
. *                                                                      *
. *  File Name    : patedaaf.dat                                         *
. *                                                                      *
. *  Keys         : KEY8                                                 *
. *                                                                      *
. *  Modifications:                                                      *
. *                                                                      *
. *  Programmer Note: The variables in this FD have the same 4-character *
. *                   prefix as those in PATECDFD, so if you are adding  *
. *                   new variables, then make sure they don't clash     *
. *                   with those in PATECDFD.                            *
. *                                                                      *
. *  V5.08.00  06/07/2000  Greg Horvat                                   *
. *            Ported from release 6.07                                  *
. *  V6.06.01  17/11/1999  Andrew Peel                                   *
. *            Added PTEDEETP - EDI extract type                         *
. *                                                                      *
. ************************************************************************
.
PATEDAA1  IFILE     SQL, FIXED=80, KEY="D1-8"
.
.Name     Type   Length  Physical  Start Loc.  Description
.----     ----   ------  --------  ----------  -----------
PTEDINVN  DIM       8        8          1      Invoice no
PTEDDECM  DIM       8        8          9      Date EDI change made (ccyymmdd)
PTEDTECM  DIM       8        8         17      Time EDI change made (hh:mm:ss)
PTEDOPRR  DIM       4        4         25      Operator
DPTEDEDS  DIM       1        1         29      EDI sent flag
PTEDBTHN  DIM       8        8         30      Batch no
DPTEDEET  DIM       1        1         38      EDI extract type
.                                                0 - Health fund
.                                                1 - TAC
PTEDSPR1  DIM       41       41        39      Spare variable
.
.End of Record                         80
.
. Redefine form fields from key
. -----------------------------
. Name    Type   Length  Start Loc.  Description
. ----    ----   ------  ----------  -----------
PTEDEDSF  FORM      1        29      EDI sent flag
PTEDEETP  FORM      1        38      EDI extract type
+
.

