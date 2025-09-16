. *****************************************************************************
. * Include Name  : PCPINTFD.INC
. * Function      : File Design include for Patient Care Plans
. *                 Interventions Table
. * File Type     : SQL
. * File Name     : pcpintaf.dat
. * Audit Name    : pcpaudin.dat
. * Keys          : KEY19
. * Programmer    : Bill Dew 12/12/89
. * Modifications :                                                           
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                         
. *                r5.10 Care Plans Port to V9                             
. *----------------------------------------------------------------------------
. * Modifications : 19/11/1991    Justin Coates
. *                 Delete PCINFREQ and added new PCINFREQ, PCINSTAF, PCINTIME
. *                 02/12/1993    Justin Coates  Quote 7841 SRF 123724
. *                 added PCINODTE, PCINOSFT
. *                 28/03/1995    Helen Crick                           
. *                               Standardised FD
. *****************************************************************************
.Audit variables
.---------------
PCPAUDIN  IFILE     SQL, FIXED=80, KEY="D1-8,9-16,17-18,19-19" 
.
PCINAUDD  DIM       8      8        1    of change
PCINAUDT  DIM       8      8        9    of change
PCINAUDP  DIM       2      2        17    doing the change
PCINAUDR  DIM       1      1        19    Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PCINAUDS  FORM      1      2        20    Status
.                                          1 = Not printed
.                                          2 = Printed
PCINAUDO  DIM       4      4        22    ID that did the change
.
.Data File
.
PCPINTA1  IFILE     SQL, FIXED=55, KEY="U1-10,11-19"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
PCINUNIQ  DIM       10     10       1     Unique key (from PCPDIAFD file)
PCINCODE  DIM       9      9        11    Intervention code
PCINDCOD  DIM       4      4        20    Description number
PCINFREQ  DIM       9      9        24    Frequency code of intervention
PCINSTAF  DIM       3      3        33    Staff Code (Cat SD)
PCINTIME  FORM      4      3        36    Time (minutes/points)
PCINODTE  DIM       8      8        39    Once off date
PCINOSFT  DIM       3      3        47    Once off shift
PCINSPAR  DIM       5      5        50    Spare variable
.End of Record                      55
.
