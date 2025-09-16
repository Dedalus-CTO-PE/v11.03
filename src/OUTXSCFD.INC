. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTXSCFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients                        *
. *                 Extra Screen Details                                      *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outxscaf.dat   (site specific file)                       *
. * Audit File    : outaudxs.dat   (site specific file)                       *
. *                                                                           *
. * Keys          : KEY19 , KEY8                                              *
. *                                                                           *
. * I/O Include   : OUTXSCIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 04/02/1992                                  *
. *                                                                           *
. * Modifications :                                                           *
. *                                                                           *
. *          V9.04.01  03/08/05 J.Tan    CAR 62750                            *
. *                    Removed redefined amount variables                     *
. *                                                                           *
. *****************************************************************************
.
.Audit File Definition
.---------------------
OUTAUDXS  IFILE     SQL, FIXED=452, KEY="D1-8,9-16,17-18,19-19"
FILAOTXS  INIT      "audxs"
.
.Name     Type      Length  Physical  Start  Description
.----     ----      ------  --------  -----  -----------
OTXSAUDD  DIM       8              8      1  Date of Change
OTXSAUDT  DIM       8              8      9  Time of Change
OTXSAUDP  DIM       2              2     17  Port doing change
OTXSAUDR  DIM       1              1     19  Record Type
.                                              A = Added Record
.                                              B = Before Change Record
.                                              C = After Change Record
.                                              D = Deleted Record
OTXSAUDS  FORM      1              2     20  Recorded Status
.                                              1 = Not Printed
.                                              2 = Printed
OTXSAUDO  DIM       4              4     22  Operator Id
.
.Data File Definition 
.--------------------
OUTXSCA1  IFILE     SQL, FIXED=427, KEY="U1-8"
FILXSCA1  INIT      "xscaf"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
DOTXSOUT  DIM       8           8      1  Outpatient Number
OTXSDTE1  DIM       8           8      9  Date 1 (CCYYMMDD)
OTXSDTE2  DIM       8           8     17  Date 2 (CCYYMMDD)
OTXSDTE3  DIM       8           8     25  Date 3 (CCYYMMDD)
OTXSDTE4  DIM       8           8     33  Date 4 (CCYYMMDD)
OTXSDTE5  DIM       8           8     41  Date 5 (CCYYMMDD)
OTXSDTE6  DIM       8           8     49  Date 6 (CCYYMMDD)
OTXSCO01  DIM       3           3     57  Code  1 (Category OTSPXC01)
OTXSCO02  DIM       3           3     60  Code  2 (Category OTSPXC02)
OTXSCO03  DIM       3           3     63  Code  3 (Category OTSPXC03)
OTXSCO04  DIM       3           3     66  Code  4 (Category OTSPXC04)
OTXSCO05  DIM       3           3     69  Code  5 (Category OTSPXC05)
OTXSCO06  DIM       3           3     72  Code  6 (Category OTSPXC06)
OTXSCO07  DIM       3           3     75  Code  7 (Category OTSPXC07)
OTXSCO08  DIM       3           3     78  Code  8 (Category OTSPXC08)
OTXSCO09  DIM       3           3     81  Code  9 (Category OTSPXC09)
OTXSCO10  DIM       3           3     84  Code 10 (Category OTSPXC10)
OTXSCO11  DIM       3           3     87  Code 11 (Category OTSPXC11)
OTXSCO12  DIM       3           3     90  Code 12 (Category OTSPXC02)
OTXSCO13  DIM       3           3     93  Code 13 (Category OTSPXC13)
OTXSCO14  DIM       3           3     96  Code 14 (Category OTSPXC14)
OTXSCO15  DIM       3           3     99  Code 15 (Category OTSPXC15)
OTXSCO16  DIM       3           3    102  Code 16 (Category OTSPXC16)
OTXSCO17  DIM       3           3    105  Code 17 (Category OTSPXC17)
OTXSCO18  DIM       3           3    108  Code 18 (Category OTSPXC18)
OTXSCO19  DIM       3           3    111  Code 19 (Category OTSPXC19)
OTXSCO20  DIM       3           3    114  Code 20 (Category OTSPXC20)
OTXSDOC1  DIM       6           6    117  Doctor Code 1
OTXSDOC2  DIM       6           6    123  Doctor Code 2
OTXSDOC3  DIM       6           6    129  Doctor Code 3
OTXSAMT1  FORM     12.2         8    135  Amount 1
OTXSAMT2  FORM     12.2         8    143  Amount 1
OTXSDSC1  DIM       40         40    151  Free Format 1
OTXSDSC2  DIM       40         40    191  Free Format 2
OTXSDSC3  DIM       40         40    231  Free Format 3
OTXSDSC4  DIM       40         40    271  Free Format 4
OTXSDSC5  DIM       40         40    311  Free Format 5
OTXSDSC6  DIM       40         40    351  Free Format 6
OTXSTIM1  DIM       5           5    391  Time 1
OTXSTIM2  DIM       5           5    394  Time 2
OTXSTIM3  DIM       5           5    401  Time 3
OTXSTIM4  DIM       5           5    406  Time 4
OTXSTIM5  DIM       5           5    411  Time 5
OTXSTIM6  DIM       5           5    416  Time 6
OTXSSPAR  DIM       6           6    421  Spare variable
.End of Record                       427
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  --------------------------------------
OTXSOUTN  FORM      8       Outpatient Number
.
