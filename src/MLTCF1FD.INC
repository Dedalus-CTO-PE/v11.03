. *----------------------------------------------------------------------
. * Include Name  :   MLTCF1FD.INC
. *
. * Function      :   File Def'n Include for Multi Hospital
. *                   Multi Hospital for Contract Funding
. *
. * File Type     :   SQL
. *
. * File Name     :   mltcf1af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MLTCFN11   IFILE    SQL, FIXED=101, KEY="U1-3,4-6,7-12,13-21,22-22,23-30,31-40"
MLTCFN12   IFILE    SQL, FIXED=101, KEY="U31-40,1-3,4-6,7-12,13-21,22-22,23-30"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
. Same layout as MLTCFNFD
