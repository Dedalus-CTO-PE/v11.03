.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIFACFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Future Action                                 *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   prifactf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 18                                        *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                        V9.11.01  J.Tan       CAR 190941              *
.  *                        Added Medical Practice                        *
.  *                        08/10/92  Steve Armstrong                     *
.  *                        Modified PRFADEBT from a FORM 8 to a DIM 8    *
.  *                        to handle alphanumeric debtor numbers         *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRIFACT1   IFILE SQL, FIXED=92, KEY="U1-8,9-16,17-18"
PRIFACT2   IFILE SQL, FIXED=92, KEY="U9-16,17-18,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRFADATE  DIM       8      8        1     Future Action Date
PRFADEBT  DIM       8      8        9     Debtor Number
DPRFASCN  DIM       2      2        17    Scan Flag
.                                              0 = Debtor File
.                                              1 = PMI
.
PRFAACTN  DIM       3      3        19    Future Action Code
PRFACOMM  DIM       60     60       22    Comments 
PRFAMPRA  DIM       6      6        82    Medical Practice
.
PRFASPAR  DIM       4      4        88    Spare Variable
.
.End of Record                      92
.
.
. Redefine form fields from key
. -----------------------------
.
PRFASCAN  FORM      2
