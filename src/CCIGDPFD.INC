. 5.01 .001 07/01/1992 PE  Generated                                         
. *----------------------------------------------------------------------
. * Include Name  :   CCIGDPFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Generate Costing Department Table   
. *
. * File Type     :   SQL
. *
. * File Name     :   ccigdpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCIGDPA1   IFILE    SQL, FIXED=55, KEY="U1-3,4-12,13-21"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DCCGDTYP  DIM       3      3        1     Type of procedure                  
CCGDCOD1  DIM       9      9        4     1st Code                           
CCGDCOD2  DIM       9      9        13    2nd Code                           
CCGDDEPT  DIM       3      3        22    Costing Department code            
CCGDSPAR  DIM       30     30       25    spare                              
.
.End of Record                      55   
.
.Redefine Key Variables
.----------------------
CCGDTYPE  FORM      3    
