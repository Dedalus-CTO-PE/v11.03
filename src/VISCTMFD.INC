. V9.00.002 05/07/2001                                                       
. V9.00.003 31/07/2001                                                       
. *----------------------------------------------------------------------
. * Include Name  :   VISCTMFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Visit Comment Templates            
. *
. * File Type     :   SQL
. *
. * File Name     :   visctmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISCTMA1   IFILE    SQL, FIXED=107, KEY="U1-3,4-6"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSCMTEM   DIM       3      3        1     Template Code (Category VO)        
VSCMUNQ   DIM       3      3        4     Line Number                        
VSCMCMT   DIM       70     70       7     Comment Line                       
VSCMSPA   DIM       30     30       77    Spare Variable                     
.
.End of Record                      107  
.
