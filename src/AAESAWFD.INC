. *****************************************************************************
. *                                                                           *
. * Include Name  : AAESAWFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Accident and Emergency             *
. *                 School/Employer details                                   *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaesawaf.dat                                              *
. *                                                                           *
. * Keys          : KEY7 KEY37                                                *
. *                                                                           *
. * Author        : Justin Coates 04/08/1993                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
AAESAWA1  IFILE     SQL, FIXED=250, KEY="U1-1,2-7"
AAESAWA2  IFILE     SQL, FIXED=250, KEY="U1-1,8-37,2-7"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
AESWTYPE  DIM       1           1      1  Type of Code (E/S)
AESWCODE  DIM       6           6      2  Code
AESWNAME  DIM       30         30      8  Name of School/Work Place
AESWADD1  DIM       35         35     38  Address 1
AESWADD2  DIM       35         35     73  Address 2
AESWADD3  DIM       35         35    108  Address 3
AESWADD4  DIM       35         35    143  Address 4
AESWPOST  DIM       8           8    178  Postcode
AESWTELE  DIM       12         12    186  Phone number  
AESWCONT  DIM       30         30    198  Contact person
AESWSPAR  DIM       22         22    228  Spare variable
.End of Record                       250
.
. the following are variables for the help routine - aaesawds
.
AESWQTYP  DIM       1         * type of code to search for
AESWQNAM  DIM       30        * name to search for
AESWARRY  DIM       37[16]    * array for values
AESWQCNT  FORM      2         * count of displayed items
AESWQLIN  FORM      1         * which line 24 prompt
.
