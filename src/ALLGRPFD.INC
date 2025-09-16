. V9.09.001 05/07/2007 EC  Created FD CAR 135536                             
. V9.09.002 27/08/2007 EC  Added Index 3 CAR 148809                          
. *----------------------------------------------------------------------
. * Include Name  :   ALLGRPFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Group Contact Session Patients     
. *
. * File Type     :   SQL
. *
. * File Name     :   allgrpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLGRPA1   IFILE    SQL, FIXED=128, KEY="U1-8,17-24"                            
ALLGRPA2   IFILE    SQL, FIXED=128, KEY="U1-8,9-16,25-25,17-24"                 
ALLGRPA3   IFILE    SQL, FIXED=128, KEY="U9-16,1-8,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALGPSESN  DIM       8      8        1     Session Number                     
ALGPURNO  DIM       8      8        9     U/R                                
ALGPREFN  DIM       8      8        17    Referral Number (allrefaf)         
ALGPACTV  DIM       1      1        25    Active 0=Active 1=Inactive         
ALGPCDAT  DIM       8      8        26    Date Record Created (CCYYMMDD)     
ALGPCTIM  DIM       8      8        34    Time Record Created (HH:MM:SS)     
ALGPCUID  DIM       10     10       42    WEB User ID Created (websecaf)     
ALGPUDAT  DIM       8      8        52    Date Record Updated (CCYYMMDD)     
ALGPUTIM  DIM       8      8        60    Time Record Updated (HH:MM:SS)     
ALGPUUID  DIM       10     10       68    WEB User ID Updated (websecaf)     
ALGPSPAR  DIM       50     50       78    Spare                              
.
.End of Record                      128  
.
