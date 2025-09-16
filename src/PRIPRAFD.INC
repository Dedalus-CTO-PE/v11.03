.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIPRAFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Medical Practice Code                         *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   pripracf.dat                                  *
.  *  Audit File        :   priaudpr.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 6, KEY 19                                 *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *  V10.13.01             25/07/2018  Tracey Nguyen     TSK 0848506     *
.  *                        Extended PRPRPDOC from 6 to 10 chars          *
.  *  V10.00.01             09/04/2010   J.Tan            CAR 216863      *
.  *                        Added Fees Inv.Reset date (using spare var.)  *
.  *  V9.12.01              07/09/2009   Davin            CAR 205466      *
.  *                        Added register (prprregi)                     *
.  *  V9.04.03              24/03/2005   Ebon Clements    CAR 56706       *
.  *                        Changed desciption of PRPRRANG                *
.  *  V9.04.02              16/03/2005   J.Tan            CAR 56706       *
.  *                        Added MCI and Payee name                      *
.  *  V9.04.01              29/11/2004   Ebon Clements    CAR 55406       *
.  *                        Added PRPRRANG                                *
.  *  V9.03.01              23/04/2004   Ebon Clements    CAR 49165       *
.  *                        Added index 2                                 *
.  *                        15/10/1999   Steve Armstrong                  *
.  *                        Chenged length of audit file from 168 to 167  *
.  *                                                                      *
.  ************************************************************************
.Audit File Definition
.--------------------
PRIAUDPR   IFILE SQL, FIXED=245, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRPRAUDD  DIM       8      8        1     Date of Change
PRPRAUDT  DIM       8      8        9     Time of Change
PRPRAUDP  DIM       2      2        17    Port Doing Change
PRPRAUDR  DIM       1      1        19    Record Type
.                                              A = Added
.                                              B = Before image
.                                              C = After Image
.                                              D = Delete
PRPRAUDS  FORM      1      2        20    Record Status
.                                              1 = Not Printed
.                                              2 = Printed
PRPRAUDO  DIM       4      4        22    Operator of Change
.
.
.Data File Definition
.--------------------
PRIPRAC1   IFILE SQL, FIXED=220, KEY="U1-6"                                  
PRIPRAC2   IFILE SQL, FIXED=220, KEY="U7-36,1-6"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRPRCODE  DIM       6      6        1     Medical Practice Code 
.
PRPRDESC  DIM       30     30       7     M.P. Description
PRPRPDOC  DIM       10     10       37    M.P. Primary Doctor
PRPRADD1  DIM       25     25       47    M.P. Address Line 1
PRPRADD2  DIM       25     25       72    M.P. Address Line 2
PRPRADD3  DIM       25     25       97    M.P. Address Line 3
PRPRPOST  DIM       4      4        122   M.P. Postcode
PRPRTELP  DIM       12     12       126   M.P. Telephone
PRPRSTAT  FORM      1      2        138   M.P. Status
.                                             1 = Inactive
.                                             0 = Active
PRPRTIME  FORM      1      2        140   Service time on invoice
.                                             0 = No
.                                             1 = Yes
.
PRPRRANG  DIM       3      3        142   Spare
PRPRPMCI  DIM       8      8        145   MCI (3 alpha and 5 numeric)
PRPRPYEE  DIM       10     10       153   Payee Name Provider Number         
PRPRREGI  DIM       3      3        163   Register
PRPRRDAT  DIM       8      8        166   Fees Invoiced Reset Date (ccyymmdd)
PRPRSPAR  DIM       46     46       174   Spare Variable                     
.
.End of Record                      220  
.
