. ********************************************************************
. *                                                                  *
. * Include Name :      FMSCONFD.INC                                 *
. *                                                                  *
. * Function     :      File Definition include for                  *
. *                     Control File Sectors for Accounting System   *
. *                                                                  *
. * File Type    :      ASCII                                        *
. *                                                                  *
. * File Name    :      controlf.txt                                 *
. *                                                                  *
. * Modifications:                                                   *
. *                                                                  *
. * V9.09.02   04/09/2007  Sandra Barcham   CAR 149415               *
. *            Using Sector Code Reporting                           *
. * V9.09.01   30/07/2007  Sandra Barcham   CAR 146314               *
. *            Re-use cheque layout for DVC for Modbury              *
. ********************************************************************
. * V9.04.01   20/06/2005  Sandra Barcham   CAR                      *
. *            Add FMCOEXTR Extra character for oracle financial     *
. *            Extract                                               *
. ********************************************************************
. * V9.03.01   07/01/2004  Mike Laming      CAR 45907                *
. *            Add FMCOCSRL (Indiv.Recpt Rel.Flag) to IBA Quotes Scrn*
. *            Add FMCOXBAS (Exempt Cred Batch   ) to IBA Quotes Scrn*
. ********************************************************************
. * 25.03.2003 Davin  CAR/Quote: 18326                               *
. *            Added FMCOUBPP - Update Batches for Proposed Payments *
. * 19.08.1999 Sandra Barcham                                        *
. *            Add FMCOBUPD                                          *
. * 28.10.1998 Sandra Barcham                                        *
. *            Add FMCOIDIS,FMCOCDIS,FMCOPDIS & FMCORDIS from cglcont*
. ********************************************************************
. * 13.03.1998 Sandra Barcham                                        *
. *            New layout for STV                                    *
. * 12.09.1997 Sandra Barcham                                        *
. *            New layout for hsh                                    *
. *            Add warning message for prompt payments               *
. * 13.08.1997 Sandra Barcham                                        *
. *            New layout for WWH                                    *
. * 27.05.1997 Sandra Barcham                                        *
. *            New layout for HUT                                    *
. * 22.01.1997 Sandra Barcham                                        *
. *            Add flag for journal authorisation in use             *
. *            srf 642371                                            *
. * 22.11.1996 B.G.Ackland                                           *
. *            Add Defaults for APS15                                *
. *            quotes 8792                                           *
. * 07.11.1996 Sandra Barcham                                        *
. *            Add in Mater & SAR Cheque Layouts                     *
. *            quotes R8783 & 8781                                   *
. * 19.08.1996 Sandra Barcham                                        *
. *            Add in Hawkesbury Cheque Layout                       *
. *            srf 616354 quote 8717                                 *
. * 08.08.1996 B.G.Ackland                                           *
. *            Add new lodgement Reference Number (FMCOLOGR)         *
. *            srf 614788 quote 8691                                 *
. * 18.06.1996 Sandra Barcham                                        *
. *            Add in using invoice tracking (FMCOITRK)              *
. *            srf 641023 quote 8628                                 *
. * 30.05.1996 Sandra Barcham                                        *
. *            Add in Buderim accounts payable cheque layout         *
. ********************************************************************
.
.  **********************************************************************
.  *     Sector       : 50                                              *
.  **********************************************************************
.
.NAME     TYPE   LENGTH     START  DESCRIPTION
.----     ----   ------     -----  -----------
.
. Extraction/load params
.
FMCOHOSP  DIM       2        1     extract/load hospital code
FMCOCBUD  DIM       4        3     extract/load current year budget
FMCOLBUD  DIM       4        7     extract/load last year budget
FMCOYEAR  DIM       4        11    extract/load financial year
FMCOPERD  DIM       2        15    extract/load last period to transferred
FMCOSDIR  DIM       30       17    extract/load store directory
.
FMCOLDIR  DIM       30       47    extract/load load directory
FMCOLCBU  DIM       4        77    extract/load load into current yr budget
FMCOLLBU  DIM       4        81    extract/load load into last yr budget
.
FMCOLOGR  DIM       5        85    Next Direct Bank Transfer Lodgment Reference
FMCOSPAR  DIM       110      90    Spare (used to be payroll intfce params)
.
FMCOSTPO  FORM      1        200   1=Allow stat-post recs write to rsf file
.
FMCOINFF  DIM       1        201   interface file format 0=ACC, 1=SAHB
.
FMCOPSTA  DIM       1        202   print stat acc format 
.                                        0=print rep style format
.                                        1=print as per no. of dec places
.
FMCOELED  DIM       2        203   extract from ledger
FMCOLLED  DIM       2        205   load into ledger
.
FMCODEFA  DIM       1        207   default account in fms28 + 30 (1=yes)
FMCOTBID  DIM       8        208   Last Patient Billing To be Invoiced   
.                                  Batch Transfer Date. CCYYMMDD
FMCOEPWC  DIM       1        216   Print Address on STD Cheq Layout
XXCOGST   FORM      2.2      217   G.S.T. Percentage
XXCOGSTD  DIM       8        222   G.S.T. Effective Date CCYYMMDD
XXCOGSTN  FORM      2.2      230   New G.S.T. Percentage
FMCOFUPD  DIM       1        235   Force auto update for budgets
.                                     0=No, 1=Budgets/Actuals, 2=Budgets
FMCOEXTY  DIM       1        236   Committed expenditure type
.                                         0=goods received not invoiced
.                                         1=goods ordered not invoiced
FMCOBVAR  DIM       1        237   Budget Variance Display   
.                                         0=Actual > Budget +ve Variance
.                                         1=Actual > Budget -ve Variance
.
FMCOSTSC  FORM      1        238   Security Level required for Change/
.                                  Delete of Statistical Transactions.
.
FMCOTACC  DIM       1        239   Status of Access to Transactions
.                                  during proposed payments
.                                         0=no access
.                                         1=allow input of invoices if
.                                           ok'd in DOF Transfer (APS58)
.                                         2=allow input of invoices
.                                         3=allow full access
FMCOHPRT  DIM       1        240   1=dont print heading accounts with 
.                                  no data between them
FMCOATOT  DIM       1        241   1=print ledger totals in IBAAPS62
FMCOAPCH  FORM      2        242   Accounts Payable Cheque Layout
.                                      0 - Standard
.                                      1 - Health & Lifecare
.                                      2 - Hastings
.                                      3 - West Gippsland
.                                      4 - Modbury
.                                      5 - Tamworth
.                                      6 - Anne Caudle
.                                      7 - Greymouth
.                                      8 - Pioneer Valley
.                                      9 - Buderim
.                                     10 - Hawkesbury
.                                     11 - St Andrews Rockhampton
.                                     12 - Mater
.                                     13 - Standard New (new bank layout)
.                                     14 - Hutt Valley Health
.                                     15 - West Wimmera
.                                     16 - Holy Spirit (Laser)
.                                     17 - St Vincents Melbourne
.                                     18 - St Vincents Bathurst
.                                     19 - Standard Laser       
.                                     20 - Latrobe Regional     
.                                     21 - Southland Health     
.                                     22 - Hawkes Bay
.                                     23 - Mercy Hospital Dunedin - NZ
FMCOITRK  FORM      1        244   Using Invoice Tracking
.                                      1 - Yes
FMCOINVP  FORM      1        245   Use Contract Inv. Price Control 1=Yes (APS15)
FMCOJAUT  FORM      1        246   Journal Authorisation in use
.                                      1 - Yes
FMCODTWR  FORM      1        247   Display date warning message in IBAAPS18
.                                      1 - Yes
FMCOBUPD  DIM       2        248   Port Processing Batch Update
.
.End of Sector               250
.
.  **********************************************************************
.  *     Sector       : 51                                              *
.  **********************************************************************
.
.NAME     TYPE   LENGTH     START  DESCRIPTION
.----     ----   ------     -----  -----------
HMENUFMS  DIM       8         1    Accounting Main Menu Name
HSECUFMS  DIM       6         9    Company Security Code
HSECRFMS  DIM       8         15   Passwd IBAFMS98
HDATAFMS  DIM       20        23   Data Directory
.
.        Note : AUDITS  1 = Not Required
.
FMSAUDA   FORM      1         43   Audit A  (fmsamaaf)
FMSAUDB   FORM      1         44   Audit B  (fmssbaaf)
FMSAUDC   FORM      1         45   Audit C  (fmsccaaf)
FMSAUDD   FORM      1         46   Audit D  (fmslmaaf)
FMSAUDE   FORM      1         47   Audit E  (fmssecaf)
FMSAUDF   FORM      1         48   Audit F  (apsmasaf)
FMSAUDG   FORM      1         49   Audit G  (fmsbudaf & fmsbpfaf)
FMSAUDH   FORM      1         50   Audit H
FMSAUDI   FORM      1         51   Audit I
FMSAUDJ   FORM      1         52   Audit J
FMSAUDK   FORM      1         53   Audit K
FMSAUDL   FORM      1         54   Audit L
.
. User Defined Parameters
.--------------------------
. Subjective Parameters
.--------------------------
FMSUUD1A  FORM      1         55   Use CC/Subj Programs  1=yes
FMSUUD2A  FORM      1         56   Separate CC/Subj      1=yes
FMSUUD2B  DIM       1         57   Separator Character
FMSUUD3A  FORM      2         58   Subjective Code Length
FMSUUD4A  FORM      2         60   Cost Centre Code Length
FMSUUD5A  FORM      2         62   Subjective Abb.Desc Length
FMSUUD6A  FORM      2         64   Cost Centre Abb.Desc Length
FMSUUD7A  FORM      2         66   Subjective Report Number
FMSUUD8A  FORM      2         68   Cost Centre Report Number
.
. Account Code Fields
.--------------------------
FMACR1ON  FORM      1         70   Reference 1 Indicator 1 = Yes
FMACR1LN  FORM      2         71   Reference 1 Length
FMACR1NA  DIM       20        73   Reference 1 Prompt Description
FMACR2ON  FORM      1         93   Reference 2 Indicator 1 = Yes
FMACR2LN  FORM      2         94   Reference 2 Length
FMACR2NA  DIM       20        96   Reference 2 Prompt Description
FMACR3ON  FORM      1         116  Reference 3 Indicator 1 = Yes
FMACR3LN  FORM      2         117  Reference 3 Length
FMACR3NA  DIM       20        119  Reference 3 Prompt Description
FMACR4ON  FORM      1         139  Reference 4 Indicator 1 = Yes
FMACR4LN  FORM      2         140  Reference 4 Length
FMACR4NA  DIM       20        142  Reference 4 Prompt Description
.
FMACC1ON  FORM      1         162  Code 1 Indicator 1 = Yes
FMACC1NA  DIM       2         163  Code 1 Prompt Category
FMACC2ON  FORM      1         165  Code 2 Indicator 1 = Yes
FMACC2NA  DIM       2         166  Code 2 Prompt Category
FMACC3ON  FORM      1         168  Code 3 Indicator 1 = Yes
FMACC3NA  DIM       2         169  Code 3 Prompt Category
FMACC4ON  FORM      1         171  Code 4 Indicator 1 = Yes
FMACC4NA  DIM       2         172  Code 4 Prompt Category
.
FMACD1ON  FORM      1         174  Date 1 Indicator 1 = Yes
FMACD1NA  DIM       20        175  Date 1 Prompt Description
FMACD2ON  FORM      1         195  Date 2 Indicator 1 = Yes
FMACD2NA  DIM       20        196  Date 2 Prompt Description
FMACD3ON  FORM      1         216  Date 3 Indicator 1 = Yes
.
. Batch Control Parameters (Section 1)
. ------------------------------------
FMBCRBAT  DIM       5         217  Next Creditor Credits Batch number
FMBPABAT  DIM       5         222  Next Creditor Payments Batch number
FMBAUBAT  DIM       5         227  Next Creditor Auto Payments Batch number
FMBCHBAT  DIM       5         232  Next Creditor Cancelled Chq Batch number
FMBSTBAT  DIM       5         237  Next Statistical Trans Batch number
.
. Defaulting Paramaters
. ---------------------
FMDEFCRD  FORM      1         242  Default Creditor Code in IBAAPS15
.                                    0 = No       
.                                    1 = Yes      
FMDEFLED  DIM       2         243  Default Ledger 
FMDEFDIS  DIM       5         245  Default Dissection
.
. End of Sector               250
.
.  **********************************************************************
.  *     Sector       : 52                                              *
.  **********************************************************************
.
.NAME     TYPE   LENGTH     START  DESCRIPTION
.----     ----   ------     -----  -----------
FMACD3NA  DIM       20        1    Date 3 Prompt Description
FMACD4ON  FORM      1         21   Date 4 Indicator 1 = Yes
FMACD4NA  DIM       20        22   Date 4 Prompt Description
.
FMACA1ON  FORM      1         42   Amount 1 Indicator 1 = Yes
FMACA1DP  FORM      1         43   Amount 1 Decimal Places
FMACA1NA  DIM       20        44   Amount 1 Prompt Description
FMACA2ON  FORM      1         64   Amount 2 Indicator 1 = Yes
FMACA2DP  FORM      1         65   Amount 2 Decimal Places
FMACA2NA  DIM       20        66   Amount 2 Prompt Description
FMACA3ON  FORM      1         86   Amount 3 Indicator 1 = Yes
FMACA3DP  FORM      1         87   Amount 3 Decimal Places
FMACA3NA  DIM       20        88   Amount 3 Prompt Description
FMACA4ON  FORM      1         108  Amount 4 Indicator 1 = Yes
FMACA4DP  FORM      1         109  Amount 4 Decimal Places
FMACA4NA  DIM       20        110  Amount 4 Prompt Description
.
FMACW1ON  FORM      1         130  Notes required (1=yes)
.
. IBA Controlled Parameters
.--------------------------
HDATASQL  DIM       20        131  Accounting SQL Directory
HFSQLCMD  DIM       20        151  Informix SQL Run Report Command
FMSUFLT   FORM      1         171  Update First Level Totals (1=yes)
FMSRESPS  FORM      1         172  Responsibility Summary (1=yes)
.
. Journal Module Parameters
.--------------------------
FMJOPRE1  DIM       1         173  General Journal Prefix
FMJONEX1  FORM      6         174  Next General Journal ID
FMJOPRE2  DIM       1         180  Standard Journal Prefix
FMJONEX2  FORM      6         181  Next Standard Journal ID
FMJOPRE3  DIM       1         187  Periodic Journal Prefix
FMJONEX3  FORM      6         188  Next Periodic Journal ID
.
FMCOSPA1  DIM       9         194  spare
.
.
. Batch Control Parameters (Section 2)
. ------------------------------------
FMBCJBAT  DIM       5         203  Next Journal Batch number
FMBCCBAT  DIM       5         208  Next Creditor Invoice Batch number
FMBCOBAT  DIM       5         213  Next other Batch number
.
. Batch Control Parameters
. ------------------------
FMCOUST   FORM      1         218  Update stats type (0=accrual, 1=cash)
FMCOCALC  FORM      1         219  Re-calc on update (0=no 1=yes)
.
. Next First and last order Number
. --------------------------------
FMCOFONO  FORM      7         220  Next Order Number
FMCOLONO  FORM      7         227  Next Order Number
.
. Journal Module Parameters (cont)
.--------------------------------
FMJOPRE4  DIM       1         234  Inter Fund Transfur Journal Prefix
FMJONEX4  FORM      6         235  Next Inter Fund Transfur Journal ID
.
FMCRPUR   DIM       8         241  Date Creditors Last Purged to.
.
. Journal Module Parameters (cont)
.--------------------------------
FMJOPRE5  DIM       1         249  Interface Journals Prefix
FMJONEX5  FORM      6         250  Next Interface Journals ID
.
. End of Sector               256
.
.  **********************************************************************
.  *     Sector       : 65                                              *
.  **********************************************************************
.
.NAME     TYPE   LENGTH     START  DESCRIPTION
.
. Director of Finance Parameters
. ------------------------------
FMCODFBN  DIM       8        1     Batch Number
FMCODFCN  DIM       8        9     Concecutive Number (FE Reference)
FMCODFDI  DIM       30       17    Directory to create Transfer File
FMCODFFE  DIM       8        47    Financial Exchange Originator
FMCODFSS  DIM       10       55    Purpose of FE
FMCODFPF  DIM       4        65    Source Sector
FMCODFN1  DIM       32       69    Name Line 1
FMCODFN2  DIM       32       109   Name Line 2
FMCODFA1  DIM       32       133   Address Line 1
FMCODFA2  DIM       32       165   Address Line 2
FMCODFA3  DIM       32       197   Address Line 3
FMCODFCI  DIM       20       219   City or Suburb
FMCODFST  DIM       4        239   State Code
FMCODFPC  DIM       10       243   Post Code
.
.End of Sector               253
.
.  **********************************************************************
.  *     Sector       : 66                                              *
.  **********************************************************************
.
.NAME     TYPE   LENGTH     START  DESCRIPTION
.
. Director of Finance Parameters
. ------------------------------
FMCODFCC  DIM       3        1     Country Code
FMCODFFX  DIM       20       4     Facsimilie Number
FMCOCOMT  DIM       1        24    Committed Expenditure Type (for FMS21)
.                                       (Also IBASUB36)
.                                       0 = P/O Received not Invoiced
.                                       1 = P/O Rasised not Received
FMCOINFC  DIM       13       25    Fixed charge for invoices (Form 6.6)
FMCOINPV  DIM       13       38    % of invoice value charge (Form 6.6)
.
FMCODUPI  DIM       1        51    Don't Allow Duplicate Invoice Ref's
.                                       1 = Yes
.                                       0 = No
.
FMCOIDIS  DIM       5        52    Invoice Control A/C Dissection
FMCOCDIS  DIM       5        57    Credit Note Control A/C Dissection
FMCOPDIS  DIM       5        62    Payments Control A/C Dissection
FMCORDIS  DIM       5        67    Cash Receipt Control A/C Dissection
.
FMCOPAYG  DIM       6        72    Pay as You Go GST Code
FMCOINGS  DIM       6        78    Default GST Code
FMCOPGCR  DIM       5        84    PAYG Creditor Code
FMCOPBAS  DIM       3        89    PAYG BAS Code
.
FMCOUBPP  DIM       1        92    Update Batches for Proposed Payments
.                                      (1=Yes/0=No)
.
FMCOXBAS  DIM       3        93    Exempt Creditor BAS code
FMCOCSRL  FORM      1        96    Indiv.Receipt Release Flag
.                                  1/Y = Release individual Receipt amounts
.                                  0/N = Sum Recp Release for same day
.
FMCOEXTR  DIM       1        97    Extra character for Oracle Financial Extract
FMCOSCDI  DIM       1        98    Using Dissection Code - Sector Code Reporting
.                                      (1=Yes/0=No)
.End of Sector               99
.
. Define sector variables  
.--------------------------
.
NUM50     FORM      "50"
NUM51     FORM      "51"
NUM52     FORM      "52"
NUM65     FORM      "65"
NUM66     FORM      "66"
.
. Define read/update variables  
.-----------------------------
.
CFORM5    FORM      5
CFORM6    FORM      6
XFORM8    FORM      8
