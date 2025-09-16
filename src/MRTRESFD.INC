.  ***************************************************************************
.  *                                                                         *
.  *     Include Name : MRTRESFD.INC                                         *
.  *                                                                         *
.  *     Function     : File Definition include for Medical Records Tracking *
.  *                    Reservation                                          *
.  *                                                                         *
.  *     File Type    : SQL                                                  *
.  *                                                                         *
.  *     File Name    : mrtresaf.dat                                         *
.  *                                                                         *
.  *     Keys         : KEY 23                                               * 
.  *                  : KEY 31                                               *
.  *                                                                         *
.  *     Modifications:                                                      *
.  *     V10.02.01 27/05/2011  Mike Laming   CAR 240724                      *
.  *               Added MR Hospital ID MRRSRHOS                             *
.  *                                                                         *
.  ***************************************************************************
.
MRTRESA1   IFILE  SQL, FIXED=70, KEY="U1-10,11-18,19-23"
MRTRESA2   IFILE  SQL, FIXED=70, KEY="U38-45,11-18,19-23,1-10"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
.
MRRSKEY    DIM      10        10          1       Key to Reservation File
MRRSDATE   DIM       8         8         11       Date Required   (CCYYMMDD)
MRRSTIME   DIM       5         5         19       Time Required   (HH:MM)
MRRSDEPT   DIM       4         4         24       MR Location
MRRSREQS   DIM       6         6         28       Requestor
MRRSREAS   DIM       4         4         34       Reason for Movement
MRRSRESV   DIM       8         8         38       Reservation Date (CCYYMMDD)
MRRSRHOS   DIM       3         3         46       MR Hospital ID
MRRSSPAR   DIM      21        21         49       Spare Variable
.
.End of Record                           70
.
.
.
.
