. *****************************************************************************
. *                                                                           *
. * Include Name  : IBACONFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Control File                  *
. *                                                                           *
. * File Type     : ASCII                                                     *
. *                                                                           *
. * File Name     : controlf.txt                                              *
. *                                                                           *
. * Modifications :                                                           *
. *       V10.14.01 09/07/2019  Davin            TSK 0871079                  *
. *                 Added IBCNMHRI - Message Header ID (Receiving)            *
. *       V10.13.01 09/01/2019  Ania P           TSK 0865039                  *
. *                 Added IBCNMHPI/IBACN014                                   *
. *       V10.06.01 01/07/2015  Ania P           CAR 306161                   *
. *                 Added IBCNRESA/IBACN013                                   *
. *       V10.03.01 05/04/2013  Davin S          CAR 280425                   *
. *                 Changed IBCNUCIS - added options 2 & 3                    *
. *       V10.01.01 17/12/2010  Davin S          CAR 235587                   *
. *                 Added IBCNQSSA for HL7 interface.                         *
. *       V9.05.B01 06/01/2006  Mike Laming      CAR 76341                    *
. *                 Added IBCNHSID & IBCNHCEN for SACS Referrals              *
. *       V9.04.04  25/11/2005  Davin S          CAR 64087                    *
. *                 Added IBCNSOLS for HL7 interface.                         *
. *       V9.04.03  21/06/2005  Steve Armstrong  CAR 64087                    *
. *                 Added IBCNUCIS, IBCNCBSN, IBCNCBSK, IBCNCRTI, IBCNCRTN &  *
. *                 IBCNCRTO for PAS-CIS broadcast message interface.         *
. *       V9.04.02  07/04/2005  Davin            CAR 60343                    *
. *                 Updated IBCNSATO (Sec 0, Pos 86) - No longer used         *
. *       V9.04.01  24/01/2005  Davin            CAR 56663                    *
. *                 Added IBCNUMCI                                            *
. *****************************************************************************
. *       V9.03.01  27.06.2003  Lina Vo    CAR36485                           *
. *                 Added fields IBCNWTMD & IBCNWVAR                          *
. *****************************************************************************
. *       C2.09.01  30.11.2000  Sandra Barcham                                *
. *                 Add BAS Code Indicator                                    *
. *****************************************************************************
. *       C2.00.05  23/10/2000  Dean Cramer                                   *
. *                 Add to sector 0 at position 87 new parameter              *
. *                 Next ACT Health message id.                               *
. *       C2.00.04  05/10/2000  Dean Cramer                                   *
. *                 Add to sector 0 at position 86 new parameter              *
. *                 Printer type 6 (Sato cx2000) option allowable             *
. *       C2.00.03  08/02/2000  J.Tan                                         *
. *                 Added IBCNUGST - use GST                                  *
. *       C2.00.02  21/02/2000  Davin                                         *
. *                 Added IBCNTMDM & IBCNVARM - moved from PATCONFD           *
. *       C2.00.01  17/01/2000  Davin                                         *
. *                 Added IBCNABNN - Hospital ABN Number (for GST)            *
. *****************************************************************************
. *       C1.00.06  08/06/1998  Steve Armstrong                               *
. *                 Mods for New Login security feature                       *
. *                 IBCNNSEC, IBCNNDAY, IBCNNPAS                              *
. *       C1.00.05  03/10/1996  Greg Horvat      Holy Spirit Mods             *
. *                 Added IBCNAPST for auto generation of default postcode    *
. *       C1.00.04  28/03/1996    Whirlpool  (Release 5.04)                   *
. *                 added IBCNSUSE for are logging system usage               *
. *       C1.00.03  27/03/1996    Justin Coates  (SUHT mods)                  *
. *                 added IBCNAQOP for Queue option is selprint               *
. *       C1.00.02  13/11/1995    Justin Coates  (SUHT mods)                  *
. *                 added IBCNPLTR for print at a later date option           *
. *                 added IBCNUDAY for unknown day in keydate                 *
. *       C1.00.00  10.09.94 B.G.Ackland (IBA)                                *
. *                 Add Multiple Hospital Indicator                           *
. *                 to be compatible with V5.01                               *
. *                                                                           *
. *                                                                           *
. *****************************************************************************
.
.          SECTOR  0
.          --------- 
. NAME     TYPE      LENGTH     START LOC.   SYSTEM DESCRIPTION
. ----     ----      ------     ----------   ------ -----------
.CDD        FORM          2            2      TODAYS DAY
.CMM        FORM          2            4      TODAYS MONTH
.CYY        FORM          2            6      TODAYS YEAR
.CCC        FORM          2            8      TODAYS CENTURY
.EXITCHAR   DIM           1           10      EXITCHAR Character
.CTIMEOUT   FORM          2           11      Timeout Length ( mins )
.                                               0 = No Timeout
.CSECCNT    FORM          2           13      Security Access Count
.                                               0 = No Count
.CIMENAUD   FORM          1           15      Invalid Menu Access Audit Write
.                                               0 = Off
.                                               1 = On
CLOGOUT     FORM          2           16      Logout Length ( mins )
.                                               0 = No Timeout
.
IBCNMESS    FORM          6           19      Next Message Number
IBCNAESN    DIM           3           25      AAE System Number
IBCNOPSN    DIM           3           28      Outpatients System Number
IBCNBLSN    DIM           3           31      Patient Billing System Number
IBCNMASN    DIM           3           34      Mamography System Number
IBCNRASN    DIM           3           37      Radiology System Number
IBCNINSN    DIM           3           40      Inpatient System Number
IBCNMHOS    FORM          1           43      Multi Hospital Indicator
IBCNPLTR    FORM          1           44      Print at a Later Date (Y/N)
.                                                 0 = No, 1 = Yes 
IBCNUDAY    FORM          1           45      Unknown Day in keydate (Y/N)
.                                                 0 = No, 1 = Yes 
IBCNAQOP    FORM          1           46      Allow Queue option in selprint
.                                                 0 = No, 1 = Yes 
IBCNSUSE    FORM          1           47      Logging System Usage ?
.                                                 0 = No, 1 = Yes
IBCNAPST    DIM           4           48      Auto gene of default postcode
IBCNPBXI    DIM           9           52      Misc Charge for Phone Call Billing
IBCNNSEC    FORM          1           61      Using new security
.                                                 0 = No, 1 = Yes
IBCNNDAY    FORM          6           62      No.of days before passwd expires
IBCNNPAS    FORM          2           68      No. of passwd changes in audit
IBCNABNN    DIM          11           70      Hospital ABN Number
IBCNTMDM    DIM           2           81      program locking : IBATEM01
IBCNVARM    DIM           2           83      program locking : IBATEM02
IBCNUGST    FORM          1           85      Using GST ?
.                                             0 = No GST, 1=NZ GST,
.                                             2 = AUS GST (Per Item),
.                                             3 = OTHER GST (Total Inv)
IBCNSATO    FORM          1           86      Printer type 6 (Sato cx2000)
.                                             (No longer used)           
IBCNMESI    FORM         20           87      Next ACT health message Id. 
IBCNUBAS    FORM          1          107      Using BAS Codes
.                                                 0 = No, 1 = Yes
IBCNBSFY    DIM           4          108      Financial Year for BAS Start
IBCNWTMD    DIM          10          112      Web userid for locking of IBATEM01
IBCNWVAR    DIM          10          122      Web userid for locking of IBATEM02
IBCNUMCI    DIM           1          132      Using Medclaims interface?
.                                             0=No 1=Yes
IBCNUCIS    DIM           1          133      Using HL7 Messaging ?
.                                                0 = No
.                                                1 = Yes - Socket Only
.                                                2 = Yes - EDI Only
.                                                3 = Yes - Socket and EDI
IBCNCBSN    DIM          20          134      CIS Broadcast Service Name
IBCNCBSK    DIM          20          154      CIS B'dcast Interface Socket Alias
IBCNCRTI    DIM           2          174      CIS Retry Interval (secs)
IBCNCRTN    DIM           3          176      CIS Number of Retries
IBCNCRTO    DIM           2          179      CIS Response Timeout (secs)
IBCNSOLS    DIM          20          181      HL7 Solicited Socket Alias
IBCNHSID    DIM           5          201      Health Service Identifier
IBCNHCEN    DIM           3          206      Health Care Establishment Number
IBCNQSSA    DIM          20          209      Query Solicited Socket Alias
IBCNRESA    DIM          20          229      Results Socket Alias
IBCNMHPI    DIM           1          249      Message Header ID - Broadcast
IBCNMHRI    DIM           1          250      Message Header ID - Receiving
.
.End of record                       251
.
.
.          SECTOR  2
.          --------- 
CONAME      DIM          35            4      COMPANY NAME
.
CPORTADD    FORM          1           41      ADD TO PORT NUMBER (OFFSET)
CCOSECCD    DIM           6           42      Company Security Code
.
CCOUNTRY    FORM          1           65      0=AUSTRALIA
.                                             1=AMERICA  
.
SYSNUMB2   DIM          25          120  
.
OPT31    INIT      "Theatre Utilization "
OPT32    INIT      "Inventory System    "
OPT33    INIT      "Pharmacy System     "
OPT34    INIT      "Dispensing System   "
OPT35    INIT      "H.D.P. Transmissions"
OPT36    INIT      "Cash Receipts Module"
OPT37    INIT      "Maternity           "
OPT38    INIT      "Booking             "
OPT39    INIT      "Accident & Emergency"
OPT40    INIT      "Outpatients         "
OPT41    INIT      "Private Practice    "
OPT42    INIT      "Receipting          "
OPT43    INIT      "Patient Billing     "
OPT44    INIT      "Patient System Mng. "
OPT45    INIT      "Waiting Lists       "
OPT46    INIT      "                    "
OPT47    INIT      "Patient Dependency  "
OPT48    INIT      "Mammography         "
OPT49    INIT      "Radiology           "
OPT50    INIT      "Support Database    "
OPT51    INIT      "Operating Room Util."
OPT52    INIT      "Discharge Summary   "
OPT53    INIT      "Nursing Stations    "
OPT54    INIT      "Receive Orders      "
OPT55    INIT      "N.S. System Managmnt"
.
P31      INIT      "IBATHE99"
P32      INIT      "IBAINV99"
P33      INIT      "IBAPHA99"
P34      INIT      "IBADIS99"
P35      INIT      "IBAHCS99"
P36      INIT      "IBAMRC99"
P37      INIT      "IBAMAT99"
P38      INIT      "IBABOK99"
P39      INIT      "IBAAAE99"
P40      INIT      "IBAOUT99"
P41      INIT      "IBAPPP99"
P42      INIT      "IBARCP99"
P43      INIT      "IBABIL99"
P44      INIT      "IBAHOS99"
P45      INIT      "IBAWAT99"
P46      INIT      "        "
P47      INIT      "IBADEP99"
P48      INIT      "IBAMAM99"
P49      INIT      "IBARAD99"
P50      INIT      "IBAINT99"
P51      INIT      "IBAOPR99"
P52      INIT      "IBASUR99"
P53      INIT      "IBANSM99"
P54      INIT      "IBARCO99"
P55      INIT      "IBANSS99"
.
CSYSTRAK    FORM          1         149       0=SYSTEM TRACKING ON
.                                             1=SYSTEM TRACKING OFF
.
CMENUSYS   DIM           8          154        ANSWER CHAIN OUT "IBAMENU "  
.
.
. NAME     TYPE      LENGTH     START LOC.   SYSTEM DESCRIPTION
. ----     ----      ------     ----------   ------ -----------
SYSNUMB    DIM          20         162
.
OPT1     INIT      "Payroll             "
OPT2     INIT      "Accounting          "
OPT3     INIT      "User Specific Menu  "
OPT4     INIT      "System Messages     "
OPT5     INIT      "Security            "
OPT6     INIT      "Nursing Admin.      "
OPT7     INIT      "Patient Care Plans  "
OPT8     INIT      "Linen Monitoring    "
OPT9     INIT      "Any Other Program   "
OPT10    INIT      "Trust Accounting    "
OPT11    INIT      "Open Spool File     "
OPT12    INIT      "Close Spool File    "
OPT13    INIT      "Preventative Maint. "
OPT14    INIT      "Patient Management  "
OPT15    INIT      "Membership System   "
OPT16    INIT      "Day Centre          "
OPT17    INIT      "Personnel           "
OPT18    INIT      "Dietary             "
OPT19    INIT      "Record Tracking     "
OPT20    INIT      "RUS Data Entry      "
.
P1       INIT      "IBAPAY97"
P2       INIT      "IBACGL99"
P3       INIT      "IBAXXX99"
P4       INIT      "SYSTMESS"
P5       INIT      "SECURITY"
P6       INIT      "IBAADM99"
P7       INIT      "IBAPCP99"
P8       INIT      "IHALMS99"
P9       INIT      "        "
P10      INIT      "IBATAC99"
P11      INIT      "        "
P12      INIT      "        "
P13      INIT      "IBAPRE99"
P14      INIT      "IBASYS99"
P15      INIT      "IBAMEM99"
P16      INIT      "IBADAY99"
P17      INIT      "IBAPER99"
P18      INIT      "IBACAT99"
P19      INIT      "IBATRA99"
P20      INIT      "IBARUS99"
.
CSNAME        DIM          25       182        COMPANY NAME
.
.MENUACC   DIM           8          207        ACCOUNTING SYSTEM MENU
.MENUPAY   DIM           8          215        PAYROLL SYSTEM MENU
.
SYSNUMB1   DIM          10          223        
.
OPT21    INIT      "Debtors System      "
OPT22    INIT      "Costing System      "
OPT23    INIT      "Assets Register     "
OPT24    INIT      "Meal Menu System    "
OPT25    INIT      "Medical Services    "
OPT26    INIT      "Doctors Module      "
OPT27    INIT      "Medical Records     "
OPT28    INIT      "Printer System      "
OPT29    INIT      "Spooling Functions  "
OPT30    INIT      "Direct to System XX "
.
P21      INIT      "IBADDP99"
P22      INIT      "IBACOS99"
P23      INIT      "IBAASS99"
P24      INIT      "IBAMEL99"
P25      INIT      "IBAMED99"
P26      INIT      "IBADOC99"
P27      INIT      "IBAREC99"
P28      INIT      "IBASYS99"
P29      INIT      "IBASPOOL"
P30      INIT      "        "  **** DO NOT FILL IN ..DIRECT CHAINING
.
CSPASSWD   DIM           8          233        NEW SYSTEM PASSWD
.
.      MENUSUP ONLY AT ST.VINCENTS OLD SUPPLY SYSTEM
.
.MENUSUP   DIM           8          233        SUPPLY & INVTRY SYSTEM MENU
.
.MENUDEB   DIM           8          241        DEBTORS SYSTEM MENU
.
SPOOL      FORM          1          249        0=spooling,1=NO Spooling
.
.      *** end of record  ***       250
