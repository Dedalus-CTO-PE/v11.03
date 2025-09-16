. *****************************************************************************
. *                                                                           *
. * Include Name  : PATMASTD.INC                                              *
. *                                                                           *
. * Function      : CGI Parameters for PSTMASTM                               *
. *                                                                           *
. * Modifications :                                                           *
. *                                                                           *
. *****************************************************************************
.----------------------------------------------------------------------
. V10.11.02 22/11/2017  Thanh T.       TSK 0821710
.           Inscrease the size of the user name from 10 to 30
. V10.11.01 18/07/2017  Thanh T.       TSK 0821710
.           Audit Amission/outpatient visit/UR comments
.----------------------------------------------------------------------
.
. NAME    TYPE      LENGTH     DESCRIPTION
. ----    ----      ------     -----------
URCMTTYP  INIT      "001"      U/R Comment Type 
URCMLINE  DIM       70         U/R Comment Line 
URCMUSRN  DIM       30         U/R Comment User Name
URCMDATE  DIM       12         U/R Comment Date
URCMNOFS  FORM      3          Number of visit number to be shown
