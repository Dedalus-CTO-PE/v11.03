. VF.00.001 29/10/1998 SB  Year 2000                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINCIHFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog Usage by Warehouse         
. *
. * File Type     :   SQL
. *
. * File Name     :   sincihaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCIHA1   IFILE    SQL, FIXED=85, KEY="U1-7,8-12,13-18"                        
SINCIHA2   IFILE    SQL, FIXED=85, KEY="U1-7,13-18,8-12"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIHCAT   DIM       7      7        1     Catalog                            
SIIHWAR   DIM       5      5        8     Warehouse                          
SIIHDAT   DIM       6      6        13    Date CCYYMM                        
SIIHUQT   FORM      12.2   8        19    Usage Quantity                     
SIIHUAM   FORM      12.2   8        27    Usage Cost                         
SIIHPQT   FORM      12.2   8        35    Purchases Quantity                 
SIIHPAM   FORM      12.2   8        43    Purchases Amount                   
SIIHRQT   FORM      12.2   8        51    Receival Quantity                  
SIIHRAM   FORM      12.2   8        59    Receival Amount                    
SIIHSPA   DIM       18     18       67    Spare                              
.
.End of Record                      85   
.
