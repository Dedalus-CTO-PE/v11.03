.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : EMRCONTD.INC                                          *
.  *                                                                          *
.  *     Function     : CGI Definition include for EMR Control File           *
.  *                                                                          *
.  *     Sector used  :  89                                                   *
.  *                                                                          *
.  *     Modifications:                                                       *
.  ****************************************************************************
.  *     V11.03.04 01/09/2023  PJ Le Febour      TSK 0932585                  *
.  *               Added EMRCN049 - expected patient contact types            *
.  *               Added EMRCN050 - expected patient Emergency site           *
.  *     V11.03.03 21/07/2023  Ebon Clements     TSK 0888745                  *
.  *               Added EMRCN048 - EMCNHISA - Using emergency history audit  *
.  *     V11.03.02 23/05/2023  Nikitha B         TSK 0932585                  *
.  *               Added EMRCN047 - HEALTH_SERVICE_LOCATION_ID                *
.  *               for EDWARD Extract.                                        *
.  *     V11.03.01 14/11/2022  Bella Turco       TSK 0923504                  *
.  *               Added EMRCN046 - Service Event Delay Reason Cat (EDWARD)   *
.  *     V11.02.02 13/09/2022  Bella Turco       TSK 0919532                  *
.  *               Added EMRCN045 - Start Date of SA Health NAEC Extract      *
.  *     V11.02.01 28/06/2022  Thanh T           TSK 0907640                  *
.  *               Added EMRCN044 - Allow a current ED Patient to be a new    *
.  *               Expected Patient at another ED Site                        *
.  *     V11.01.02 18/10/2021  Jacob Jackson     TSK 0888259                  *
.  *               Added EMRCN042 - Patient Toggle to check OP + IP recent    *
.  *               visits                                                     *
.  *               Added EMRCN043 - Time in Hours to Check Patient Visit      *
.  *     V11.01.01 09/03/2021  Ebon Clements   TSK 0873184                    *
.  *               Added EMCDPBSD/EMRCN041 - Patient Banner Seen Date/Time    *
.  *     V10.15.01 10/02/2020  Don Nguyen        TSK 0876992                  *
.  *               Added EMRCN040 - Disable restrictions for Telehealth       *
.  *               visits on the ED Map (StV Map Only).                       *
.  *     V10.14.01 08/02/2019  Don Nguyen        TSK 0833548                  *
.  *               Added EMRCN039 - Default Discharge Comments                *
.  *     V10.12.02 18/05/2018  Davin             TSK 0851377                  *
.  *               Added EMRCN038 - Send EMR ICD10 Codes in HL7 messages      *
.  *     V10.12.01 10/01/2018  Tracey Nguyen   TSK 0825792                    *
.  *               Added EMRCN037/EMCNURSE - Use oprnuraf/pmshcpaf for ED     *
.  *               Nurse                                                      *
.  *     V10.09.01 28/11/2016  Davin             TSK 0814742                  *
.  *               Added EMRCN036 (Maximum age for Paediatric Hydration)      *
.  *     V10.06.03 22/07/2015  Don Nguyen        CAR 297670                   *
.  *               Added EMRCN035 - Using the Doctor Handover Form            * 
.  *     V10.06.02 06/05/2015  Jill Parkinson    CAR 313317                   *
.  *               Added EMRCN034 - Default first seen date/time to adm       * 
.  *     V10.06.01 03/03/2015  Peter Vela        CAR 282090                   *
.  *               Added EMRCN033 - Display Additional Information in         * 
.  *                                Emergency Location Dropdown               *
.  *     V10.05.01 14/01/2015  Ebon Clements     CAR 304779                   *
.  *               Added EMRCN032 - Stop the clock                            *
.  *     V10.04.01 18/03/2014  Ania P            CAR 267773                   *
.  *               Added EMCNDADR                                             *
.  *     V10.03.02 11/12/2013  Ania P            CAR 275582                   *
.  *               Added EMRCN028 - ED Fax Scheduler Delay (mins)             *
.  *               Added EMRCN029 - ED Fax Printer                            *
.  *               Added EMRCN030 - ED Stationary Template                    *
.  *     V10.03.01 03/07/2012  Peter Vela        CAR 265655                   *
.  *               Added EMRCN026 - Display discharged patients in Short Stay *
.  *               if admission ward is EOU or EMU                            *
.  *               Added EMRCN027 - Short Stay Unit Red Face Time Limit       *
.  *     V10.01.01 28/01/2011  Ebon Clements     CAR 235686                   *
.  *               Added EMRCN025 - Using Last Diagnosis Only                 *
.  *     V10.00.06 26/10/2010  Peter Vela        CAR 232438                   *
.  *               Added EMRCN024 - No Warning when making a Bed Request      *
.  *     V10.00.05 31/08/2010  Ebon Clements     CAR 228543                   *
.  *               Added EMRCN023 - Using Triage Category 9                   *
.  *     V10.00.04 26/08/2010  Peter Vela        CAR 216620                   *
.  *               Added EMRCN022 - Emr Diagnosis / Bed Request default ind   *
.  *     V10.00.03 11/05/2010  Peter Vela        CAR 218849                   *
.  *               Added EMRCN021 - Display Same Surnames in RED Emergency    *
.  *               Map Screen                                                 *
.  *     V10.00.02 23/04/2010  J.Tan             CAR 219898                   *
.  *               Added EMRCN019 - AMA Fee option on Add Procedure screen    *
.  *     V10.00.01 26/03/2010  Ebon Clements     CAR 216782                   *
.  *               Added EMRCN019 - Extended Visit Reason In X Minutes        *
.  *     V9.12.01  01/06/2008  Ebon Clements     CAR 197930                   *
.  *               Added EMRCN017 - Display Diagnosis Over Presenting Comp    *
.  *               Added EMRCN018 - Display 3 Line Patient Cell               *
.  *     V9.10.01  11/07/2008  Ebon Clements     CAR 172611                   *
.  *               Added EMRCN016                                             *
.  *     V9.09.01  31/10/2007  Ebon Clements     CAR 151800                   *
.  *               Added EMRCN015                                             *
.  *               24/10/2007  J.Tan             CAR 151803                   *
.  *               Added cgi variables EMRCN012,EMRCN013,EMRCN014             *
.  *     V9.08.01  07/05/2007  Peter Vela        CAR SJOG ED Billing          *
.  *               Added cgi variable EMRCN011                                *
.  *     V9.05.01  29/12/2005  Steve Armstrong   CAR 88829                    *
.  *               Add cgi variable EMRCN010 (for EMCNA13M)                   *
.  ****************************************************************************
.  *     V9.04.05  24/11/2005  Davin          CAR 64087                       *
.  *               Add cgi variable EMRCN006 (for EMCNA03M)                   *
.  *               Add cgi variable EMRCN007 (for EMCNA04M)                   *
.  *               Add cgi variable EMRCN008 (for EMCNA08M)                   *
.  *               Add cgi variable EMRCN009 (for EMCNA11M)                   *
.  *     V9.04.04  21/10/2005  Davin          CAR 64087                       *
.  *               Add cgi variable EMRCN005 (for EMCNA44M)                   *
.  *     V9.04.03  09/09/2005  Ebon Clements  CAR 64055                       *
.  *               Added EMRCN004 - Emergency LOS warning X minutes           *
.  *     V9.04.02  22/08/2005  Ebon Clements  CAR 70738                       *
.  *               Added EMRCN003 - Allow backdating before X hours           *
.  *     V9.04.01  18/07/2005  Ebon Clements  CAR 65425                       *
.  *               Added EMRCN002 using patdo1af or emrdocaf file             *
.  *     V9.04.00  18/05/2005  Peter Vela     CAR 60166                       *
.  *               Created include                                            *
.  ****************************************************************************
.
.  ****************************************************************************
.  Sector 89
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
EMRCN001  DIM       3        188      Emergency waiting time parameter
EMRCN002  DIM       1        144      Use patdo1af or emrdocaf file   
.                                     0 = patdo1af 1 = emrdocaf
EMRCN003  DIM       3        191      Allow backdating before X hours
EMRCN004  DIM       4        194      Emergency LOS warning X minutes
EMRCN005  DIM       1        198      PAS-HL7 Send A44 (change U/R for EMR vis)
.                                     0=No 1=Yes
EMRCN006  DIM       1        199      PAS-HL7 Send A03 (discharge EMR visit)
.                                     0=No 1=Yes
EMRCN007  DIM       1        200      PAS-HL7 Send A04 (register EMR visit)
.                                     0=No 1=Yes
EMRCN008  DIM       1        201      PAS-HL7 Send A08 (update EMR visit)
.                                     0=No 1=Yes
EMRCN009  DIM       1        202      PAS-HL7 Send A11 (cancel EMR visit)
.                                     0=No 1=Yes
EMRCN010  DIM       1        203      PAS-HL7 Send A13 (cancel EMR discharge)
.                                     0=No 1=Yes
EMRCN011  DIM       1        204      Adding Items after Invoiced to 'tobe Inv'
EMRCN012  DIM       1        205      Display Out of Pocket Running Total on
.                                     ED invoice
EMRCN013  FORM     12.2      206      Out of Pocket Ceiling Amount
EMRCN014  DIM       1        221      Group Invoice by Service Doctor
EMRCN015  DIM       1        222      Using Retail Patient Cubicle on EMR Map
EMRCN016  DIM       1        223      Redirect to raise invoice after discharge
EMRCN017  DIM       1        224      Display Diagnosis Over Presenting Comp.
EMRCN018  DIM       1        225      Display 3 Line Patient Cell
EMRCN019  DIM       4        226      Extended Visit Reason In X Minutes
EMRCN020  DIM       1        226      AMA Fee Option on Add Procedure screen
EMRCN021  DIM       1        231      Display Same Surnames in RED Emergency MS
EMRCN022  DIM       1        232      Emr Diagnosis / Bed Req default ind
EMRCN023  DIM       1        233      Using Triage Category 9 - General Clinic
EMRCN024  DIM       1        234      No Warning when Making a Bed Request
EMRCN025  DIM       1        235      Using Last Diagnosis Only
EMRCN026  DIM       1        236      Display discharged patient if in Short
.                                     Stay and admission ward is EOU or EMU
EMRCN027  DIM       4        237      Display Red Sad Face after x minutes for
.                                     Short Stay Unit
EMRCN028  DIM       3        241      ED Fax Scheduler Delay (mins)
EMRCN029  DIM       6        244      ED Fax Printer
EMRCN030  DIM       6        250      ED Stationary Template
.
.*****************************************************************************
.  Sector 122
.*****************************************************************************
.
EMRCN031  DIM       1          1      Default Admitting Dr from Ward/Bed Req
EMRCN032  DIM       1          2      Stop the clock
EMRCN033  DIM       1          3      Display Additional Information in    
.                                     Emergency Location Dropdown               
EMRCN034  DIM       1          4      Default first seen date/time to adm 1=yes
EMRCN035  DIM       1          5      Using the Doctor Handover Form      1=yes
EMRCN036  DIM       2          6      Maximum age for Paediatric Hydration
EMRCN037  DIM       1          8      Use oprnuraf or pmshcpaf for ED Nurse
.                                     0=oprnuraf, 1=pmshcpaf
EMRCN038  DIM       1          9      Send EMR ICD10 Codes in HL7 Messages
EMRCN039  DIM       1         10      Default Discharge Comments from 
.                                     Discharge Text
.                                       0 = Leave Discharge Comments blank
.                                       1 = Populate Discharge Comments with
.                                           Discharge Text
EMRCN040  DIM       1         11      Disable restrictions for Telehealth
.                                     visits on the ED Map (StV Map Only)
.
EMRCN041  DIM       1         12      Patient Banner Seen Date/Time
.                                     " " or "0" = Treating Doctor
.                                     "1" = Treating Doctor & Initial Assessor
.                                     "2" = Treating Doctor & Other Doctor
.                                     "3" = Treating Doctor ,Initial Assessor
.                                           & Other Doctor
EMRCN042  DIM       1         13      Patient Check If Recently Visited Time
.                                      "0" = No
.                                      "1" = Yes
EMRCN043  DIM       3         14      Time in Hours to Check Patient Visit
EMRCN044  DIM       1         17      Allow a current ED Patient to be a new
.                                     Expected Patient at another ED Site
.                                      "0" or Blank = No
.                                      "1" = Yes
EMRCN045  DIM       8         18      Start Date of SA Health NAEC Extract
EMRCN046  DIM       1         26      Service Event Delay Reason Category (EDWD).                                     0 / Blank = Category RX
.                                     1 = Category dd
EMRCN047  DIM       20        28      HEALTH_SERVICE_LOCATION_ID
.                                     Logic changes to the EDWARD ED Extract
.                                     for EDWEMERG.
EMRCN048  DIM       1         48      Using emergency history audit on emrhisaf
.                                      0 / Blank = No
.                                      1 = Yes
EMRCN049  DIM       1         49      Expected Patient Contact Types            
.                                      0 / All Contact Types
.                                      1 = Expected Patients only 
EMRCN050  DIM       1         50      Expected Patients from all Emergency Sites
.                                      0 / Yes check all Emergency sites
.                                      1 = Check current Emergency site only
. End of Record
