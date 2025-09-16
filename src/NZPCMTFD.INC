. 9.08 .002 12/02/2007 DS  Added misc item group (nzcmmigp)                  
. 9.08 .001 31/10/2006 JT                                     
. *----------------------------------------------------------------------
. * Include Name  :   NZPCMTFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Contract Proc Matrix    
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpcmtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPCMTA1   IFILE    SQL, FIXED=138, KEY="U1-3,4-9,10-10,11-19,20-20,21-26"      
NZPCMTA2   IFILE    SQL, FIXED=138, KEY="U11-19,1-3,4-9,10-10,20-20,21-26"      
NZPCMTA3   IFILE    SQL, FIXED=138, KEY="U1-3,4-9,10-10,20-20,29-37,11-19,21-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZCMCLMC  DIM       3      3        1     Claim Code (Catg CL)               
NZCMCNTR  DIM       6      6        4     Contract/Health Fund               
NZCMRTYP  DIM       1      1        10    Record Type                        
.                                         O - Overnight
.                                         D - Daycase
.                                         E - Either
NZCMCPRC  DIM       9      9        11    Contract Procedure Code (patcmcaf) 
NZCMITYP  DIM       1      1        20    Item Type 0-Proc 1-Misc            
DNZCMCNT  DIM       6      6        21    Counter                            
NZCMFTYP  FORM      1      2        27    Field Type for Item Type=1(Misc Item)
.                                           0-Item Not to be charged
.                                           1-Item to be charged
NZCMPROC  DIM       9      9        29    Procedure or Misc.Item Code        
NZCMMIGP  DIM       3      3        38    Misc Item Group(Cat FI) (Item Type=1)
NZCMSPAR  DIM       97     97       41    Spare Variable                     
.
.End of Record                      138  
.
.Redefine Key Variables
.----------------------
NZCMCCNT  FORM      6
