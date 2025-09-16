. **************************************************************************
. *                                                                        *
. * Include Name :       SINCONFD.INC                                      *
. *                                                                        *
. * Function     :       File Definition Include for                       *
. *                      CONTROL FILE                                      *
. *                                                                        *
. * File Type    :       ASCII                                             *
. *                                                                        *
. * File Name    :       controlf.txt                                      *
. *                                                                        *
. * Modifications:                                                         *
. *                                                                        *
. * V9.03.01  16/09/2005  Mike Laming       CAR 68672                      *
. *           Added SNCOBCPN - Barcode Printer Number - Sect 63 Pos 243    *
. * V9.03.01  13/07/2004  Steve Armstrong   CAR 51708                      *
. *           Removed Sector 13 as this was a duplicate of PATCONFD.       *
. **************************************************************************
. * VF.09.03  22/05/2003  CAR 39306   Mike Laming                          *
. *           Added SNCOEMAL - J&J Virtual Integration (E-mail) (Y/N)      *
. * VF.09.02  13/03/2003  Davin  CAR/Quote: 15040                          *
. *           Added SNCOMDPC - Multiple Delivery Point Codes (YES/NO)      *
. * VF.09.01  14/02/2002 Tonii  SRF 12580 (Quote: 10239-01)                *
. *           Added SNCOSFYN - Confirm START to FINISH print YES/NO        *
. * VF.01.001 29/05/2001 Dave Matthews                                     *
. *          Add SECTOR 107                                                *
. *          SRF 10437                                                     *
. *                                                                        *
. * VF.01.000 08/05/2000 CH  Added EAN or PEG Bureau Id                    *
. *                                                                        *
. * V6.00.27 15.01.1996 Sandra Barcham                                     *
. *          Only contain used parameters                                  *
. *          srf 611946                                                    *
. **************************************************************************
.
.    SECTOR 23       :  SYSTEM INDICATORS
.
.NAME      TYPE   LENGTH      START   DESCRIPTION
.----      ----   ------      -----   -----------
HNAME     DIM       50        1       HOSPITAL NAME (LONG) 
HSHORT    DIM       20        51      HOSPITAL NAME (SHORT) 
.
.
HFACTOR   FORM      4         80      STOCKTAKE FACTOR 
.
.
HACCNT    FORM      1         95      ARE YOU RUNNING THE ACCOUNTING SYSTEM 
.                                         1 = YES
.
HBACK     FORM      1         120     USING BACKORDER SYSTEM 
.                                         1 = YES
.
HORDDES   DIM       1         124     P/O DESIGNATOR CODE 
.
.
SNCODFYR  DIM       4         129     Default Current Year (CCYY)
SNCONOPR  FORM      2         133     12 or 13 Periods
HPATIENT  FORM      1         135     ARE YOU RUNNING THE PATIENT SYSTEM 
.                                         1 = YES
.
HDEFWH    DIM       5         143     IF 'NO' ,DEFAULT WAREHOUSE CODE 
.                                     (for Non Stock and Sundry Purchases GL )
.
.
HPHARM    FORM      1         157     ARE YOU RUNNING THE PHARMACY MODULE? 
.                                         1 = YES
.
HLABPG    FORM      1         188     NUMBER OF LABELS ACROSS PAGE 
HLABPRT   FORM      3         189     NUMBER OF LABELS TO PRINT 
.
.
HISSUE    FORM      7         194     NEXT ISSUE NUMBER FOR RETURNS 
HIMPREST  FORM      7         201     NEXT ISSUE NUMBER FOR IMPREST 
.
HCOSLAB   FORM      1         238     LABEL SIZE FOR COST CENTRE 
.                                         1 = SMALL
.                                         2 = LARGE
HCATLAB   FORM      1         239     LABEL SIZE FOR CATALOG 
HPHALAB   FORM      1         240     LABEL SIZE FOR PHARMACY 
.
.
HAVGCOST  FORM      1         248     WHEN TO CALCULATE AVERAGE COST 
.                                         1 = PROCESSING RECEIVALS
.                                         2 = PROCESSING INVOICES
.HCURCOST  FORM      1         249     UPDATE CURRENT COST WITH AVERAGE COST 
.                                         1 = YES
.                                         2 = NO
.End of Record                250
.
.    SECTOR 24       :  SYSTEM INDICATORS
.
.NAME      TYPE   LENGTH      START   DESCRIPTION
.----      ----   ------      -----   -----------
HAPER1    DIM       10        1       PERIOD 1 DESCRIPTION EG.JULY 
HAPER2    DIM       10        11      2 EG.AUG 
HAPER3    DIM       10        21      3 
HAPER4    DIM       10        31      4 
HAPER5    DIM       10        41      5 
HAPER6    DIM       10        51      6 
HAPER7    DIM       10        61      7 
HAPER8    DIM       10        71      8 
HAPER9    DIM       10        81      9 
HAPER10   DIM       10        91      10 
HAPER11   DIM       10        101     11 
HAPER12   DIM       10        111     12 
.
.      RANGE FOR SELECTED MANUAL P/O NUMBERS
.
HSTRORD   FORM      7         121     Selected P/O Starting Number
HFINORD   FORM      7         128     Selected P/O Ending Number
.
.      ACCOUNTING INTERFACE FIELDS
.
HACCDATA  DIM       20        135     GENERAL LEDGER DATA DIRECTORY 
.
.      INVENTORY CONTROL LEVELS
.
HCONPERD  FORM       3        155     CONSUMPTION PERIOD (DAYS)
HADUPERD  FORM       2        158     AVERAGE DAILY USAGE PERIOD (MONTHS)
HABCLEV1  FORM       2        160     A.B.C ANALYSIS LEVEL 1 (NORMALLY 10% A-B)
HABCLEV2  FORM       2        162                    LEVEL 2 (NORMALLY 20% B-C)
HFIVCOLM  FORM       1        164     USING 5 COLUMNS ON IMPREST WORK SHEETS
.                                        1 - Yes
.                                        2 - No
HLASTCIN  FORM       1        165     UPDATE LAST COST
.                                        1 - Purchase Order Time
.                                        2 - Invoice Time
.HAVGCLST  FORM       1        166     UPDATE AVERAGE COST WITH LAST COST
.                                        1 - Yes
.                                        2 - No
.
.      ACCOUNTING INTERFACE FIELDS
.
INCOCASH  FORM      1         177     Cash or Accrual Issues Transfer (IBASUP22)
.                                      0 = Cash 1 = Accrual
.
HACCCODE  FORM      1         198     Breakup of Account Codes for Transmit
.                                         1 = MODBURY (4 chars for CC & 5 for
.                                                      subjective)
.                                         2 = Use Warehouse Issues
.HCOMMSPL  FORM      1         199     Breakup of Credit Entries for Transmit
.                                          1  =  Yes
.                                          2  =  No
.
.        NOTE IN THE AUDITS  0 = NOT REQUIRED 1 = REQUIRED
.
HAUDA     FORM      1         201     AUDIT Commodity Group (sincgaaf)
HAUDB     FORM      1         202     AUDIT Cost Centre File (sinccaaf)
HAUDC     FORM      1         203     AUDIT Catalog File (sinciaaf)
HAUDD     FORM      1         204     AUDIT Imprest File (sinimpaf)
HAUDE     FORM      1         205     AUDIT Factor File (sinfacaf)
HAUDF     FORM      1         206     AUDIT Backorder File (sinbacaf)
HAUDG     FORM      1         207     AUDIT Catalog/Supplier (sincicaf)
HAUDH     FORM      1         208     AUDIT Catalog/Warehouse (sincieaf)
. HAUDI     FORM      1         209     AUDIT I
HAUDJ     FORM      1         210     AUDIT Purchase Orders (sinpoaaf,sinpocaf)
. HAUDK     FORM      1         211     AUDIT K 
. HAUDL     FORM      1         212     AUDIT L
. HAUDM     FORM      1         213     AUDIT M
. HAUDN     FORM      1         214     AUDIT N 
HAUDO     FORM      1         215     AUDIT Originator File (sinoriaf)
HAUDP     FORM      1         216     AUDIT Pharmacy (phascaaf)
. HAUDQ     FORM      1         217     AUDIT Q
HAUDR     FORM      1         218     AUDIT Receivals File (sinpofaf)
HAUDS     FORM      1         219     AUDIT Product Group (sinsuaaf)
. HAUDT     FORM      1         220     AUDIT T
. HAUDU     FORM      1         221     AUDIT U 
. HAUDV     FORM      1         222     AUDIT V 
HAUDW     FORM      1         223     AUDIT Warehouse File (sinwaraf)
. HAUDX     FORM      1         224     AUDIT X
. HAUDY     FORM      1         225     AUDIT Y 
. HAUDZ     FORM      1         226     AUDIT Z
.
HRECPRT   FORM      1         227     PRINTING RECEIVAL TYPE 
.                                         0 = STANDARD
.                                         1 = ST VINCIENTS
.                                         2 = MODBURY
.
SNCOVHA4  DIM       6         228     HSA Customer Code 4
SNCOVHA5  DIM       6         234     HSA Customer Code 5
.
.End of Record                250
.
.
.
.    SECTOR 25       :  SYSTEM INDICATORS
.
.NAME      TYPE   LENGTH      START   DESCRIPTION
.----      ----   ------      -----   -----------
HADEL1    DIM       30        1       DELIVERY POINT 1 
HADEL2    DIM       30        31      DELIVERY POINT 2 
HADEL3    DIM       30        61      DELIVERY POINT 3 
HADEL4    DIM       30        91      DELIVERY POINT 4 
HADEL5    DIM       30        121     DELIVERY POINT 5 
HADEL6    DIM       30        151     DELIVERY POINT 6 
HADEL7    DIM       30        181     DELIVERY POINT 7 
HADEL8    DIM       30        211     DELIVERY POINT 8 
.
.End of Record                250
.
.
.    SECTOR : 26    (PHARMACY DETAILS)
.
.NAME      TYPE   LENGTH      START   DESCRIPTION
.----      ----   ------      -----   -----------
INCNVHAD  DIM       8          1      VHA Transmission Date CCYYMMDD
.
.
PHPATDAT  DIM       20        10      PATIENT CONTROLF DATA DIRECTORY 
INCNVHAC  DIM       6         30      VHA Customer code
INCNVHAS  DIM       5         36      VHA Supplier Code
.INCNVHAD  DIM       6         41      VHA Transmission Date YYMMDD
INCNVHAN  FORM      3         47      VHA Next Transmission Number            
INCNTRAN  DIM       2         50      VHA Port of person using VHA interface.
.                                     This is so that it may be cleared after a
.                                     system crash.
INCNCVHA  DIM       40        52      Command to execute for VHA Connect only
INCNTVHA  DIM       40        92      Command to execute for VHA Transfer only 1
INCNVHAM  DIM       40        132     Message for VHA SOS Orders
INCNTRAL  FORM       1        172     Transmit all VHA Orders 0 = No
INCNTRPR  FORM       1        173     Trasmit Printed Orders Only 0 = No
INCNSOSD  DIM       20        174     SOS Transfer Directory 
INCNSOSI  FORM       1        194     Using SOS 1 - Yes             
PHITEM    DIM        9        195     Miscellaneous Item Code 
.
.
INCNRVHA  DIM       40        206     Command to execute for VHA Receive only
HVHAPART  DIM        1        246     VHA Code to use (0=customer, 1=vendor)
HPOWHDFT  FORM       1        247     Default warehouse in P/O Maintenance
.                                     0=No Default in PO Header for WH code.
.                                     1=Default WH in PO Header for PO Maint.
.                                     -> for IBASIN50
HPURCHP   FORM      2         248     PRINTING PURCHASE ORDER TYPE 
.                                       0 = Standard - Heidelberg Repat  
.                                       1 = St Vincents Melbourne
.                                       2 = Mercy             
.                                       3 = St Andrews Ipswich (all HCOA)   
.                                       4 = Hawkes Bay        
.                                       5 = Modbury           
.                                       6 = St Andrews Rocky  
.                                       7 = Darwin            
.                                       8 = Southland         
.                                       9 = Mater             
.                                      10 = St Vincents Lismore
.                                      11 = Epworth
.                                      12 = St Andrews Brisbane
.                                      13 = Anne Caudle Centre
.                                      14 = Buderim
.                                      15 = HCOA - St George
.                                      16 = Private Health Services
.                                      17 = Standard Laser
.                                      18 = Mercy Health Group
.
.End of Record                250
.
.    SECTOR : 63
.
.NAME      TYPE   LENGTH      START   DESCRIPTION
.----      ----   ------      -----   -----------
SNCOHEAN  DIM       35        1       Hospitals EAN or PEG Bureau ID
SNCOCCOM  FORM      1         36      Print Catalog, & Catalog/Supplier Comments
.                                     0=no, 1=yes
.spare                        37      Spare spaces here
.
INCOCATE  FORM      1         67      Catalog Code Type 
.                                            0 Normal Keyin
.                                            1 *JR *DE
.                                            2 Generated
.                                            3 Generated with Check Digit
INCONCAT  FORM      7         68      Next Generated Catalog Number
HAPER13   DIM       10        75      Period 13 Description
INCOSTYP  FORM      1         85      Inventory System Type 0=Old, 1=New
INCNTVH2  DIM       40        86      Command to execute for VHA Transfer only 2
INCNVHA2  DIM       6        126      VHA Customer code 2
INCOSIN7  DIM       1        132      Allow non-stock in SIN07 (1=yes)
INCOSI40  DIM       1        133      New Headings in SIN40+32+41 (1=yes)
INCOMUPC  FORM      3.2      134      Issues Mark Up Percentage (SUB27)
INCNOVHA  FORM       1       140      Order Method: 1-Direct 2-Return Order
INCNNATO  FORM       1       141      Using Nato Codes: 1=Yes 0=No
.
SNCO40PL  FORM      1        142      Print Line Between Catalogs in IBASIN40
.
HNONUSAG  FORM      1        143      HNONUSAG 
.                                         1 = Acknowledge Non-Stock & Non-
.                                             Catalog Usage at Receival time
.                                         2 = Acknowledge Non-Stock & Non-
.                                             Catalog Usage at Purchase time
HALLOCBO  FORM      1        144     Method of allocating Stock to Backorders
.                                         1 = Allocate by size (Default)
.                                         2 = Allocate by backorder date
.INCNDLCC  FORM      1        145     Use Last Cost or Current Cost in PO entry
.                                         1 = Use Last Cost 
.                                         2 = Use Current Cost 
.
INCOSTEX  FORM      1        146     Stocktake Export 1=Yes 0=No (IBASIN36)
.
HDISPBO   FORM      1        147     Automatic Backorder if using backorders
.                                         1 = Yes
.                                         0 = No
HAUTOREQ  FORM      1        148     Automatic Requisition Number Creation
.                                         1 = Yes
.                                         0 = No
SNCOPTYP  FORM      1        149     Picking sheet Layout
.                                         0 = Standard
.                                         1 = Anne Caudle Centre
SNCOPRS   FORM      1        150     Print Return of Stock Report SIN34 (1=Yes)
SNCOPPR   FORM      1        151     Print Process Receival List  SIN57 (1=Yes)
SNCOIMS   FORM      1        152     Min Stock Warning in SIN31 & 41    (1=Yes)
SNCOKWD   FORM      1        153     Using Keyword Catalog Searching
SNCOSMX   FORM      3        154     Max Lines per Order in SRO
SNCOCORP  FORM      1        157     Using Corp. Catalog/Supplier System 1=Yes
SNCOCA1   FORM      1        158     Audit Corp. Cred/Supp (csmcreaf)
SNCOCA2   FORM      1        159     Audit Corp. Catalog   (csmciaaf)
SNCOCA3   FORM      1        160     Audit Corp. Cata/Supp (csmcicaf)
SNCOASPL  FORM      1        161     Auto Spool Picking Sheet 0=No   
SNCOBSEQ  FORM      1        162     Export Barcode in Sequence Flag 1=Yes
SNCOFAXN  DIM       20       163     Hospital Fax Number
SNCOVHA3  DIM       6        183     VHA Customer code 3
SNCOTVH3  DIM       40       189     VHA Customer code 3
SNCOPRSQ  FORM      1        229     P/R Order Creation Sequence 
.                                       0 = Part Number/Cost Centre
.                                       1 = Cost Centre/Part Number
SNCOMMOD  FORM      1        230     Using Multiple Modems in SOS Interface
SNCOIMPQ  FORM      1        231     Barcode imput quantity counted        
.                                       0 = No, 1 = Yes        
SNCOAUBM  FORM      1        232     Stop automatic backordering > max quantity
.                                       0 = No, 1 = Yes        
SNCOCAT6  FORM      1        233     Allow 6 digit catalogs for barcode
.                                       0 = No, 1 = Yes        
SNCOGSTC  DIM       6        234     Default GST Code
SNCOPURC  FORM      1        240     Include GST in Purchase Analysis
.                                       0 = No, 1 = Yes        
SNCOMDPC  FORM      1        241     Multiple Delivery Point Codes?
.                                       0 = No, 1 = Yes        
SNCOEMAL  FORM      1        242     J&J Virtual Integration (E-Mail)
.                                       0 = No, 1 = Yes
SNCOBCPN  FORM      1        243     Barcode Printer Number 
.                                       0 = Default
.                                       1 = Datamax E-class
.
.End of Record               250 
.
.    SECTOR : 67
.
.NAME      TYPE   LENGTH      START   DESCRIPTION
.----      ----   ------      -----   -----------
INCNBLSC  DIM       6         1       VHA Customer code
INCNBLSS  DIM       5         7       BLS Supplier Code
.INCNBLSD  DIM       6         12      BLS Transmission Date YYMMDD
INCNBLSN  FORM      3         18      BLS Next Transmission Number            
INCNCBLS  DIM       40        21      Command to execute for BLS Connect only
INCNTBLS  DIM       40        61      Command to execute for BLS Transfer only 1
INCNRBLS  DIM       40        101     Command to execute for BLS Receive only
INCNBLSM  DIM       40        141     Message for BLS SOS Orders
INCNBLAL  FORM       1        181     Transmit all BLS Orders 0 = No
INCNBLPR  FORM       1        182     Trasmit Printed Orders Only 0 = No
INCNBLTD  DIM       20        183     BLS Transfer Directory 
INCNBLON  FORM       1        203     Using BLS 1 - Yes             
INCNBLPT  DIM        1        204     BLS 0=use customer code, 1=use vendor code
INCNOBLS  FORM       1        205     Order Method: 1-Direct 2-Return Order
INCNBTRN  DIM        2        206     BLS Port of persion using BLS interface.
.                                     This is so that it may be cleared after a
.                                     system crash.
INCNBLSD  DIM       8         208     BLS Transmission Date CCYYMMDD
.
SNCOVHA6  DIM       6         216     HSA Customer Code 6
SNCOVHA7  DIM       6         222     HSA Customer Code 7
SNCOVHA8  DIM       6         228     HSA Customer Code 8
SNCOVHA9  DIM       6         234     HSA Customer Code 9
.
.End of Record                250
.
.    SECTOR : 107
.
.NAME      TYPE   LENGTH      START   DESCRIPTION
.----      ----   ------      -----   -----------
HFMSDRCT  DIM      40         1       FMS controlf directory
HFMSBTCH  DIM      40         41      FMS batch file directory
SNCOSFYN  FORM      1         81      Confirm START to FINISH print 
.                                        0 = No (Default), 1 = Yes
.
.End of Record                250
.
