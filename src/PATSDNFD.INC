. *----------------------------------------------------------------------
. * Include Name  :   PATSDNFD.INC
. *
. * Function      :   File Def'n Include to save Patient Donor Information
. *                   Saved Donor Information refer to patdnraf              
. *
. * File Type     :   sql
. *
. * Keys          :   KEY10, KEY19
. *
. * File Name     :   patsdnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATSDNA1   IFILE    SQL, FIXED=32, KEY="U1-8,9-10"
.
. Same format as PATDNRFD but UR Number is replaced by Admission Number
