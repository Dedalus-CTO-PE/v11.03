.  ************************************************************************ 
.  *                                                                      *
.  *  Include Name      :   PRIWCOFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Workers Compensation Claim                    *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   priwcomf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 16                                        *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRIWCOM1   IFILE SQL, FIXED=256, KEY="U1-8,9-16"
PRIWCOM2   IFILE SQL, FIXED=256, KEY="U9-16,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRWCINVN  DIM       8      8        1     Invoice Number
DPRWCUNQ  DIM       8      8        9     Unique Claim Number
.
PRWCNAME  DIM       30     30       17    Employer Name
PRWCADD1  DIM       25     25       47    Employer Address Line 1
PRWCADD2  DIM       25     25       72    Employer Address Line 2
PRWCADD3  DIM       25     25       97    Employer Address Line 3
PRWCPOST  DIM       4      4        122   Employer Postcode
PRWCTELE  DIM       12     12       126   Employer Telephone
PRWCACCP  FORM      1      2        138   Accepted By Insurance Company
.                                             1 = No
.                                             0 = Yes
PRWCICOD  DIM       6      6        140   Insurance Company Code
PRWCCLMN  DIM       20     20       146   Insurance Claim Number
PRWCTIME  DIM       5      5        166   Accident time
PRWCCOM1  DIM       40     40       171   Comments Line 1
PRWCCOM2  DIM       40     40       211   Comments Line 2
.
PRWCSPAR  DIM       5      5        251   Spare Variable
.
.End of Record                      256 
.  
.
.  Redefine form fields from key
.  -----------------------------
.
PRWCUNIQ  FORM      8
