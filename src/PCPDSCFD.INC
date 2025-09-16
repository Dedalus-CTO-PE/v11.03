. *****************************************************************************
. * Include Name  : PCPDSCFD.INC
. * Function      : File Design include for Patient Care Plans
. *                 Description Table
. * File Type     : SQL
. * File Name     : pcpdscaf.dat
. * Audit Name    : pcpaudds.dat
. * Keys          : KEY13,KEY19
. * Programmer    : Bill Dew 12/12/89
. * Modifications :                                                         
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                        
. *                r5.10 Care Plans Port to V9                                 
. *----------------------------------------------------------------------------
. * Modifications : 28/03/1995   Helen Crick
. *                              Standardised FD
. *****************************************************************************
.Audit variables
.---------------
PCPAUDDS  IFILE     SQL, FIXED=110, KEY="D1-8,9-16,17-18,19-19"
.
PCDSAUDD  DIM       8      8        1    of change
PCDSAUDT  DIM       8      8        9    of change
PCDSAUDP  DIM       2      2        17   doing the change
PCDSAUDR  DIM       1      1        19   Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PCDSAUDS  FORM      1      2        20   Status
.                                          1 = Not printed
.                                          2 = Printed
PCDSAUDO  DIM       4      4        22   ID that did the change
.
.Data File
.
PCPDSCA1  IFILE     SQL, FIXED=85, KEY="U1-2,3-11,12-13"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
DPCDSTYP  DIM       2      2        1     Type of record
.                                                1 = Type of Condition
.                                                2 = Clinic Condition
.                                                3 = Health Pattern
.                                                4 = Response Pattern
.                                                5 = ABC PRN REST
.                                                6 = Nursing Diagnosis
.                                                7 = Outcome
.                                                8 = Related Factor
.                                                9 = Intervention
.                                               10 = Defining Characteristics
PCDSCODE  DIM       9      9        3     Code
DPCDSLIN  DIM       2      2        12    Description line number
PCDSDESC  DIM       60     60       14    Line description
PCDSSPAR  DIM       11     11       74    Spare variable
.
.End of Record                      85
.
. redefine form fields for keys
. -----------------------------
.
. NAME    TYPE   LENGTH     START LOC.     DESCRIPTION
. ----    ----   ------     ----------     -----------
PCDSTYPE  FORM      2      2        110   of record
PCDSLINE  FORM      2      2        112   line number
.******************************************************************************
