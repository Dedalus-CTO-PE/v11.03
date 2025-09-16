.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   ALLHHDFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Allied Health History Header File             *
.  *                        (VINAH extraction data)                       *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   allhhdaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY20                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  *  V10.13.01 03/10/2018 Ebon Clements    TSK 0859073                   *
.  *            Added index 2                                             *
.  *      V9.12.01  Steve Armstrong   CAR 207550                          *
.  *                Added ALHDSTAT value of "6" (Purged by DHS)           *
.  ************************************************************************
.
.Data File Definition
.--------------------
ALLHHDA1   IFILE SQL, FIXED=68, KEY="U1-20"
ALLHHDA2   IFILE SQL, FIXED=68, KEY="U21-28,1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALHHFNAM  DIM       20       20       1   Extract Filename
ALHHSDAT  DIM       8         8      21   Start Date of Period (ccyymmdd)
ALHHEDAT  DIM       8         8      29   End   Date of Period (ccyymmdd)
ALHHSTAT  DIM       1         1      37   File Status
.                                            0 = Extracted
.                                            1 = Submitted
.                                            2 = Rejected
.                                            3 = Accepted with rejections
.                                            4 = Accepted
.                                            5 = Rejections dealt with
.                                            6 = Purged (by DHS)
.
ALHHSPAR  DIM       30       30      38   Spare Variable
.
.End of Record                       68
