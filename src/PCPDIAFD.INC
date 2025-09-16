. *****************************************************************************
. * Include Name  : PCPDIAFD.INC
. * Function      : File Design include for Patient Care Plans
. *                 Patient Nursing Diagnosis Table.
. * File Type     : SQL
. * File Name     : pcpdiaaf.dat
. * Audit Name    : pcpauddi.dat
. * Keys          : KEY33, KEY10, KEY19
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
PCPAUDDI  IFILE     SQL, FIXED=111, KEY="D1-8,9-16,17-18,19-19" 
.
PCDIAUDD  DIM       8      8        1    of change
PCDIAUDT  DIM       8      8        9    of change
PCDIAUDP  DIM       2      2        17   doing the change
PCDIAUDR  DIM       1      1        19   Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PCDIAUDS  FORM      1      2        20   Status
.                                          1 = Not printed
.                                          2 = Printed
PCDIAUDO  DIM       4      4        22   ID that did the change
.
.Data File
.
PCPDIAA1  IFILE     SQL, FIXED=86, KEY="U1-8,9-16,17-24,25-33"
PCPDIAA2  IFILE     SQL, FIXED=86, KEY="U34-43"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
DPCDIADM  DIM       8      8        1     Admission number of patient
PCDIDATE  DIM       8      8        9     Date plan was made (CCYYMMDD)
PCDITIME  DIM       8      8        17    Time plan was made (HH:MM:SS)
PCDIDIAG  DIM       9      9        25    Nursing Diagnosis
PCDIUNIQ  DIM       10     10       34    Unique key
PCDICTYP  DIM       9      9        44    Type of clinic condition
PCDICLIN  DIM       9      9        53    Clinic condition OR
.                                         Health Pattern   OR
.                                         Response Pattern OR
.                                         ABC PRN REST         code
PCDINURS  DIM       6      6        62    Nurse Code
PCDIDCOD  DIM       4      4        68    Description Number
PCDISTAT  FORM      1      2        72    Care Plan Status
.                                                1=Active
.                                                2=Non-Active
PCDISPAR  DIM       12     12       74    Spare variable
.
.End of Record                      86
.
.
. redefine form fields for keys
. -----------------------------
.
. NAME    TYPE   LENGTH     START LOC.     DESCRIPTION
. ----    ----   ------     ----------     -----------
PCDIADMN  FORM      8      5        111   number of patient
.******************************************************************************
