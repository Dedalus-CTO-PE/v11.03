. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTBRTFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients                        *
. *                 Booking Radiology Tests                                   *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outbrtaf.dat       (site dependant)                       *
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
OUTBRTA1  IFILE     SQL, FIXED=50, KEY="U1-8,9-10"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  --------------------------------------
DOTBREVN  DIM       8           8      1  Outpatient Number
DOTBRCNT  DIM       2           2      9  Count
OTBRCODE  DIM       9           9     11  Radiology Test
OTBRSPAR  DIM       30         30     20  Spare variable
.End of Record                        50
.
FILBRTA1  INIT      "brtaf"
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  --------------------------------------
OTBREVNT  FORM      8       Outpatient Number
OTBRCNT   FORM      2       Count of tests ordered
.
