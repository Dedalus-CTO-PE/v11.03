.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRSOSFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Surgeon operation Summary                       *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprsosaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 21                                          *
.  *                                                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                    V9.03.01 29/07/2004 Peter Vela     CAR 51685    *
.  *                             Added 2nd Index for IBAOPR77           *
.  **********************************************************************
.
OPRSOSA1  IFILE     SQL, FIXED=55, KEY="U1-6,7-12,13-21"
OPRSOSA2  IFILE     SQL, FIXED=55, KEY="U1-6,13-21,7-12"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPSPDATE  DIM       6        6        1        Period date (CCYYMM)
OPSPDOCT  DIM       6        6        7        Operating surgeon code        
OPSPOPER  DIM       9        9        13       Operation code(MBS or ICD9CM)    
OPSPTTIM  FORM      6        4        22       Total time used on operation
OPSPLTIM  FORM      6        4        26       Minimum time for operation
OPSPHTIM  FORM      6        4        30       Maximum time for operation   
OPSPNCAS  FORM      6        4        34       Number of cases
OPSPNOPR  FORM      6        4        38       Number of operations
OPSPSPAR  DIM       13       13       42       Spare Variable
.
.End of Record                        55
