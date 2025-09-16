. *****************************************************************************
. *                                                                           *
. * Include Name  : OPROTSFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Theatre                       *
. *                    Operation Type Summary                                 *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : oprotsaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 12                                                    *
. *                                                                           *
. * Modifications : 27/12/1991    Justin Coates  (Modbury Changes)            *
. *                 added OPOTUSER to key                                     *
. *****************************************************************************
.
OPROTSA1  IFILE     SQL, FIXED=37, KEY="U1-8,9-11,12-12,13-15"
.
.Data file definition
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPOTDATE  DIM       8        8        1        Period date (CCYYMMDD)
OPOTTYPE  DIM       3        3        9        Operation type                
OPOTPERD  DIM       1        1        12       Summary breakdown code (A-L)     
OPOTUSER  DIM       3        3        13       User defined field
OPOTNCAS  FORM      6        4        16       Number of cases              
OPOTNOPR  FORM      6        4        20       Number of operations      
OPOTTIME  FORM      6        4        24       Theatre time used in operations
OPOTDOFW  FORM      1        2        28       Day of the week(1=mon,..,7=sun.)
OPOTSPAR  DIM       7        7        30       Spare Variable
.
.End of Record                       37
.
