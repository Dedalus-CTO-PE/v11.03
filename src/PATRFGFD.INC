.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATRFGFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    GST Financial Lumpsum Revenue breakdown         *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patrfgaf.dat  (GST financial file)              *
.  *                                                                    *
.  *     Keys         : KEY 28                                          *
.  *                                                                    *
.  *     Modification :                                                 *
.  **********************************************************************
.
PATRFGA1   IFILE SQL, FIXED=156, KEY="U1-1,2-7,8-11,12-12,13-25,146-148"
PATRFGA2   IFILE SQL, FIXED=156, KEY="U146-148,1-1,2-7,8-11,12-12,13-25"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
.      SAME FORMAT AS PATRFNFD ( GST Amount of Lumpsum Revenue breakdown)
