. ************************************************************************
. *                                                                      *
. *  Include Name      :   PATLCNFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Location Table                        *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   patlcnaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY8                                          *
. *                                                                      *
. *  Modifications     :                                                 *
. *      V9.11.01  06/01/2009  Peter Vela    CAR 183976                  *
. *                Added PTLNHOSP - Hospital Id                          *
. *      V9.11.00  21/11/2008  Ebon Clements CAR 183976                  *
. *                Created FD                                            *
. *                                                                      *
. ************************************************************************
.Data File Definition
.--------------------
PATLCNA1   IFILE SQL, FIXED=69, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTLNLOCN  DIM       8         8        1  Location
PTLNDESC  DIM       40        40       9  Description
PTLNACTV  DIM       1         1       49  Active Flag
.                                            A = Active
.                                            I = Inactive
PTLNHOSP  DIM       3         3       50  Hospital Id
PTLNSPAR  DIM       16        16      53  Spare Variable
.
.End of Record                        69
+
