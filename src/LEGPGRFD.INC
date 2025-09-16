. *****************************************************************************
. *                                                                           *
. *       Include Name : LEGPGRFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include LEGACY                       *
. *                      Patient grouper Details                              *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : legpgraf.dat                                         *
. *                                                                           *
. *       Keys         : KEY13                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
LEGPGRA1  IFILE     SQL, FIXED=150, KEY="U1-8,9-10,11-13"
LEGPGRA2  IFILE     SQL, FIXED=150, KEY="U1-8,11-13,9-10"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DLPTPGAD  DIM       8         8        1     Admission no
DLPTPGEP  DIM       2         2        9     Episode no
LPTPGGPV  DIM       3         3        11    Grouper version
.
LPTPGNDR  DIM       4         4        14    National DRG
LPTPGNMD  DIM       4         4        18    National MDC
LPTPGNWG  FORM     6.4        6        22    National weight
LPTPGNAL  FORM     4.2        4        28    National average LOS
.
LPTPGSDR  DIM       4         4        32    State DRG
LPTPGSMD  DIM       4         4        36    State MDC
LPTPGSWG  FORM     6.4        6        40    State weight
LPTPGSAL  FORM     4.2        4        46    State average LOS
.
LPTPGLDR  DIM       4         4        50    Local DRG
LPTPGLMD  DIM       4         4        54    Local MDC
LPTPGLWG  FORM     6.4        6        58    Local weight
LPTPGLAL  FORM     4.2        4        64    Local average LOS
.
LPTPGPCC  DIM       1         1        68    Patient CC class level
LPTPGWFI  FORM    12.4        9        69    WIES value fixed
LPTPGWVA  FORM    12.4        9        78    WIES value variable
LPTPGWTO  FORM    12.4        9        87    WIES value total
LPTPGWWU  FORM     6.4        6        96    WIES weight used
LPTPGWWD  DIM      13        13       102    WIES weight description
LPTPGSPA  DIM      35        35       115    Spare variable
.
.End of Record                        150
.
LPTPGADM  FORM      8                        Admission no
LPTPGEPN  FORM      2                        Episode no
+
.

