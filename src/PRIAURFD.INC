. V5.07.001 11/08/1998 Glenn  507 Changes
. *****************************************************************************
. *                                                                           *
. * Include Name  : PRIAURFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Private Practice              *
. *                 Deposits Refunded Audit                                   * 
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : priauraf.dat                                              *
. *                                                                           *
. * Keys          : KEY13                                                     *
. *                                                                           *
. * I/O Include   : PRIAURIO.INC                                              *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
PRIAURA1  IFILE     SQL, FIXED=56, KEY="U1-8,9-10,11-13"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
PRARDEBT  DIM       8           8      1  Debtor Number
DPRARSCA  DIM       2           2      9  Scan Flag
.                                           0 = Debtor
.                                           1 = PMI
DPRARUNI  DIM       3           3     11  Unique counter
PRARRECT  DIM      12          12     14  Receipt Number
PRARAMOU  FORM     12.2         8     26  Amount refunded
PRARRFDT  DIM       8           8     34  Date of refund
PRARPORT  DIM       2           2     42  Port which refunded
PRAROPER  DIM       4           4     44  Operator which refunded
PRARSPAR  DIM       8           8     48  Spare variable
.End of Record                        56
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  --------------------------------------
PRARSCAN  FORM      2       Scan Flag
PRARUNIQ  FORM      3       Unique counter
.
PRARAMNT  FORM      8.2
