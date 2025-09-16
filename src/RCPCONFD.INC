.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : RCPCONFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Receipting System   *
.  *                    Control File.                                   *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     File Name    : controlf.txt                                    *
.  *                                                                    *
.  *     Sectors      : 36 108                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V10.13.01 19/07/2018  J.Tan             TSK 0851232           *
.  *                Added RCCNRCNL,RCCNRCNW - Final Cash Reconciliation *
.  *      V10.08.01 19/10/2016  J.Tan             TSK 0822482           *
.  *                Added RCCNURCP - Suspense Register for Fully        *
.  *                Credited Receipts Upload                            *
.  *      V10.06.02 11/08/2015  J.Tan            CAR 314900             *
.  *                Added HSYS1=5 - G/L Inteface Integra Extended)      *
.  *      V10.06.01 24/07/2014  J.Tan            CAR 303627             *
.  *                Added HSYS1=4 - G/L Inteface comma delimited file   *
.  *      V10.02.01 16/07/2011  J.Tan            CAR 244159             *
.  *                Added parameter - Register for Credit Card Surcharge*
.  *      V10.01.01 08/11/2010  J.Tan            CAR 233201             *
.  *                Added parameter for Suspense available when         *
.  *                allocating suspense register                        *
.  *      V10.00.03 04/06/2010  J.Tan            CAR 222746             *
.  *                Added parameter for Cash release program            *
.  *      V10.00.02 11/05/2010  J.Tan            CAR 221526             *
.  *                Added parameter for G/L Integra cash interface      *
.  *      V10.00.01 20/04/2010  Peter Vela       CAR 216940             *
.  *                RCCNERRS - Register for ERA Suspense Account        *
.  *      V9.12.02  03/03/2010  J.Tan            CAR 216328             *
.  *                RCCNLEDG - One Char of Ledger for Using 'Other' G/L *
.  *      V9.12.01  26/08/2009  Saroeun Soeur    CAR 190933             *
.  *                added RCNB1040 and RCPCN204                         *
.  *      V9.11.01  17/12/2008  Peter Vela       CAR 183976             *
.  *                Added RCCNERRE - Display active records from the    *
.  *                                 Register Table that have an 'IBA   *
.  *                                 System Code' equal to Patient      *
.  *                                 Billing                            *
.  *                Added RCCNERCD - Display active records from the    *
.  *                                 Cash Drawer Table                  *
.  *                Added RCCNERCA - Display active record from the     *
.  *                                 Cheque Account Table               *
.  *      V9.10.01  11/08/2008  Peter Vela       CAR 175820             *
.  *                Added RCCNRCP2 - Parameter for receipt no display   *
.  *                order in IBARCP2.                                   *
.  *      V9.09.06  16/04/2008  Ebon Clements    CAR 162994             *
.  *                Added RCCNDISC - Not Using Receipt Discounts        *
.  *      V9.09.05  15/01/2008  Mike Laming      CAR 158013             *
.  *                Added RCCNCDCR & RCCNCDBD                           *
.  *      V9.09.04  16/11/2007  Ebon Clements    CAR 151659             *
.  *                Added RCCNPAYF                                      *
.  *      V9.09.03  08/10/2007  J.Tan            CAR 151560             *
.  *                Added RCCNPAYM                                      *
.  *      V9.09.02  26/09/2007  Ebon Clements    CAR 150704             * 
.  *                Added RCCNDREF                                      *
.  *      V9.09.01  06/09/2007  Jill Habasque    CAR 149116             * 
.  *                Added RCCNORUH                                      *
.  *      V9.08.01  15/05/2007  J.Tan            CAR 140282             *
.  *                Added HSYS1=2 for Using Other FMS                   *
.  *      V9.04.02  19.10.2005 J.Tan      CAR 49925                     *
.  *                Changed HFORMAT 2 - for using Header tail template  *
.  *      V9.04.01  26.08.2004 Lina Vo    CAR 53012                     *
.  *                Changed HFORMAT description. Changed 1=Holy Spirit  *
.  *      V9.02.03  29.08.2002 Dean Cramer                              *
.  *                Create parameter for date range in Cash Release     *
.  *      V9.02.02  12.03.2002 Dean Cramer                              *
.  *                Create sector 108 for new sized HDATARCP & HDATACCT *
.  *                In sector 36 make HDATARCP = HSPARE1 and            *
.  *                                  HDATACCT = HSPARE3                *
.  *      V5.08.001 26.06.2000 Charles Handaya                          *
.  *                New Receipt Header and Tail templated               *
.  **********************************************************************
.  *      V5.07.003 16.09.1999 Charles Handaya                          *
.  *                HSYS7 for Nursing Home                              *
.  *      V5.07.002 06.04.1999 Sandra Barcham    Remove RCCNPREF        *
.  *      V5.07.001 04/11/1998 Glenn Berry       507 Changes            *
.  **********************************************************************
.  *                    V5.01.00  20/01/92  DIG                         *
.  *                              Ported from release 5                 *
.  *                    V5.01.01  08/04/1993 Steve Armstrong            *
.  *                              Quote 7580  SRF 120401                *
.  *                              Added new receipt layout for ACC      *
.  *                    V5.01.02  31/12/1993 Matt Surridge  MTA         *
.  *                    Added    : RCCNPDOC - Principle Doctor Register *
.  *                               RCCNODO1 - Other Doctor 1            *
.  *                               RCCNODO2 - Other Doctor 2            *
.  *                               RCCNPAED - Paediatrician             * 
.  *                               RCCNANTH - Anaesthetist              * 
.  *                    V5.01.03  06/01/1994 Matt Surridge  MTA         *
.  *                    Added    : RCCNMERG - Medisave Register         *
.  *                               RCCNMECH - Medisave Cashier          *
.  *                               RCCNUPBR - Update Bank Reconcil Only *
.  *                    V5.01.04   10/01/1994  Steve Armstrong          *
.  *                    Added      RCCNMSHD - Medishield register       *
.  *                    V5.01.05   11/1/1994   Ian Rutt                 *
.  *                    Added      RCCNDPID - Initial deposit register  *
.  *                               RCCNDPFU - Further  deposit register *  
.  *                    V5.01.06   20/01/1994 Matt Surridge  MTA        *
.  *                    Added      RCCNDPRT - Default printer for SCS/  *
.  *                               Medisave transaction.                *
.  *                    V5.01.07   04/05/1994 Sandra Barcham            *
.  *                    Added      RCCNOVRP - Allow overpayments and    *
.  *                               prepayments for debtors.             *
.  *                               srf 125214  quote 7970               *
.  *                    V5.01.08   11/04/1995  Steve Armstrong          *
.  *                               Added RCCNPREF                       *
.  *      V5.03.01  04/01/1996  Greg Horvat                             *
.  *                Commented out the menu program, security key & IBA  *
.  *                screen password variables                           *
.  *      V5.03.02  18.04.1997 Sandra Barcham     srf 619646            *
.  *                Add in WGH receipt layout                           *
.  *      V5.03.03  04.07.1997 Sandra Barcham     srf 620014            *
.  *                Add in WWH receipt layout                           *
.  *      V5.05.01  09.10.1998 Sandra Barcham     srf 620014            *
.  *                Add in Debtors warning message                      *
.  *                                                                    *
.  **********************************************************************
.
.******************************************************************************
.*        RCPCONFD.INC : sector 36     (RECEIPTING GENERAL)                   *
.******************************************************************************
.NAME     TYPE     LENGTH   PHYSICAL    START     DESCRIPTION
.----     ----     ------   --------    -----     -----------
.....HMENURCP  DIM       8         8         1         Receipting Menu
.....HSECURCP  DIM       6         6         9         Company Security Code
HSPARE1   DIM       20        20        15        Spare variable         
.....HSECRRCP  DIM       8         8         35        Password for IBA screens
HSECLEV   FORM      1         1         43        Security Level
.
HSPARE2   DIM       7         7         44        Spare variable
.
HRAUDA    FORM      1         1         51        Audit A
HRAUDB    FORM      1         1         52        Audit B
HRAUDC    FORM      1         1         53        Audit C    
HRAUDD    FORM      1         1         54        Audit D
HRAUDE    FORM      1         1         55        Audit E
HRAUDF    FORM      1         1         56        Audit F
HRAUDG    FORM      1         1         57        Audit G
HRAUDH    FORM      1         1         58        Audit H 
HRAUDI    FORM      1         1         59        Audit I
HRAUDJ    FORM      1         1         60        Audit J
HRAUDK    FORM      1         1         61        Audit K
HRAUDL    FORM      1         1         62        Audit L
HRAUDM    FORM      1         1         63        Audit M
HRAUDN    FORM      1         1         64        Audit N 
HRAUDO    FORM      1         1         65        Audit O
HRAUDP    FORM      1         1         66        Audit P
HRAUDQ    FORM      1         1         67        Audit Q
HRAUDR    FORM      1         1         68        Audit R
HRAUDS    FORM      1         1         69        Audit S 
HRAUDT    FORM      1         1         70        Audit T
HRAUDU    FORM      1         1         71        Audit U
HRAUDV    FORM      1         1         72        Audit V
HRAUDW    FORM      1         1         73        Audit W     
HRAUDX    FORM      1         1         74        Audit X
HRAUDY    FORM      1         1         75        Audit Y
HRAUDZ    FORM      1         1         76        Audit Z
.
..(moved).HRECPT    FORM      8         8         77        Next Receipt Number
HSBD      FORM      1         1         85        Susp. on Bank Deposit
HSYS1     FORM      1         1         86        General Ledger
.                                                 0=No, 1=Yes(IBA) 2=Yes(Other)
.                                                 3=Yes(Integra)
.                                                 4=Yes(Comma delimited)
.                                                 5=Yes(Integra Extended)
HSYS2     FORM      1         1         87        Patient Billing
HSYS3     FORM      1         1         88        Private Practice
HSYS4     FORM      1         1         89        Old Sundry Debtors
HSYS5     FORM      1         1         90        Medical Services
HSYS6     FORM      1         1         91        New Sundry Debtors
HSYS7     FORM      1         1         92        Nursing Home
HSYS8     FORM      1         1         93        System 8
HSYS9     FORM      1         1         94        System 9
HSYS10    FORM      1         1         95        System 10
HSYS11    FORM      1         1         96        System 11
HSYS12    FORM      1         1         97        System 12
HSYS13    FORM      1         1         98        System 13
HSYS14    FORM      1         1         99        System 14
HSYS15    FORM      1         1         100       System 15
HSYS16    FORM      1         1         101       System 16
HSYS17    FORM      1         1         102       System 17
HSYS18    FORM      1         1         103       System 18
HSYS19    FORM      1         1         104       System 19
HSYS20    FORM      1         1         105       System 20
HFORMAT   FORM      1         1         106       Receipt Format 
.                                                 1 = Holy Spirit
.                                                 2 = Use Header/Tail template
.                                                 3 = Warburton/not used v9
.                                                 4 = Anne Caudle Centre
.                                                 5 = Hawkes Bay
.                                                 6 = West Gippsland/not used v9
.                                                 7 = West Wimmera
.                                                 8 = Ballarat Health Services
.                                                 9 = RCH
.
HCLAIM    FORM      6         6         107       Next Claim number
HJNL      DIM       2         2         113       Journal Type for Discounts
HSPARE3   DIM       30        30        115       Spare variable           
HBATCH    FORM      5         5         145       Next G/L Batch
HBBDISC   FORM      1         1         150       Bulk billing discount keyin
.                                                 0=Percentage
.                                                 1=Amount
.
HPRTREC   FORM      1         1         151       Where to print receipts
.                                                 0 = Print in IBARCP73
.                                                 1 = Print in IBABIL21
RCCNPDOC  DIM       3         3         152       Principle Doctor Register
RCCNODO1  DIM       3         3         155       Other Doctor 1
RCCNODO2  DIM       3         3         158       Other Doctor 2
RCCNPAED  DIM       3         3         161       Paediatrician
RCCNANTH  DIM       3         3         164       Anaesthetist
RCCNMERG  DIM       3         3         167       Medisave Register
RCCNMECH  DIM       6         6         170       Medisave Cashier
RCCNUPBR  FORM      1         1         176       Update Bank Reconciliation
.                                                 Only 0 = No 
.                                                      1 = Yes
RCCNMSHD  DIM       3         3         177       Medishield Register
RCCNDPID  DIM       3         3         180       Initial Deposit Register
RCCNDPFU  DIM       3         3         183       Further deposit type register 
RCCNDPTR  FORM      3         3         186       Default Medisave Printer
RCCNOVRP  FORM      1         1         189       Allow overpayments and  
.                                                 prepayments in debtors
.                                                 0 = No, 1 = Yes
RCCNDIM1  DIM       1         1         190
.RCCNPREF  DIM       1         1         190       Manual Receipt Prefix
RCCNSLAB  FORM      1         1         191       Seperate listing for each
.                                                 bank account (IBARCP72)
.                                                 0 = No , 1 = Yes
RCCNDBWR  FORM      1         1         192       Display debtors warn message
.                                                 0 = No , 1 = Yes
HRECPT    FORM      12        12        193       Next Receipt Number
.
RCCNRCHD  DIM       6         6         205       Receipt Header Code templated
RCCNRCTL  DIM       6         6         211       Receipt Tail Code templated
RCCNSNTR  FORM      1         1         217       For Receipt Types 95 & 98 use
.                                                 Name in rcptrnaf
.                                                 0 = No , 1 = Yes
RCCNCRDR  FORM      1         1         218       Use date range in Cash Release
.                                                 0 = No , 1 = Yes
RCCNRCLN  FORM      2         2         219       No of lines for body of 
.                                                 Receipt layout(HFORMAT=2 only)
RCCNORUH  DIM       1         1         221       Only display registers for 
.                                                 users hospital id 1=Yes
RCCNDREF  DIM       1         1         222       Default patient name to       
.                                                 receipt reference. 0=No, 1=Yes
RCCNPAYM  DIM       1         1         223       Print Method of payment on
.                                                 Receipt (Y/N)
.                                                 0 = No , 1 = Yes
RCCNPAYF  DIM       1         1         224       Name format for payer default
.                                                 0 = Title Given Surname
.                                                 1 = Title Initial Surname
RCCNCDCR  DIM       1         1         225       Cash Reconcil. Cash Drawer
.                                                 Range selection
.                                                 0 = Allow Range Start/Finish
.                                                 1 = Individual Cash Drawer
RCCNCDBD  DIM       1         1         226       Bank Deposit List Cash Drawer
.                                                 Range selection
.                                                 0 = Allow Range Start/Finish
.                                                 1 = Allow limited range
RCCNDISC  DIM       1         1         227       Not Using Receipt Discounts
.                                                 0=Yes , 1=No
RCCNRCP2  DIM       1         1         228       Display order by receipt no
.                                                 IBARCP02 0=No 1=Yes
RCCNERRE  DIM       3         3         229       Display active records from
.                                                 the Register Table that have
.                                                 an 'IBA System Code' equal to
.                                                 Patient Billing.
RCCNERCD  DIM       6         6         232       Display active records from 
.                                                 the Cash Drawer Table.
RCCNLEDG  DIM       1         1         238       One Char of Ledger
.                                                 (for HSYS1 =2 or 3)
.                                                 1=Yes , 0=No (2 Chars)
RCCNERRS  DIM       3         3         239       Register for ERA Suspense Acc
RCCNSUSP  DIM       1         1         242       Suspense available when
.                                                 allocating a Suspense register
RCCNCRSR  DIM       3         3         243       Credit Card Surcharge Register
RCCNEGST  DIM       1         1         246       G/L Integra - GST on Exc.Cash
.                                                 1=Yes , 0=No
.End of Record                          247
.
.******************************************************************************
.*        RCPCONFD.INC : sector 108    (RECEIPTING GENERAL)                   *
.******************************************************************************
.NAME     TYPE     LENGTH   PHYSICAL    START     DESCRIPTION
.----     ----     ------   --------    -----     -----------
HDATARCP  DIM       40        40        1         FMS Batch Directory
HDATACCT  DIM       40        40        41        FMS Controlf Directory
.
RCCNERCA  DIM       15        15        81        Display active records from
.                                                 the Cheque Account Table.
RCCNRCCT  DIM       1         1         96        Remove Payment Type Credit Crd
RCCNCSHL  DIM       2         2         97        Locking for Cash Release Prog.
RCCNCSHU  DIM       10        10        99        Web Userid for Locking of
.                                                 IBARCP76 - Cash Release.
RCCNURCP  DIM       3         3         109       Suspense Register for Fully 
.                                                 Credited Receipts Upload
RCCNRCNL  DIM       2         2         112       Locking for Final Cash 
.                                                 Reconciliation (IBARCP02)
RCCNRCNW  DIM       10        10        114       Web Userid for Locking of
.                                                 Final Cash Reconciliation
.End of Record                          124
