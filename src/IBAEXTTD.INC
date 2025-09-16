. *****************************************************************************
. *                                                                           *
. * Include Name  : IBAEXTTD.INC                                              *
. *                                                                           *
. * Function      : CGI Parameters for Common Call Extansion Table (PABX)     *
. *                                                                           *
. * Modifications :                                                           *
. *       V9.03.00  24.05.2004  Sylvek Litewka  CAR 49527                     * 
. *                 Created include.                                          *
. *                                                                           *
. *****************************************************************************
.
. NAME    TYPE      LENGTH     DESCRIPTION
. ----    ----      ------     -----------
IBEXT001  DIM       4          * Extension Number
IBEXT002  DIM       20         * Description
IBEXT003  DIM       3          * Charge Type  (Cat "CY")
IBEXT004  DIM       2          * Extension Type
IBEXT005  DIM       8          * Debtor code (Account Receivable)
IBEXT006  DIM       3          * Phone Type (Cat "XV")
IBEXT007  DIM       3          * Access Level Enable (Cat "XW")
IBEXT008  DIM       3          * Service Level (Cat "XX")
IBEXT009  DIM       2          * Tenant Number
IBEXT010  DIM       3          * Access Level Disable (Cat "XW")
