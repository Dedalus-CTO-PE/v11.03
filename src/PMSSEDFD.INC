. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSSEDFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Eligibility Services Details Table    *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmssedaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY44                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *        V9.11.00  23/01/2009  Davin           CAR xxxxxx              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSSEDA1   IFILE SQL, FIXED=155, KEY="U1-20,21-23,24-34,35-37,38-41,42-44"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSEARID  DIM       20        20      1   Account Reference ID
PMSERPTC  DIM       3         3      21   Report counter (right just.)
PMSESCOD  DIM       11        11     24   Service Code
PMSESRVC  DIM       3         3      35   Service counter (right justified)
PMSESFEC  DIM       4         4      38   Service Fund Explanation Code
PMSESEXC  DIM       3         3      42   Service explanation code counter (rj)
PMSESFET  DIM       80        80     45   Service Fund Explanation Text
PMSESPAR  DIM       30        30    125   Spare Variable
.
.End of Record                      155
+
