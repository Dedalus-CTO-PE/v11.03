.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIVAFFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Veterans Affairs                              *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   privafdf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 16                                        *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRIVAFD1   IFILE SQL, FIXED=77, KEY="U1-8,9-16"
PRIVAFD2   IFILE SQL, FIXED=77, KEY="U9-16,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRVAINVN  DIM       8      8        1     Invoice Number
DPRVAUNQ  DIM       8      8        9     Unique Claim Number
.
PRVACLAM  DIM       20     20       17    Claim Number
.
PRVASPAR  DIM       40     40       37    Spare Variable
.
.End of Record                      77
.
.
. Redefine form fields from key
. -----------------------------
.
PRVAUNIQ  FORM      8
