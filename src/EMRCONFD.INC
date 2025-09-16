.******************************************************************************
.*                                                                            *
.*     Include Name : EMRCONFD.INC                                            *
.*                                                                            *
.*     Function     : File Definition include for Emergency Control File      *
.*                                                                            *
.*     File Type    : ASCII                                                   *
.*                                                                            *
.*     Sectors      : 89                                                      *
.*                                                                            *
.*     File Name    : controlf.txt                                            *
.*                                                                            *
.*     Modifications:                                                         *
.******************************************************************************
.*           V11.03.04 01/09/2023  PJ Le Febour    TSK 0932585                *
.*                     Added EMCNPCTY - expected patient contact types        *
.*                     Added EMCNEMST - expected patient Emergency site       *
.*           V11.03.03 23/05/2023  Nikitha B       TSK 0932585                *
.*                     Added EMCNHSID - HEALTH_SERVICE_LOCATION_ID            *
.*                     for EDWARD Extract.                                    *
.*           V11.03.02 29/03/2023  Ebno Clements   TSK 0888745                *
.*                     Added EMCNHISA - Using emergency history audit emrhisaf*
.*           V11.03.01 14/11/2022  Bella Turco     TSK 0923504                *
.*                     Added EMCNSEDR - Service Event Delay Reason Cat (EDWD) *
.*           V11.02.02 15/09/2022  Bella Turco     TSK 0919532                *
.*                     Added EMCNSDSA - Start Date of SA Health NAEC Extract  *
.*           V11.02.01 28/06/2022  Jacob Jackson   TSK 0907640                *
.*                     Added EMCNALEX - Allow a current ED Patient to be a    *
.*                     new Expected Patient at another ED Site                *
.*           V11.01.02 18/10/2021  Jacob Jackson   TSK 0888259                *
.*                     Added EMCNPTTI - Patient Toggle to check OP            *
.*                     + IP recent visits                                     *
.*                     Added EMCNTINU - Time in Hours to Check Pat. Visit     *
.*           V11.01.01 09/03/2021  Ebon Clements   TSK 0873184                *
.*                     Added EMCDPBSD - Patient Banner Seen Date/Time         *
.*           V10.15.01 10/02/2020  Don Nguyen      TSK 0876992                *
.*                     Added EMCDTHRS - Disable restrictions for Telehealth   *
.*                     visits on the ED Map (StV Map Only).                   *
.*           V10.14.02 01/04/2019  Ebon Clements     TSK 0869562              *
.*                     Added EMCNLODD option 2 - Display unoccupied only      *
.*           V10.14.01 08/02/2019  Don Nguyen      TSK 0833548                *
.*                     Added EMCNDDCT - Default Discharge Comments            *
.*           V10.12.02 18/05/2018  Davin           TSK 0851377                *
.*                     Added EMCNSEIC - Send EMR ICD10 Codes in HL7 messages  *
.*           V10.12.01 05/11/2017  Tracey Nguyen   TSK 0825792                *
.*                     Added EMCNURSE - Use oprnuraf/pmshcpaf for ED Nurse    *
.*           V10.09.01 28/11/2016  Davin           TSK 0814742                *
.*                     Added EMCNMAPH (S.122/P.6 - Max age for Paediatric Hyd)*
.*           V10.06.03 22/07/2015  Don Nguyen        CAR 297670               *
.*                     Added EMCNUDHF - Using the Doctor Handover Form        *
.*           V10.06.02 06/05/2015  Jill Parkinson    CAR 313317               *
.*                     Added EMCNDFSD - Default firt seen date/time to adm    *
.*           V10.06.01 03/03/2015  Peter Vela        CAR 282090               *
.*                     Added EMCNLODD - Display Additional Information in     *
.*                                      Emergency Location Dropdown           *
.*           V10.05.01 14/01/2015  Ebon Clements     CAR 304779               *
.*                     Added EMCNSCLK - Stop the clock                        *
.*           V10.04.01 18/03/2014  Ania P            CAR 267773               *
.*                     Added EMCNDADR                                         *
.*           V10.03.02 11/12/2013  Ania P            CAR 275582               *
.*                     Added EMCNEDFD - ED Fax Scheduler Delay (mins)         *
.*                     Added EMCNEDFP - ED Fax Printer                        *
.*                     Added EMCNEDST - ED Stationary Template                *
.*           V10.03.01 03/07/2012  Peter Vela        CAR 265655               *
.*                     Added EMCNDDSS - Display discharged patient in Short   *
.*                     Stay if Admission Ward in EOU or EMU                   *
.*                     Added EMCNSFSM - Short Stay Unit Red Face Time Limit   *
.*           V10.01.01 28/01/2011  Ebon Clements     CAR 235686               *
.*                     Added EMCNLDIA - Using Last Diagnosis Only             *
.*           V10.00.06 27/10/2010  Peter Vela        CAR 232438               *
.*                     Added EMCNNWBR - No Warning when making a Bed Request  *
.*           V10.00.05 31/08/2010  Ebon Clements     CAR 228543               *
.*                     Added EMCNTCAT - Using Triage Category 9               *
.*           V10.00.04 26/08/2010  Peter Vela        CAR 216620               *
.*                     Added EMCNDEDI - Default Emr Diagnosis to Bed Req      *
.*                     Warning switch                                         *
.*           V10.00.03 10/05/2010  Peter Vela        CAR 218849               *
.*                     Added EMCNMSRS - Display Same Surnames in RED Emergency*
.*                     Map Screen                                             *
.*           V10.00.02 23/04/2010  J.Tan             CAR 219898               *
.*                     Added EMCNAMAF - AMA Fee opt.on Add Procedures screen  *
.*           V10.00.01 26/03/2010  Ebon Clements     CAR 216782               *
.*                     Added EMCNEVRM - Extended visit reason in minutes      *
.*           V9.12.01  01/06/2008  Ebon Clements     CAR 197930               *
.*                     Added EMCNDPRS - Display Diagnosis Over Presenting Comp*
.*                     Added EMCNPCEL - Display 3 Line Patient Cell           *
.*           V9.10.01  11/07/2008  Ebon Clements     CAR 172611               *
.*                     Added EMCNRINV - Redirect to invoice on discharge      *
.*           V9.09.01  31/10/2007  Ebon Clements     CAR 151800               *
.*                     Added EMCNRETC - Using Retail Patient Cubicle          *
.*                     24/10/2007  J.Tan             CAR 151803               *
.*                     Added EMCNOPOC,EMCNDPOC - Out of pocket fields         *
.*                     Added EMCNAPRO - Add Procedure after invoiced          *
.*                     Added EMCNGINV - Group Invoice by Service Doctor       *
.*                     Removed EMCNFFTF-use HESYST for Charging Facility type *
.*           V9.08.01  07/05/2007  Peter Vela        CAR SJOG ED Billing      *
.*                     Added EMCNFFTF - SJOG ED Billing Facility Fee or Triage*
.*                     Fee                                                    *
.*           V9.05.01  29/12/2005  Steve Armstrong   CAR 88829                *
.*                     Added EMCNA13M                                         *
.******************************************************************************
.*           V9.04.05  24/11/2005  Davin S           CAR 64087                *
.*                     Added EMCNA03M,EMCNA04M,EMCNA08M,EMCNA11M              *
.*           V9.04.04  18/10/2005  Steve Armstrong   CAR 64087                *
.*                     Added EMCNA44M (change U/R for visit)                  *
.*           V9.04.03  09/09/2005  Ebon Clements CAR 64055                    *
.*                     Added EMCNLOSW - Length of stay warning X minutes      *
.*           V9.04.02  22/08/2005  Ebon Clements CAR 70738                    *
.*                     Added EMCNBAKH - Allow backdating before X hours       *
.*           V9.04.01  18/05/2005  Peter Vela    CAR 60166                    *
.*                     Added EMCNWTTM                                         *
.*           V9.03.02  27/04/2004  Ebon Clements CAR 48865                    *
.*                     Added EMCNLDAT                                         *
.*           V9.03.01  28/09/2003  Ebon Clements CAR                          *
.*                     Added EMCNDDTM                                         *
.*           V9.03.00  15/05/2003  Lina Vo  CAR 38501                         *
.*                     Added EMCNDOCT                                         *
.*           V9.02.01  09/01/2002  Davin                                      *
.*                     Added EMCNDGAE, EMCNDGEC & EMCNDGCE for broadcast APIs *
.*           V9.00.B01 21/06/2001  Tonii 2001/2002 mods                       *
.*                     Added new Cat. User Defined fields-EMCNUDXC & EMCNUDXD *
.******************************************************************************
.*                    V5.07.01  23/12/1998  Nicole Harrington                 *
.*                              Added new parameter - EMCNPCIE                *
.*                                                                            *
.******************************************************************************
.*        Sector 89                                                           *
.******************************************************************************
.
.NAME     TYPE    LENGTH    START     DESCRIPTION
.----     ----    ------    -----     -----------
.
.         Audits (0=Active  1=Not Active)
.
EMCNAUDA  FORM      1         1        Emergency Audit A
EMCNAUDB  FORM      1         2        Emergency Audit B
EMCNAUDC  FORM      1         3        Emergency Audit C
EMCNAUDD  FORM      1         4        Emergency Audit D
EMCNAUDE  FORM      1         5        Emergency Audit E
EMCNAUDF  FORM      1         6        Emergency Audit F
EMCNAUDG  FORM      1         7        Emergency Audit G
EMCNAUDH  FORM      1         8        Emergency Audit H
EMCNAUDI  FORM      1         9        Emergency Audit I
EMCNAUDJ  FORM      1        10        Emergency Audit J
EMCNAUDK  FORM      1        11        Emergency Audit K
EMCNAUDL  FORM      1        12        Emergency Audit L
EMCNAUDM  FORM      1        13        Emergency Audit M
EMCNAUDN  FORM      1        14        Emergency Audit N
EMCNAUDO  FORM      1        15        Emergency Audit O
EMCNAUDP  FORM      1        16        Emergency Audit P
EMCNAUDQ  FORM      1        17        Emergency Audit Q
EMCNAUDR  FORM      1        18        Emergency Audit R
EMCNAUDS  FORM      1        19        Emergency Audit S
EMCNAUDT  FORM      1        20        Emergency Audit T
EMCNAUDU  FORM      1        21        Emergency Audit U
EMCNAUDV  FORM      1        22        Emergency Audit V
EMCNAUDW  FORM      1        23        Emergency Audit W
EMCNAUDX  FORM      1        24        Emergency Audit X
EMCNAUDY  FORM      1        25        Emergency Audit Y
EMCNAUDZ  FORM      1        26        Emergency Audit Z
.
EMCNSCRN  FORM      1        27        No. of data input screens for workbench
.                                             (1 - 5)
EMCNCAP1  DIM      13        28        Caption for screen 1 option
EMCNCAP2  DIM      13        41        Caption for screen 2 option
EMCNCAP3  DIM      13        54        Caption for screen 3 option
EMCNCAP4  DIM      13        67        Caption for screen 4 option
EMCNCAP5  DIM      13        80        Caption for screen 5 option
.
EMCNTIME  FORM      4        93        Timeout for refresh (mins)
EMCNEXTR  FORM      1        97        Type of Extract
.                                         1 = VEMD
EMCNMAXP  FORM      2        98        Maximum No. of Procedures for Extraction
EMCNMAXD  FORM      2       100        Maximum No. of Diagnoses for Extraction
.
.         Mapping fields (VEMD)
.
EMCNUDFA  DIM       2       102        Category for User Defined Field
.                                           (VEMD - Aboriginality)
EMCNUDFB  DIM       2       104        Category for User Defined Field
.                                           (VEMD - Preferred Language)
EMCNUDFC  DIM       2       106        Category for User Defined Field
.                                           (VEMD - Type of Visit)
EMCNUDDA  FORM      2       108        User Defined Date
.                                           (VEMD - Triage Date)
EMCNUDTA  FORM      2       110        User Defined Time
.                                           (VEMD - Triage Time)
EMCNUDFD  DIM       2       112        Category for User Defined Field
.                                           (VEMD - Referred to on Departure)
EMCNUDFE  DIM       2       114        Category for User Defined Field
.                                           (VEMD - Reason for Transfer)
EMCNUDFF  DIM       2       116        Category for User Defined Field
.                                           (VEMD - Escort Service)
EMCNUDFG  DIM       2       118        Category for User Defined Field
.                                           (VEMD - Departure Transport Mode)
EMCNUDFH  DIM       2       120        Category for User Defined Field
.                                           (VEMD - Nature of Main Injury)
EMCNUDXA  FORM      2       122        User Defined Free Text Field
.                                           (VEMD - Descrip. of Body Injury 1)
EMCNUDXB  FORM      2       124        User Defined Free Text Field
.                                           (VEMD - Descrip. of Body Injury 2)
EMCNUDFI  DIM       2       126        Category for User Defined Field
.                                           (VEMD - Injury Cause)
EMCNUDFJ  DIM       2       128        Category for User Defined Field
.                                           (VEMD - Human Intent)
EMCNUDFK  DIM       2       130        Category for User Defined Field
.                                           (VEMD - Activity When Injured)
EMCNUDFL  DIM       2       132        Category for User Defined Field
.                                           (VEMD - Occupation)
EMCNUDDB  FORM      2       134        User Defined Date
.                                           (VEMD - Departure Ready Date)
EMCNUDTB  FORM      2       136        User Defined Time
.                                           (VEMD - Departure Ready Time)
EMCNICDF  FORM      1       138        Using paticddf or emricdaf ?
.                                           0 = paticddf
EMCNPCIE  FORM      1       139        Default Desc of Injury to patient
.                                      complaint
.                                           0 = No
.                                           1 = Yes
.
EMCNUDXC  FORM      2       140        User Defined Free Text Field
.                                     (VEMD - Descrip. of Product inv.)
EMCNUDXD  FORM      2       142        User Defined Free Text Field
.                                     (VEMD - Descrip. of Saftey Device in use)
EMCNDOCT  FORM      1       144        Use patdo1af or emrdocaf file ?
.                                           0 = patdo1af
.                                           1 = emrdocaf
EMCNDDTM  FORM      1       145        Entering Doctor Seen Date and Time
.                                           0 = No 1=Yes
.
.>>>>> Leave some spare fields here for more Mapping fields
.     
EMCNDGAE  FORM      1       177        Write EMR Visit to Datagate
EMCNDGEC  FORM      1       178        Write EMR Change Visit to Datagate
EMCNDGCE  FORM      1       179        Write EMR Cancel Visit to Datagate
EMCNLDAT  DIM       8       180        Emergency V9 Go Live Date (CCYYMMDD)
EMCNWTTM  DIM       3       188        Emergency waiting time parameter
EMCNBAKH  DIM       3       191        Allow backdating before X hours
EMCNLOSW  DIM       4       194        Emergency LOS warning X minutes
EMCNA44M  FORM      1       198        Sending A44 for change U/R for visit
.                                          0 = No
.                                          1 = Yes
EMCNA03M  FORM      1       199        Sending A03 (discharge EMR visit)
.                                          0 = No
.                                          1 = Yes
EMCNA04M  FORM      1       200        Sending A04 (register EMR visit)
.                                          0 = No
.                                          1 = Yes
EMCNA08M  FORM      1       201        Sending A08 (update EMR visit)
.                                          0 = No
.                                          1 = Yes
EMCNA11M  FORM      1       202        Sending A11 (cancel EMR visit)
.                                          0 = No
.                                          1 = Yes
EMCNA13M  FORM      1       203        Sending A13 (cancel discharge EMR visit)
.                                          0 = No
.                                          1 = Yes
EMCNAPRO  DIM       1       204        Adding new Procedures after Invoiced
.                                      (Emergency patients only)
.                                          0 = Add to Next Invoice
.                                          1 = Do not add to Next Invoice
EMCNDPOC  DIM       1       205        Display Out of Pocket Running Total on 
.                                      ED invoice
.                                          0 = No
.                                          1 = Yes
EMCNOPOC  DIM      15       206        Out of Pocket Ceiling Amount (Form 12.2)
EMCNGINV  DIM       1       221        Group Invoice by Service Doctor
EMCNRETC  DIM       1       222        Using Retail Patient Cubicle on EMR Map
.                                          0 = No
.                                          1 = Yes
EMCNRINV  DIM       1       223        Redirect to raise invoice after discharge
.                                          0 = No
.                                          1 = Yes
EMCNDPRS  DIM       1       224        Display Diagnosis Over Presenting Comp.
.                                          0 = No
.                                          1 = Yes
EMCNPCEL  DIM       1       225        Display 3 Line Patient Cell
.                                          0 = No
.                                          1 = Yes
EMCNEVRM  DIM       4       226        Extended Visit Reason In X Minutes
.
EMCNAMAF  DIM       1       230        AMA Fee option on Add Procedure
.                                          0 = No
.                                          1 = Yes
EMCNMSRS  DIM       1       231        Display Same Surnames in RED Emergency MS
.                                          0 = No
.                                          1 = Yes
EMCNDEDI  DIM       1       232        0 = Original Functionality default code
.                                          and Free Format Description
.                                      1 = Only default Free Format Description
.                                          with warning
.                                      2 = Only default Free Format Description
.                                          without warning
EMCNTCAT  DIM       1       233        Using Triage Category 9 - General Clinic 
.                                          0 = No
.                                          1 = Yes
EMCNNWBR  DIM       1       234        No Warning when Making a Bed Request
EMCNLDIA  DIM       1       235        Using Last Diagnosis Only
.                                          0 = No
.                                          1 = Yes
EMCNDDSS  DIM       1       236        Display discharged patients if in Short
.                                      Stay and admission ward is EOU or EMU
EMCNSFSM  DIM       4       237        Display Red Sad Face after x minutes for
.                                      Short Stay Unit
EMCNEDFD  DIM       3       241        ED Fax Scheduler Delay (mins)
EMCNEDFP  DIM       6       244        ED Fax Printer
EMCNEDST  DIM       6       250        ED Stationary Template

.
. End of Record             256
.
.******************************************************************************
.*        Sector 122                                                          *
.******************************************************************************
.
EMCNDADR  DIM       1         1        Default Admitting Dr from Ward/Bed Req.
EMCNSCLK  DIM       1         2        Stop the clock
.                                      " " or "0" = Treating Doctor
.                                      "1" = Treating Doctor & Initial Assessor
.                                      "2" = Treating Doctor & Other Doctor
.                                      "3" = Treating Doctor ,Initial Assessor
.                                            & Other Doctor
EMCNLODD  DIM       1         3        Display Additional Information in  
.                                      Emergency Location Dropdown        
.                                      " " or "0" = No
.                                      1 = Unoccupied Then Occupied
.                                      2 = Unoccupied Only
EMCNDFSD  DIM       1         4        Default first seen date/time to admission
.                                      1=Yes
EMCNUDHF  DIM       1         5        Using the Doctor Handover Form
.                                      1=Yes
EMCNMAPH  DIM       2         6        Maximum age for Paediatric Hydration
EMCNURSE  DIM       1         8        Use oprnuraf or pmshcpaf for ED Nurse
.                                      0=oprnuraf, 1=pmshcpaf
EMCNSEIC  DIM       1         9        Send EMR ICD10 Codes in HL7 Messages
.                                          0 / Blank = No
.                                          1 = Yes
EMCNDDCT  DIM       1        10        Default Discharge Comments from
.                                      Discharge Text
.                                        0 = Leave Discharge Comments blank
.                                        1 = Populate Discharge Comments with
.                                            Discharge Text
EMCDTHRS  DIM       1        11        Disable restrictions for Telehealth
.                                      visits on the ED Map (StV Map Only)
EMCNPBSD  DIM       1        12        Patient Banner Seen Date/Time
.                                      " " or "0" = Treating Doctor
.                                      "1" = Treating Doctor & Initial Assessor
.                                      "2" = Treating Doctor & Other Doctor
.                                      "3" = Treating Doctor ,Initial Assessor
.                                            & Other Doctor
EMCNPTTI  DIM       1        13        Toggle Check Patient Recent Visit
.                                       0 / Blank = No
.                                       1 = Yes
EMCNTINU  DIM       3        14        Time in Hours to Check Patient Visit
EMCNALEX  DIM       1        17        Allow a current ED Patient to be a new
.                                      Expected Patient at another ED Site 
EMCNSDSA  DIM       8        18        Start Date of SA Health NAEC Extract
.
EMCNSEDR  DIM       1        26        Service Event Delay Reason Cat (EDWARD)
.                                      0 / Blank = Category RX
.                                      1 = Category dd
EMCNHISA  DIM       1        27        Using emergency history audit on emrhisaf
.                                       0 / Blank = No
.                                       1 = Yes
EMCNHSID  DIM       20       28        HEALTH_SERVICE_LOCATION_ID
.                                      Logic changes to the EDWARD ED Extract
.                                      for EDWEMERG.
EMCNPCTY  DIM       1        49        expected patient contact types when triaging
.                                       0 All Contact Types
.                                       1 Expected Patient only
EMCNEMST  DIM       1        50        expected patient from multiple emergency sites
.                                       0 Yes check all Emergency sites
.                                       1 Check current Emergency site only
. End of Record              50
