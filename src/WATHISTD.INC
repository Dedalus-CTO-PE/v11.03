. *----------------------------------------------------------------------
. * Include Name  :   WATHISTD.INC
. *
. * Function      :   CGI variables for WATHISFD - wathisaf      
. * Modifications :
. *       01/05/2008  Jill Habasque  CAR 166097
. *                   Added WATHI045                                  
. *       29/09/2005  Mike Laming   CAR 52354
. *                   Add WATHI043 (WTHICSST) & WATHI044 (WTHICSDT)
. *       13/03/2003  Jill Habasque SRF 36771
. *                   Added WATHI042 
. *----------------------------------------------------------------------
.
WATHI010  DIM       8         * U/R Number
WATHI004  DIM       9         * Procedure Code
WATHI003  DIM       2         * Procedure Count
WATHI002  DIM       8         * Effective From Date
WATHI005  DIM       4         * Unique Count
WATHI006  DIM       3         * Priority (Cat TP)
WATHI007  DIM       6         * Patient Rank
WATHI008  DIM       8         * Date Last Reviewed (CCYYMMDD)
WATHI009  DIM       8         * Scheduled Adm Date (CCYYMMDD)
WATHI001  DIM       3         * Reason Change Scheduled Adm Date
WATHI011  DIM       2         * Booking Status Code
WATHI012  DIM       8         * Date certainty given
WATHI013  DIM       8         * Date booked for treatment
WATHI014  DIM       1         * Record Sent Flag
WATHI015  DIM       1         * A=add, sp=don't include in NBR
WATHI016  DIM       8         * Rank change date
WATHI017  DIM       8         * Date booking made
WATHI018  DIM       8         * Effective Time (hh:mm:ss)
WATHI019  DIM       8         * Alteration Date
WATHI020  DIM       5         * Alteration Time
WATHI021  DIM      10         * Alteration Date
WATHI022  DIM       3         * Booking Cancellation Reason (BC)
WATHI023  DIM       8         * Booking Number
WATHI024  DIM       6         * Attending Doctor
WATHI025  DIM       3         * Canc Booking Reason Cat BE
WATHI026  DIM       3         * Unit/Clinic Cat WU
WATHI027  DIM       3         * Patient List. Status (PRS/2) Cat VL
WATHI028  DIM       1         * Procedure Status
WATHI029  DIM       8         * Date on List (ccyymmdd)
WATHI030  DIM       8         * Decision to Admit Date (ccyymmdd)
WATHI031  DIM       8         * Proposed Op Date (ccyymmdd)
WATHI032  DIM       8         * Confirmed Operation Date (ccyymmdd)
WATHI033  DIM       8         * Date of Ref for FSA (ccyymmdd)
WATHI034  DIM       8         * Date of FSA (ccyymmdd)
WATHI035  DIM       3         * Purchaser
WATHI036  DIM       4         * Treatment Agency
WATHI037  DIM       3         * Health Specialty
WATHI038  DIM       2         * Booked Procedure code
WATHI039  DIM       8         * Date of Exit(ccyymmdd)
WATHI040  DIM       3         * Staged/Planned flag
WATHI041  DIM       3         * Booking Referral Source
WATHI042  DIM       1         * Hidden Record 1=Yes
WATHI043  DIM       1         * Consent Obtained (N=No Y=Yes)
WATHI044  DIM       8         * Consent Changed Date
WATHI045  DIM       10        * Assessor Code

