. V9.09.001 06/07/2007 EC  Created FD CAR 135536                             
. *----------------------------------------------------------------------
. * Include Name  :   ALLGRHFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Group Contact Session HCP's        
. *
. * File Type     :   SQL
. *
. * File Name     :   allgrhaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLGRHA1   IFILE    SQL, FIXED=125, KEY="U1-8,9-18,19-21"                       
ALLGRHA2   IFILE    SQL, FIXED=125, KEY="U1-8,9-18,22-22,19-21"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALGHSESN  DIM       8      8        1     Session Number                     
ALGHHCPC  DIM       10     10       9     HCP (pmschpaf)                     
ALGHSPEC  DIM       3      3        19    HCP Specialty (Cat DT)            
ALGHACTV  DIM       1      1        22    Active 0=Active 1=Inactive         
ALGHCDAT  DIM       8      8        23    Date Record Created (CCYYMMDD)     
ALGHCTIM  DIM       8      8        31    Time Record Created (HH:MM:SS)     
ALGHCUID  DIM       10     10       39    WEB User ID Created (websecaf)     
ALGHUDAT  DIM       8      8        49    Date Record Updated (CCYYMMDD)     
ALGHUTIM  DIM       8      8        57    Time Record Updated (HH:MM:SS)     
ALGHUUID  DIM       10     10       65    WEB User ID Updated (websecaf)     
ALGHSPAR  DIM       50     50       75    Spare                              
.
.End of Record                      125  
.
