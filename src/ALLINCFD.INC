. 9.08 .001 27/03/2007 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   ALLINCFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Allied Health Intervention Codes   
. *
. * File Type     :   SQL
. *
. * File Name     :   allincaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLINCA1   IFILE    SQL, FIXED=166, KEY="U1-3,4-12"                             
ALLINCA2   IFILE    SQL, FIXED=166, KEY="U1-3,13-62,4-12"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALINDEPT  DIM       3      3        1     Department (alldepaf)              
ALINCODE  DIM       9      9        4     Intervention Code                  
ALINDESC  DIM       50     50       13    Description                        
ALINACTV  DIM       1      1        63    Inactive (0=No 1=Yes)                
ALINCDAT  DIM       8      8        64    Date Record Created (CCYYMMDD)     
ALINCTIM  DIM       8      8        72    Time Record Created (HH:MM:SS)     
ALINCUID  DIM       10     10       80    WEB User ID Created (websecaf)     
ALINUDAT  DIM       8      8        90    Date Record Updated (CCYYMMDD)     
ALINUTIM  DIM       8      8        98    Time Record Updated (HH:MM:SS)     
ALINUUID  DIM       10     10       106   WEB User ID Updated (websecaf)     
ALINSPAR  DIM       50     50       116   Spare                              
.
.End of Record                      166  
.
