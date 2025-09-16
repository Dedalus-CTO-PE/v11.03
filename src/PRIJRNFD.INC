.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIJRNFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Journal                                       *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   prijrnlf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 35                                        *
.  *                                                                      *
.  *  Modifications     :   08/10/92  Steve Armstrong                     *
.  *                        Modified PRJRDEBT from a FORM 8 to a DIM 8    *
.  *                        to handle alphanumeric debtor numbers         *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRIJRNL1   IFILE SQL, FIXED=40, KEY="U1-3,4-11,12-19,20-21,22-27,28-35"
PRIJRNL2   IFILE SQL, FIXED=40, KEY="U12-19,20-21,22-27,28-35,1-3,4-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRJRCODE  DIM       3      3        1     Journal Code
PRJRDATE  DIM       8      8        4     Journal Date
PRJRDEBT  DIM       8      8        12    Debtor Number
DPRJRSCN  DIM       2      2        20    Scan Flag 
.                                              0 = PMI
.                                              1 = Debtor File
DPRJRTRN  DIM       6      6        22    Journal DTR Transaction Number 
PRJRINVN  DIM       8      8        28    Invoice Number
.
PRJRSPAR  DIM       4      4        36    Spare Variable 
.
.End of Record                      40
.
.
. Redefine form fields from key
. -----------------------------
.
PRJRSCAN  FORM      2
PRJRTRAN  FORM      6
