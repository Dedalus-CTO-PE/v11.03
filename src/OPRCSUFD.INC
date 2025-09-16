. *****************************************************************************
. *                                                                           *
. * Include Name  : OPRCSUFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Theatre                       *
. *                    Clinic session Usage                                   *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : oprcsuaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 16                                                    *
. *                                                                           *
. * Modifications : 27/12/1991    Justin Coates  (Modbury Changes)            *
. *                 Added OPCSBRKS                                            *
. *                 V9.07.01 13/09/2006 Peter Vela CAR 118228                 *
. *                 Added OPCSSTIM                                            *
. *****************************************************************************
.
OPRCSUA1  IFILE     SQL, FIXED=44, KEY="U1-6,7-12,13-13,14-16"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPCSDATE  DIM       6        6        1        Period date (CCYYMM)
OPCSDOCT  DIM       6        6        7        clinic/surgeon code        
OPCSTYPE  DIM       1        1        13       Type of sess. "B"ooked or "E"xtra
OPCSTIME  DIM       3        3        14       Time period (SP)               
OPCSBSES  FORM      6        4        17       Number of booked sessions
OPCSBTIM  FORM      6        4        21       Booked time - breaks           
OPCSUSES  FORM      6        4        25       Number of used sessions        
OPCSUTIM  FORM      6        4        29       Total time used 
OPCSBRKS  FORM      6        4        33       Total time allocated for breaks
OPCSSTIM  FORM      6        4        37       Session time used (shared)
OPCSSPAR  DIM       3        3        41       Spare Variable
.
.End of Record                       44
...............................................................................
