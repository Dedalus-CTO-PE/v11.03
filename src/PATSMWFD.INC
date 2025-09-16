. *----------------------------------------------------------------------
. * Include Name  :   PATSMWFD.INC
. *
. * Function      :   File Def'n Include to Patient        
. *                   Saved Medical Warnings refer to patmwsfd
. *
. * File Type     :   SQL
. * Keys          :   KEY14
. *
. * File Name     :   patsmwaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATSMWA1   IFILE    SQL, FIXED=175, KEY="U1-8,9-11,12-14"
.
. Same format as PATMWSFD.INC but UR Number is replaced by Admission Number
