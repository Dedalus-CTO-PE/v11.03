. ************************************************************************
. *      Include Name : LEGDADFD.INC                                     *
. *                                                                      *
. *      Function     : File definition include for Patient              *
. *                     Admission/Discharge Transfer Destination Details *
. *                     Legacy Visits                                    *
. *      File Type    : SQL                                              *
. *                                                                      *
. *      File Name    : legdadaf.dat                                     *
. *                                                                      *
. *      Keys         : KEY8                                             *
. *                                                                      *
. *      Modifications:                                                  *
. *      V9.03.00  Ebon Clements       CAR 49209                         *
. *                Ported from 6.11                                      *
. ************************************************************************
.
LEGDADA1  IFILE     SQL, FIXED=30, KEY="U1-8"
.
. -------- Date File --------
.
. NAME    TYPE      LENGTH PHYSICAL START LOC. DESCRIPTION
. ----    ----      ------ -------- ---------- -----------
DLPTDAAD  DIM       8      8        1          Admission Number
LPTDAADT  DIM       5      5        9          Admission Transfer Source
LPTDADCT  DIM       5      5        14         Discharge Transfer Source
LPTDASPA  DIM       11     11       19         Spare variable
.
.End of record                     30
.
.**************************************************************************
.
. Redefine form field for keys
. ----------------------------
.
. NAME    TYPE   LENGTH START LOC. DESCRIPTION
. ----    ----   ------ ---------- -----------
LPTDAADM  FORM   8      1          Admission number
.

