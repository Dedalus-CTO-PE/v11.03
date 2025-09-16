.  ***************************************************************************
.  *                                                                         *
.  *     Include Name : RCPCIDFD.INC                                         *
.  *                                                                         *
.  *     Function     : File Definition include for Receipting               *
.  *                    Cashier Id Details                                   *
.  *                                                                         *
.  *     File Type    : SQL                                                  *
.  *                                                                         *
.  *     File Name    : rcpcidaf.dat                                         *
.  *                                                                         *
.  *     Keys         : KEY 6                                                *
.  *                                                                         *
.  *     Modifications:                                                      *
.  *-------------------------------------------------------------------------*
.  *      V11.03.01 06/03/2023  Thanh T.       TSK 0917199                   *
.  *                Added RCCI3PPS - 3rd Party Payment Source                *  
.  *-------------------------------------------------------------------------*
.  *      V10.04.01 27/12/2013  Patrick Adair  CAR 294442                    *
.  *                Moved RCCICCRD RCCIINVR RCCIDEPR out of spare variable   *
.  *      V10.03.02 12/04/2012  J.Tan          CAR 252226                    *
.  *                Added Default registers
.  *      V10.03.01 15/11/2011  Mike Laming    CAR 246107                    *
.  *                Added RCCIACTV (Activity flag)                           *
.  *      V9.03.01  04/12/2003 Ebon Clements   CAR 43981                     *
.  *                Added RCCIHOSP and RCCICHQA                              *
.  *      V5.01.00  20/01/92  DIG                                            *
.  *                Ported from release 5                                    *
.  *                                                                         *
.  ***************************************************************************
.
RCPCIDA1    IFILE   SQL, FIXED=131, KEY="U1-6"
.
.NAME       TYPE     LENGTH   PHYSICAL   START     DESCRIPTION
.----       ----     ------   --------   -----     -----------
RCPCASH      DIM          6       6          1     CASHIER DRAWER CODE
RCPPASS      DIM          6       6          7     PASSWORD   
RCPSUR       DIM         20      20         13     LINE 1                   
RCPGIVEN     DIM         20      20         33     LINE 2
RCPSECUR     FORM         1       2         53     SECURITY CODE
RCCIHOSP     DIM          3       3         55     HOSP CODE (from pathspaf)
RCCICHQA     DIM          15      15        58     DEFAULT CHEQUE ACC NUMBER
RCCIACTV     DIM          1       1         73     Activity Flag (1=Inactive)
RCCICCRD     DIM          1       1         74     Charging Credit Card Surchrg
.                                                  Blank or 0=Yes (default) 1=No
RCCIINVR     DIM          3       3         75     Default Invoice Rcp.Register
RCCIDEPR     DIM          3       3         78     Default Deposit Rcp.Register
RCCI3PPS     DIM          6       6         81     3rd Party Payment Source
RCCISPAR     DIM          44      44        87     SPARE
.
.End of Record                             131
.
