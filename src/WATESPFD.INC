. V9.10.001 30/04/2008 JH  Added WTEPEDOB CAR 165994                         
. *----------------------------------------------------------------------
. * Include Name  :   WATESPFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List Esis Patient Details  
. *
. * File Type     :   SQL
. *
. * File Name     :   watespaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATESPA1   IFILE    SQL, FIXED=181, KEY="U1-8,9-16"                             
WATESPA2   IFILE    SQL, FIXED=181, KEY="U9-16,1-8"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTEPURNO  DIM       8      8        1     UR Number                          
WTEPEDAT  DIM       8      8        9     Date Sent in Extract               
WTEPPDOB  DIM       8      8        17    Date of Birth                      
WTEPPSEX  DIM       1      1        25    Sex                                
WTEPMEDI  DIM       10     10       26    Medicare Number                    
WTEPMREF  DIM       1      1        36    Medicare Reference                 
WTEPRESI  DIM       3      3        37    Category T - Resident Status       
WTEPPOST  DIM       4      4        40    Post Code                          
WTEPSUBR  DIM       35     35       44    Suburb                             
WTEPWEBC  DIM       10     10       79    Web User ID creator                
WTEPCDAT  DIM       8      8        89    Date record created                
WTEPCTIM  DIM       8      8        97    Time record created                
WTEPWEBU  DIM       10     10       105   Web User ID updated                
WTEPUDAT  DIM       8      8        115   Date Update (CCYYMMDD)             
WTEPUTIM  DIM       8      8        123   Time Updated (hh:mm:ss)            
WTEPABRG  DIM       3      3        131   Indigenous Status (Cat VA)         
WTEPEDOB  DIM       1      1        134   Estimated date of birth 1=Yes      
WTEPSPAR  DIM       46     46       135   Spare                              
.
.End of Record                      181  
.
