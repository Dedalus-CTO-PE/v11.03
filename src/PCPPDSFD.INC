. *****************************************************************************
. * Include Name  : PCPPDSFD.INC
. * Function      : File Design include for Patient Care Plans
. *                 Patient Description Table
. * File Type     : SQL
. * File Name     : pcppdsaf.dat
. * Audit Name    : pcpaudpd.dat
. * Keys          : KEY14
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
PCPAUDPD  IFILE     SQL, FIXED=110, KEY="D1-8,9-16,17-18,19-19" 
.
PCPDAUDD  DIM       8      8        1    of change
PCPDAUDT  DIM       8      8        9    of change
PCPDAUDP  DIM       2      2        17   doing the change
PCPDAUDR  DIM       1      1        19   Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PCPDAUDS  FORM      1      2        20   Status
.                                          1 = Not printed
.                                          2 = Printed
PCPDAUDO  DIM       4      4        22   ID that did the change
.
.Data File
.
PCPPDSA1  IFILE     SQL, FIXED=85, KEY="U1-8,9-12,13-14"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
DPCPDADM  DIM       8      8        1     Admission number
PCPDDCOD  DIM       4      4        9     Description number
DPCPDLIN  DIM       2      2        13    Description line number
PCPDDESC  DIM       60     60       15    Line description
PCPDSPAR  DIM       10     10       75    Spare variable
.
.End of Record                      85
.
.
. redefine form fields for keys
. -----------------------------
.
. NAME    TYPE   LENGTH     START LOC.     DESCRIPTION
. ----    ----   ------     ----------     -----------
PCPDADMN  FORM      8      5        110   number
PCPDLINE  FORM      2      2        115   line number
.******************************************************************************
