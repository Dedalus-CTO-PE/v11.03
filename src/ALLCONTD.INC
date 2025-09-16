.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : ALLCONTD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Allied Health       *
.  *                    Control File CGI variables                      *
.  *                                                                    *
.  *     Sectors      : 106                                             *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *--------------------------------------------------------------------*
. *       V11.01.01 15/09/2021  Ebon Clements     TSK 0910709           *
. *                 Added ALLCN061 - VINAH Auto referral rejection      *
. *                 reason when deceased                                *
.  *--------------------------------------------------------------------*
.  *      V10.15.01 20/01/2020  Tracey Nguyen     TSK 0881801           *
.  *                Added ALLCN060 - Linked Visit field mandatory on    *
.  *                Referral, default Current IP Visit                  *
.  *--------------------------------------------------------------------*
.  *      V10.14.02 13/09/2019  Ebon Clements     TSK 0880123           *
.  *                Added ALLCN059 - Don't update OP booking seen by Dr *   
.  *      V10.14.01 04/03/2019  Thanh T.          TSK 0869558           *
.  *                Added ALLCN058 - Update Appointment Requests in     *
.  *                Transfer Referral                                   * 
.  *--------------------------------------------------------------------*
.  *                                                                    *
.  *      V10.11.01 23/08/2017  Ebon Clements     TSK 0841314           *
.  *                Added ALLCN057 - Display triage status on lists     *
.  *      V10.10.03 11/07/2017  Ebon Clements     TSK 0316484           *
.  *                Added ALLCN056 - VINAH extract URL prefix           *
.  *      V10.10.02 08/06/2017  Don Nguyen        TSK 0838220           *
.  *                Added ALLCN053 - Sending A44 (change U/R)           *
.  *                07/06/2017  Davin             TSK 0838060           *
.  *                Added ALLCN054 - Referral Status of Closed send E   *
.  *                Added ALLCN055 - Referral Status of Inactive send I *
.  *      V10.10.01 20/03/2017  Ebon Clements     TSK 0815431           *
.  *                Added ALLCN052 - Next Unique Comment ID             *
.  *      V10.06.04 03/08/2015  Ebon Clements     CAR 316109            *
.  *                Removed ALLCN052 as it was no longer required       *
.  *      V10.06.03 24/07/2015  Ebon Clements     CAR 316109            *
.  *                Added ALLCN046 to ALLCN052                          *
.  *      V10.06.02 21/07/2015  Ebon Clements     CAR 316109            *
.  *                Added ALLCN044 - Only update waiting referrals      *
.  *                Added ALLCN045 - Only delete waiting referrals      *
.  *      V10.06.01 21/05/2015  Davin             CAR 313320            *
.  *                Added ALLCN043 - Check Patient DHB matches Hosp DHB *
.  *      V10.05.01 23/09/2014 Ebon Clements CAR 306160                 *
.  *                Added ALLCN042 - Allow cross campus linking of      *
.  *                referrals to OP                                     *
.  *      V10.04.01 06/02/2014 Peter Vela    CAR 295606                 *
.  *                Added ALLCN041 - Don't auto activate master referral*
.  *                when activating linked internal referrals           *
.  *      V10.03.06 16/10/2013 Ebon Clements CAR 289649                 *
.  *                Added ALLCN040 - Default Contact Values From        *
.  *                Previous Contact                                    *
.  *      V10.03.05 08/10/2013 Don Nguyen    CAR 286923                 *
.  *                Added ALLCN039 - Link to Referral (contextual URL)  *
.  *      V10.03.04 15/07/2013 Nicole T      CAR 267255                 *
.  *                Added ALLCN038 - Allow referalls to be used in      *
.  *                                 'Link to visit' field              *
.  *      V10.03.03 09/10/2012 Ania P        CAR 272756                 *
.  *                Added ALLCN037 - Populate Clinic Identifier with    *
.  *                                 Clinic Id from Linked Visit for    *
.  *                                 VINAH Extract.                     *
.  *      V10.03.02 03/08/2012 Ebon Clements CAR 261277                 *
.  *                Added ALLCN036 - Next VINAH extract message Id      *   
.  *      V10.03.01 07/05/2012 Ebon Clements CAR 260487                 *
.  *                Added ALLCN035 - Display Occasion of Service VINAH  *   
.  *      V10.02.02 26/10/2011 Ebon Clements CAR 252450                 *
.  *                Added ALLCN034 - Display Event Program VINAH        *   
.  *      V10.02.01 20/07/2011 Ebon Clements CAR 242070                 *
.  *                Added ALCNDHOS - Not using hospital on Department   *
.  *      V9.12.03  01.03.2010 Davin         CAR 135505                 *
.  *                Added ALLCN027, ALLCN028, ALLCN029, ALLCN030,       *
.  *                      ALLCN031, ALLCN032                            *
.  *      V9.12.02  19.08.2009 Saroeun Soeur CAR 203785                 *
.  *                Added ALLCN026 - HCP Details in Visit View          *
.  *      V9.12.01  26.05.2009 Ebon Clements CAR 196248                 *
.  *                Added ALLCN025                                      *
.  *      V9.09.04  25.01.2008 Ebon Clements CAR 135498                 *
.  *                Added ALLCN023                                      *
.  *                04.02.2008 J.Tan         CAR 135498                 *
.  *                Added ALLCN024                                      *
.  *      V9.09.03  29.08.2007 Davin         CAR 135538                 *
.  *                Added ALLCN022                                      *
.  *      V9.09.02  23.07.2007 Ebon Clements CAR 140983                 *
.  *                Added ALLCN021                                      *
.  *      V9.09.01  09.07.2007 Ebon Clements CAR 135536                 *
.  *                Added ALLCN019 and ALLCN020                         *
.  *      V9.08.03  19.04.2007 Ebon Clements CAR 118107                 *
.  *                Added ALLCN017 and ALLCN018                         *
.  *      V9.08.02  16.03.2007 Ebon Clements CAR 135528                 *
.  *                Added ALLCN015 and ALLCN016                         *
.  *      V9.08.01  26.02.2007 Ebon Clements CAR 132585                 *
.  *                Added ALLCN014 - Default legal status code          *
.  *      V9.07.03  24.08.2006 Ebon Clements CAR 111005                 *
.  *                Added ALLCN013                                      *
.  *      V9.07.02  22.08.2006 Ebon Clements CAR 111005                 *
.  *                Added ALLCN010, ALLCN011 and ALLCN012               *
.  *      V9.07.01  16.08.2006 Ebon Clements CAR 111005                 *
.  *                Added ALLCN009                                      *
.  *      V9.05.B01 20.02.2006 Ebon Clements CAR 76341                  *
.  *                Added ALLCN007 and ALCN008                          *
.  *      V9.03.01  01.03.2004 Pat Dirito    CAR 43997                  *
.  *                Added ALLCN006 Stationary Code                      *
.  *      V9.03.00  29.10.2003 Ebon Clements CAR 43984                  *
.  *                Created include                                     *
.  **********************************************************************
.******************************************************************************
.*        ALLCONFD.INC : sector 106    (ALLIED HEALTH GENERAL)                *
.******************************************************************************
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
ALLCN001  DIM       3       1     Auto. Closure Reason Code (Cat LL)
ALLCN002  DIM       1       4     Write Create A/H Encounter to Datagate
ALLCN003  DIM       1       5     Write Delete A/H Encounter to Datagate
ALLCN004  DIM       3       6     Department using job number (Cat CG)
ALLCN005  DIM      12       9     Allied health job number
ALLCN006  DIM       6       21    User Defined Stationery Code for Equipment
.                                 Loans Information Form
ALLCN007  DIM       1       27    Using Referral File Audit 0=No 1=Yes
ALLCN008  DIM       1       28    Using Encounter File Audit 0=No 1=Yes
ALLCN009  DIM       8       29    SACS File Identifier
ALLCN010  DIM       20      37    SACS Batch Identifier
ALLCN011  DIM       60      57    SACS Extract Outbound Path
ALLCN012  DIM       60      117   SACS Extract Inbound Path
ALLCN013  DIM       1       177   SACS Processing ID
ALLCN014  DIM       3       178   Default Legal Status Code (Cat LS)
ALLCN015  DIM       1       181   Number of labels accross the page
ALLCN016  DIM       1       182   Label size
ALLCN017  DIM       1       183   Using occasion of service for event type(SACS)
ALLCN018  DIM       1       184   Using SACS Audit
ALLCN019  DIM       8       185   Next group contact session number
ALLCN020  DIM       8       193   Next group contact number
ALLCN021  DIM       1       201   Auto open single waiting referral
ALLCN022  DIM       1       28    Using Assessment File Audit 0=No 1=Yes
ALLCN023  DIM       10      203   Master Referral Description
ALLCN024  DIM       1       213   Using Referral Link File Audit 0=No 1=Yes
ALLCN025  DIM       3       214   Auto program completion reason (SACS) (Cat lG)
ALLCN026  DIM       1       217   HCP Details in Visits View
ALLCN027  DIM       1       218   Sending I12 (add Referral) 0=No 1=Yes
ALLCN028  DIM       1       219   Sending I13 (update Referral) 0=No 1=Yes
ALLCN029  DIM       1       220   Sending I14 (cancel Referral) 0=No 1=Yes
ALLCN030  DIM       1       221   Sending A03 (add Encounter) 0=No 1=Yes
ALLCN031  DIM       1       222   Sending A08 (update Encounter) 0=No 1=Yes
ALLCN032  DIM       1       223   Sending A13 (cancel Encounter) 0=No 1=Yes
ALLCN033  DIM       1       224   Not using hospital on Department
ALLCN034  DIM       1       225   Display Event Program on VINAH screens
ALLCN035  DIM       1       226   Display Occasion of Service on VINAH screens
ALLCN036  DIM       20      227   Next VINAH extract message Id
ALLCN037  DIM       1       247   VINAH extract: 0=Clinic ID 1=Event Program
ALLCN038  DIM       1       248   Allow referrals in 'Link to visit'         
ALLCN040  DIM       1       249   Default Contact Values From Previous Contact
.
.*******************************************************************************
.*        ALLCONFD.INC : Sector 121                                            *
.*******************************************************************************
.
ALLCN039  DIM       100     1     Link to Referral (contextual URL)
ALLCN041  DIM       1       101   Don't auto activate master referral when
ALLCN042  DIM       1       102   Allow cross campus linking of referrals to OP
.                                 activating linked internal referrals
ALLCN043  DIM       1       103   Check Patient Home DHB matches Hosp DHB (NZ)
ALLCN044  DIM       1       104   Only update waiting referrals inbound REF^I13
ALLCN045  DIM       1       105   Only delete waiting referrals inbound REF^I14
ALLCN046  DIM       1       106   Event Program Cat zG mandatory for
.                                 inbound REF^I12 and REF^I13
ALLCN047  DIM       1       107   Date Referral Accepted mandatory for
.                                 inbound REF^I12 and REF^I13
ALLCN048  DIM       1       108   Referral In Service Type Cat zU
.                                 mandatory for inbound REF^I12 and REF^I13
ALLCN049  DIM       1       109   Referral In Clinical Referral Date
.                                 Mandatory for inbound REF^I12 and REF^I13
ALLCN050  DIM       1       110   Visit Type cat CV mandatory for
.                                 inbound REF^I12 and REF^I13
ALLCN051  DIM       1       111   Reason for Referral (problem)
.                                 mandatory for inbound REF^I12 and REF^I13
ALLCN052  DIM      10       112   Next Unique Comment ID
.
ALLCN053  DIM       1       122   Sending A44 (change U/R) 0=No 1=Yes
.
ALLCN054  DIM       1       123   Referral Status of Closed to send RF1.1 (E)
ALLCN055  DIM       1       124   Referral Status of Inactive to send RF1.1 (I)
ALLCN057  DIM       1       125   Display triage status on referral lists
ALLCN058  DIM       1       126   Update Appointment Req in Transfer Referral
ALLCN059  DIM       1       127   Don't update OP booking seen by doctor
.                                 when adding contacts
ALLCN060  DIM       1       128   Linked Visit field mandatory on Referral,
.                                 default Current IP Visit
ALLCN061  DIM       3       129   VINAH Auto referral rejection reason when
.                                 deceased. Category rr
.
.
.*******************************************************************************
.*        ALLCONFD.INC : Sector 126                                            *
.*******************************************************************************
ALLCN056  DIM      60         1   VINAH extract URL prefix
