. ************************************************************************
. *                                                                      *
. *  Include Name      :   PATCRTFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Certificate Table                     *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   patcrtaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY16                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *      V6.16.00  06/03/2008  Davin         CAR 163420                  *
. *                Created FD                                            *
. *                                                                      *
. ************************************************************************
.Data File Definition
.--------------------
PATCRTA1   IFILE SQL, FIXED=115, KEY="U1-8,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCILOCN  DIM       8         8        1  Location
PTCIFDTE  DIM       8         8        9  From Date (ccyymmdd)
PTCIIDEN  DIM       10        10      17  Identifier
PTCITDTE  DIM       8         8       27  To Date (ccyymmdd)
PTCISNID  DIM       60        60      35  Sender Id (email)
PTCISPAR  DIM       20        20      95  Spare Variable
.
.End of record                       115
+
