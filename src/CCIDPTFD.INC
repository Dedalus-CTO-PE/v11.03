. ****************************************************************************
. *                                                                          *
. * Include Name  : CCIDPTFD.INC                                             *
. *                                                                          *
. * Function      : File definition include for Clinical Costing             *
. *                 Rus Department Translation Table                         *
. *                                                                          *
. * File Type     : SQL                                                      *
. *                                                                          *
. * File Name     : ccidptaf.dat                                             *
. *                                                                          *
. * Keys          : KEY3                                                     *
. *                                                                          *
. * Modifications : 08/11/1993    Justin Coates  (Hawkes Bay mods)           *
. *                 added CCDTCSDP                                           *
. *                 20/12/1994    Justin Coates  (Hawkes Bay mods)           *
. *                 added CCDTLSDH                                           *
. *                 10/07/1997  Steve Armstrong     WHL Mods                 *
. *                 added CCDTTRCS                                           *
. ****************************************************************************
.
. IO include   : CCIDPTIO.INC
.
CCIDPTA1  IFILE     SQL, FIXED=27, KEY="U1-3"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  -----------
CCDTDEPT  DIM       3          3       1  Clinical Dept. code 
CCDTSERV  DIM       2          2       4  Service code          
CCDTLONG  DIM       1          1       6  Long stay indicator
.                                             "Y"= yes , "N" = no
CCDTCSDP  DIM       4          4       7  Costing Deparment (Trendstar)
DCCDTLSD  DIM       2          2      11  Number of days for Long stay to
.                                         be in hospital before handing over
CCDTTRCS  DIM       5          5      13  Costing Department (Transition)
CCDTSPAR  DIM       14         9      18  Spare
.End of Record                        27
.
CCDTLSDH  FORM      2
