.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HICEFAFD.INC                                  *
.  *                                                                      *
.  *  Function          :   HIC EFT Payment Transmission Header Table     *
.  *                        (Type "A" segment)                            *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hicefaaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY3                                          *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                       V9.05.B00 02/03/06 J.Tan     CAR 96072         *
.  *                        Added second index                            *
.  *                        V9.04.01 22/09/05 J.Tan     CAR 77215         *
.  *                        Added field for counter                       *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
HICEFAA1   IFILE SQL, FIXED=81, KEY="U1-3,4-8"
HICEFAA2   IFILE SQL, FIXED=81, KEY="U28-35,1-3,4-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCEARNUM  DIM       3         3       1   Run Number
HCEACNTR  DIM       5         5       4   Counter
HCEAPAYN  FORM      3         3       9   Number of payments statements
HCEAPMCI  DIM       8         8      12   Minor Customer ID
HCEATAMT  FORM      12.2      8      20   Total Deposit Amount
HCEAPDAT  DIM       8         8      28   Payment Date (ccyymmdd)
HCEAFNAM  DIM       30        30     36   Filename
HCEASPAR  DIM       15        15     66   Spare Variable
.
.End of Record                       81
