. V10.00.01 08/04/2010 EC  Created FD CAR 192466                             
. *----------------------------------------------------------------------
. * Include Name  :   ALLETXFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Equipment Notes Free Text          
. *
. * File Type     :   SQL
. *
. * File Name     :   alletxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLETXA1   IFILE    SQL, FIXED=159, KEY="U1-8,9-16,17-19,20-25,26-28"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALETURNO  DIM       8      8        1     U/R Number                         
ALETLOAN  DIM       8      8        9     Loan Number                        
ALETTYPE  DIM       3      3        17    Comment Type                       
.                                         001 - Equipment Notes                
ALETNOTE  DIM       6      6        20    Note Number                        
ALETUNIQ  DIM       3      3        26    Line Number                        
ALETCMNT  DIM       100    100      29    Comment                            
ALETSPAR  DIM       30     30       129   Spare                              
.
.End of Record                      159  
.
