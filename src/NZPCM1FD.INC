. 9.08 .002 12/02/2007 DS  Added misc item group (nzcmmigp)
. 9.08 .001 31/10/2006 JT
. *----------------------------------------------------------------------
. * Include Name  :   NZPCM1FD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private New Contract Proc Matrix    
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpcm1af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPCM1A1   IFILE    SQL, FIXED=138, KEY="U1-3,4-9,10-10,11-19,20-20,21-26"      
NZPCM1A2   IFILE    SQL, FIXED=138, KEY="U11-19,1-3,4-9,10-10,20-20,21-26"      
NZPCM1A3   IFILE    SQL, FIXED=138, KEY="U1-3,4-9,10-10,20-20,29-37,11-19,21-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.      SAME FORMAT AS NZPCMTFD
.
