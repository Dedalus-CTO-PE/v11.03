. *****************************************************************************
. *                                                                           *
. * Include Name  : PRIHOLFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Private Practice              *
. *                 Hold Account                                              *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : priholdf.dat                                              *
. *                                                                           *
. * Keys          : KEY 10                                                    *
. *                                                                           *
. * Modifications : 05/06/1992    Justin Coates                               *
. *                 made DPRHOSCN a DIM 2 and not a FORM 2                    *
. *                 08/10/92  Steve Armstrong                                 *
. *                 Made PRHODEBT a DIM 8 instead of a FORM 8                 *
. *                 to handle alphanumeric debtor numbers                     *
. *****************************************************************************
.Data File Definition
.--------------------
PRIHOLA1   IFILE SQL, FIXED=53, KEY="U1-8,9-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRHODEBT  DIM       8      8        1     Debtor or U/R number
DPRHOSCN  DIM       2      2        9     Scan Flag
.                                           0 = Debtor
.                                           1 = PMI
PRHOHOLD  FORM      1      2        11    Account Hold Flag
.                                           0 = Normal
.                                           1 = Hold Account
PRHOSPAR  DIM       40     40       13    Spare Variable 
.
.End of Record                      53
.
. Redefine form fields from key
. -----------------------------
PRHOSCAN  FORM      2
.
