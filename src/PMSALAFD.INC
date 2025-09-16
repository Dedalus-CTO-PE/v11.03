. *----------------------------------------------------------------------
. * Include Name  :   PMSALAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Alert Notes Admisson based               
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsalaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSALAA1   IFILE    SQL, FIXED=127, KEY="U1-8,9-10,11-13,14-16,17-19"
.
. Same format as PMSALNFD but UR Number is replaced by Admission Number
