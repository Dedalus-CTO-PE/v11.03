. ****************************************************************************
. * Include Name  :   PATHSPFD.INC                                           *
. *                                                                          *
. * Function      :   File Def'n Include for Patient                         *
. *                   Hospital Details                                       *
. *                                                                          *
. * File Type     :   SQL                                                    *
. *                                                                          *
. * File Name     :   pathspaf.dat                                           *
. *                                                                          *
. * Mods          :                                                          *
. *       V10.09.01 28/11/2016  Davin             TSK 0822329                *
. *                 Added PTHSACTR (Default ACC Treatment Provider)          * 
. *                 28/11/2016  Davin             TSK 0323730                *
. *                 Added PTHSAGEL and PTHSAGEH                              * 
. *                 28/11/2016  Davin             TSK 0814742                *
. *                 Added PTHSMAPH                                           * 
. *       V10.08.03 03/10/2016  Peter Vela        TSK 0294177                *
. *                 Added Billing Agent ID to PTHSORID comments              * 
. *       V10.08.02 29/03/2016  Steve Armstrong   TSK 0312570                *
. *                 Added PTHSHSST                                           *
. *       V10.08.01 29/03/2016  Steve Armstrong   TSK 0309924                *
. *                 Added PTHSUCRG                                           *
. ****************************************************************************
. *       V10.05.02 08/08/2014  Steve Armstrong   CAR 303877                 *
. *                 Added PTHSHDHB & PTHSAGNC                                *
. *       V10.05.01 07/08/2014  Steve Armstrong   CAR 304659                 *
. *                 Moved PTHSCFST from SPARE variable into FD               *
. ****************************************************************************
. *       V10.04.03 12/03/2014  Don Nguyen        CAR 294888                 *
. *                 Added PTHSCFST to spare - 3M Codefinder SYS Tag Value    *
. *       V10.04.02 05/02/2014  Ebon Clements     CAR 291879                 *
. *                 Added PTHSHPIO - HPI-O Number                            *
. *       V10.04.01 30/12/2013  Patrick Adair     CAR 294444                 *
. *                 Moved PTHSHBID and PTHSDCDT out of spare variable        *
. ****************************************************************************
. *       V10.03.03 05/11/2012  Mike Laming       CAR 270133                 *
. *                 Added PTHSDCDT - MR Default Coding Destination           *
. *       V10.03.02 04/07/2012  Don Nguyen        CAR 264561                 *
. *                 Added PTHSHBID - Hospital BPAY Identifier                *
. *       V10.03.01 07/11/2011 Mike Laming        CAR 251645                 *
. *                 Moved fields out of PTHSSPAR, lengthened recd to 560     *
. *       V10.02.06 14/10/2011 Mike Laming        CAR 251645                 *
. *                 Added PTHSRCOP "Resp.Clinician Dflt Code for Organ Proc" *
. *       V10.02.05 22/09/2011  J.Tan             CAR 244159                 *
. *                 Added PTHSCRSR - Register for Credit card surcharge      *
. *       V10.02.04 19/05/2011  Mike Laming       CAR 240724                 *
. *                 Add PTHSHHOS Default MR Home Hospital Id.                *
. *       V10.02.03 06/05/2011  Mike Laming       CAR 240716                 *
. *                 Add PTHSTORD   Tracking Sort Order (MRT)                 *
. *       V10.02.02 20/04/2011  Peter McMullen    CAR 239549                 *
. *                 Add PTHSSNAM   hosp short name                           *
. *       V10.02.01 31/03/2011  Jill Parkinson    CAR 239574                 *
. *                 Increased printer field                                  *
. *       V10.01.01 21/03/2011  Steve Armstrong   CAR 240007                 *
. *                 Added PTHSERSR                                           *
. *       V10.00.01 12/04/2010  Steve Armstrong   CAR 219841                 *
. *                 Added PTHSEMAL                                           *
. *       V9.12.01  09/09/2009  Davin    CAR 204945                          *
. *                 Added PTHSCFCD                                           *
. *       V9.11.03  03/04/2009  Peter Vela    CAR 183976                     *
. *                 Added PTHSERRE to PTHSERCA                               *
. *       V9.11.02  20/11/2008  Ebon Clements  CAR 183976                    *
. *                 Added PTHSHOST to PTHSLOCN                               *
. *       V9.11.01  23/09/2008  Ebon Clements  CAR 174049                    *
. *                 Added PTHSMORG to PTHSCHOD                               *
. *       V9.10.01  07/05/2008  J.Tan   CAR 166690                           *
. *                 Added PTHSORID                                           *
. *       V9.08.02  15/05/2007  J.Tan   CAR 140282                           *
. *                 Added PTHSUFMS=2 for Other FMS                           *
. *       V9.08.01  19/03/2007  Mike Laming    CAR 125462                    *
. *                 Added PTHSEDIP                                           *
. *       V9.07.01  24/08/2006  Ebon Clements  CAR 111005                    *
. *                 Added PTHSSPID                                           *
. *       V9.05.01  05/04/2006  J.Tan   CAR 101054                           *
. *                 Added PTHSPTIN & PTHSPRIN                                *
. *       V9.05.B01 06/01/2006  Mike Laming CAR 76341                        *
. *                 Added PTHSHSID & PTHSHCEN                                *
. *       V9.04.02  07/10/2004  Lina Vo CAR 54165                            *
. *                 Added Hospital ABN Number                                *
. *       V9.04.01  21/09/2004  Lina Vo CAR 53660                            *
. *                 Added Using Theatre Fee Field                            *
. *       ........  24/09/2004  Davin   CAR 53266                            *
. *                 Added Medical Record Defaults                            *
. *       ........  27/09/2004  Lina Vo CAR 53798                            *
. *                 Added Default Claim Code & Approval No.                  *
. *       ........  29/09/2004  J.Tan   CAR 53798                            *
. *                 Added Using FMS system                                   *
. *       V5.02.02  16/05/1995    Steve Armstrong                            *
. *                 added PTHSHSNO                                           *
. *       V5.02.01  10/05/1995    Justin Coates                              *
. *                 added PTHSACCT                                           *
. ****************************************************************************
.Data File Definition
.--------------------
PATHSPA1   IFILE    SQL, FIXED=560, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.
PTHSHOSP  DIM       3         3       1   Hospital ID  
PTHSNAME  DIM       50       50       4   Hospital Name
PTHSADD1  DIM       35       35      54   Hospital Address line 1
PTHSADD2  DIM       35       35      89   Hospital Address line 2
PTHSADD3  DIM       35       35     124   Hospital Address line 3
PTHSADD4  DIM       35       35     159   Hospital Address line 4
PTHSPCOD  DIM       8         8     194   Hospital Post Code
PTHSTELE  DIM       20       20     202   Hospital Telephone number
PTHSFAXN  DIM       20       20     222   Hospital Fax Number
PTHSUNIT  DIM       5         5     242   Unit 
PTHSHDPC  DIM       8         8     247   Health Department code
PTHSMRPR  DIM       6         6     255   Medical Records Request Printer
PTHSPACT  DIM       12       12     261   Posting Account
PTHSHSNO  DIM       2         2     273   Hospital No
PTHSPMBS  DIM       1         1     275   Print MBS item code on invoice (Y/N)
.                                         1=Yes, 0=No
PTHSTFEE  DIM       1         1     276   Using theatre fees file (pattfees) ?
.                                         1=Yes, Space=No
PTHSHLOC  DIM       4         4     277   Default MR home location
PTHSRCTY  DIM       3         3     281   Default MR record type
PTHSVOLM  DIM       2         2     284   Default MR volume
PTHSSTAT  DIM       3         3     286   Default MR Record Status
PTHSDCLM  DIM       3         3     289   Default Claim Code (Cat CL)
PTHSAPPR  DIM       10       10     292   Approval Number             
PTHSUFMS  DIM       1         1     302   Using IBA FMS system
.                                         0=No, 1=Yes(IBA), 2=Yes(Other)
PTHSABNN  DIM       11       11     303   Hospital ABN Number
PTHSHSID  DIM       5         5     314   Health Service Identifier
PTHSHCEN  DIM       3         3     319   Health Care Establishment Number
PTHSPTIN  DIM       1         1     322   Patient G/L Interface
.                                         1=Yes, Space=No
PTHSSPID  DIM       1         1     323   SACS Processing ID
.                                         (P)roduction, (T)est and (D)ebugging
PTHSEDIP  DIM       2         2     324   Multi Hosp EDI File Prefix
PTHSORID  DIM       8         8     326   Organisation ID
.                                         New Zealand: (GXXNNN-C)
.                                         G - a constant prefix
.                                         XX - Alpha or Numeric
.                                         C - a Check Digit
.                                         Australia:
.                                         Billing Agent ID
PTHSMORG  DIM       1        1      334   Using Morgue Management   
.                                         1=Yes, 0=No
PTHSCHOT  DIM       1        1      335   Capture HouseKeeping on Transfer
.                                         1=Yes, 0=No
PTHSCHOD  DIM       1        1      336   Capture HouseKeeping on Discharge
.                                         1=Yes, 0=No
PTHSHOST  DIM       1        1      337   Hospital Type
.                                         0 = Private (Non Day Facility)
.                                         1 = Public  (Non Day Facility) 
.                                         2 = Private (Day Facility)
.                                         3 = Public  (Day Facility) 
PTHSUDVA  DIM       1        1      338   Using Cat CL for DVA Eclipse Claiming
.                                         1=Yes, 0=No
PTHSLOCN  DIM       8        8      339   Eclipse Location 
PTHSERRE  DIM       3        3      347   Eclipse Remittance Release Register
PTHSERCD  DIM       6        6      350   Eclipse Remittance Release Cash Drawer
PTHSERCA  DIM       15       15     356   Eclipse Remittance Release Chq Accnt
PTHSCFCD  DIM       6        6      371   Cancer Facility Code
PTHSEMAL  DIM       80       80     377   Email address
PTHSERSR  DIM       3        3      457   Eclipse Remittance Suspense Register
PTHSSNAM  DIM       10       10     460   Hospital short name 
PTHSTORD  DIM       1        1      470   MRT Tracking Sort Order
.                                         0 = Straight Number
.                                         1 = Terminal Digit
.                                         2 = Middle Digit
.                                         3 = Original Terminal (see CTYPEUR)
.                                         4 = Original Default  (see CTYPEUR)
PTHSHHOS  DIM       3        3      471   Default MR Home Hospital Id.(pathspaf)
PTHSCRSR  DIM       3        3      474   Register for Credit Card Surcharge
PTHSRCOP  DIM       10       10     477   Resp.Clinician Dflt Code f Organ Proc
PTHSHBID  DIM       4        4      487   Hospital BPAY Identifier (1-4 digits)
PTHSDCDT  DIM       4        4      491   MR Default Coding Destination
PTHSHPIO  DIM       20       20     495   HPI-O Number
PTHSCFST  DIM       3        3      515   3M Codefinder SYS Tag Value
PTHSHDHB  DIM       3        3      518   District Health Board (Cat dh)
PTHSAGNC  DIM       3        3      521   Health Agency (Cat HA)
PTHSUCRG  DIM       1        1      524   Using Cancer Registration
.                                          0 or Blank = No
.                                          1 = Yes
PTHSHSST  DIM       1        1      525   Hospital State for Default DRG
.                                          0 = Not Australia
.                                          1 = New Zealand
.                                          2 = New South Wales
.                                          3 = Victoria
.                                          4 = Queensland
.                                          5 = South Australia
.                                          6 = Western Australia
.                                          7 = Tasmania
.                                          8 = Northern Territory
.                                          9 = Australian Capital Territory
PTHSACTR  DIM       10       10     526   Default ACC Treatment Provider
PTHSAGEL  DIM       3        3      536   Lowest Age Limit Yrs (Must be >= 0)
PTHSAGEH  DIM       3        3      539   Highest Age Limit Yrs (Must be < 200)
PTHSMAPH  DIM       2        2      542   Maximum age for Paediatric Hydration
PTHSSPAR  DIM       16       16     544   Spare
.
.End of Record                      560
.
.
. Redefine form fields
. --------------------
PTHSNUMB  FORM      2                    * Hospital No. as form field
