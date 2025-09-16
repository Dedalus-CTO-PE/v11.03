. 9.08 .001 30/03/2007 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   ALLITVFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Allied Health Interventions        
. *
. * File Type     :   SQL
. *
. * File Name     :   allitvaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLITVA1   IFILE    SQL, FIXED=141, KEY="U1-8,9-16,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALIVVISN  DIM       8      8        1     Referral/Visit Number              
ALIVENCT  DIM       8      8        9     Encounter Number                   
ALIVICNT  DIM       8      8        17    Intervention Count                 
ALIVCODE  DIM       9      9        25    Intervention Code                  
ALIVDURA  DIM       5      5        34    Duration (mins)                    
ALIVCDAT  DIM       8      8        39    Date record created (CCYYMMDD)     
ALIVCTIM  DIM       8      8        47    Time record created (HH:MM:SS)     
ALIVCUID  DIM       10     10       55    WEB user ID created (websecaf)     
ALIVUDAT  DIM       8      8        65    Date record updated (CCYYMMDD)     
ALIVUTIM  DIM       8      8        73    Time record updated (HH:MM:SS)     
ALIVUUID  DIM       10     10       81    WEB user ID updated (websecaf)     
ALIVSPAR  DIM       50     50       91    Spare                              
.
.End of Record                      141  
.
