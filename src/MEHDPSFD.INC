. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHDPSFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Department Summary Statistics                             *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehdpsaf.dat                                              *
. *                                                                           *
. * Keys          : KEY9                                                      *
. *                                                                           *
. * I/O Include   : MEHDPSIO.INC                                              *
. *                                                                           *
. * Author        : ROD           02/12/1991  (The PHANTOM or DESERT STORM)   *
. *                                                                           *
. * Modifications : 28/03/1995 Helen Crick                                    *
. *                            Standardised FD                                *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
MEHDPSA1  IFILE     SQL, FIXED=148, KEY="U1-6,7-9"
.
. Name    Type    Length    Phys.   Start   Description
. ----    ----    ------    -----   -----   -----------
MHDPDATE  DIM       6        6       1     Period  (CCYYMM)
MHDPDEPT  DIM       3        3       7     Department code (Cat A )
MHDPBEDS  FORM      4        3      10     Available beds during period
MHDPINST  FORM      6        4      13     No. pats in hosp at start of period
MHDPSLST  FORM      6        4      17     No. pats on short leave start of per
MHDPADMI  FORM      6        4      21     No. informal admissions during period
MHDPADMS  FORM      6        4      25     No. special admissions during period
MHDPADMC  FORM      6        4      29     No. committed admissions during per.
MHDPTRNO  FORM      6        4      33     No. of transfers out of dept
MHDPTRNI  FORM      6        4      37     No. of transfers into dept
MHDPRETH  FORM      6        4      41     No. of returns from holiday leave
MHDPRETT  FORM      6        4      45     No. of returns from trial leave 
MHDPRETA  FORM      6        4      49     No. of returns from A.W.O.L.
MHDPLVEH  FORM      6        4      53     No. pats who went on holiday leave  
MHDPLVET  FORM      6        4      57     No. pats who went on trial leave
MHDPLVEA  FORM      6        4      61     No. of pats who went on A.W.O.L.
MHDPDSCH  FORM      6        4      65     No. of discharges (excluding deaths)
MHDPDEAD  FORM      6        4      69     No. of deaths
MHDPINBD  FORM      8        6      73     Inpatient bed days in period
MHDPSLBD  FORM      8        6      78     Short leave bed days in period
MHDPHLBD  FORM      8        6      83     Holiday leave bed days in period
MHDPTLBD  FORM      8        6      88     Trial leave bed days in period
MHDPAWBD  FORM      8        6      93     A.W.O.L. leave bed days in period
MHDPSEPB  FORM      8        6      98     Separation inpatient bed days
MHDPSSLB  FORM      8        6     103     Separation short leave bed days
MHDPDSCB  FORM      8        6     108     Discharge inpatient bed days 
MHDPDSLB  FORM      8        6     113     Discharge short leave bed days 
MHDPSPAR  DIM       30       30    118     Spare
.
.End of Record                     148
.
