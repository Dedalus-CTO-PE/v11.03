. 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : IBACODFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Common              *
.  *                    Codes Table                                     *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : ibacodef.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 5                                           *
.  *                                                                    *
.  *     Modifications: V5.00 15.08.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                  : V5.03 25.05.95 Paul Howells                     *
.  *                          Don't Define keys across fields           *
.  *                                                                    *
.  **********************************************************************
.
IBACODE1  IFILE      SQL, FIXED=26, KEY="U1-2,3-5"
IBACODE2  IFILE      SQL, FIXED=26, KEY="U3-5,6-25,1-2"
.
. Name     Type      Length  Physical   Start Loc.   Description
. ----     ----      ------  --------   ----------   -----------
PRXCATA     DIM          2      2             1      Type of Code to Table
PRXCODE     DIM          3      3             3      Actual Code
.
PRXDESC     DIM         20     20             6     Table Description
.End of Record                           26 
.
.
DEPT        DIM          2
DESC14      DIM          14
