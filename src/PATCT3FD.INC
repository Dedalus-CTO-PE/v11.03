.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCT3FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    OLD DRG/CASEMIX THEATRE FEE                     *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oldctfaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 33                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  **********************************************************************
.
PATCT2A1   IFILE SQL, FIXED=61, KEY="U44-49,1-3,4-9,10-12,13-21,22-24,25-25,26-27"
PATCT2A2   IFILE SQL, FIXED=61, KEY="U44-49,1-3,4-9,10-12,22-24,13-21,25-25,26-27"
PATCT2A3   IFILE SQL, FIXED=61, KEY="U26-27,1-3,4-9,10-12,22-24,13-21,25-25,44-49"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
.
.        SAME FORMAT AS PATCTFFD
.
