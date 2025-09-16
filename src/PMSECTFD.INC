. **********************************************************************
. *                                                                    *
. *   Include Name : PMSECTFD.INC                                      *
. *                                                                    *
. *   Function     : File Definition include for Eclipse Claim         *
. *                  Transaction Table                                 *
. *                                                                    *
. *   File Type    : SQL                                               *
. *                                                                    *
. *   File Name    : pmsectaf.dat                                      *
. *                                                                    *
. *   Keys         : KEY16, KEY24, KEY35, KEY40                        *
. *                                                                    *
. *   Modifications:                                                   *
. *  V11.02.01 02/02/2022 Sunny              TSK 0916091               *
. *                       Added PMECSTAT='4' - transferred to webihcfd *
. *  V10.11.01 01/08/2017 Steve Armstrong    TSK 0837619               *
. *                       Added PMECPCTI.                              *
. *   V9.11.01 20/11/2008 Peter Vela         CAR 183976                *
. *                       Ported to 9.11. Added Hospital ID            *
. *                       Added Hospital ID to Index 1 and 5           *
. *   V6.16.00 17/03/2008 Steve Armstrong    CAR 160463                *
. *                       Copied from PATEDSFD and modified for Eclipse*
. *                                                                    *
. **********************************************************************
.
PMSECTA1  IFILE SQL, FIXED=200, KEY="U133-135,1-2,3-8,9-16,17-24,25-32"
PMSECTA2  IFILE SQL, FIXED=200, KEY="U17-24,25-32"
PMSECTA3  IFILE SQL, FIXED=200, KEY="U25-32,9-16,17-24"
PMSECTA4  IFILE SQL, FIXED=200, KEY="U9-16,17-24,25-32"
PMSECTA5  IFILE SQL, FIXED=200, KEY="U133-135,33-40,9-16,17-24,25-32"
PMSECTA6  IFILE SQL, FIXED=200, KEY="U58-81,17-24,25-32"
.
. NAME    TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----    ----   ------   --------  ----------   ----------------------
DPMECFLG  DIM       2           2         1      Eclipse Status Flag
.                                                 ibaPAS Processing
.                                                    0 = Not Sent
.                                                    1 = Error (PAS validation)
.                                                    2 = Extracted   
.                                                 Eclipse - Processing
.                                                    3 = Error (SA validation)
.                                                    4 = Received
.                                                    5 = Health Fund Unverified
.                                                    6 = Health Fund Verified
.                                                    7 = Health Fund Assessing
.                                                 Eclipse - Interim Report
.                                                    8 = Ready
.                                                    9 = Reported
.                                                 Eclipse - Ready
.                                                   10 = Health Fund Rejected
.                                                   11 = Assessing Complete
.                                                 Eclipse - Reported
.                                                   12 = HF Rejected - Reported
.                                                   13 = Complete - Reported
.                                                 Eclipse - Remittance
.                                                   14 = Reported
.                                                   15 = Closed
PMECHFND  DIM       6           6         3      Health Fund Code
PMECADMN  DIM       8           8         9      Admission Number 
PMECINVN  DIM       8           8        17      Invoice Number 
PMECBATN  DIM       8           8        25      Batch Number
PMECURNO  DIM       8           8        33      U/R Number
PMECPBAT  DIM       8           8        41      Previous Batch Number
.                                                  (Resubmission from)
PMECNBAT  DIM       8           8        49      Next Batch Number
.                                                  (Resubmission to)
PMECCCFL  DIM       1           1        57      Contiguous Claim Flag
.                                                   (EDI field 40005)
.                                                   N = Not in series
.                                                   F = First in series
.                                                   L = Last in series
.                                                   M = Middle in series
PMECTRID  DIM       24          24       58      Claim Transaction Id
DPMECEET  DIM       1           1        82      Eclipse extract type
.                                                   0 - Health Fund
.                                                   1 - Claim Code (DVA)
PMECAMTC  FORM      12.2        8        83      Amount Claimed
PMECAMTP  FORM      12.2        8        91      Amount Paid by Health Fund
PMECPDAT  DIM       8           8        99      Payment Date (ccyymmdd)
PMECSTAT  DIM       2           2       107      Closed Status
.                                                  Spaces - not closed
.                                                 " 0" = Closed
.                                                 " 1" = Closed with Write Off
.                                                 " 2" = Closed with Payment
.                                                 " 3" = Closed with WO & Pymt
.                                                 " 4" = Transferred to webihcfd
PMECFTID  DIM       24          24      109      Fund Report Transaction Id
PMECHOSP  DIM       3           3       133      Hospital ID
PMECPCTI  DIM       24          24      136      Previous Claim Transaction ID
.                                                  (Eclipse)
PMECSPAR  DIM       40          40      160      Spare Variable
.
.End of Record                          200
.
. Redefine FORM fields from key
. -----------------------------
PMECFLAG  FORM      2
PMECEETP  FORM      1
+ 
