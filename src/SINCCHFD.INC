. VF.09.002 01/11/2000 SB  Added Warehouse                                   
. VF.00.001 29/10/1998 SB  Year 2000                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINCCHFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Supplied Stock to Cost Centres     
. *
. * File Type     :   SQL
. *
. * File Name     :   sincchaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINCCHA1   IFILE    SQL, FIXED=63, KEY="U1-5,6-12,13-17,18-23,24-28"            
SINCCHA2   IFILE    SQL, FIXED=63, KEY="U1-5,18-23,6-12,13-17,24-28"            
SINCCHA3   IFILE    SQL, FIXED=63, KEY="U1-5,18-23,24-28,6-12,13-17"            
SINCCHA4   IFILE    SQL, FIXED=63, KEY="U6-12,13-17,18-23,1-5,24-28"            
SINCCHA5   IFILE    SQL, FIXED=63, KEY="U1-5,24-28,18-23,6-12,13-17"            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SICHCST   DIM       5      5        1     Cost Centre                        
SICHCAT   DIM       7      7        6     Catalog                            
SICHWAR   DIM       5      5        13    Warehouse                          
SICHDAT   DIM       6      6        18    Date CCYYMM                        
SICHSUB   DIM       5      5        24    Product Group                      
SICHUQT   FORM      12.2   8        29    Usage Quantity                     
SICHUAM   FORM      12.2   8        37    Usage Cost                         
SICHSPA   DIM       18     18       45    Spare                              
.
.End of Record                      63   
.
