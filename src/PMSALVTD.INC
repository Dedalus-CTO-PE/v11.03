. *----------------------------------------------------------------------
. * Include Name  :   PMSALVTD.INC
. *
. * Function      :   CGI Variables for PMSALVFD - pmsalvaf
. *
. * Mods          :   V11.02.01 05/04/2022 Alina Bhari     TSK 0912792
. *                             Created include
. *----------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
PMALV001  DIM       8       webPAS Visit Number
PMALV002  DIM       20      Alternate visit ID
PMALV003  DIM       2       Record Type    
PMALV004  DIM       8       Date created CCYYMMDD
PMALV005  DIM       8       Time created hh:mm:ss
PMALV006  DIM       10      User id created
PMALV007  DIM       1       Action 1=Added 2=Deleted
PMALV008  DIM       300     Comments
.
.One for each file in your FD - (All DIM fields)
