.--------------------------------------------------------------------------
.PMSVX1TD.INC
. V10.11.01 08/08/2017  Peter Vela     TSK 0837619
.           Added PMSVX146 Eclipse Adjustment
. V10.10.02 22/03/2017  Peter Vela     TSK 0833050
.           Changed category dp to lj
. V10.10.01 02/03/2017  Peter Vela     TSK 0833050
.           Changed PMSVX127 to Death Place Category dp
. V10.07.02 15/10/2015  Don Nguyen     CAR 316625
.           Added PMSVX146 - Case Team
. V10.07.01 01/10/2015  Peter Vela     CAR 316641
.          Add PMSVX144, PMSVX145
. V10.03.01 20/07/2012  Ebon Clements  CAR 217579
.          Add PMSVX143                
. V10.02.01 28/06/2011  Jill Parkinson CAR 242269
.          Add PMSVX122-142                
. V10.00.01 09/04/2010  Ebon Clements CAR 164849
.          Add PMSVX122 - Family violence
. V9.11.03 07/04/2009  Peter Vela    CAR 183976
.          Add PMSVX121 Presenting Illness Code OEC
. V9.11.02 16/02/2009  Peter Vela    CAR 183976
.          Add PMSVX119 Patient Online Eligibility Consent
. V9.11.01 20/11/2008  Ebon Clements CAR 183976
.          Add PMSVX116 to PMSVX118
. V9.07.01 10/07/2006  Mike Laming   CAR 111820
.          Add WA SOR data PMSVX109 to PMSVX112 - PMVXECOL,PMVXSLOC, PMVXSCLI &
.                                                 PMVXSTRA
. V9.04.02 22/12/2004 Lina Vo       CAR 55990
.          Changed PMSVX045 from FORM 6 to FORM 6.2
. V9.04.01 18/08/2004 Lina Vo       CAR 52746
.          Added Multi-hospital ID PMSVX108
. V9.03.02 02/08/2004 Jill Habasque CAR 51060
.          Added new privacy variables
. V9.03.01 22/05/2003 Lina Vo       CAR 37504
.          Added new variable PMSVX094
.          22/05/2003 Ebon Clements CAR 38102
.          Added new variables PMSVX093 to PMSVX093
. V9.02.01 06/06/2002 Ebon Clements
.          Added new variables PMSVX077 to PMSVX092
.---------------------------------------------------------------------------
.  Visit Extension file 
.
PMSVX001  DIM       8      * Visit Number
PMSVX002  DIM       8      * Visit Date
PMSVX003  DIM       10     * Attending Doctor (pmshcpaf)
PMSVX004  DIM       10     * Treating Doctor (pmshcpaf)
PMSVX005  DIM       1      * Consent release info (0=NO,1=YES)
PMSVX006  DIM       8      * Post Code
PMSVX007  DIM       3      * Privacy Indicator (Cat PV)
PMSVX008  DIM       40     * Valuables Location
PMSVX009  DIM       1      * Claim Form Signed (0=NO,1=YES)
PMSVX010  DIM       1      * Inform Registered GP (0=NO,1=YES)
PMSVX011  DIM       3      * Critical Pathway (Cat PW)
PMSVX012  DIM       1      * Notify HCP1 (0=NO,1=YES)
PMSVX013  DIM       1      * Notify HCP2 (0=NO,1=YES)
PMSVX014  DIM       1      * Notify HCP3 (0=NO,1=YES)
PMSVX015  DIM       1      * Notify HCP4 (0=NO,1=YES)
PMSVX016  DIM       10     * Referring HCP 1 (pmshcpaf)
PMSVX017  DIM       10     * Referring HCP 1 Group (pmshcgaf)
PMSVX018  DIM       2      * Referring HCP 1 Grp Count (pmshclaf
PMSVX019  DIM       10     * Referring HCP 2 (pmshcpaf)
PMSVX020  DIM       10     * Referring HCP 2 Group (pmshcgaf)
PMSVX021  DIM       2      * Referring HCP 2 Grp Count (pmshclaf
PMSVX022  DIM       10     * Referring HCP 3 (pmshcpaf)
PMSVX023  DIM       10     * Referring HCP 3 Group (pmshcgaf)
PMSVX024  DIM       2      * Referring HCP 3 Grp Count (pmshclaf
PMSVX025  DIM       10     * Referring HCP 4 (pmshcpaf)
PMSVX026  DIM       10     * Referring HCP 4 Group (pmshcgaf)
PMSVX027  DIM       2      * Referring HCP 4 Grp Count (pmshclaf
PMSVX028  DIM       3      * Aboriginality (PRS/2) (Cat VA)
PMSVX029  DIM       3      * Admission Criterion (PRS/2) (Cat VB
PMSVX030  DIM       3      * Intent to Readmit (PRS/2) (Cat VR)
PMSVX031  DIM       3      * Intend Stay Duration (PRS/2) Cat VI
PMSVX032  DIM       3      * Carer Availability (PRS/2) (Cat VK)
PMSVX033  DIM       3      * Crit. Care Xfer Reason (PRS/2) (VJ)
PMSVX034  DIM       3      * Admitting Point Ward (patwr1af)
PMSVX035  DIM       3      * Admitting Point Bed (patwr1af)
PMSVX036  DIM       3      * Post-Op Ward (patwr1af)
PMSVX037  DIM       3      * Post-Op Bed (patwr1af)
PMSVX038  DIM       1      * Parent Staying (0=NO,1=YES)
PMSVX039  DIM       1      * Visitor Allowed (0=NO,1=YES)
PMSVX040  DIM       1      * Phone Calls Allowed? (0=NO,1=YES)
PMSVX041  DIM       1      * Intended Day Case (0=NO,1=YES)
PMSVX042  DIM       3      * Mode of Arrival (Cat VM)
PMSVX043  DIM       3      * Forms (Cat VF)
PMSVX044  DIM       3      * Coder Snags (Cat VN)
PMSVX045  FORM      6.2    * Patient Weight (Form 4.2 stored as Form 6)
PMSVX046  FORM      6      * Patient Height
PMSVX047  DIM       8      * Date Height/Weight Record. ccyymmdd
PMSVX048  DIM       10     * Extra Doctor Code 1 (pmshcpaf)
PMSVX049  DIM       10     * Extra Doctor Code 2 (pmshcpaf)
PMSVX050  DIM       10     * Extra Doctor Code 3 (pmshcpaf)
PMSVX051  DIM       1      * Homeless Person (0=NO,1=YES)
PMSVX052  DIM       50     * User Defined Free Format 1
PMSVX053  DIM       50     * User Defined Free Format 2
PMSVX054  DIM       50     * User Defined Free Format 3
PMSVX055  DIM       50     * User Defined Free Format 4
PMSVX056  DIM       8      * User Def. Date 1 ccyymmdd
PMSVX057  DIM       5      * User Def. Time 1 hh:mm
PMSVX058  DIM       8      * User Def. Date 2 ccyymmdd
PMSVX059  DIM       5      * User Def. Time 2 hh:mm
PMSVX060  DIM       8      * User Def. Date 3 ccyymmdd
PMSVX061  DIM       5      * User Def. Time 3 hh:mm
PMSVX062  DIM       8      * User Def. Date 4 ccyymmdd
PMSVX063  DIM       5      * User Def. Time 4 hh:mm
PMSVX064  DIM       8      * User Def. Date 5 ccyymmdd
PMSVX065  DIM       5      * User Def. Time 5 hh:mm
PMSVX066  DIM       8      * User Def. Date 6 ccyymmdd
PMSVX067  DIM       5      * User Def. Time 6 hh:mm
PMSVX068  DIM       8      * Date record created (ccyymmdd)
PMSVX069  DIM       8      * Time record created (hh:mm:ss)
PMSVX070  DIM       10     * WEB User Id rec. creator (websecaf)
PMSVX071  DIM       8      * Last Update Date (ccyymmdd)
PMSVX072  DIM       8      * Last Update Time (hh:mm:ss)
PMSVX073  DIM       10     * WEB User Id rec. update (websecaf)
PMSVX074  DIM       3      * Mental Health Legal status (LS)    
PMSVX075  DIM       9      * Provisional ICD10 Code
PMSVX076  DIM       3      * RMO Responsible CAT MO
PMSVX077  DIM       3      * Admission Service Unit Type CAT KA
PMSVX078  DIM       3      * Elective Patient Status CAT KC
PMSVX079  DIM       3      * Employment Status CAT KD
PMSVX080  DIM       3      * Which Financial Program CAT KE
PMSVX081  DIM       3      * Occupation CAT KF
PMSVX082  DIM       3      * Involvement in Palliative Care CAT KG
PMSVX083  DIM       3      * Prev Non-Admitted Palliative Care Patient CAT KH
PMSVX084  DIM       3      * Public Private Patient CAT KI
PMSVX085  DIM       3      * Pension Status on Separation CAT KJ
PMSVX086  DIM       3      * Payment Status on Separation CAT KK
PMSVX087  DIM       3      * Banding & Type of Episode for QLD HDP CAT KL
PMSVX088  DIM       3      * Re-Admission in 28 Days CAT KM
PMSVX089  DIM       3      * Discharge Intention CAT KN
PMSVX090  DIM       3      * Unplanned Readmission CAT KO
PMSVX091  DIM       3      * Usual Accommodation CAT KP
PMSVX092  DIM       3      * Unplanned Visit to Theatre CAT KB
PMSVX093  DIM       1      * Interpreter Required? (0=NO,1=YES)
PMSVX094  DIM       3      * Preferred Language 1 (Cat LA)
PMSVX095  DIM       3      * ABS ASGC                      
PMSVX096  DIM       1      * Participate in /receive Marketing Info 1=Yes
PMSVX097  DIM       1      * Participate in /receive Advertising Info 1=Yes
PMSVX098  DIM       1      * Participate in Research Projects 1=Yes
PMSVX099  DIM       1      * Use Information for Training 1=Yes
PMSVX100  DIM       1      * Release to Enduring POA 1=Yes
PMSVX101  DIM       1      * Release to Contact 1 (ptmxnrnm) 1=Yes
PMSVX102  DIM       1      * Release to Contact 2 (ptmxecnm) 1=Yes
PMSVX103  DIM       1      * Release to Health Fund 1=Yes
PMSVX104  DIM       1      * Release to DVA 1=Yes
PMSVX105  DIM       1      * RSL Visit OK 1=Yes
PMSVX106  DIM       1      * Medical Record Location (Cat MV)
PMSVX107  DIM       1      * Preferred Accommodation (Cat BP)
PMSVX108  DIM       3      * Multi-Hospital ID (pathspaf)     
PMSVX109  DIM       8      * EOC link admission no. (pmvxecol)
PMSVX110  DIM       3      * Location SOA  (pmvxsloc)
PMSVX111  DIM       3      * Clinical SOR  (pmvxscli)
PMSVX112  DIM       3      * Transport SOR (pmvxstra)         
PMSVX113  DIM       12     * QAS Number
PMSVX114  DIM       8      * Arrival Time
PMSVX115  DIM       8      * Interview Time
PMSVX116  DIM       40     * Health Fund First Given Name Alias
PMSVX117  DIM       40     * Health Fund Surname Alias
PMSVX118  DIM       2      * Health Fund UPI
PMSVX119  DIM       1      * Patient Online Eligibility Consent
PMSVX120  DIM       3      * Program ID
PMSVX121  DIM       3      * Presenting Illness Code OEC
PMSVX122  DIM       3      * Family Violence (Cat fv)
PMSVX123  DIM       3      * UDF 5
PMSVX124  DIM       3      * UDF 6
PMSVX125  DIM       3      * UDF 7
PMSVX126  DIM       3      * UDF 8
PMSVX127  DIM       3      * Death Place Category lj
PMSVX128  DIM       3      * UDF 10
PMSVX129  DIM       3      * UDF 11
PMSVX130  DIM       3      * UDF 12
PMSVX131  DIM       3      * UDF 13
PMSVX132  DIM       3      * UDF 14
PMSVX133  DIM       3      * UDF 15
PMSVX134  DIM       5      * Team
PMSVX135  DIM       3      * Non WA Hospital Contact
PMSVX136  DIM       8      * Expected Delivery Date
PMSVX137  DIM       3      * Property Held
PMSVX138  DIM       3      * Property Location
PMSVX139  DIM       8      * Date Returned
PMSVX140  DIM       9      * Disaster Flag
PMSVX141  DIM       3      * Funding Source
PMSVX142  DIM       40     * Contributor Name
PMSVX143  DIM       5      * Patient Body Mass Index
PMSVX144  DIM       10     * Visit Confirmed WEB User Id (websecaf)
PMSVX145  DIM       13     * Visit Confirmed Date and Time ccyymmddhh:mm
PMSVX146  DIM       10     * Case Team (allcasaf)
PMSVX147  DIM       1      * Eclipse Adjustment Flag
.
