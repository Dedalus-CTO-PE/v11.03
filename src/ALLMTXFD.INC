. V9.05.001 20/12/2005 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLMTXFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Encounter Notes Free Text          
. *
. * File Type     :   SQL
. *
. * File Name     :   allmtxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLMTXA1   IFILE    SQL, FIXED=139, KEY="U1-8,9-16,17-19,20-25,26-28"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALMTVISN  DIM       8      8        1     Visit Number                       
ALMTENCN  DIM       8      8        9     Encounter Number                   
ALMTTYPE  DIM       3      3        17    Comment Type                       
.                                         001 - Encounter Notes
ALMTNOTE  DIM       6      6        20    Note Number                        
ALMTUNIQ  DIM       3      3        26    Line Number                        
ALMTCMNT  DIM       80     80       29    Comment                            
ALMTSPAR  DIM       30     30       109   Spare Variable                     
.
.End of Record                      139  
.
