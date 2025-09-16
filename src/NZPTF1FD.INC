. 9.08.001 03/10/2006 EC  Created CAR 120013                                
. *----------------------------------------------------------------------
. * Include Name  :   NZPTF1FD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   New NZ Private Theatre Fee             
. *
. * File Type     :   SQL
. *
. * File Name     :   nzptf1af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPTF1A1   IFILE    SQL, FIXED=207, KEY="U1-3,4-6,7-9,10-15,16-23,24-31,32-33"  
NZPTF1A2   IFILE    SQL, FIXED=207, KEY="U1-3,32-33,4-6,7-9,10-15,16-23,24-31"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.      SAME FORMAT AS NZPTFEFD
.
