. *****************************************************************************
. * Include Name  : OPRCTSFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Theatre                       *
. *                 Clinic Code Summary                                       *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : oprctsaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 18                                                    *
. *                                                                           *
. * Author        : Justin Coates      27/12/1991                             *
. *                                                                           *
. * Modifications :                                                           *
. *                                                                           *
. *****************************************************************************
.
OPRCTSA1  IFILE     SQL, FIXED=40, KEY="U1-8,9-14,15-15,16-18"
.
.Data file definition
.--------------------
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPCTDATE  DIM       8        8        1        Period date (CCYYMMDD)
OPCTCLIN  DIM       6        6        9        Clinic/Surgeon code           
OPCTPERD  DIM       1        1        15       Summary breakdown code (A-L)     
OPCTUSER  DIM       3        3        18       User Defined code
OPCTNCAS  FORM      6        4        19       Number of cases              
OPCTNOPR  FORM      6        4        23       Number of operations      
OPCTTIME  FORM      6        4        27       Theatre time used in operations
OPCTDOFW  FORM      1        2        31       Day of the week(1=mon,..,7=sun.)
OPCTSPAR  DIM       7        7        33       Spare Variable
.
.End of Record                       40
.
