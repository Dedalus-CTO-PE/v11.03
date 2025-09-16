.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PMSECOFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Eclipse Claims with Outstanding Final         *
.  *                        Assessment Reports                            *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   pmsecoaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY31, KEY39                                  *
.  *                                                                      *
.  *  Modifications     :   V9.11.01 16/12/2008 Peter Vela CAR 183976     *
.  *                                 Ported to 9.11.                      *
.  *                                 Increased Deleted by User to DIM 10. *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PMSECOA1   IFILE SQL, FIXED=87, KEY="U1-6,7-7,8-31"
PMSECOA2   IFILE SQL, FIXED=87, KEY="U49-56,7-7,8-31,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEOHFND  DIM       6        6        1   Health Fund/Claim Code
PMEODFLG  DIM       1        1        7   Deleted Status Flag
.                                            0 = Open
.                                            1 = Closed
PMEOTRID  DIM       24       24       8   Transaction Id
PMEOINVN  DIM       8        8       32   Invoice Number
PMEOBATN  DIM       8        8       40   Batch Number
PMEOCTYP  DIM       1        1       48   Claim Type
.                                          0 = Health Fund
.                                          1 = Claim Code (DVA)
PMEOCDAT  DIM       8        8       49   Created Date
PMEOUSER  DIM       10       10      57   User who Deleted
PMEOSPAR  DIM       20       20      67   Spare variable
.
.End of Record                       87
+
