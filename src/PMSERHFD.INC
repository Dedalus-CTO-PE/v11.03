. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSERHFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse ERA Payment Header Table              *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmserhaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY61, KEY69                                  *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. *      13/07/2017  Tracey Nguyen     TSK 0831224                       *
. *                  Added PMSERHA3                                      *
. *      31/08/2010  Peter Vela        CAR 229050                        *
. *                  Added PMEHSTAT Status 3 Processing                  *
. *      10/05/2010  Steve Armstrong   CAR 221795                        *
. *                  Removed PMEHPART and used PMEHFTID to replace it    *
. *                  in the indexes.  Also moved Hospital Id to be first *
. *                  field in the file.                                  *
. *      20/11/2008  Peter Vela        CAR 183976                        *
. *                  Ported to 9.11. Added Hospital ID                   *
. *                  Added Hospital ID to all indexes                    * 
. *      20/06/2008  Steve Armstrong   CAR 175860                        *
. *                  Fixed length of PMEHPLID (from 4 to 8) and modified *
. *                  index 3 and 4 accordingly.                          *
. *      06/06/2008  Steve Armstrong   CAR 170301                        *
. *                  Created FD.                                         *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSERHA1   IFILE SQL, FIXED=227, KEY="U1-3,4-27,28-57,58-61"
PMSERHA2   IFILE SQL, FIXED=227, KEY="U1-3,66-73,4-27,28-57,58-61"
PMSERHA3   IFILE SQL, FIXED=227, KEY="U1-3,206-206,66-73,4-27,28-57,58-61"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEHHOSP  DIM       3         3       1   Hospital ID
PMEHFTID  DIM       24        24      4   Fund Transaction ID
PMEHRADV  DIM       30        30     28   Remittance Advice ID
PMEHPNUM  DIM       4         4      58   Part Number
PMEHPTOT  DIM       4         4      62   Part Total
PMEHDATE  DIM       8         8      66   Run Date
PMEHNAME  DIM       40        40     74   Payer Name
PMEHPLID  DIM       8         8     114   Payee Location ID
PMEHBNUM  DIM       9         9     122   Bank Account Number
PMEHBNAM  DIM       30        30    131   Bank Account Name
PMEHBBSB  DIM       6         6     161   Bank BSB Code
PMEHPREF  DIM       30        30    167   Payment Reference
PMEHDAMT  DIM       9         9     197   Deposit Amount
PMEHSTAT  DIM       1         1     206   Status
.                                            0 = Received
.                                            1 = Partial
.                                            2 = Released
.                                            3 = Processing
PMEHSPAR  DIM       20        20    207   Spare Variable
.
.End of Record                      227
+
