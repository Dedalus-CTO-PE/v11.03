. V5.07.001 07/08/1998 Glenn  507 Changes
. *****************************************************************************
. *                                                                           *
. *       Include Name : PATASFFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      Admission Special Funding Arrangement Codes          *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : patasfaf.dat                                         *
. *                                                                           *
. *       Mods         :                                                      *
. *                                                                           *
. *       V5.07.01  30/06/1999  Greg Horvat      99/00 PRS2 Mods              *
. *                 Added contract variables                                  *
. *                                                                           *
. *****************************************************************************
.
PATASFA1  IFILE SQL, FIXED=39, KEY="U1-8,9-9,10-17,18-25"
.
.Name     Type    Length   Physical   Start Loc.   Description
.----     ----    ------   --------   ----------   -----------
DPTAFADM  DIM       8         8           1        SFA admission number
PTAFTYPE  DIM       1         1           9        SFA type
.                                                    A - admission
.                                                    L - on leave
PTAFDATE  DIM       8         8           10       SFA date(ccyymmdd leave only)
PTAFTIME  DIM       8         8           18       SFA time(leave only)
PTAFCODE  DIM       1         1           26       SFA code
PTAFCTYP  DIM       1         1           27       Contract type
PTAFCROL  DIM       1         1           28       Contract role
PTAFCSID  DIM       5         5           29       Contract/spoke id
PTAFSPAR  DIM       5         5           34       Spare variable
.
.End of Record                            39
.
.Redefine form field from key
.----------------------------
.Name     Type    Length   Start Loc.   Description
.----     ----    ------   ----------   -----------
PTAFADMN  FORM      8          1        SFA admission number
.
.Save variables
.--------------
SPTAFCOD  DIM       1                       * SFA code
SPTAFCTY  DIM       1                       * Contract type
SPTAFCRO  DIM       1                       * Contract role
SPTAFCSI  DIM       5                       * Contract/spoke id
.
.Xtra variables
.--------------
ASFFLG    FORM      1                       * Admin SFA flag
+
.

