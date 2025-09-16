. ************************************************************************
. *                                                                      *
. *  Include Name : PATEBIFD.INC                                         *
. *                                                                      *
. *  Function     : File definition include for the EDI batch invoice    *
. *                 file                                                 *
. *                                                                      *
. *  File Type    : SQL                                                  *
. *                                                                      *
. *  File Name    : patebiaf.dat                                         *
. *                                                                      *
. *  Keys         : KEY8 KEY16                                           *
. *                                                                      *
. *  Modifications:                                                      *
. *  V5.08.00  06/07/2000  Greg Horvat                                   *
. *            Ported from release 6.07                                  *
. *                                                                      *
. ************************************************************************
.
PATEBIA1  IFILE     SQL, FIXED=50, KEY="U1-8,9-16"
PATEBIA2  IFILE     SQL, FIXED=50, KEY="U9-16,1-8"
.
.Name     Type   Length  Physical  Start Loc.  Description
.----     ----   ------  --------  ----------  -----------
PTEIBTHN  DIM       8        8          1      Batch no
PTEIINVN  DIM       8        8          9      Invoice no
PTEISPAR  DIM       33       33        17      Spare variable
.
.End of Record                         50
+
.

