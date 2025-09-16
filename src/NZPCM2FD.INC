. 9.12 .001 27/10/2009 JT
. *----------------------------------------------------------------------
. * Include Name  :   NZPCM2FD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Old Contract Proc Matrix    
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpcm2af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPCM2A1   IFILE    SQL, FIXED=138, KEY="U1-3,4-9,10-10,11-19,20-20,21-26"      
NZPCM2A2   IFILE    SQL, FIXED=138, KEY="U11-19,1-3,4-9,10-10,20-20,21-26"      
NZPCM2A3   IFILE    SQL, FIXED=138, KEY="U1-3,4-9,10-10,20-20,29-37,11-19,21-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.      SAME FORMAT AS NZPCMTFD
.
