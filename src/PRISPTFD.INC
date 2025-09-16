.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRISPTFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Special Pathology Test                        *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   prisptaf.dat                                  * 
.  *  Audit File        :   priaudsp.dat                                  *
.  *                                                                      * 
.  *  Keys              :   KEY 19, KEY 34                                *
.  *                                                                      *
.  *  Modifications     :    15/10/99 D. Di Paola                         *
.  *                         Changed length of audit file from 93 to 92   *
.  *                                                                      *
.  ************************************************************************
.Audit File Definition
.---------------------
PRIAUDSP   IFILE SQL, FIXED=92, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRSPAUDD  DIM       8      8        1     Date of Change
PRSPAUDT  DIM       8      8        9     Time of Change
PRSPAUDP  DIM       2      2        17    Port Doing Change
PRSPAUDR  DIM       1      1        19    Record Type
.                                              A = Added
.                                              B = Before image
.                                              C = After Image
.                                              D = Delete
PRSPAUDS  FORM      1      2        20    Record Status
.                                              1 = Not Printed
.                                              2 = Printed
PRSPAUDO  DIM       4      4        22    Operator of Change
.
.Data File Definition
.--------------------
PRISPTA1   IFILE SQL, FIXED=67, KEY="U1-2,3-11,12-14,15-22,23-31,32-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPRSPFLG  DIM       2      2        1     Item Type
.                                            0 = MBS
.                                            1 = AMA
PRSPITM1  DIM       9      9        3     1st Item Number
PRSPSUB1  DIM       3      3        12    1st Subitem Number
PRSPEDAT  DIM       8      8        15    Effective Date (CCYYMMDD format)
PRSPITM2  DIM       9      9        23    2nd Item Number
PRSPSUB2  DIM       3      3        32    2nd Subitem Number
.
PRSPITMN  DIM       9      9        35    New Item Number
PRSPSUBN  DIM       3      3        44    New Subitem Number
PRSPSPAR  DIM       20     20       47    Spare Variables
.
.End of Record                      67
.
.
. Redefine form fields from key
. -----------------------------
.
PRSPFLAG  FORM      2
