.  **********************************************************************
.  *                                                                    *
.  *     Include Name : RCPREGFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Receipting          *
.  *                    Register Details                                *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : rcpregaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 3 , KEY 6                                   *
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.  * V10.04.01 03/01/2014  Don Nguyen    CAR 294434                     *
.  *           Moved RCRECSUR out of spare variable                     *
.  * V10.03.01 17/04/2012  J.Tan         CAR 252226                     *
.  *           Added Register for Credit Card Surcharge in spare var.   *
.  * V10.02.01 16/07/2011  J.Tan         CAR 244159                     *
.  *           Added a register value 89 for Credit Card surcharge      *
.  * V9.08.01  16/05/2007  J.Tan         CAR 140282                     *
.  *           Added new fields for Debtors and GST Control Account     *
.  * V9.04.02  24/05/2003  Mike Laming   CAR 58556                      *
.  *           1) Add fourth index RCPREGA4 based on Description REGDESC*
.  *           2) Add Activity Indicator REGACTIV (0(or blank)=Active)  *
.  * V9.04.01  17/08/2004  Lina Vo       CAR 52746                      *
.  *           Added Hospital ID                                        *
.  **********************************************************************
.  * V9.03.05  18/05/2004  Lina Vo       CAR 49781                      *
.  *           Changed Deposit System descriptions                      *
.  * V9.03.04  19/01/2004 Lina Vo          CAR 44073                    *
.  *           Changed REGISTRG to be DIM field of REGIBACD.            *
.  * V9.03.03  18/12/2003 Lina Vo          CAR 44073                    *
.  *           Added 3rd index with register group for input            *
.  *           receipts.                                                *
.  * V9.03.02  03/12/2003 Jill Habasque                                 *
.  *           Removed register 93 and 6, added 90 and 91               *
.  * V9.03.01  15.10.2003 Ebon Clements  CAR 44094                      *
.  *           Added REGISTRG                                           *
.  * V5.09     13.12.2000 Charles Handaya                               *
.  *           Added New System Code  92 - GST Sundry Cash Sales        *
.  *           Added New Field  REGGENDS - General Ledger suspense A/C  *
.  *           Added New Field    REGGST - GST Code                     *
.  *           (part of BAS Statement Modification)                     *
.  **********************************************************************
.  *                    V5.01.00  20/01/92  DIG                         *
.  *                              Ported from release 5                 *
.  *      V5.07                                                         *
.  *                16/09/1999  Charles Handaya                         *
.  *                Added new IBA System Code - 6 = Nursing Home        *
.  *                                                                    *
.  **********************************************************************
.
RCPREGA1    IFILE   SQL, FIXED=202, KEY="U1-3"
RCPREGA2    IFILE   SQL, FIXED=202, KEY="U82-84,1-3"
RCPREGA3    IFILE   SQL, FIXED=202, KEY="U118-119,1-3"
RCPREGA4    IFILE   SQL, FIXED=202, KEY="U4-38,1-3"                    *I-58556
.
.NAME       TYPE     LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----     ------  --------   -----     -----------
REGCODE      DIM          3      3          1     REGISTER CODE
REGDESC      DIM         35     35          4     DESCRIPTION
REGCHQCD     DIM         15     15         39     CHEQUE ACCOUNT CODE
REGGENLD     DIM         14     14         54     GENERAL LEDGER INCOME A/C
REGGENBK     DIM         14     14         68     GENERAL LEDGER CONTROL A/C
REGGROUP     DIM          3      3         82     GROUP CODE
REGIBACD     FORM         2      2         85     IBA SYSTEM CODE
.                                                   1 = Patient Billing
.                                                   2 = Private Practice
.                                                   4 = Medical Services
.                                                   5 = Sundry Debtors
.                                                  89 = Credit Card Surcharge
.                                                  90 = EMR Deposits 
.                                                  91 = OUT Deposits 
.                                                  92 = GST Sundry Cash Sales
.                                                  94 = Sundry Debtor Rec.
.                                                  95 = Sundry Cash Sales
.                                                  96 = PRI Deposits 
.                                                  97 = IP Deposits 
.                                                  98 = Internal Receipts
.                                                  99 = Suspense
REGSUNDT     FORM         2      2         87     SUNDRY DEBTORS LEDGER NUMBER
REGDISS      DIM          5      5         89     GL DISSECTION CODE
REGRESP      DIM          4      4         94     GL RESPONSIBILITY CODE
REGGENDS     DIM         14     14         98     General ledger suspense A/C
REGGST       DIM          6      6        112     GST Code
REGISTRG     DIM          2      2        118     DIM field of REGIBACD       
REGHOSP      DIM          3      3        120     Hospital ID (pathspaf)
REGACTIV     DIM          1      1        123     Activity Indicator   *I-58556
.                                                 0(or blank)=Active 1=Inactive
REGGENDB     DIM         14     14        124     G/L Debtors Control A/C
REGGENGS     DIM         14     14        138     G/L GST Control A/C
RCRECSUR     DIM          3      3        152     Reg.for Credit Card Surcharge
REGSPARE     DIM         47     47        155     Spare                *C-58556
.
.End of Record                            202
.
SAVGROUP     DIM          3
.
.The following variables are stored in the spare variable
.
.
