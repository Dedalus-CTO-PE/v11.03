.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HICMCIFD.INC                                  *
.  *                                                                      *
.  *  Function          :   MCI extract file counter                      *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hicmciaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY8                                          *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
HICMCIA1   IFILE SQL, FIXED=12, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCMCMCID  DIM         8       8       1   Minor Customer Id
HCMCCNTR  FORM        3       3       9   Next Counter
.
.End of Record                       12
