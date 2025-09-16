. *****************************************************************************
. * Include Name  : PCPEVAFD.INC
. * Function      : File Design include for Patient Care Plans
. *                 Evaluation Table
. * File Type     : SQL
. * File Name     : pcpevaaf.dat
. * Audit Name    : pcpaudev.dat
. * Keys          : KEY26
. * Programmer    : Bill Dew 12/12/89
. * Modifications :
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                         
. *                r5.10 Care Plans Port to V9                                 
. *----------------------------------------------------------------------------
. * Modifications : 28/03/1995  Helen Crick
. *                             Standardised FD
. *****************************************************************************
.Audit variables
.---------------
PCPAUDEV  IFILE     SQL, FIXED=75, KEY="D1-8,9-16,17-18,19-19" 
.
PCEVAUDD  DIM       8      8        1    of change
PCEVAUDT  DIM       8      8        9    of change
PCEVAUDP  DIM       2      2        17    doing the change
PCEVAUDR  DIM       1      1        19    Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PCEVAUDS  FORM      1      2        20    Status
.                                          1 = Not printed
.                                          2 = Printed
PCEVAUDO  DIM       4      4        22    ID that did the change
.
.Data File
.
PCPEVAA1  IFILE     SQL, FIXED=50, KEY="U1-10,11-18,19-26"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
PCEVUNIQ  DIM       10     10       1     Unique key (from PCPDIAFD file)
PCEVDATE  DIM       8      8        11    Date of evaluation (CCYYMMDD)
PCEVTIME  DIM       8      8        19    Time of evaluation (HH:MM:SS)
PCEVDCOD  DIM       4      4        27    Description number
PCEVNURS  DIM       6      6        31    Nurse code
PCEVSTAT  FORM      1      2        37    Evaluation Status
.                                                1=Desired outcome not achieved
.                                                2=Desired outcome achieved
PCEVSPAR  DIM       11     11       39    Spare variable
.
.End of Record                      50
.
.
. redefine form fields for keys
. -----------------------------
.
. NAME    TYPE   LENGTH     START LOC.     DESCRIPTION
. ----    ----   ------     ----------     -----------
.******************************************************************************
