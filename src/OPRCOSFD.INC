.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRCOSFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    Clinic operation Summary                        *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprcosaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 21                                          *
.  *                                                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.
OPRCOSA1  IFILE     SQL, FIXED=55, KEY="U1-6,7-12,13-21"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPCPDATE  DIM       6        6        1        Period date (CCYYMM)
OPCPDOCT  DIM       6        6        7        clinic/surgeon code        
OPCPOPER  DIM       9        9        13       Operation code(MBS or ICD9CM)    
OPCPTTIM  FORM      6        4        22       Total time used on operation
OPCPLTIM  FORM      6        4        26       Minimum time for operation
OPCPHTIM  FORM      6        4        30       Maximum time for operation   
OPCPNCAS  FORM      6        4        34       Number of cases
OPCPNOPR  FORM      6        4        38       Number of operations
OPCPSPAR  DIM       13       13       42       Spare Variable
.
.End of Record                        55
