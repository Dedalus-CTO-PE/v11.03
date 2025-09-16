.*****************************************************************************
.*                           CHKDIGVR.INC                                    *
.* Date      :   16/11/2006                                                  *
.* Author    :   Steve Armstrong                                             *
.*               Variables used to calculate Singapore HRN check digit       *
.*****************************************************************************
.
. LOCAL VARIABLE DEFINITION
. -------------------------
ATOGCHAR  DIM       1[7]          * array for U/R characters (2-8)
ATOGFRM1  FORM      1[7]          * FORM 1 fields or U/R characters (2-8)
ATOGFRM2  FORM      2[7]          * FORM 2 fields for multiplied values
CHKDGCNT  FORM      1             * character count
CHKDGTOT  FORM      4             * field total after multiplication
CHKDGREM  FORM      2             * remainder after modulus 11 calculation
CHKDIGNO  DIM       9             * full HRN including check digit
.
.
. PROGRAM CONSTANTS
. -----------------
CHKDGST1  INIT      "JZIHGFEDCBA"
CHKDGST2  INIT      "XWUTRQPNMLK"
