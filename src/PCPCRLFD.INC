. *****************************************************************************
. *  Include Name  : PCPCRLFD.INC
. *  Function      : File Design include for Patient Care Plans
. *                  Condition Related Factors Table
. *  File Type     : SQL
. *  File Name     : pcpcrlaf.dat
. *  Audit Name    : pcpaudcr.dat
. *  Keys          : KEY36
. *  Programmer    : Bill Dew 12/12/89
. *  Modifications :                                        
. *        V9.02.00  30/12/2002 Tracey Nguyen srf 23497    
. *                  r5.10 Care Plans Port to V9               
. *----------------------------------------------------------------------------
. *  Modifications : 28/03/1995  Helen Crick
. *                              Standardised FD
. *****************************************************************************
.
.Audit variables
.---------------
PCPAUDCR  IFILE     SQL, FIXED=75, KEY="D1-8,9-16,17-18,19-19" 
.
PCCRAUDD  DIM       8      8        1     of change
PCCRAUDT  DIM       8      8        9     of change
PCCRAUDP  DIM       2      2        17    doing the change
PCCRAUDR  DIM       1      1        19    Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PCCRAUDS  FORM      1      2        20    Status
.                                          1 = Not printed
.                                          2 = Printed
PCCRAUDO  DIM       4      4        22    ID that did the change
.
.Data File
.
PCPCRLA1  IFILE     SQL, FIXED=50, KEY="U1-9,10-18,19-27,28-36"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
PCCRCTYP  DIM       9      9        1    Type of clinic condition
PCCRCLIN  DIM       9      9        10    Clinic condition
PCCRDIAG  DIM       9      9        19    Nursing Diagnosis
PCCRRELT  DIM       9      9        28    Related factors
PCCRSPAR  DIM       13     13       37    Spare variable
.
.End of Record                      50
.
. redefine form fields for keys
. -----------------------------
.
. NAME    TYPE   LENGTH     START LOC.     DESCRIPTION
. ----    ----   ------     ----------     -----------
.******************************************************************************
