. *****************************************************************************
. *                                                                           *
. * Include Name  : OPRCSCFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Theatre                       *
. *                    Clinic session cancellation                            *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : oprcscaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 20                                                    *
. *                                                                           *
. * Modifications : 27/12/1991    Justin Coates  (Modbury Changes)            *
. *                 Added OPCCDURA,OPCCBRKT                                   *
. *****************************************************************************
.
OPRCSCA1  IFILE     SQL, FIXED=38, KEY="U1-6,7-12,13-13,14-16,17-17,18-20"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPCCDATE  DIM       6        6        1        Period date (CCYYMM)
OPCCDOCT  DIM       6        6        7        clinic/surgeon code        
OPCCTYPE  DIM       1        1        13       Type of sess. "B"ooked or "E"xtra
OPCCTIME  DIM       3        3        14       Time period (SP)   
DOPCCCTY  DIM       1        1        17       Type of code
.                                                     1 = Cancellation code (OC)
.                                                     2 = Delay code        (OD)
.                                                     3 = Overtime code     (OO)
OPCCCODE  DIM       3        3        18       Code (Cancell./Delay/Overtime)
OPCCNUMB  FORM      6        4        21       Number of times code used
OPCCDURA  FORM      6        4        25       Total time canc/delayed/overtime
OPCCBRKT  FORM      6        4        29       Total for breaks for canc. sess
OPCCSPAR  DIM       5        5        33       Spare Variable
.
.End of Record                       38
.
. redefine key variables
.
OPCCCTYP  FORM      1                          Type of code form feild
...............................................................................
