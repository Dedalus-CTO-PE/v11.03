. V11.01.01 27/04/2021 EC C-0904025 Added index 5                               
. V9.05.B01 06/02/2006 EC  Added Index 4 CAR 87670                              
. V9.03.002 19/03/2004                                                          
. *----------------------------------------------------------------------
. * Include Name  :   ALLLONFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Loan Details Table                 
. *
. * File Type     :   SQL
. *
. * File Name     :   alllonaf.dat
. *
. * Index Values  :   KEY16   KEY24   KEY24   KEY27   KEY25                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLLONA1   IFILE    SQL, FIXED=233, KEY="U1-8,9-16"
ALLLONA2   IFILE    SQL, FIXED=233, KEY="U1-8,30-37,9-16"
ALLLONA3   IFILE    SQL, FIXED=233, KEY="U91-98,1-8,9-16"
ALLLONA4   IFILE    SQL, FIXED=233, KEY="U20-29,59-59,1-8,9-16"
ALLLONA5   IFILE    SQL, FIXED=233, KEY="U59-59,30-37,1-8,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALLOURNO  DIM       8      8        1     U/R Number                         
ALLOLOAN  DIM       8      8        9     Loan Number                        
ALLOLGRP  DIM       3      3        17    Loan Group (Category QG)           
ALLOEQUI  DIM       10     10       20    Equipment Code (allequaf)          
ALLOLDAT  DIM       8      8        30    Loan Date (CCYYMMDD)               
ALLOLTIM  DIM       8      8        38    Loan Time (HH:MM:SS)               
ALLOTHER  DIM       10     10       46    Therapist WEB User ID (websecaf)   
ALLOTYPE  DIM       3      3        56    Type of Loan (Category QL)         
ALLOSTAT  DIM       1      1        59    Status                             
.                                         0 = Loaned                           
.                                         1 = Returned                         
.                                         2 = Cancelled                        
ALLOEDAT  DIM       8      8        60    Expected Return Date (CCYYMMDD)    
ALLOVDAT  DIM       8      8        68    Review Date (CCYYMMDD)             
ALLOQTYI  FORM      8      5        76    Quantity Issued                    
ALLOIUID  DIM       10     10       81    Issuing WEB User ID (websecaf)     
ALLORDAT  DIM       8      8        91    Return Date (CCYYMMDD)             
ALLORTIM  DIM       8      8        99    Return Time (HH:MM:SS)             
ALLORUID  DIM       10     10       107   Returning WEB User ID (websecaf)   
ALLOCOND  DIM       3      3        117   Condition of Return (Category QO)  
ALLOCDAT  DIM       8      8        120   Date Record Created (CCYYMMDD)     
ALLOCTIM  DIM       8      8        128   Time Record Created (HH:MM:SS)     
ALLOCUID  DIM       10     10       136   WEB User ID Created (websecaf)     
ALLOUDAT  DIM       8      8        146   Date Record Updated (CCYYMMDD)     
ALLOUTIM  DIM       8      8        154   Time Record Updated (HH:MM:SS)     
ALLOUUID  DIM       10     10       162   WEB User ID Updated (websecaf)     
ALLONDAT  DIM       8      8        172   Next Review Date (CCYYMMDD)        
ALLOREAS  DIM       3      3        180   Reason For Review (Cat QE)         
ALLOSPAR  DIM       50     50       183   Spare Variable                     
.
.End of Record                      233  
.
