. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSDSYFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Department Security                
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsdsyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSDSYA1   IFILE    SQL, FIXED=55, KEY="U1-4,5-6,7-14"                          
CCSDSYA2   IFILE    SQL, FIXED=55, KEY="U5-6,7-14,1-4"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCDSSEC   DIM       4      4        1     Security Code                      
CCDSHCD   DIM       2      2        5     Hospital                           
CCDSDPT   DIM       8      8        7     Department                         
CCDSSPA   DIM       40     40       15    Spare                              
.
.End of Record                      55   
.
