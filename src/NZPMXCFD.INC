. V9.08.001 14/11/2006 EC Created FD CAR 120007
. *----------------------------------------------------------------------
. * Include Name  :   NZPMXCFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   Misc. Charge Exploding Items       
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpmxcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPMXCA1   IFILE    SQL, FIXED=205, KEY="U1-3,4-6,7-12,13-20,21-29,30-37,38-40" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZMXHOSP  DIM       3      3        1     Hospital Code (pathspaf)           
NZMXCLMC  DIM       3      3        4     Claim Code (Cat CL)                
NZMXCNTR  DIM       6      6        7     Contract (Health Fund)             
NZMXFTAB  DIM       8      8        13    Fund Table                         
NZMXMCHG  DIM       9      9        21    Charge Code                        
NZMXEFDT  DIM       8      8        30    Effective Date                     
NZMXUNIQ  DIM       3      3        38    Unique Number                      
NZMXQNTY  DIM       3      3        41    Quantity                           
NZMXITMN  DIM       9      9        44    Misc Item                          
NZMXCDAT  DIM       8      8        53    Date Record Created (ccyymmdd)     
NZMXCTIM  DIM       8      8        61    Time Record Created (hh:mm:ss)     
NZMXCUID  DIM       10     10       69    WEB User Id Created (websecaf)     
NZMXUDAT  DIM       8      8        79    Date Record Updated (ccyymmdd)     
NZMXUTIM  DIM       8      8        87    Time Record Created (hh:mm:ss)     
NZMXUUID  DIM       10     10       95    WEB User Id Updated (websecaf)     
NZMXSPAR  DIM       100    100      105   Spare                              
.
.End of Record                      205  
.
