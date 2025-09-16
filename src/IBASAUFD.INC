.  **********************************************************************
.  *                                                                    *
.  *     Include Name : IBASAUFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Common              *
.  *                    IBA Security Audit                              *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : ibasauaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 21                                          *
.  *                                                                    *
.  *     Modifications: 
.  **********************************************************************
.
IBASAUA1  IFILE     SQL, FIXED=74, KEY="U1-5,6-13,14-21"
IBASAUA2  IFILE     SQL, FIXED=74, KEY="U6-13,14-21,1-5"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
IBSAUSER  DIM       5        5        1        User Id
IBSADATE  DIM       8        8        6        Date of change (ccyymmdd)
IBSATIME  DIM       8        8        14       Time of change (hh:mm:ss)
IBSAPASS  DIM      20       20        22       User Password
IBSASPAR  DIM      30       30        44       Spare Variable
.
.End of Record                        74
.
