.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIHDBFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Holding Header Table for Debtors              *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   prihdbtf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY8, KEY27                                   *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *      29/03/2016  Steve Armstrong  TSK 0294177                        *
.  *                  Added PRHDHFND and included in index 1              *
.  *      08/10/1992  Steve Armstrong                                     *
.  *                  Modified PRHDDEBT from a FORM 8 to a DIM 8 to       *
.  *                  handle alphanumeric debtor numbers                  *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRIHDBT1   IFILE SQL, FIXED=60, KEY="U1-8,9-10,11-13,14-21,30-35"
PRIHDBT2   IFILE SQL, FIXED=60, KEY="U22-29"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRHDDEBT  DIM       8      8        1     Debtor or U/R number
DPRHDSCN  DIM       2      2        9     Scan Flag
.                                            0 = Debtor 
.                                            1 = PMI
PRHDCLAM  DIM       3      3        11    Claim Code (Category CL)
PRHDACCD  DIM       8      8        14    Accident Date
.
DPRHDUNQ  DIM       8      8        22    Unique Identifier
PRHDHFND  DIM       6      6        30    Health Fund Code (patfn1af)
.
PRHDSPAR  DIM       24     24       36    Spare Variable
.
.End of Record                      60 
.
.
. Redefine FORM fields from key
. -----------------------------
.
PRHDUNIQ  FORM      8
PRHDSCAN  FORM      2
