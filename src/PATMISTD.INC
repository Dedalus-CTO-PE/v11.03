. *****************************************************************************
. *                                                                           *
. * Include Name  : PATMISTD.INC                                              *
. *                                                                           *
. * Function      : CGI Parameters for PSTMISTM                               *
. *                                                                           *
. * Modifications :                                                           *
. *                                                                           *
. *****************************************************************************
.----------------------------------------------------------------------
. V10.11.02 22/11/2017  Thanh T.       TSK 0821710
.           Inscrease the size of the user name from 10 to 30
. V10.11.01 18/07/2017  Thanh T.       TSK 0821710
.           Audit Amission/outpatient visit comments
.----------------------------------------------------------------------
.
. NAME    TYPE      LENGTH     DESCRIPTION
. ----    ----      ------     -----------
VSCMTTYP  INIT      "013"      Visit Comment Type 
VSCMLINE  DIM       70         Visit Comment Line 
VSCMUSRN  DIM       30         Visit Comment User Name
VSCMDATE  DIM       12         Visit Comment Date
VSCMNOFS  FORM      3          Number of visit number to be shown
