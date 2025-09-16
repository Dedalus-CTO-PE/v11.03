. **********************************************************************
. *                                                                    *
. *   Include Name : PATEDTFD.INC   (modelled on PATEDSFD)             *
. *                                                                    *
. *   Function     : File Definition include for                       *
. *                  PATIENT CCPS EDI SUMMARY TABLE                    *
. *                                                                    *
. *   File Type    : SQL                                               *
. *                                                                    *
. *   File Name    : patedtaf.dat                                      *
. *                                                                    *
. *   Keys         : KEY26, KEY16, KEY24, KEY24, KEY32                 *
. *                                                                    *
. *   Modifications:                                                   *
. *       V9.08.01  11/01/2007  Mike Laming  CAR                       *
. *                 Add PTETISYS (System for Invoice)                  *
. *       V9.08.00  22/11/2006  Mike Laming   CAR 103368               *
. *                 CCPS EDI Extract - ported from 9.07                *
. *                                                                    *
. **********************************************************************
.
PATEDTA1   IFILE SQL, FIXED=100, KEY="U1-2,9-16,17-24,25-32"    * Status,Admiss
PATEDTA2   IFILE SQL, FIXED=100, KEY="U17-24,25-32"             * Invoice,Batch
PATEDTA3   IFILE SQL, FIXED=100, KEY="U25-32,9-16,17-24"        * Batch,Admiss
PATEDTA4   IFILE SQL, FIXED=100, KEY="U9-16,17-24,25-32"        * Admiss,Invoice
PATEDTA5   IFILE SQL, FIXED=100, KEY="U33-40,9-16,17-24,25-32"  * U/R,Admiss
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   ----------------------
DPTETFLG   DIM       2           2         1      EDI Status Flag
.                                                 0 = Not Sent
.                                                 1 = Error (in processing only)
.                                                 2 = Extracted
.                                                 3 = Sent
.                                                 4 = Acknowledged
.                                                 5 = Nack
PTETPAYC   DIM       6           6         3      Health Fund Code - not used?
PTETADMN   DIM       8           8         9      Admission Number 
PTETINVN   DIM       8           8        17      Invoice Number 
PTETBATN   DIM       8           8        25      Batch Number
PTETURNO   DIM       8           8        33      U/R Number
PTETPBAT   DIM       8           8        41      Previous Batch Number
.                                                          (Resubmission from)
PTETNBAT   DIM       8           8        49      Next Batch Number
.                                                          (Resubmission to)
PTETINDT   DIM       8           8        57      Invoice Date
PTETINTY   DIM       1           1        65      Invoice Type 
.                                                 0 = Medical only
.                                                 1 = Claim
PTETEXCL   DIM       1           1        66      Exclude Flag
.                                                 0 = not excluded
.                                                 1 = Excluded
PTETCCST   DIM       2           2        67      CCPS Status Flag
.                                                 0 = Not Sent
.                                                 1 = Extracted
.                                                 2 = Sent (First Submission)
.                                                 3 = Approval Pending
.                                                 4 = Approved
.                                                 5 = Amendment
.                                                 8 = Cancel/Resubmit 
.                                                 9 = Cancelled
PTETRCAL   DIM       1           1        69      Reason for Cancellation
.                                                 H = Hospital Error
.                                                 P = Patient Error
PTETINAM   DIM       15          15       70      Invoice Amount
PTETISYS   DIM       1           1        85      System for Invoice
PTETSPAR   DIM       14          14       86      Spare Variable
.
.End of Record                            100
.
. Redefine form fields from key
. -----------------------------
. Name    Type   Length  Start Loc.  Description
. ----    ----   ------  ----------  -----------------------------------
PTETFLAG  FORM       2           1   EDI Status Flag
+ 
.
