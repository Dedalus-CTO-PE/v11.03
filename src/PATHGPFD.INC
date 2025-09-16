.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATHGPFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Health Fund Groups                              *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : pathgrpf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V9.09.01  13/12/2007  Davin         CAR 153384                *
.  *                Added PTHGDFIC                                      *
.  *                                                                    *
.  **********************************************************************
.
PATHGRP1   IFILE SQL, FIXED=100, KEY="U1-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PTHGCODE   DIM       6           6         1      Health Fund Group Code
PTHGDESC   DIM      50          50         7      Health Fund Group Description
PTHGDFIC   DIM       6           6        57      Default Fee Information Code
.                                                 (Stationery Code - Type 3)
PTHGSPAR   DIM      37          37        63      Spare Variable
.
.End of Record                           100
