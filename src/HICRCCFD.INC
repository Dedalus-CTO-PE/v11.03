.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HICRCCFD.INC                                  *
.  *                                                                      *
.  *  Function          :   HIC Reconciliation Claim Table                *
.  *                        (Type "X" segment)                            *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hicrccaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY5, KEY8                                    *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                        V9.04.01 22/09/05 J.Tan     CAR 77215         *
.  *                        Added field for counter                       *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
HICRCCA1   IFILE SQL, FIXED=76, KEY="U1-5,6-8,9-13"
HICRCCA2   IFILE SQL, FIXED=76, KEY="U6-8,9-13,1-5"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCRCBTCH  DIM       5         5       1   Batch Number
HCRCRNUM  DIM       3         3       6   Run Number
HCRCCNTR  DIM       5         5       9   Counter
HCRCDATE  DIM       8         8      14   Date of Transmission (ccyymmdd)
HCRCPYEE  DIM       10        10     22   Payee Provider Number
HCRCSPRV  DIM       10        10     32   Service Provider Number
HCRCBENA  FORM      12.2      8      42   Benefit Assigned
HCRCBENP  FORM      12.2      8      50   Benefit Paid
HCRCEXCN  FORM      4         3      58   Number of Exceptions
HCRCSPAR  DIM       15        15     61   Spare Variable
.
. End of Record                      76
