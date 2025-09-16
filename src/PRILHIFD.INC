.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRILHIFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Letter History                                *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   prilhisf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 21                                        *
.  *                                                                      *
.  *  Modifications     :   08/10/92  Steve Armstrong                     *
.  *                        Modified PRLHDEBT from a FORM 8 to a DIM 8    *
.  *                        to handle alphanumeric debtor numbers         *
.  *                                                                      *
.  ************************************************************************
.Data File Definition 
.--------------------
PRILHIS1   IFILE SQL, FIXED=30, KEY="U1-8,9-10,11-18,19-21"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRLHDEBT  DIM       8      8        1     Debtor number
DPRLHSCN  DIM       2      2        9     Scan Flag
.                                           0 = Debtor
.                                           1 = PMI
PRLHDATE  DIM       8      8        11    Date letter sent (CCYYMMDD)
DPRLHNUM  DIM       3      3        19    Last letter sent
PRLHSPAR  DIM       8      8        22    Spare variable
.
.End of Record                      30
.
.
. Redefine form fields from key
. -----------------------------
.
PRLHSCAN  FORM      2
PRLHNUMB  FORM      3
