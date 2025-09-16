.--------------------------------------------------------------------------
.MEHHLSTD.INC
.
. V10.11.01 19/10/2017  J.Tan    TSK 0843390
.           Added MHHLS036 - Responsible DHB
. V10.02.01 08/09/2011 J.Tan     CAR 242151
.           Added new fields for WA
. V9.12.01  20/11/2009  Mike Laming   CAR 195158
.           Added fields - MHHLS021 to MHHLS028 and MHDLS019 to MHDLS026
.           Note - contains new fields for MEHHLSFD & MEHDLSFD in V9.13
.                  ----- these are to go into the Generator -----
. V9.10.01  26/05/2008 J.Tan     CAR 166690
.           Added End date and time
. V9.09.01  06/03/2008 J.Tan
.           Changed MHDLS009 from 6 to 10
. V9.05.B01 30/12/2005 J.Tan
.           Created
.--------------------------------------------------------------------------
.
. Legal status header file
.
MHHLS001  DIM       8      * Unique Number      
MHHLS002  DIM       8      * Date Event Opened (ccyymmdd)
MHHLS003  DIM       8      * Time Event Opened (hh:mm:ss)
MHHLS004  DIM       8      * Date Event Closed (ccyymmdd)
MHHLS005  DIM       8      * Time Event Closed (hh:mm:ss)
MHHLS006  DIM       1      * Status 0-Active 1- Inactive
MHHLS007  DIM       3      * Source Referral (Category S)
MHHLS008  DIM       20     * Referrers Name
MHHLS009  DIM       35     * Referrers Address line 1
MHHLS010  DIM       35     * Referrers Address line 2
MHHLS011  DIM       35     * Referrers Address Line 3
MHHLS012  DIM       35     * Referrers Address Line 4
MHHLS013  DIM       8      * Referrers Postcode
MHHLS014  DIM       20     * Referrers Telephone number
MHHLS015  DIM       6      * Lawyers Code (pateoraf)
MHHLS016  DIM       6      * Organisation Code (pateoraf)
MHHLS017  DIM       10     * HCP Code (pmshcpaf)
MHHLS018  DIM       1      * Current 1-Yes, 0-No
MHHLS019  DIM       1      * Prisoner 1-Yes 0-No
MHHLS020  DIM       8      * Sentence Date (ccyymmdd)
. ------------------------------------new fields in MEHHLSFD -------- *I-195158
MHHLS021  DIM       10     * Responsible Clinician (all Active HCPs)
MHHLS022  DIM       10     * Case Team (linked to Responsible Clinician)
MHHLS023  DIM       10     * Duly Authorised Officer (all Active HCPs)
MHHLS024  DIM       10     * Key Worker (all Active HCPs)
MHHLS025  DIM       50     * Lawyer Free Text field
MHHLS026  DIM       1      * "Unfit to Drive" flag
MHHLS027  DIM       8      * "Unfit to Drive" Date Client Notified
MHHLS028  DIM       100    * Comments text
MHHLS029  DIM       8      * Receival Date (ccyymmdd)
MHHLS030  DIM       8      * Receival Time (hh:mm:ss)
MHHLS031  DIM       8      * Admit MH Act Date (ccyymmdd)
MHHLS032  DIM       8      * Admit MH Act Time (hh:mm:ss)
MHHLS033  DIM       3      * Origin of Referral (Catg tm)
MHHLS034  DIM       10     * Referring Clinician
MHHLS035  DIM       3      * Referring Clinician Role
MHHLS036  DIM       3      * Responsible DHB (District Health Board)
.
. Legal status details file
.
MHDLS001  DIM       8      * Unique Number
MHDLS002  DIM       8      * Date Event Opened (ccyymmdd)
MHDLS003  DIM       8      * Time Event Opened (hh:mm:ss)
MHDLS004  DIM       3      * Section Code (category LS)  
MHDLS005  DIM       3      * Review Status (category LR)
MHDLS006  DIM       8      * Review Due Date (ccyymmdd)      
MHDLS007  DIM       8      * Review Time (hh:mm:ss)
MHDLS008  DIM       10     * Review HCP Code                
MHDLS009  DIM       10     * HCP Caseteams           
MHDLS010  DIM       3      * Place of Occurrence (category PO) (Review Location)
MHDLS011  DIM       8      * Reminder Date (ccyymmdd)
MHDLS012  DIM       1      * Is the patient allowed to drive?
MHDLS013  DIM       1      * Residental?    
MHDLS014  DIM       6      * Place of Resident Code
MHDLS015  DIM       1      * Status 0-Active 1- Inactive
MHDLS016  DIM       100    * Comments
MHDLS017  DIM       8      * Date Event Closed (ccyymmdd)
MHDLS018  DIM       8      * Time Event Closed (hh:mm:ss)
. ------------------------------------new fields in MEHDLSFD -------- *I-195158
MHDLS019  DIM       3      * Supp. Legal Status - Cat."LS"
MHDLS020  DIM       8      * Supp. Legal Status Effective Date
MHDLS021  DIM       8      * Date Review performed
MHDLS022  DIM       8      * Court Notices Sent Date
MHDLS023  DIM       8      * Tribunal Date
MHDLS024  DIM       8      * Lodged with Court Date
MHDLS025  DIM       3      * Court Time Code - Cat."xy"
MHDLS026  DIM       100    * Comments 2
MHDLS027  DIM       3      * Pt Documentation Given (Catg to)
MHDLS028  DIM       10     * Supervising Psychiatrist
MHDLS029  DIM       10     * Responsible Practitioner
MHDLS030  DIM       10     * Locum Doctor
.
