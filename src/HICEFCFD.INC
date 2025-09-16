.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HICEFCFD.INC                                  *
.  *                                                                      *
.  *  Function          :   HIC Reconciliation EFT Payment Claim Summary  *
.  *                        Table (Type "C" segment)                      *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hicefcaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY8                                          *
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
HICEFCA1   IFILE SQL, FIXED=45, KEY="U1-5,6-8,9-13"
HICEFCA2   IFILE SQL, FIXED=45, KEY="U6-8,9-13,1-5"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCECBTCH  DIM       5         5       1   Batch Number
HCECRNUM  DIM       3         3       6   Run Number
HCECCNTR  DIM       5         5       9   Counter
HCECTDAT  DIM       8         8      14   Date of Transmission (ccyymmdd)
HCECDAMT  FORM      12.2      8      22   Claim Deposit Amount
HCECSPAR  DIM       15        15     30   Spare Variable
.
.End of Record                       45
