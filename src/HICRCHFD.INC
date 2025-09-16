.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HICRCHFD.INC                                  *
.  *                                                                      *
.  *  Function          :   HIC Reconciliation Header Table               *
.  *                        (Type "S" segment)                            *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hicrchaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY3                                          *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                        V9.04.01 22/09/05 J.Tan     CAR 77215         *
.  *                        Added field for counter                       *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
HICRCHA1   IFILE SQL, FIXED=73, KEY="U1-3,4-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCRHRNUM  DIM       3         3       1   Run Number
HCRHCNTR  DIM       5         5       4   Counter
HCRHCNUM  FORM      3         3       9   Number of Claims
HCRHPMCI  DIM       8         8      12   Minor Customer ID
HCRHSAMT  FORM      12.2      8      20   Statement Amount
HCRHFNAM  DIM       30        30     28   Filename
HCRHSPAR  DIM       15        15     58   Spare Variable
.
. End of Record                      73
