. *----------------------------------------------------------------------
. * Include Name  :   PATCMTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Casemix Matrix Header table        
. *
. * File Type     :   SQL
. *
. * File Name     :   patcmtaf.dat
. *
. * Modifications : 
. *       V10.03.01  01/10/2012  J.Tan         CAR 271474
. *                  Created New FD
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATCMTA1   IFILE    SQL, FIXED=119, KEY="U1-3,4-9,10-12,13-18"                  
PATCMTA2   IFILE    SQL, FIXED=119, KEY="U13-18,1-3,4-9,10-12"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCMCCOD  DIM       3      3        1     Claim Code                         
PTCMHFUN  DIM       6      6        4     Health Fund                        
PTCMHFTY  DIM       3      3        10    Health Fund Type                   
PTCMCNTR  DIM       6      6        13    Contract ID                        
PTCMSPRE  DIM       100    100      19    Spare                              
.
.End of Record                      119  
.
