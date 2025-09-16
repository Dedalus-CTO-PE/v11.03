.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATIT1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    NEW PATIENT ITEM FILE                           *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : newitemn.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 15 , KEY 9                                  *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V10.08.01  24/03/2016  Steve Armstrong  TSK 0813090           *
.  *                 Added PTITTACB and reduced length of PTITSPAR      *
.  *      V9.11.02   05/01/2009 Ebon Clements CAR 183976                *
.  *                 Added PTITSERV - DVA Service Code                  *
.  *      V9.11.01   21/11/2008 Ebon Clements CAR 183976                *
.  *                 Added PTITTCCD - Theatre Category Code             *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definitions
.---------------------
PATIT1M1   IFILE SQL, FIXED=272, KEY="U1-9"
PATIT1M2   IFILE SQL, FIXED=272, KEY="U10-15,1-9"
PATIT1M3   IFILE SQL, FIXED=272, KEY="U16-55,1-9"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
.
.          SAME FORMAT AS PATITMFD
.
