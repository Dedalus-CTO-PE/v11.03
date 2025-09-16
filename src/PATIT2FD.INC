.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATIT2FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    OLD PATIENT ITEM FILE                           *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : olditemn.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 15 , KEY 9                                  *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  *      V10.08.01  24/03/2016  Steve Armstrong  TSK 0813090           *
.  *                 Added PTITTACB and reduced length of PTITSPAR      *
.  **********************************************************************
.
.Data File Definitions
.---------------------
PATIT2M1   IFILE SQL, FIXED=272, KEY="U1-9"
PATIT2M2   IFILE SQL, FIXED=272, KEY="U10-15,1-9"
PATIT2M3   IFILE SQL, FIXED=272, KEY="U16-55,1-9"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
.
.          SAME FORMAT AS PATITMFD
.
