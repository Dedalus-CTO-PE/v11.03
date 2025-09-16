.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATFIGFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    GST Financial Summary                           *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patfigaf.dat  (GST financial file)              *
.  *                                                                    *
.  *     Keys         : KEY 28                                          *
.  *                                                                    *
.  *     Modification :                                                 *
.  *        V9.11.01  31/12/2008   Steve Armstrong   CAR 183976         *
.  *                  Added EHXXXXXX & ECXXX to FINCODE for Eclipse     *
.  *                  payments                                          *
.  *        V9.04.02  03/08/05 J.Tan    CAR 62750                       *
.  *                  Removed redefined amount variables                *
.  *        V9.04.01  17/08/2004 Lina Vo CAR 52746                      *
.  *                  Added Hospital ID and 2nd index with Hospital ID  *
.  *                  first. Changed 1st index to include Hospital ID.  *
.  *                                                                    *
.  **********************************************************************
.
PATFIGA1   IFILE SQL, FIXED=156, KEY="U1-1,2-7,8-11,12-12,13-25,146-148"
PATFIGA2   IFILE SQL, FIXED=156, KEY="U146-148,1-1,2-7,8-11,12-12,13-25"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
.      SAME FORMAT AS PATFINFD
