.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATLISFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Level of Insurance                              *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patlisaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 14                                          * 
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.
PATLISA1  IFILE     SQL, FIXED=40, KEY="U1-6,7-14"      *KEY14
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
PTLIFUND  DIM       6        6        1       Health Fund Code        
PTLITABL  DIM       8        8        7       Health Fund Table
PTLILINS  DIM       1        1       15       Level of Insurance
PTLISPAR  DIM      24       24       16       Spare Variable
.
.End of Record                       40
.
