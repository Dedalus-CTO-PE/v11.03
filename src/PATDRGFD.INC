.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATDRGFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Period Date Range                               *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patdrgaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6, KEY 14, KEY 6                            *
.  *                                                                    *
.  *     Modifications: V5.00 04/07/89 Graeme Williams (I.B.A)          *
.  *                          Write include for release V5.01.01        *
.  *                                                                    *
.  **********************************************************************
.
PATDRGA1   IFILE SQL, FIXED=71, KEY="U17-20,21-22"
PATDRGA2   IFILE SQL, FIXED=71, KEY="U9-16,17-20,21-22"
PATDRGA3   IFILE SQL, FIXED=71, KEY="U23-26,27-28"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DRGFDTE    DIM       8           8        1       Fromdate for period(CCYYMMDD)
DRGTDTE    DIM       8           8        9       Todate for period  (CCYYMMDD)
DRGYR      DIM       4           4       17       Financial Year (CCYY)
DRGNUM     DIM       2           2       21       Financial Period code (MM)
DRGCYR     DIM       4           4       23       Calendar Year (CCYY)
DRGCNUM    DIM       2           2       27       Calendar Period code (MM)
DRGLDSC    DIM       20          20      29       Long Description
DRGMDSC    DIM       9           9       49       Medium Description
DRGSDSC    DIM       3           3       58       Short Description
DRGSPAR    DIM       10          10      61       Spare Variable
.
.End of Record                           71
