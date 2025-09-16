. *****************************************************************************
. *                                                                           *
. * Include Name  : AAECOTFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident and Emergency             *
. *                 Consultant on Take                                        *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaecotaf.dat                                              *
. *                                                                           *
. * Keys          : KEY13                                                     *
. *                                                                           *
. * Author        : Justin Coates 04/08/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
AAECOTA1  IFILE     SQL, FIXED=50, KEY="U1-8,9-13"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
AECTDATE  DIM       8           8      1  Date applicable from (CCYYMMDD)
AECTTIME  DIM       5           5      9  Time applicable from
AECTCONS  DIM       6           6     14  Consultant on take
AECTSPAR  DIM      30          30     20  Spare
.End of Record                        50
.
