. **********************************************************************
. *                                                                    *
. *     Include Name : OPRUAVFD.INC                                    *
. *                                                                    *
. *     Function     : File Definition include for Theatre             *
. *                    Unavailable Theatre                             *
. *                                                                    *
. *     File Type    : SQL                                             *
. *                                                                    *
. *     File Name    : opruavaf.dat                                    *
. *                                                                    *
. *     Keys         : KEY 19                                          *
. *                                                                    *
. *                                                                    *
. *     Modifications:                                                 *
. *         V5.07.00   26/10/1999  Pat Dirito                          * 
. *                    Ported form 6.06                                *
. **********************************************************************
.
OPRUAVA1  IFILE     SQL, FIXED=61, KEY="U1-6,7-14,15-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPUATHET  DIM       6        6        1        Theatre Code
OPUADATE  DIM       8        8        7        Date unavailable
OPUASTIM  DIM       5        5        15       Time Unavailable From (Start)
OPUAETIM  DIM       5        5        20       Time Unavailable To (End)
OPAUSPAR  DIM       36       36       25       Spare Variable
.
.End of Record                        61
.
