. *----------------------------------------------------------------------
. * Include Name  :   PRIHRETD.INC
. *
. * Function      :   CGI Variables for PRIHRETD - prihreaf 
. *
. * Mods          :   
. *      V10.14.01  10/04/2019  Tracey Nguyen TSK 0872823
. *                 Added PRHRHCPP/PRHRE039 - Referring HCP Practice
. *                 Added PRHRHCGC/PRHRE040 - Referring HCP Group Count
. *       V10.13.02 27/09/2018  Tracey Nguyen TSK 0859743                 
. *                 Added PRHRE038/PRHRROVR - Referral Override (Cat ro)
. *       V10.13.01 01/08/2018  J.Tan            TSK 0848506
. *                 Changed PP Doctor from DIM6 to DIM10
. *       V10.11.03 10/10/2017  Peter Vela       TSK 0837619
. *                 Added PRHRE037 for Financial Disclosure Ind
. *       V10.11.02 29/08/2017  Peter Vela       TSK 0837619
. *                 Removed PRHRE037
. *       V10.11.01 27/07/2017  Peter Vela       TSK 0837619
. *                 Added PRHRE036, PRHRE037
. *       V10.08.01 20/04/2016  Peter Vela       TSK 0294177  
. *                 Added PRHRE028 - PRHRE035
.  *      V10.04.01 21/01/2014  Patrick Adair    CAR 265844               *
.  *                Increase PRA address and phone field lengths and add  *
.  *                new fields for State and mobile phone                 *
. *----------------------------------------------------------------------
.
PRHRE001  DIM       6      * Medical Practice Code 
PRHRE002  DIM       10     * Service Doctor 
PRHRE003  DIM       3      * Patient Indicator (Category GI)
PRHRE004  DIM       10     * Referring Doctor 
PRHRE005  DIM       8      * Referral Date (CCYYMMDD)
PRHRE006  DIM       50     * Referral Details 
PRHRE007  DIM       3      * Message Code (PATMESG1)
PRHRE008  DIM       3      * Bulk Bill Code (Cat GB)
PRHRE009  DIM       6      * Fund/Insurance Co./Govt Code
PRHRE010  DIM       20     * Operation Codes
PRHRE011  DIM       3      * User Defined Field 1 (Category G1)
PRHRE012  DIM       3      * User Defined Field 2 (Category G2)
PRHRE013  DIM       3      * User Defined Field 3 (Category G3)
PRHRE014  DIM       3      * User Defined Field 4 (Category G4)
PRHRE015  DIM       45     * Name of Person Responsible for A/C
PRHRE016  DIM       35     * P.R.A. Address Line 1
PRHRE017  DIM       35     * P.R.A. Address Line 2
PRHRE018  DIM       35     * P.R.A. Address Line 3
PRHRE019  DIM       8      * P.R.A. Postcode
PRHRE020  DIM       20     * P.R.A. Private Telephone
PRHRE021  DIM       20     * P.R.A. Business Telephone
PRHRE022  DIM       10     * P.R.A. Relationship
PRHRE023  FORM      8      * Unique claims number
PRHRE024  DIM       3      * Admission Class
PRHRE025  DIM       3      * Referral Period (Cat RF)
PRHRE026  DIM       35     * P.R.A. Address Line 4
PRHRE027  DIM       20     * P.R.A. Mobile Phone
PRHRE028  DIM       3      * Type of Account/Claim (Cat ta)
PRHRE029  DIM       8      * Linked Visit Number
PRHRE030  DIM       1      * Accident Indicator
PRHRE031  DIM       1      * Account Paid
PRHRE032  DIM       1      * Benefit Assigned Authorised
PRHRE033  DIM       3      * IFC Issue Code (Cat ic)
PRHRE034  DIM       3      * Service Type Code (Cat st)
PRHRE035  DIM       40     * Fund Payee ID
PRHRE036  DIM       2      * Referral Period (months, 1-98)
PRHRE037  DIM       1      * Financial Disclosure Indicator
PRHRE038  DIM       3      * Referral Override (Cat ro)
PRHRE039  DIM       10     * Referring HCP Practice (pmshclaf)
PRHRE040  DIM       2      * Referring HCP Group Count (pmshcgaf)
.
