. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSDCOFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Department Costs by Cost Type      
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsdcoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSDCOA1   IFILE    SQL, FIXED=107, KEY="U1-2,3-10,11-14,15-16,17-20"           
CCSDCOA2   IFILE    SQL, FIXED=107, KEY="U1-2,3-10,17-20,11-14,15-16"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCDCHCD   DIM       2      2        1     Hospital Code                      
CCDCDPT   DIM       8      8        3     Department                         
CCDCYEAR  DIM       4      4        11    Year                               
CCDCPER   DIM       2      2        15    Period                             
CCDCCTY   DIM       4      4        17    Cost Type                          
CCDCDIR   FORM      12.2   8        21    Direct Costs                       
CCDCIND   FORM      12.2   8        29    Indirect Costs                     
CCDCCAL   FORM      12.2   8        37    Spare                              
CCDCDBU   FORM      12.2   8        45    Spare                              
CCDCIBU   FORM      12.2   8        53    Spare                              
CCDCCBU   FORM      12.2   8        61    Spare                              
CCDCFBU   FORM      12.2   8        69    Spare                              
CCDCSPA   DIM       30     30       77                                       
.
.End of Record                      107  
.
