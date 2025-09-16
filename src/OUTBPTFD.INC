. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTBPTFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients                        *
. *                 Booking Pathology Tests                                   *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outbptaf.dat       (site dependant)                       *
. *                                                                           *
. * Keys          : KEY10                                                     *
. *                                                                           *
. * Author        : Justin Coates      30/11/1995                             *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
OUTBPTA1  IFILE     SQL, FIXED=50, KEY="U1-8,9-10"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  --------------------------------------
DOTBPEVN  DIM       8           8      1  Outpatient Number
DOTBPCNT  DIM       2           2      9  Count
OTBPCODE  DIM       9           9     11  Pathology Test
OTBPSPAR  DIM       30         30     20  Spare variable
.End of Record                        50
.
FILBPTA1  INIT      "bptaf"
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  --------------------------------------
OTBPEVNT  FORM      8       Outpatient Number
OTBPCNT   FORM      2       Count of tests ordered
.
