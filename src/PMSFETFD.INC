. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSFETFD.INC                                  *
. *                                                                      *
. *  Function          :   Fees Estimate Text                            *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsfetaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY6                                          *
. *                                                                      *
. *  Modifications     :                                                 *
. *      V10.00.00  12/10/2010  Davin        CAR 225374                  *
. *                 Created FD                                           *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSFETA1   IFILE SQL, FIXED=117, KEY="U1-3,4-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMFETYPE  DIM       3         3       1   Fees Estimate Text Type (Cat FE)
PMFELINE  DIM       3         3       4   Comment Line Count
PMFETEXT  DIM       80        80      7   Comment Text Line
PMFESPAR  DIM       30        30     87   Spare Variable
.
.End of Record                      117
+
