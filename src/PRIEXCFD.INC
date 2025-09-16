. V5.07.001 07/08/1998 Glenn  507 Changes
.  ************************************************************************
.  *  Include Name      :   PRIEXCFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Exception Charges                             *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   priexcaf.dat                                  * 
.  *  Audit File        :   priaudex.dat                                  *
.  *                                                                      * 
.  *  Keys              :   KEY 19, KEY 25                                *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                        15/10/1999  Steve Armstrong                   *
.  *                        Changed PRIAUDEX length from 83 to 82         *
.  ************************************************************************
.Audit File Definition
.---------------------
PRIAUDEX   IFILE SQL, FIXED=82, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PREXAUDD  DIM       8      8        1     Date of Change
PREXAUDT  DIM       8      8        9     Time of Change
PREXAUDP  DIM       2      2        17    Port Doing Change
PREXAUDR  DIM       1      1        19    Record Type
.                                              A = Added
.                                              B = Before image
.                                              C = After Image
.                                              D = Delete
PREXAUDS  FORM      1      2        20    Record Status
.                                              1 = Not Printed
.                                              2 = Printed
PREXAUDO  DIM       4      4        22    Operator of Change
.
.Data File Definition
.--------------------
PRIEXCA1   IFILE SQL, FIXED=57, KEY="U1-3,4-5,6-14,15-17,18-25"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PREXCLM   DIM       3      3        1     Claim Code (Category CL)
DPREXFLG  DIM       2      2        4     Item Type
.                                            0 = MBS
.                                            1 = AMA
PREXITMN  DIM       9      9        6     MBS Item Number
PREXSUBN  DIM       3      3        15    MBS Subitem Number
PREXDAT1  DIM       8      8        18    Effective Date (CCYYMMDD format)
.
PREXCHRG  FORM     12.2    8        26    Charge for this item ($)
PREXDAT2  DIM       8      8        34    Date item will cease
PREXSPAR  DIM       15     15       42    Spare Variables
.
.End of Record                      57
.
.
. Redefine form fields from key
. -----------------------------
.
PREXFLAG  FORM      2
.
.
