. V10.03.00 10/09/2012 DS C-270329 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   WEBHSPFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WEB Hospital Login File            
. *
. * File Type     :   SQL
. *
. * File Name     :   webhspaf.dat
. *
. * Index Values  :   KEY13                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBHSPA1   IFILE    SQL, FIXED=76, KEY="U1-10,11-13"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBHOUSID  DIM       10     10       1     WEB User ID                        
WBHOHOSP  DIM       3      3        11    Hospital ID                        
WBHOWARD  DIM       3      3        14    Ward                               
WBHOSITE  DIM       3      3        17    Emergency Site                     
WBHOPRIN  DIM       6      6        20    Printer Department                 
WBHOSPAR  DIM       50     50       26    Spare                              
.
.End of Record                      76   
.
