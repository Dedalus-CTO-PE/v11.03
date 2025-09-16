. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHWSSFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Ward Summary Statistics                                   *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehwssaf.dat                                              *
. *                                                                           *
. * Keys          : KEY9                                                      *
. *                                                                           *
. * I/O Include   : MEHWSSIO.INC                                              *
. *                                                                           *
. * Author        : ROD           02/12/1991  (The PHANTOM or DESERT STORM)   *
. *                                                                           *
. * Modifications : 28/03/1995  Helen Crick                                   *
. *                             Standardised FD                               *
. *****************************************************************************
.
.Data File Definition
.--------------------
MEHWSSA1  IFILE     SQL, FIXED=148, KEY="U1-6,7-9"
.
. Name    Type    Length  Phys    Start       Description
. ----    ----    ------  ----    -----       -----------
MHWSDATE  DIM       6      6        1     (CCYYMM)
MHWSWARD  DIM       3      3        7     code
MHWSBEDS  FORM      4      3        10    beds during period
MHWSINST  FORM      6      4        13    pats in hosp at start of period
MHWSSLST  FORM      6      4        17    pats on short leave start of per.
MHWSADMI  FORM      6      4        21    informal admissions during period
MHWSADMS  FORM      6      4        25    special admissions during period
MHWSADMC  FORM      6      4        29    committed admissions during per.
MHWSTRNO  FORM      6      4        33    of transfers out of ward
MHWSTRNI  FORM      6      4        37    of transfers into ward
MHWSRETH  FORM      6      4        41    of returns from holiday leave
MHWSRETT  FORM      6      4        45    of returns from trial leave
MHWSRETA  FORM      6      4        49    of returns from A.W.O.L.
MHWSLVEH  FORM      6      4        53    pats who went on holiday leave
MHWSLVET  FORM      6      4        57    pats who went on trial leave
MHWSLVEA  FORM      6      4        61    of pats who went on A.W.O.L.
MHWSDSCH  FORM      6      4        65    of discharges (excluding deaths)
MHWSDEAD  FORM      6      4        69    of deaths
MHWSINBD  FORM      8      5        73    bed days in period
MHWSSLBD  FORM      8      5        78    leave bed days in period
MHWSHLBD  FORM      8      5        83    leave bed days in period
MHWSTLBD  FORM      8      5        88    leave bed days in period
MHWSAWBD  FORM      8      5        93    leave bed days in period
MHWSSEPB  FORM      8      5        98    inpatient bed days
MHWSSSLB  FORM      8      5        103   short leave bed days
MHWSDSCB  FORM      8      5        108   inpatient bed days
MHWSDSLB  FORM      8      5        113   short leave bed days
MHWSSPAR  DIM       30     30       118   
.
.End of Record                      148
.
