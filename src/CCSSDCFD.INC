. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSSDCFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Department Cost Summary            
. *
. * File Type     :   SQL
. *
. * File Name     :   ccssdcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSSDCA1   IFILE    SQL, FIXED=103, KEY="U1-2,3-10,11-14,15-16"                 
CCSSDCA2   IFILE    SQL, FIXED=103, KEY="U1-2,11-14,15-16,3-10"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCSDHCD   DIM       2      2        1     Hospital                           
CCSDDPT   DIM       8      8        3     Department                         
CCSDYEAR  DIM       4      4        11    Year                               
CCSDPER   DIM       2      2        15    Period                             
CCSDDIR   FORM      12.2   8        17    Direct Costs                       
CCSDDRB   FORM      12.2   8        25    Spare                              
CCSDIND   FORM      12.2   8        33    Indirect Costs                     
CCSDINB   FORM      12.2   8        41    Spare                              
CCSDFBU   FORM      12.2   8        49    Spare                              
CCSDSTD   FORM      12.2   8        57    Standard Cost                      
CCSDCHG   FORM      12.2   8        65    Total Charge                       
CCSDSPA   DIM       30     30       73    Spare                              
.
.End of Record                      103  
.
