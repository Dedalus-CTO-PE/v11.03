. *----------------------------------------------------------------------
. * Include Name  :   OUTHEDTD.INC
. *
. * Function      :   CGI Variables for OUTHEDFD - outhedaf
. *
. * Mods          :   V11.02.01 29.03.2022 DA Sarkies    TSK 0905641
. *                            Added cgi vairables for additional HCP
. *               :   V11.00.01 24/11/2020 Ebon Clemenst TSK 0876663
. *                            Added OTHED045 to OTHED048
. *               :   V10.11.01 09/11/2017 Davin         TSK 0846915
. *                            Added OTHED043 and OTHED044
. *               :   V10.05.01 16/07/2014 Ebon Clements CAR 251384
. *                            Added OTHED041 and OTHED042
. *               :   V10.04.01 06/02/2014 Ebon Clements CAR 291879
. *                            Added OTHED040
. *               :   V10.03.01 19/02/2013 Ebon Clements CAR 277862
. *                            Added OTHED039
. *               :   V10.02.04 24/06/2011 Ebon Clements CAR 242246
. *                            Added OTHED032 to OTHED037
. *               :   V10.02.03 16/06/2011 Ebon Clements CAR 239534
. *                            Added OTHED031
. *               :   V10.02.02 03/06/2011 Ebon Clements CAR 239525
. *                            Added OTHED030
. *               :   V10.02.01 19/05/2011 Ebon Clements CAR 239554
. *                            Added OTHED029
. *               :   V9.07.01  18/08/2006 Ebon Clements CAR 110245
. *                            Added OTHED028
. *               :   V9.05.01  22/03/2006 Ebon Clements CAR 79277
. *                            Added OTHED027
. *               :   V9.05.B02 01/02/2006 Ebon Clements CAR 91752
. *                            Added OTHED025 and OTHED026          
. *               :   V9.05.B01 12/01/2006 Ebon Clements CAR 76341
. *                            Added OTHED023 and OTHED024              
. *               :   V9.04.00 15/06/2005 Ebon Clements CAR 58654
. *                            Added OTHED022 - Allow group bookings
. *               :   V9.03.00 19/09/2003 Ebon Clements CAR 22361
. *                            Created include
. *----------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
OTHED001  DIM       6       * SITE ID
OTHED002  DIM       6       * CLINIC ID
OTHED003  DIM       1       * DAY INDICATOR
OTHED004  DIM       5       * SESSION START TIME (HH:MM)
OTHED005  DIM       2       * SCHEDULE NUMBER
OTHED006  DIM       8       * SCHEDULE DATE (CCYYMMDD)
OTHED007  DIM       8       * DATE CLINIC CLOSED (CCYYMMDD)
OTHED008  DIM       40      * COMMENTS LINE 1
OTHED009  DIM       40      * COMMENTS LINE 2
OTHED010  DIM       40      * INSTRUCTIONS LINE 1
OTHED011  DIM       40      * INSTRUCTIONS LINE 2
OTHED012  DIM       40      * INSTRUCTIONS LINE 3
OTHED013  DIM       3       * SLOT DURATION (MINS)
OTHED014  DIM       5       * BOOKING FINISH TIME (HH:MM)
OTHED015  DIM       5       * END SESSION TIME (HH:MM)
OTHED016  DIM       3       * LOCATION TYPE (CATEGORY CT)
OTHED017  DIM       6       * CLINIC SESSION
OTHED018  DIM       3       * HOSPITAL CODE
OTHED019  DIM       4       * LOCATION OF CLINIC
OTHED020  DIM       6       * CLINIC TYPE
OTHED021  DIM       3       * CLINIC INDICATOR(CI)M=Med N=Non-Med
OTHED022  DIM       1       * ALLOW GROUP BOOKINGS 0=NO 1=YES
OTHED023  DIM       3       * ALLIED HEALTH DEPARTMENT
OTHED024  DIM       1       * COLLECT ENCOUNTER DETAILS
OTHED025  DIM       1       * KEYIN HCP ON ATTENDANCE (Y/N)
OTHED026  DIM       10      * DEFAULT HCP CODE
OTHED027  DIM       1       * COLLECT CARER DETAILS
OTHED028  DIM       1       * COLLECT TRANSPORT DETAILS
OTHED029  DIM       3       * NUMBER OF DAYS PRIOR TO SEND LETTER
OTHED030  DIM       1       * USING CONFIRM PMI
OTHED031  DIM       1       * USING CHECK IN PAGE
OTHED032  DIM       20      * CLINIC TELEPHONE NUMBER
OTHED033  DIM       3       * NMDS CODE (CATEGORY NM)
OTHED034  DIM       3       * CARE TYPE (CATEGORY CC)
OTHED035  DIM       3       * SERVICE DELIVERY MODE(Cat SD)
OTHED036  DIM       1       * CLINICAL HIGH RISK
OTHED037  DIM       1       * MULTIDISCIPLINARY CLINIC
OTHED038  DIM       1       * Exclude from pull list (1 - yes)
OTHED039  DIM       1       * Mandatory Waiting/Active Referral
OTHED040  DIM       20      * HPI-O Number
OTHED041  DIM       3       * Tier 2 Code (category NC)
OTHED042  DIM       8       * Tier 2 Code Effective Date (CCYYMMDD)
OTHED043  DIM       20      * HERO Clinic Identifier
OTHED044  DIM       20      * HERO Campus Identifier
OTHED045  DIM       1       * Auto Open Clinic
OTHED046  DIM       1       * Auto Open Frequency
OTHED047  DIM       5       * Auto Open Week of Month
OTHED048  DIM       3       * Auto Open Number of Weeks in Advance
OTHED049  DIM       10      * Additional Health Care Provider 1
OTHED050  DIM       10      * Additional Health Care Provider 2
OTHED051  DIM       10      * Additional Health Care Provider 3
OTHED052  DIM       10      * Additional Health Care Provider 4
