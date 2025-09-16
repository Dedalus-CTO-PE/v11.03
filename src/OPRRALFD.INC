.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRRALFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Reallocated session Details                     *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprralaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 30                                          *
.  *                                                                    *
.  *                                                                    *
.  *     Modifications: V9.07.01 12/09/2006 Peter Vela CAR 118228       *
.  *                             Created FD and IO. Ported from 6.14    *
.  **********************************************************************
.
OPRRALA1  IFILE     SQL, FIXED=97, KEY="U1-8,9-13,14-19,20-24,25-30"
OPRRALA2  IFILE     SQL, FIXED=97, KEY="U1-8,20-24,25-30,9-13,14-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPRLDATE  DIM       8        8        1        Session date
OPRLSTOR  DIM       5        5        9        Start time of original session
OPRLSUOR  DIM       6        6        14       Surgeon of original session
OPRLSTNW  DIM       5        5        20       Start time of new session
OPRLSUNW  DIM       6        6        25       Surgeon of new session
OPRLOVST  DIM       5        5        31       Overlap start time 
OPRLOVEN  DIM       5        5        36       Overlap end time
OPRLCUID  DIM      10       10        41       User ID
OPRLCDAT  DIM       8        8        51       Creation Date
OPRLCTIM  DIM       8        8        59       Creation Time
OPRLSPAR  DIM      30       30        67       Spare Variable
.
.End of Record                        97
