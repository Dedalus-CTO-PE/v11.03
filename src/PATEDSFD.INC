. **********************************************************************
. *                                                                    *
. *   Include Name : PATEDSFD.INC                                      *
. *                                                                    *
. *   Function     : File Definition include for                       *
. *                  PATIENT EDI SUMMARY TABLE                         *
. *                                                                    *
. *   File Type    : SQL                                               *
. *                                                                    *
. *   File Name    : patedsaf.dat                                      *
. *                                                                    *
. *   Keys         : KEY16, KEY24, KEY32                               *
. *                                                                    *
. *   Modifications:                                                   *
. *   V9.03.01 15/03/2004 Steve Armstrong CAR 48280                    *
. *                       Ported from 6.11                             *
. *   V6.11.02 24/02/2004 Steve Armstrong CAR 48453                    *
. *                       Changes to status flag (PTESFLAG) values.    *
. *   V6.11.01 19/12/2003 Steve Armstrong CAR 45665                    *
. *                       Added PTESCCFL.                              *
. *   V6.11.01 16/12/2003 Steve Armstrong CAR 45665                    *
. *                       Added PTESPCSN & PTESCSNO.                   *
. *   V6.10.03 17/10/2002 Steve Armstrong  SRF20135 HOSClaims Phase#1  *
. *                       Added PTESPBAT and PTESNBAT.                 *
. *                       Also removed PTESRSUB.                       *
. *   V6.10.02 10/10/2002 Steve Armstrong  SRF20135 HOSClaims Phase#1  *
. *                       Added PTESRSUB and PTESURNO.                 *
. *                       Added PATEDSA2, PATEDSA3, PATEDSA4, PATEDSA5 *
. *   V6.10.01 02/10/2002 Tracey Nguyen    SRF20135 HOSClaims Phase#1  *
. *                       Created FD                                   *
. *                                                                    *
. **********************************************************************
.
PATEDSA1   IFILE SQL, FIXED=80, KEY="U1-2,3-8,9-16,17-24,25-32"
PATEDSA2   IFILE SQL, FIXED=80, KEY="U17-24,25-32"
PATEDSA3   IFILE SQL, FIXED=80, KEY="U25-32,9-16,17-24"
PATEDSA4   IFILE SQL, FIXED=80, KEY="U9-16,17-24,25-32"
PATEDSA5   IFILE SQL, FIXED=80, KEY="U33-40,9-16,17-24,25-32"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   ----------------------
DPTESFLG   DIM       2           2         1      EDI Status Flag
.                                                 0 = Not Sent
.                                                 1 = Error (in processing only)
.                                                 2 = Extracted
.                                                 3 = Sent
.                                                 4 = Acknowledged
.                                                 5 = Nack
PTESHFND   DIM       6           6         3      Health Fund Code
PTESADMN   DIM       8           8         9      Admission Number 
PTESINVN   DIM       8           8        17      Invoice Number 
PTESBATN   DIM       8           8        25      Batch Number
PTESURNO   DIM       8           8        33      U/R Number
PTESPBAT   DIM       8           8        41      Previous Batch Number
.                                                 (Resubmission from)
PTESNBAT   DIM       8           8        49      Next Batch Number
.                                                 (Resubmission to)
PTESPCSN   DIM       5           5        57      Previous Claim Seq. No.
.                                                 (for Resubmissions)
PTESCSNO   DIM       5           5        62      Claim Sequential No.
.                                                 (for current batch)
PTESCCFL   DIM       1           1        67      Contiguous Claim Flag
.                                                   (EDI field 40005)
.                                                   N = Not in series
.                                                   F = First in series
.                                                   L = Last in series
.                                                   M = Middle in series
PTESSPAR   DIM      12          12        68      Spare Variable
.
.End of Record                            80
.
. Redefine form fields from key
. -----------------------------
. Name    Type   Length  Start Loc.  Description
. ----    ----   ------  ----------  -----------------------------------
PTESFLAG  FORM       2           1   EDI Status Flag
+ 
.
