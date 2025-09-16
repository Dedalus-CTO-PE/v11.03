. *****************************************************************************
. * Include Name  : PCPDBSFD.INC
. * Function      : File Design include for Patient Care Plans
. *                 Database Table
. * File Type     : SQL
. * File Name     : pcpdbsaf.dat
. * Audit Name    : pcpauddb.dat
. * Keys          : KEY20
. * Programmer    : Bill Dew 12/12/89
. * Modifications :                                                    
. *       V9.02.00  30/12/2002 Tracey Nguyen srf 23497               
. *                 r5.10 Care Plans Port to V9                       
. *----------------------------------------------------------------------------
. * Modifications : 28/03/1995   Helen Crick
. *                              Standardised FD
. *****************************************************************************
.
.Audit variables
.---------------
PCPAUDDB  IFILE     SQL, FIXED=55, KEY="D1-8,9-16,17-18,19-19"
.
PCDBAUDD  DIM       8      8        1     of change
PCDBAUDT  DIM       8      8        9     of change
PCDBAUDP  DIM       2      2        17    doing the change
PCDBAUDR  DIM       1      1        19    Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PCDBAUDS  FORM      1      2        20    Status
.                                          1 = Not printed
.                                          2 = Printed
PCDBAUDO  DIM       4      4        22    ID that did the change
.
.Data File
.
PCPDBSA1  IFILE     SQL, FIXED=30, KEY="U1-2,3-11,12-20"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
DPCDBTYP  DIM       2      2        1    Type of record
.                                      1 = Type of Condition/Clinic condition
.                                      2 = Clinic condition/nursing diagnosis
.                                      3 = health pattern/nursing diagnosis
.                                      4 = response pattern/nursing diagnosis
.                                      5 = ABC PRN REST/nursing diagnosis
.                                      6 = nursing diagnosis/Diff diagnosis
.                                      7 = nursing diagnosis/outcome
.                                      8 = nursing diagnosis/related factor
.                                      9 = nursing diagnosis/intervention
.                                     10 = nursing diagnosis/defining characters
PCDBCLSS  DIM       9      9        3    Classification Code
.                                                First type in the above pair
PCDBCODE  DIM       9      9        12    Sub - Code
.                                                Second type in the above pair
PCDBSPAR  DIM       9      9        21    Spare variable
.
.End of Record                      30
.
.
. NAME    TYPE   LENGTH     START LOC.     DESCRIPTION
. ----    ----   ------     ----------     -----------
PCDBTYPE  FORM      2      2        55    step number
.******************************************************************************
