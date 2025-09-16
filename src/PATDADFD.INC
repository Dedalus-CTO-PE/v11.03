. ************************************************************************
. *      Include Name : PATDADFD.INC                                     *
. *                                                                      *
. *      Function     : File definition include for Patient              *
. *                     Transfer Destination                             *
. *                                                                      *
. *      File Type    : SQL                                              *
. *                                                                      *
. *      File Name    : patdadaf.dat                                     *
. *                                                                      *
. *      Keys         : KEY8                                             *
. *                                                                      *
. *      Programmer   : Glen Hobby 15/05/90                              *
. *                                                                      *
. *      Modifications: V5.01.00 21/06/90 Glen Hobby                     *
. *                              Upgrade from V5.00 to V5.01             *
. *                                                                      *
. ************************************************************************
.
PATDADA1  IFILE     SQL, FIXED=30, KEY="U1-8"
.
. -------- Date File --------
.
. NAME    TYPE      LENGTH PHYSICAL START LOC. DESCRIPTION
. ----    ----      ------ -------- ---------- -----------
DPTDAADM  DIM       8      8        1          Admission Number
PTDAADTS  DIM       5      5        9          Admission Transfer Source
PTDADCTS  DIM       5      5        14         Discharge Transfer Source
PTDASPAR  DIM       11     11       19         Spare variable
.
.End of record                      30
.
. Redefine form field for keys
. ----------------------------
.
. NAME    TYPE   LENGTH START LOC. DESCRIPTION
. ----    ----   ------ ---------- -----------
PTDAADMN  FORM   8      1          Admission number
.

