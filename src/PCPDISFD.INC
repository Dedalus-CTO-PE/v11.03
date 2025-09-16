. *****************************************************************************
. *                                                                           *
. * Include Name  : PCPDISFD.INC                                              *
. *                                                                           *
. * Function      : File Design include for Patient Care Plans                *
. *                 Discharges Table                                          *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : pcpdisaf.dat                                              *
. * Audit File    : pcpauddh.dat                                              *
. *                                                                           *
. * Keys          : KEY9                                                      *
. *                                                                           *
. * Programmer    : Bill Dew 12/12/89                                         *
. *                                                                           *
. * Modifications :                                                           *
. *      V9.02.00  30/12/2002 Tracey Nguyen srf 23497                         *
. *                Care Plans Port to V9                                      *
. *****************************************************************************
.
.Audit File Definition
.---------------------
PCPAUDDH  IFILE     SQL, FIXED=50, KEY="D1-8,9-16,17-18,19-19" 
.
.NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
.----    ----   ------  --------  ----------  -----------
PCDHAUDD  DIM       8       8           1      Date of change
PCDHAUDT  DIM       8       8           9      Time of change
PCDHAUDP  DIM       2       2          17      Port doing the change
PCDHAUDR  DIM       1       1          19      Record Type
.                                                A = Added record
.                                                B = Before any changes
.                                                C = After any changes
.                                                D = Deleted record
PCDHAUDS  FORM      1       2          20      Record Status
.                                                1 = Not printed
.                                                2 = Printed
PCDHAUDO  DIM       4       4          22      Operator ID that did the change
.
.Data File Definition
.--------------------
PCPDISA1  IFILE     SQL, FIXED=25, KEY="U1-8,9-9"
.
.NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
.----    ----   ------  --------  ----------  -----------
DPCDHADM  DIM       8        8          1         Admission number
DPCDHTYP  DIM       1        1          9         Type of record
.                                                   1=Discharge Criteria
.                                                   2=Discharge Planning
PCDHDCOD  DIM       4        4          10        Description number
PCDHSPAR  DIM       11       11         14        Spare variable
.
.End of Record                          25
.
. Redefine form fields for keys
. -----------------------------
. NAME    TYPE   LENGTH     START LOC.     DESCRIPTION
. ----    ----   ------     ----------     -----------
PCDHADMN  FORM      8            1         Admission number
PCDHTYPE  FORM      1            9         Type of record
.
