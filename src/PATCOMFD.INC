. *****************************************************************************
. * Include Name  : PATCOMFD.INC                                              *
. * Function      : File Definition Include for Patient                       *
. *                 U/R Comments                                              *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patcomaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 11                                                    *
. *                                                                           *
. * Modifications : 21/04/1994    Justin Coates  (Hawkes Bay)                 *
. *                 added PTCOOPER                                            *
. *                                                                           *
. *****************************************************************************
.
PATCOMA1   IFILE SQL, FIXED=100, KEY="U1-8,9-11"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  -----------------------
PTCOURNO  DIM       8          8       1  U/R Number
DPTCOCLN  DIM       3          3       9  Line Number
PTCOLINE  DIM       70        70      12  Comment        
PTCOOPER  DIM       4          4      82  Operator who input comments
PTCOSPAR  DIM       14        14      86  Spare
.End of Record                       100
.
.  Redefine form fields from key
.
. Name     Type      Length     Start Loc.   Description
. ----     ----      ------     ----------   -----------
PTCOCLNO   FORM        3             9       Line Number
.
