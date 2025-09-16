. V10.04.01 03/01/2014 PA C-294393 Moved NZMCACFL & NZMCEEDT out of Spare
. V9.08.004 16/02/2007 JT  Changed second index
. V9.08.003 14/02/2007 DS  Added index 3
. V9.08.001 09/11/2006 EC  Created FD CAR 120007
. *----------------------------------------------------------------------
. * Include Name  :   NZPMC1FD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private
. *                   New NZ Private Misc.Charge File
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpmc1af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPMC1A1  IFILE    SQL, FIXED=332, KEY="U1-3,4-6,7-12,13-20,21-29,30-37"
NZPMC1A2  IFILE    SQL, FIXED=332, KEY="U130-132,1-3,4-6,7-12,13-20,30-37,21-29"
NZPMC1A3  IFILE    SQL, FIXED=332, KEY="U21-29,4-6,1-3,7-12,13-20,30-37"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.   SAME FORMAT AS NZPMCHFD
