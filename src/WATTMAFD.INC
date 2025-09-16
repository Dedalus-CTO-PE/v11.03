.
. **************************************************************
. *                                                            *
. * Include Name :  WATTMAFD                                   *
. *                                                            *
. * Function     :  File Definition Include for Waiting List   *
. *                 Time Analysis                              *
. *                                                            *
. * File Type    :  SQL                                        *
. *                                                            *
. * File Name    :  wattmaaf.dat                               *
. *                                                            *
. * Keys         :  KEY15                                      *
. *                                                            *
. * Modifications:                                             *
. *                                                            *
. **************************************************************
.
WATTMAA1   IFILE SQL, FIXED=70, KEY="U1-6,7-15"
.
.NAME      TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----      ----   ------  --------   -----     -----------
WTTMDATE    DIM        6         6       1     PERIOD DATE (CCYYMM)
WTTMPROC    DIM        9         9       7     PROCEDURE CODE     
WTTMRNG1    FORM       8         5      16     NO. ON WAITING LIST
.                                              ( < RNG 1)
WTTMRNG2    FORM       8         5      21     NO. ON WAITING LIST
.                                              ( RNG 1 < RNG 2)
WTTMRNG3    FORM       8         5      26     NO. ON WAITING LIST
.                                              ( RNG 2 < RNG 3)
WTTMRNG4    FORM       8         5      31     NO. ON WAITING LIST
.                                              ( RNG 3 < RNG 4)
WTTMRNG5    FORM       8         5      36     NO. ON WAITING LIST
.                                              ( RNG 4 < RNG 5)
WTTMRNG6    FORM       8         5      41     NO. ON WAITING LIST
.                                              ( RNG 5 < RNG 6)
WTTMRNG7    FORM       8         5      46     NO. ON WAITING LIST
.                                              ( > RNG 6)
WTTMMEAN    FORM       4         3      51     MEAN NUMBER OF DAYS  
WTTMMEDN    FORM       4         3      54     MEDIAN NUMBER OF DAYS
WTTMMAX     FORM       4         3      57     MAXIMUM NUMBER OF DAYS
WTTMSPAR    DIM       10        10      60     SPARE VARIABLE        
.
.End of Record                          70
