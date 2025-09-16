. *****************************************************************************
. *                                                                           *
. *       Include Name : PATPGRFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      Grouper Details                                      *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : patpgraf.dat                                         *
. *                                                                           *
. *       Keys         : KEY13                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *       V11.01.01 05/05/2021  Ebon Clements    TSK 0902615                  *
. *                 Added NWAU to WIES field descriptions                     *
. *       V10.08.01 07/04/2016  Steve Armstrong  TSK 0815007                  *
. *                 Added PTPGECRW                                            *
. *       V5.08.B01 04/02/2000  Greg Horvat                                   *
. *                 Changed for new patient grouper file layout               *
. *                                                                           *
. *****************************************************************************
.
PATPGRA1  IFILE     SQL, FIXED=150, KEY="U1-8,9-10,11-13"
PATPGRA2  IFILE     SQL, FIXED=150, KEY="U1-8,11-13,9-10"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DPTPGADM  DIM       8         8        1     Admission no
DPTPGEPN  DIM       2         2        9     Episode no
PTPGGPVR  DIM       3         3        11    Grouper version
.
PTPGNDRG  DIM       4         4        14    National DRG
PTPGNMDC  DIM       4         4        18    National MDC
PTPGNWGT  FORM     6.4        6        22    National weight
PTPGNALS  FORM     4.2        4        28    National average LOS
.
PTPGSDRG  DIM       4         4        32    State DRG
PTPGSMDC  DIM       4         4        36    State MDC
PTPGSWGT  FORM     6.4        6        40    State weight
PTPGSALS  FORM     4.2        4        46    State average LOS
.
PTPGLDRG  DIM       4         4        50    Local DRG
PTPGLMDC  DIM       4         4        54    Local MDC
PTPGLWGT  FORM     6.4        6        58    Local weight
PTPGLALS  FORM     4.2        4        64    Local average LOS
.
PTPGPCCL  DIM       1         1        68    Patient CC class level
PTPGWFIX  FORM    12.4        9        69    WIES/NWAU value fixed
PTPGWVAR  FORM    12.4        9        78    WIES/NWAU value variable
PTPGWTOL  FORM    12.4        9        87    WIES/NWAU value total
PTPGWWTU  FORM     6.4        6        96    WIES/NWAU weight used
PTPGWWTD  DIM      13        13       102    WIES/NWAU weight description
PTPGECRW  DIM      11        11       115    ECCS RAW Format
PTPGSPAR  DIM      24        24       126    Spare variable
.
.End of Record                        150
.
PTPGADMN  FORM      8                        Admission no
PTPGEPNO  FORM      2                        Episode no
+
.

