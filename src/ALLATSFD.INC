. V9.09.001 06/08/2007 DS  Created FD  CAR 135538                            
. *----------------------------------------------------------------------
. * Include Name  :   ALLATSFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Assessment Type Setup              
. *
. * File Type     :   SQL
. *
. * File Name     :   allatsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLATSA1   IFILE    SQL, FIXED=184, KEY="U42-44,1-10"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALATTYPE  DIM       10     10       1     Assessment Type                    
ALATDESC  DIM       30     30       11    Assessment Type Description        
ALATACTV  DIM       1      1        41    Active (0=No[default],1=yes)       
ALATDEPT  DIM       3      3        42    Department (Cat CG - Indc3=A)      
ALATCDTE  DIM       8      8        45    Commencement Date (>=current date) 
ALATFDTE  DIM       8      8        53    Finish Date                        
ALATREMD  DIM       3      3        61    Reminder Days (max=999)            
ALATNAME  DIM       18     18       64    HTML Template Name                 
ALATCDAT  DIM       8      8        82    Date Record Created (CCYYMMDD)     
ALATCTIM  DIM       8      8        90    Time Record Created (HH:MM:SS)     
ALATCUID  DIM       10     10       98    WEB User ID Created (websecaf)     
ALATUDAT  DIM       8      8        108   Update Date (CCYYMMDD)             
ALATUTIM  DIM       8      8        116   Update Time (HH:MM:SS)             
ALATUUID  DIM       10     10       124   WEB User ID Updated (websecaf)     
ALATSPAR  DIM       50     50       134   Spare Variable                     
.
.End of Record                      184  
.
