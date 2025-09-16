.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : RCPCONTD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Receipting System   *
.  *                    Control File CGI variables                      *
.  *                                                                    *
.  *     Sectors      : 36 108                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  *      V10.08.01 19/10/2016  J.Tan             TSK 0822482           *
.  *                Added RCPCN205 -Suspense Register for Fully Credited*
.  *                Receipts Upload                                     *
.  *      V10.06.01 01/04/2015  J.Tan            CAR 314936             *
.  *                Added RCCNEGST -G/L Integra Calc. GST on Exc.GST Csh*
.  *      V10.01.02 16/07/2011  J.Tan            CAR 244159             *
.  *                Added parameter - Register for Credit Card Surcharge*
.  *      V10.01.01 08/11/2010  J.Tan            CAR 233201             *
.  *                Added parameter for Suspense available when         *
.  *                allocating suspense register                        *
.  *      V10.00.01 20/04/2010  Peter Vela       CAR 216940             *
.  *                RCPCN094 - Register for ERA Suspense Account        *
.  *      V9.12.02  03/03/2010  J.Tan            CAR 216328             *
.  *                RCPCN093 - Using One char of Ledger                 *     
.  *      V9.12.01  26/08/2009  Saroeun Soeur    CAR 190933             *
.  *                RCCNRCCT - Remove Payment Type Credit Card          *
.  *      V9.11.01  17/12/2008  Peter Vela       CAR 183976             *
.  *                Added RCPCN091 - Display active records from the    *
.  *                                 Register Table that have an 'IBA   *
.  *                                 System Code' equal to Patient      *
.  *                                 Billing                            *
.  *                Added RCPCN092 - Display active records from the    *
.  *                                 Cash Drawer Table                  *
.  *                Added RCPCN203 - Display active record from the     *
.  *                                 Cheque Account Table               *
.  *      V9.10.01  11/08/2008  Peter Vela       CAR 175820             *
.  *                Added RCPCN090 - Display report by receiptno order  *
.  *                IBARCP02                                            *
.  *      V9.09.06  16/04/2008  Ebon Clements    CAR 162994             *
.  *                Added RCPCN089 - Not Using Receipt Discounts        *
.  *      V9.09.05  15/01/2008  Mike Laming   CAR 158013                *
.  *                Added RCPCN087 (for RCCNCDCR) & RCPCN088 (RCCNCDBD) *
.  *      V9.09.04  16.11.2007 Ebon Clements  CAR 151659                *
.  *                Added RCPCN086                                      *
.  *      V9.09.03  08.10.2007 J.Tan          CAR 151560                *
.  *                Added RCPCN085                                      *
.  *      V9.09.02  26.09.2007 Ebon Clements  CAR 150704                *
.  *                Added RCPCN084                                      *
.  *      V9.09.01  06.09.2007 Jill Habasque  CAR 149116                *
.  *                Added RCPCN083                                      *
.  *      V9.04.01  19.10.2005 J.Tan         CAR 49925                  *
.  *                Added RCCNRCLN - no of lines for receipt body       *
.  *      V9.03.00  29.10.2003 Ebon Clements CAR 43984                  *
.  *                Created include                                     *
.  **********************************************************************
.******************************************************************************
.*        RCPCONFD.INC : sector 36     (RECEIPTING GENERAL)                   *
.******************************************************************************
.NAME     TYPE     LENGTH   PHYSICAL    START     DESCRIPTION
.----     ----     ------   --------    -----     -----------
.RCPCN001  DIM       8         8         1         Receipting Menu
.RCPCN002  DIM       6         6         9         Company Security Code
.RCPCN003  DIM       20        20        15        Spare variable         
.RCPCN004  DIM       8         8         35        Password for IBA screens
RCPCN005  DIM       1         1         43        Security Level
.RCPCN006  DIM       7         7         44        Spare variable
RCPCN007  DIM       1         1         51        Audit A
RCPCN008  DIM       1         1         52        Audit B
RCPCN009  DIM       1         1         53        Audit C    
RCPCN010  DIM       1         1         54        Audit D
RCPCN011  DIM       1         1         55        Audit E
RCPCN012  DIM       1         1         56        Audit F
RCPCN013  DIM       1         1         57        Audit G
RCPCN014  DIM       1         1         58        Audit H 
RCPCN015  DIM       1         1         59        Audit I
RCPCN016  DIM       1         1         60        Audit J
RCPCN017  DIM       1         1         61        Audit K
RCPCN018  DIM       1         1         62        Audit L
RCPCN019  DIM       1         1         63        Audit M
RCPCN020  DIM       1         1         64        Audit N 
RCPCN021  DIM       1         1         65        Audit O
RCPCN022  DIM       1         1         66        Audit P
RCPCN023  DIM       1         1         67        Audit Q
RCPCN024  DIM       1         1         68        Audit R
RCPCN025  DIM       1         1         69        Audit S 
RCPCN026  DIM       1         1         70        Audit T
RCPCN027  DIM       1         1         71        Audit U
RCPCN028  DIM       1         1         72        Audit V
RCPCN029  DIM       1         1         73        Audit W     
RCPCN030  DIM       1         1         74        Audit X
RCPCN031  DIM       1         1         75        Audit Y
RCPCN032  DIM       1         1         76        Audit Z
.RCPCN033  DIM       8         8         77        Next Receipt Number
RCPCN034  DIM       1         1         85        Susp. on Bank Deposit
RCPCN035  DIM       1         1         86        General Ledger
RCPCN036  DIM       1         1         87        Patient Billing
RCPCN037  DIM       1         1         88        Private Practice
RCPCN038  DIM       1         1         89        Old Sundry Debtors
RCPCN039  DIM       1         1         90        Medical Services
RCPCN040  DIM       1         1         91        New Sundry Debtors
RCPCN041  DIM       1         1         92        Nursing Home
RCPCN042  DIM       1         1         93        System 8
RCPCN043  DIM       1         1         94        System 9
RCPCN044  DIM       1         1         95        System 10
RCPCN045  DIM       1         1         96        System 11
RCPCN046  DIM       1         1         97        System 12
RCPCN047  DIM       1         1         98        System 13
RCPCN048  DIM       1         1         99        System 14
RCPCN049  DIM       1         1         100       System 15
RCPCN050  DIM       1         1         101       System 16
RCPCN051  DIM       1         1         102       System 17
RCPCN052  DIM       1         1         103       System 18
RCPCN053  DIM       1         1         104       System 19
RCPCN054  DIM       1         1         105       System 20
RCPCN055  DIM       1         1         106       Receipt Format 
RCPCN056  DIM       6         6         107       Next Claim number
RCPCN057  DIM       2         2         113       Journal Type for Discounts
.RCPCN058  DIM       30        30        115       Spare variable           
RCPCN059  DIM       5         5         145       Next G/L Batch
RCPCN060  DIM       1         1         150       Bulk billing discount keyin
RCPCN061  DIM       1         1         151       Where to print receipts
RCPCN062  DIM       3         3         152       Principle Doctor Register
RCPCN063  DIM       3         3         155       Other Doctor 1
RCPCN064  DIM       3         3         158       Other Doctor 2
RCPCN065  DIM       3         3         161       Paediatrician
RCPCN066  DIM       3         3         164       Anaesthetist
RCPCN067  DIM       3         3         167       Medisave Register
RCPCN068  DIM       6         6         170       Medisave Cashier
RCPCN069  DIM       1         1         176       Update Bank Reconciliation
RCPCN070  DIM       3         3         177       Medishield Register
RCPCN071  DIM       3         3         180       Initial Deposit Register
RCPCN072  DIM       3         3         183       Further deposit type register 
RCPCN073  DIM       3         3         186       Default Medisave Printer
RCPCN074  DIM       1         1         189       Allow overpayments and  
RCPCN075  DIM       1         1         190       Manual Receipt Prefix
RCPCN076  DIM       1         1         191       Seperate listing for each
RCPCN077  DIM       1         1         192       Display debtors warn message
RCPCN078  DIM       12        12        193       Next Receipt Number          
RCPCN079  DIM       6         6         205       Receipt Header Code templated
RCPCN080  DIM       6         6         211       Receipt Tail Code templated
RCPCN081  DIM       1         1         217       For Receipt Types 95 & 98 use
RCPCN082  DIM       1         1         218       Use date range in Cash Release
RCPCN083  DIM       1         1         221       Only display registers for 
.                                                 users hospital 1=Yes
RCPCN084  DIM       1         1         222       Default patient name to
.                                                 receipt reference
RCPCN085  DIM       1         1         223       Print Method of payments on
.                                                 Receipt. 1 = Yes
RCPCN086  DIM       1         1         224       Name format for payer default
RCPCN087  DIM       1         1         225       Cash Reconcil. Cash Drawer
.                                                 Range selection
RCPCN088  DIM       1         1         226       Bank Deposit List Cash Drawer
.                                                 Range selection
RCPCN089  DIM       1         1         227       Not Using Receipt Discounts  
.
RCPCN090  DIM       1         1         228       Display report by receipt 
.                                                 number order = IBARCP02
RCPCN091  DIM       3         3         229       Display active records from
.                                                 the Register Table that have
.                                                 an 'IBA System Code' equal to
.                                                 Patient Billing.
RCPCN092  DIM       6         6         232       Display active records from
.                                                 the Cash Drawer Table.
RCPCN093  DIM       1         1         238       One Char of Ledger(for HSYS=2)
.                                                 1=Yes , 0=No (2 Chars)
RCPCN094  DIM       3         3         239       Register for ERA Suspense Acc
RCPCN095  DIM       1         1         242       Suspense available when
.                                                 allocating a Suspense register
.                                                 1=Yes , 0=No
RCPCN096  DIM       3         3         243       Credit Card Surcharge Register
RCPCN097  DIM       1         1         246       G/L Integra-GST on Exc.Cash
.                                                 1=Yes , 0=No
.End of Record                          247
.
.******************************************************************************
.*        RCPCONFD.INC : sector 108    (RECEIPTING GENERAL)                   *
.******************************************************************************
.NAME     TYPE     LENGTH   PHYSICAL    START     DESCRIPTION
.----     ----     ------   --------    -----     -----------
RCPCN200  DIM       40        40        1         FMS Batch Directory
RCPCN201  DIM       40        40        41        FMS Controlf Directory
RCPCN202  DIM        2         2        81        No of Lines for Receipt body
RCPCN203  DIM       15        15        83        Display active records from
.                                                 the Cheque Account Table.
RCPCN204  DIM       1         1         98        Remove Paym.Type Credit Card 
RCPCN205  DIM       3         3        109        Suspense register for Fully 
.                                                 credited non HF receipts
.
.End of Record                         139 
