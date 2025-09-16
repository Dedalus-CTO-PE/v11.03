.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PATFLTFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition Include for Patient           *
.  *                        Financial Letters                             *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   patfltrf.dat                                  * 
.  *  Audit File                                                          *
.  *                                                                      * 
.  *  Keys              :   KEY 6                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *      V10.07.01 21/10/2015  Ebon Clements CAR 320819                  *
.  *                Added PTFLACTV                                        *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PATFLET1   IFILE SQL, FIXED=100, KEY="U1-3,4-6"
PATFLET2   IFILE SQL, FIXED=100, KEY="U4-6,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPTFLLTN  DIM         3        3      1   Letter number
DPTFLLIN  DIM         3        3      4   Line number for letter
PTFLTEXT  DIM        70        70     7   Line of letter
PTFLLVAR  FORM        1        2     77   Variable present
.                                             1 = Yes, 2 = No
PTFLPBOT  FORM        2        2     79   Letter bottom margin
PTFLPTOP  FORM        2        2     81   Letter top margin
PTFLPPAG  FORM        3        3     83   Physical paper length (no. of lines)
PTFLPTAB  FORM        2        2     86   Letter left margin
PTFLACTV  DIM         1        1     88   Active
.                                         Blank or 0 = Active, 1 = Inactive
PTFLSPAR  DIM        11       11     89   Spare variable
.
.End of record                      100
.
. Redefine form fields from key
. -----------------------------
.
PTFLLTNO  FORM        3
PTFLLINO  FORM        3
