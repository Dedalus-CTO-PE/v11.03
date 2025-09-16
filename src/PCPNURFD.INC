. *****************************************************************************
. * Include Name  : PCPNURFD.INC
. * Function      : File Design include for Patient Care Plans
. *                 Nurse Table
. * File Type     : SQL
. * File Name     : pcpnuraf.dat
. * Audit Name    : pcpaudnu.dat
. * Keys          : KEY6, KEY26, KEY29, KEY19
. * Programmer    : Bill Dew 12/12/89
. * Modifications :                                                           
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                         
. *                r5.10 Care Plans Port to V9                                
. *****************************************************************************
. * Modifications : 28/03/1995  Helen Crick
. *                             Standardised FD
. *                 V5.04.01 09/09/1996  Steve Armstrong     STH Mods
. *                          Added PCNUSECL
. *****************************************************************************
.Audit variables
.---------------
PCPAUDNU  IFILE     SQL, FIXED=75, KEY="D1-8,9-16,17-18,19-19" 
.
PCNUAUDD  DIM       8      8        1    of change
PCNUAUDT  DIM       8      8        9    of change
PCNUAUDP  DIM       2      2        17    doing the change
PCNUAUDR  DIM       1      1        19    Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PCNUAUDS  FORM      1      2        20    Status
.                                          1 = Not printed
.                                          2 = Printed
PCNUAUDO  DIM       4      4        22    ID that did the change
.
.Data File
.
PCPNURA1  IFILE     SQL, FIXED=50, KEY="U1-6"
PCPNURA2  IFILE     SQL, FIXED=50, KEY="U7-26,1-6"
PCPNURA3  IFILE     SQL, FIXED=50, KEY="U27-29,7-26,1-6"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
PCNUCODE  DIM       6      6        1     Nurse code
PCNUNAME  DIM       20     20       7     Nurse name
PCNUCLSS  DIM       3      3        27    Nurse class (Category "SD")
DPCNUSEC  DIM       1      1        30    Nurse Security level for
.                                             Reactivate option
PCNUSPAR  DIM       19     19       31    Spare variable
.
.End of Record                      50
.
.
. redefine form fields for keys
. -----------------------------
PCNUSECL  FORM      1
.
. NAME    TYPE   LENGTH     START LOC.     DESCRIPTION
. ----    ----   ------     ----------     -----------
.******************************************************************************
