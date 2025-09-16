. V10.04.01 24/12/2013 PA C-294395 Moved ALPRDFCD and ALPROTHR out of spare vari
. V10.03.02 12/08/2013 EC C-286042 Added other factor affecting health          
. V10.03.01 27/03/2012 PV C-261277 Added Default Code Indicator                 
. V9.07.001 01/08/2006 EC  Added HDP CAR 110190                                 
. V9.00.001 12/05/2001 SB  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   ALLPRRFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Problems Codes For Each Department 
. *
. * File Type     :   SQL
. *
. * File Name     :   allprraf.dat
. *
. * Index Values  :   KEY12   KEY52                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLPRRA1   IFILE    SQL, FIXED=171, KEY="U1-3,4-12"                             
ALLPRRA2   IFILE    SQL, FIXED=171, KEY="U1-3,13-52,4-12"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALPRDEPT  DIM       3      3        1     Department Code (alldepaf)         
ALPRPROB  DIM       9      9        4     Problem Code                       
ALPRDESC  DIM       40     40       13    Problem Description                
ALPRICD   DIM       9      9        53    Equivalent ICD10 Code              
ALPRACTV  DIM       1      1        62    Active (0=No,1=Yes)                
ALPRCDAT  DIM       8      8        63    Date Record Created (CCYYMMDD)     
ALPRCTIM  DIM       8      8        71    Time Record Created (HH:MM:SS)     
ALPRCUID  DIM       10     10       79    WEB User ID Created (websecaf)     
ALPRUDAT  DIM       8      8        89    Date Record Updated (CCYYMMDD)     
ALPRUTIM  DIM       8      8        97    Time Record Updated (HH:MM:SS)     
ALPRUUID  DIM       10     10       105   WEB User ID Updated (websecaf)     
ALPRMHDP  DIM       4      4        115   Main Health Condition HDP          
ALPRDFCD  DIM       1      1        119   Default Code Indicator             
ALPROTHR  DIM       1      1        120   Other Factor Affecting Health      
.                                         " " or 0 = Problem & Other Factor    
.                                         "1" = Problem Only                   
.                                         "2" = Other Factor Only              
ALPRSPAR  DIM       50     50       121   Spare Variable                     
.
.End of Record                      171  
.
