. *****************************************************************************
. * Include Name  : PCPOUTFD.INC
. * Function      : File Design include for Patient Care Plans
. *                 Patient Outcome Table
. * File Type     : SQL
. * File Name     : pcpoutaf.dat
. * Audit Name    : pcpaudou.dat
. * Keys          : KEY19
. * Programmer    : Bill Dew 12/12/89
. * Modifications :                                                           
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                         
. *                r5.10 Care Plans Port to V9                                 
. *****************************************************************************
. * Modifications : 13/11/1992    Justin Coates  Quote 7474
. *                 add value 0 to pcottype
. *                 28/03/1995    Helen Crick
. *                               Standardised FD
. *****************************************************************************
.Audit variables
.---------------
PCPAUDOU  IFILE     SQL, FIXED=75, KEY="D1-8,9-16,17-18,19-19" 
.
PCOTAUDD  DIM       8      8        1    of change
PCOTAUDT  DIM       8      8        9    of change
PCOTAUDP  DIM       2      2        17    doing the change
PCOTAUDR  DIM       1      1        19    Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PCOTAUDS  FORM      1      2        20    Status
.                                          1 = Not printed
.                                          2 = Printed
PCOTAUDO  DIM       4      4        22    ID that did the change
.
.Data File
.
PCPOUTA1  IFILE     SQL, FIXED=50, KEY="U1-10,11-19"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
PCOTUNIQ  DIM       10     10       1     Unique key (from PCPDIAFD file)
PCOTCODE  DIM       9      9        11    Outcome code
PCOTDCOD  DIM       4      4        20    Description number
PCOTDATE  DIM       8      8        24    Target date (CCYYMMDD)
PCOTTYPE  FORM      1      2        32    Target type
.                                                0 = No target date
.                                                1 = By a given date
.                                                2 = Number of days
.                                                3 = Number of weeks
.                                                4 = At all times
PCOTDYWK  FORM      3      3        34    Target number of days or weeks
PCOTSPAR  DIM       13     13       37    Spare variable
.
.End of Record                      50
.
.
.******************************************************************************
