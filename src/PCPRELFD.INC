. *****************************************************************************
. * Include Name  : PCPRELFD.INC
. * Function      : File Design include for Patient Care Plans
. *                 Patient Related Factors Table
. * File Type     : SQL
. * File Name     : pcprelaf.dat
. * Audit Name    : pcpaudre.dat
. * Keys          : KEY19
. * Programmer    : Bill Dew 12/12/89
. * Modifications :                                                           
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                         
. *                r5.10 Care Plans Port to V9                                 
. *****************************************************************************
. * Modifications : 28/03/1995   Helen Crick
. *                              Standardised FD
. *****************************************************************************
.Audit variables
.---------------
PCPAUDRE  IFILE     SQL, FIXED=60, KEY="D1-8,9-16,17-18,19-19" 
.
PCREAUDD  DIM       8      8        1    of change
PCREAUDT  DIM       8      8        9    of change
PCREAUDP  DIM       2      2        17    doing the change
PCREAUDR  DIM       1      1        19    Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PCREAUDS  FORM      1      2        20    Status
.                                          1 = Not printed
.                                          2 = Printed
PCREAUDO  DIM       4      4        22    ID that did the change
.
.Data File
.
PCPRELA1  IFILE     SQL, FIXED=35, KEY="U1-10,11-19"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
PCREUNIQ  DIM       10     10       1     Unique Key (from PCPDIAFD file)
PCREFACT  DIM       9      9        11    Related Factor code
PCREDCOD  DIM       4      4        20    Description number
PCRESPAR  DIM       11     11       24    Spare variable
.
.End of Record                      35
.
.
. redefine form fields for keys
. -----------------------------
.
. NAME    TYPE   LENGTH     START LOC.     DESCRIPTION
. ----    ----   ------     ----------     -----------
.******************************************************************************
