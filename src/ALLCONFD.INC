. *----------------------------------------------------------------------
. * Include Name  :   ALLCONFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Allied Health Control File                
. *
. * File Type     :   ASCII
. *
. * File Name     :   controlf.txt
. *
. *                                                            
. * Modifications :  
. *----------------------------------------------------------------------
. *      V11.01.01 15/09/2021  Ebon Clements     TSK 0910709
. *                Added ALCNVARR - VINAH Auto referral rejection 
. *                reason when deceased
. *----------------------------------------------------------------------
. *      V10.15.01 20/01/2020  Tracey Nguyen     TSK 0881801
. *                Added ALCNLKVM - Linked Visit field mandatory on Referral,
. *                default Current IP Visit
. *----------------------------------------------------------------------
. *      V10.14.02 13/09/2019  Ebon Clements     TSK 0880123
. *                Added ALCNSDOC - Don't update OP booking seen by doctor
. *      V10.14.01 04/03/2019  Thanh T.          TSK 0869558
. *                Added ALCNUPAR - Update Appointment Requests in
. *                Transfer Referral  
. *----------------------------------------------------------------------
. *      V10.11.01 23/08/2017  Ebon Clements     TSK 0841314
. *                Added ALCNDTRG - Display triage status on referral lists
. *      V10.10.03 11/07/2017  Ebon Clements     TSK 0316484
. *                Added ALCNVURL - VINAH extract URL prefix
. *      V10.10.02 08/06/2017  Don Nguyen        TSK 0838220
. *                Added ALCNA44L - Sending A44 (change U/R)
. *                07/06/2017  Davin             TSK 0838060
. *                Added ALCNRSCE - Referral Status of Closed to send (E)
. *                Added ALCNRSII - Referral Status of Inactive to send (I)
. *      V10.10.01 20/03/2017  Ebon Clements     TSK 0815431
. *                Added ALCNNUCI - Next Unique Comment ID
. *      V10.06.04 03/08/2015  Ebon Clements     CAR 316109
. *                Removed ALCNPISM as it was no longer required
. *      V10.06.03 23/07/2015  Ebon Clements     CAR 316109
. *                Added ALCNEVPM to ALCNPISM
. *      V10.06.02 20/07/2015  Steve Armstrong   CAR 316109
. *                Added ALCNUPWR (Only update Waiting Referrals)
. *                and ALCNDEWR (Only delete Waiting Referrals)
. *      V10.06.01 21/05/2015  Davin             CAR 313320
. *                Added ALCNCDHB Check Patient Home DHB matches Hosp DHB (NZ)
. *----------------------------------------------------------------------
. *      V10.05.01 23/09/2014  Ebon Clements     CAR 306160
. *                Added ALCNCLNK Allow cross campus linking of referrals to OP
. *----------------------------------------------------------------------
. *      V10.04.02 14/05/2014  Steve Armstrong   CAR 285465
. *                Updated descriptions for ALCNCIEP and added new value "2"
. *                (use Category CG, Assoc. #)
. *      V10.04.01 06/02/2014  Peter Vela        CAR 295606
. *                Added ALCNDAMR - Don't auto activate master referral when
. *                activating linked internal referrals.
. *----------------------------------------------------------------------
. *      V10.03.06 16/10/2013  Ebon Clements     CAR 289649
. *                Added ALCNPREV - Default Contact Values From Previous Contact
. *      V10.03.05 08/10/2013  Don Nguyen        CAR 286923
. *                Added ALCNLNKT - Link to Referral (contextual URL)
. *      V10.03.04 15/07/2013  Nicole Torrisi    CAR 267255
. *                Added ALCNLNKR - Allow referrals to be used in
. *                'Link to Visit' field
. *      V10.03.03 09/10/2012  Ania Pietrusewicz CAR 272756
. *                Added ALCNCIEP - Populate Clinic Identifier with Clinic Id
. *                                 from Linked Visit for VINAH Extract.
. *      V10.03.02 03/08/2012  Ebon Clements     CAR 261277
. *                Added ALCNMESI - Next VINAH extract message Id
. *      V10.03.01 07/05/2012  Ebon Clements     CAR 260487
. *                Added ALCNDOOS - Display Occasion of service on VINAH screens
. *      V10.02.02 26/10/2011  Ebon Clements     CAR 252450
. *                Added ALCNDEVP - Display Event Program on VINAH screens
. *      V10.02.01 20/07/2011  Ebon Clements     CAR 242070
. *                Added ALCNDHOS - Not using hospital on Department
. *----------------------------------------------------------------------
. *      V9.12.03  07/12/2009  Steve Armstrong   CAR 135505
. *                Added ALCNI12L, ALCNI13L, ALCNI14L, ALCNA08L,
. *                ALCNA03L & ALCNA13L (HL7 Messaging triggers)
. *      V9.12.02  19/08/2009  Saroeun Soeur     CAR 203785
. *                Added ALCNCLNF - HCP Details in Visit View
. *      V9.12.01  26/05/2009  Ebon Clements     CAR 196248
. *                Added ALCNPRGC - Auto program completion reason (SACS)
. *      V9.09.04  25/01/2008  Ebon Clements     CAR 135498
. *                Added ALCNMDES - Master referral description (SACS)
. *      V9.09.03  29/08/2007  Davin             CAR 135538
. *                Added ALCNAAUD - Assessment audit file flag
. *      V9.09.02  23/07/2007  Ebon Clements     CAR 140983
. *                Added ALCNACTW - Auto open single waiting referral
. *      V9.09.01  09/07/2007  Ebon Clements     CAR 135536
. *                Added ALCNSESN - Next group contact session number
. *                Added ALCNCONT - Next group contact number 
. *      V9.08.03  19/04/2007  Ebon Clements     CAR 118107
. *                Added ALCNEVTY- Using occasion of service for event type
. *                Added ALCNSACA - Using SACS Audit
. *      V9.08.02  16/03/2007  Ebon Clements     CAR 135528
. *                Added ALCNLCOS and ALCNLSIZ
. *      V9.08.01  26/02/2007  Ebon Clements     CAR 132585
. *                Added ALCNDLGS - Default legal status code 
. *      V9.07.03  42/08/2006  Ebon Clements     CAR 111005
. *                Added ALCNSPID - SACS Processing ID
. *      V9.07.02  22/08/2006  Ebon Clements     CAR 111005
. *                Added ALCNBATI - SACS Batch Identifier
. *                Added ALCNSACO - SACS Extract Outbound Path
. *                Added ALCNSACI - SACS Extract Inbound Path
. *      V9.07.01  16/08/2006  Ebon Clements     CAR 111005
. *                Added ALCNSFID - SACS File Identifier
. *      V9.05.B01 20/02/2006  Ebon Clements     CAR 76341
. *                Added ALCNRAUD and ALCNEAUD               
. *      V9.03.00  20/02/2004  Pat Dirito        CAR 43997
. *                Added ALCNSCOD - User Defined Stationery Code for Equipment
. *                                 Loans Information Form
. *----------------------------------------------------------------------
. *      V9.02.02  14/11/2001  Greg Horvat
. *                Added ALCNDEPT - Department using job number (Cat CG)
. *                Added ALCNJOBN - Allied health job number
. *      V9.02.01  05/07/01 Mike Laming                           
. *                Added ALCNGDEA - Write Create AH Encounter to Datagate
. *                Added ALCNGDEC - Write Delete AH Encounter to Datagate
. *
. *----------------------------------------------------------------------
.
. Standard Abbreviations Used AL - Allied Allied Health
.                             CN - Control File
.
. Sector  106
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
ALCNCLCD  DIM       3       1     Auto. Closure Reason Code (Cat LL)
ALCNDGEA  FORM      1       4     Write Create A/H Encounter to Datagate
ALCNDGED  FORM      1       5     Write Delete A/H Encounter to Datagate
ALCNDEPT  DIM       3       6     Department using job number (Cat CG)
ALCNJOBN  FORM     12       9     Allied health job number
ALCNSCOD  DIM       6       21    User Defined Stationery Code for Equipment
.                                 Loans Information Form
ALCNRAUD  DIM       1       27    Using Referral File Audit 0=No 1=Yes
ALCNEAUD  DIM       1       28    Using Encounter File Audit 0=No 1=Yes
ALCNSFID  DIM       8       29    SACS File Identifier
ALCNBATI  DIM       20      37    SACS Batch Identifier
ALCNSACO  DIM       60      57    SACS Extract Outbound Path
ALCNSACI  DIM       60      117   SACS Extract Inbound Path
ALCNSPID  DIM       1       177   SACS Processing ID
.                                 (P)roduction, (T)est and (D)ebugging
ALCNDLGS  DIM       3       178   Default Legal Status Code (Cat LS)
ALCNLCOS  DIM       1       181   Number of labels accross the page
ALCNLSIZ  DIM       1       182   Label size
.                                 1 = Small (37 characters separation)
.                                 2 = Wide  (42 characters separation)
ALCNEVTY  DIM       1       183   Using occasion of service for event type(SACS)
.                                 0=No 1=Yes
ALCNSACA  DIM       1       184   Using SACS Audit
.                                 0=No 1=Yes
ALCNSESN  FORM      8       185   Next group contact session number 
ALCNCONT  FORM      8       193   Next group contact number 
ALCNACTW  DIM       1       201   Auto activate single waiting referral 
ALCNAAUD  DIM       1       202   Using Assessment File Audit 0=No 1=Yes
ALCNMDES  DIM       10      203   Master Referral Description              
.                                 Vic=SACS, NZ=Primary
ALCNLAUD  DIM       1       213   Using Referral Link File Audit 0=No 1=Yes
ALCNPRGC  DIM       3       214   Auto program completion reason (SACS) (Cat lG)
.
ALCNCLNF  DIM       1       217   HCP Details in Visit View
ALCNI12L  DIM       1       218   Sending I12 (add Referral)
.                                          0 = No
.                                          1 = Yes
ALCNI13L  DIM       1       219   Sending I13 (update Referral)
.                                          0 = No
.                                          1 = Yes
ALCNI14L  DIM       1       220   Sending I14 (cancel Referral)
.                                          0 = No
.                                          1 = Yes
ALCNA03L  DIM       1       221   Sending A03 (add Encounter)
.                                          0 = No
.                                          1 = Yes
ALCNA08L  DIM       1       222   Sending A08 (update Encounter)
.                                          0 = No
.                                          1 = Yes
ALCNA13L  DIM       1       223   Sending A13 (cancel Encounter)
.                                          0 = No
.                                          1 = Yes
ALCNDHOS  DIM       1       224   Not using hospital on Department
.                                          0 = No
.                                          1 = Yes
ALCNDEVP  DIM       1       225   Display Event Program on VINAH screens
.                                          0 = No
.                                          1 = Yes
ALCNDOOS  DIM       1       226   Display Occasion of Service on VINAH screens
.                                          0 = No
.                                          1 = Yes
ALCNMESI  FORM      20      227   Next VINAH extract message Id
ALCNCIEP  DIM       1       247   Populate Clinic Identifier
.                                          0 = use clinic type from episode
.                                          1 = use clinic id from linked episode
.                                          2 = use Category CG, Assoc. #
ALCNLNKR  DIM       1       248   Allow referrals to be used in 'Link to Visit'
.                                 fields
.                                          0 = No
.                                          1 = Yes
ALCNPREV  DIM       1       249   Default Contact Values From Previous Contact
.                                          0 = No
.                                          1 = Yes
.
.End of Sector              250
+
.*******************************************************************************
.*        ALLCONFD.INC : Sector 121                                            *
.*******************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
ALCNLNKT  DIM      100         1  Link to Referral (contextual URL)
ALCNDAMR  DIM      1         101  Don't auto activate master referral when
.                                 activating linked internal referrals
.                                          0 = No
.                                          1 = Yes
ALCNCLNK  DIM      1         102  Allow cross campus linking of referrals to OP
.                                          0 = No
.                                          1 = Yes
ALCNCDHB  DIM      1         103  Check Patient Home DHB matches Hosp DHB (NZ)
.                                          0 = No
.                                          1 = Yes
ALCNUPWR  DIM      1         104  Only update waiting referrals for inbound
.                                 REF^I13 messages
.                                          0 = No
.                                          1 = Yes
ALCNDEWR  DIM      1         105  Only delete waiting referrals for inbound
.                                 REF^I14 messages
.                                          0 = No
.                                          1 = Yes
ALCNEVPM  DIM      1         106  Event Program Cat zG mandatory for 
.                                 inbound REF^I12 and REF^I13 messages
.                                          0 = No
.                                          1 = Yes
ALCNDRAM  DIM      1         107  Date Referral Accepted mandatory for
.                                 inbound REF^I12 and REF^I13 messages
.                                          0 = No
.                                          1 = Yes
ALCNRISM  DIM      1         108  Referral In Service Type Cat zU
.                                 mandatory for inbound REF^I12 and REF^I13
.                                 messages
.                                          0 = No
.                                          1 = Yes
ALCNRICM  DIM      1         109  Referral In Clinical Referral Date
.                                 Mandatory for inbound REF^I12 and REF^I13
.                                 messages
.                                          0 = No
.                                          1 = Yes
ALCNVTYM  DIM      1         110  Visit Type Cat CV mandatory for
.                                 inbound REF^I12 and REF^I13 messages
.                                          0 = No
.                                          1 = Yes
ALCNRRPM  DIM      1         111  Reason for Referral (problem)
.                                 mandatory for inbound REF^I12 and REF^I13
.                                 messages
.                                          0 = Yes
.                                          1 = No
ALCNNUCI  DIM      10        112  Next Unique Comment ID
.
ALCNA44L  DIM      1         122  Sending A44 (change U/R)
.                                          0 = No
.                                          1 = Yes
ALCNRSCE  DIM      1         123  Referral Status of Closed to send RF1.1
.                                 Status of Expired (E)
.                                          0 = No
.                                          1 = Yes
ALCNRSII  DIM      1         124  Referral Status of Inactive to send RF1.1
.                                 Status of Inactive (I)
.                                          0 = No
.                                          1 = Yes
ALCNDTRG  DIM      1         125  Display Triage Status on Referral Lists
.                                          0 = No
.                                          1 = Yes
ALCNUPAR  DIM      1         126  Update Appointment Reqs in Transfer Referral
.                                          0 = No
.                                          1 = Yes
ALCNSDOC  DIM      1         127  Don't update OP booking seen by doctor
.                                 when adding contacts
.                                          0 = No   (Update OP seen Dr)
.                                          1 = Yes  (Don't update OP seen Dr)
ALCNLKVM  DIM      1         128  Linked Visit field mandatory on Referral,
.                                 default Current IP Visit
.                                          0 = No
.                                          1 = Yes
ALCNVARR  DIM      3         129  VINAH Auto referral rejection reason when 
.                                 deceased. Category rr
.End of Record               132
+
+
.*******************************************************************************
.*        ALLCONFD.INC : Sector 126                                            *
.*******************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
ALCNVURL  DIM      60         1   VINAH extract URL prefix
.
.End of Record               61
