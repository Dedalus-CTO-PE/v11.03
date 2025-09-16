
. **********************************************************************
. *                                                                    *
. *     Include Name : JHSBF2FD.INC                                    *
. *                                                                    *
. *     Function     : File Definition include for                     *
. *                     OLD BED FEES FILE for Johns Hopkins            *
. *                                                                    *
. *     File Type    : SQL                                             *
. *                                                                    *
. *     File Name    : oldbfeaf.dat                                    *
. *                                                                    *
. *     Keys         : KEY 26                                          *
. *                                                                    *
. **********************************************************************
.
JHSBF2A1   IFILE SQL, FIXED=97, KEY="U1-3,4-9,10-17,18-20,21-23,24-26"
JHSBF2A2   IFILE SQL, FIXED=97, KEY="U1-3,4-9,18-20,21-23,10-17,24-26"
JHSBF2A3   IFILE SQL, FIXED=97, KEY="U4-9,10-17,1-3,18-20,21-23,24-26"   
.
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.      SAME FORMAT AS JHSBFEFD
.
