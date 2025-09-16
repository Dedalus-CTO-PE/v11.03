. V10.01.02 02/12/2010 PV  Added spare variable CAR 233924                   
. V10.01.01 02/12/2010 PV  Created FD CAR 233924                                
. *----------------------------------------------------------------------
. * Include Name  :   PATCLPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   PRFA by Claim Type                 
. *
. * File Type     :   SQL
. *
. * File Name     :   patclpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATCLPA1   IFILE    SQL, FIXED=498, KEY="U1-8,9-11,12-19"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCLVISN  DIM       8      8        1     Visit Number                       
PTCLCLTY  DIM       3      3        9     Claim Type (Cat CL)                
PTCLINVN  DIM       8      8        12    Invoice Number (once raised)       
PTCLSNAM  DIM       40     40       20    PRFA Surname                       
PTCLGNAM  DIM       40     40       60    PRFA Given Name                    
PTCLADD1  DIM       35     35       100   Address Line 1                     
PTCLADD2  DIM       35     35       135   Address Line 2                     
PTCLADD3  DIM       35     35       170   Address Line 3                     
PTCLADD4  DIM       35     35       205   Address Line 4                     
PTCLPCOD  DIM       8      8        240   Post Code                          
PTCLPPHN  DIM       20     20       248   Private Phone                      
PTCLBPHN  DIM       20     20       268   Business Phone                     
PTCLMPHN  DIM       20     20       288   Mobile Phone                       
PTCLEMAL  DIM       80     80       308   Email Address                      
PTCLRLTN  DIM       10     10       388   Relationship                       
PTCLSPAR  DIM       100    100      398   Spare                              
.
.End of Record                      498  
.
