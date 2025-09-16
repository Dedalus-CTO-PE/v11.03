.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIDOCFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Medical Practice  *
.  *                        Doctor File for Private Practice System       *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   pridoctf.dat                                  *
.  *  Audit File        :   priauddo.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 18, KEY 19                                *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *  V10.13.01   27/07/2018  Richa Phogat  TSK 0848506                   *
.  *              Updated field length for PRDODOCT from 6 to 10          *  
.  *              17/08/2005  J.Tan    CAR 71442                          *
.  *              Added index 3 by provider number                        *
.  *              16/03/2005  J.Tan    CAR 56706                          *
.  *              Added Service Provider to spare variable                *
.  *              03/07/2000  J Habasque                                  *
.  *              Changed audit length from 58 to 95                      *
.  *              05/05/2000  J.Tan                                       *
.  *              Added Creditor code, ABN number & GST Register          *
.  *              15/10/1999  Steve Armstrong                             * 
.  *              Change audit file length from 59 to 58                  *
.  ************************************************************************
.Audit File Definition
.---------------------
PRIAUDDO   IFILE SQL, FIXED=99, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRDOAUDD  DIM       8      8        1     Date of Change
PRDOAUDT  DIM       8      8        9     Time of Change
PRDOAUDP  DIM       2      2        17    Port Doing Change
PRDOAUDR  DIM       1      1        19    Record Type
.                                              A = Added
.                                              B = Before image
.                                              C = After Image
.                                              D = Delete
PRDOAUDS  FORM      1      2        20    Record Status
.                                              1 = Not Printed
.                                              2 = Printed
PRDOAUDO  DIM       4      4        22    Operator of Change
.
.Data File Definition
.--------------------
PRIDOCT1   IFILE SQL, FIXED=74, KEY="U1-6,7-16,17-19,20-22"
PRIDOCT2   IFILE SQL, FIXED=74, KEY="U7-16,1-6,17-19,20-22"
PRIDOCT3   IFILE SQL, FIXED=74, KEY="U51-60,7-16,1-6,17-19,20-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRDOPRAC  DIM       6      6        1     Medical Practice Code 
PRDODOCT  DIM       10     10       7     Associated Doctor Code
PRDOCLAM  DIM       3      3        17    Claim Code (Category CL)
PRDOPIND  DIM       3      3        20    Patient Indicator (Category GI)
.
PRDOCOMM  FORM      3.2    4        23    Associated Doctor % Commission
PRDOFEEP  FORM      3.2    4        27    % of Schedule Fee Charged
PRDOSTAT  FORM      1      2        31    Associated Doctor Status
.                                              1 = Inactive
.                                              0 = Active
.
PRDOCRCD  DIM       5      5        33    Creditor Code
PRDOABNN  DIM       11     11       38    ABN Number
PRDOGSTR  FORM      1      2        49    GST Register (0=No, 1=Yes)
PRDOPROV  DIM       10     10       51    Service Provider
PRDOSPAR  DIM       13     13       61    Spare Variable
.
.End of Record                      74
.
