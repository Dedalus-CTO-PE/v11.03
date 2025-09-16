.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : IBAPHNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Common              *
.  *                    Phone Listing Details                           *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : ibaphnaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY11                                           * 
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                    04/07/91  S. O'Gorman                           *
.  *                              Created FD                            *
.  *                    13/05/98  Jim Stathopoulos                      *
.  *                              Added new indexes                     *
.  *                    15/05/98  Jim Stathopoulos                      *
.  *                              Added new index                       *
.  *                                                                    *
.  **********************************************************************
.
IBAPHON1   IFILE     SQL, FIXED=118, KEY="U1-25,26-55,56-61"
IBAPHON2   IFILE     SQL, FIXED=118, KEY="U62-64,1-25,26-55,56-61"
IBAPHON3   IFILE     SQL, FIXED=118, KEY="U26-55,1-25,56-61"       
IBAPHON4   IFILE     SQL, FIXED=118, KEY="U56-61,1-25,26-55"       
IBAPHON5   IFILE     SQL, FIXED=118, KEY="U65-84,1-25,26-55,56-61"       
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
.
IBPHSNAM  DIM       25        25          1       Surname
IBPHGNAM  DIM       30        30         26       Given Name
IBPHEXTN  DIM        6         6         56       Extension
IBPHDEPT  DIM        3         3         62       Department (Code DZ)
IBPHTITL  DIM       20        20         65       Title
IBPHPGNM  DIM       12        12         85       Pager Number
IBPHPGCD  DIM        6         6         97       Pager Code
IBPHCONT  DIM       15        15        103       Contact Phone Number
.
.
.End of Record                          118
.
