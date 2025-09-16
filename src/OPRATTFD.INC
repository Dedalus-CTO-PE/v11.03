.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRATTFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Doctor attendence Usage                         *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprattaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 12                                          *
.  *                                                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.
OPRATTA1  IFILE     SQL, FIXED=40, KEY="U1-6,7-12"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPATDATE  DIM       6        6        1        Period date (CCYYMM)
OPATDOCT  DIM       6        6        7        Doctors code        
OPATOPER  FORM      6        4        13       Number of times Opertating Surg.
OPATASST  FORM      6        4        17       Number of times assistant      
OPATANAE  FORM      6        4        21       Number of times aneastetist    
OPATSPAR  DIM       15       15       25       Spare Variable
.
.End of Record                        40
.
