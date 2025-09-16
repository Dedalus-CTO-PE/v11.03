. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSSQUFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Enquiry Security Table                           *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  Audit Name      :   fmsaudsq.dat                                     *
. *  File Name       :   fmssquaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY21                                            *
. *                                                                       *
. *  Modifications   :   16.11.90  Neeriem Dye - Added Sequence No.       *
. *************************************************************************
.
.Audit File Definition
.---------------------
.
FMSAUDSQ   IFILE SQL, FIXED=50, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSQAUDD   DIM      8      8        1     Date of Change
FMSQAUDT   DIM      8      8        9     Time of Change
FMSQAUDP   DIM      2      2        17    Port Doing Change
FMSQAUDR   DIM      1      1        19    Record Type    
.                                            A = Added Record
.                                            B = Before Change Record
.                                            C = After Change Record
.                                            D = Deleted Record
FMSQAUDS   FORM     1      2        20    Record Status
.                                            1 = Not Printed
.                                            2 = Printed
FMSQAUDO   DIM      4      4        22    Operator ID
.
.Data File Definition
.---------------------
FMSSQUA1  IFILE     SQL, FIXED=29, KEY="U1-4,5-6,19-21,7-18"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSQSEC   DIM       4      4        1     Security Code
FMSQLEDG  DIM       2      2        5     Ledger
FMSQACCT  DIM       12     12       7     Account
FMSQSEQ   DIM       3      3        19    Sequence Number
FMSQSPAR  DIM       7      7        22    Spare
.
.End of Record                      29
.
