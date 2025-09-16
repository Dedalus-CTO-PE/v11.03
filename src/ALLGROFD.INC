. V10.04.01 20/02/2014 SA C-228900 Added ALGRCONT to ALGRUDF4                   
. V9.09.001 05/07/2007 EC  Created FD CAR 135536                                
. *----------------------------------------------------------------------
. * Include Name  :   ALLGROFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Group Contact Session Setup        
. *
. * File Type     :   SQL
. *
. * File Name     :   allgroaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLGROA1   IFILE    SQL, FIXED=204, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALGRSESN  DIM       8      8        1     Session Number                     
ALGRNAME  DIM       60     60       9     Session Name                       
ALGRSEST  DIM       3      3        69    Session Type (Cat gy)              
ALGRLOCN  DIM       3      3        72    Location (Cat PO)                  
ALGRDAYI  DIM       1      1        75    Day Indicator                      
.                                         1 = Monday                           
.                                         2 = Tuesday                          
.                                         3 = Wednesday                        
.                                         4 = Thursday                         
.                                         5 = Friday                           
.                                         6 = Saturday                         
.                                         7 = Sunday                           
ALGRSDAT  DIM       8      8        76    Start Date (CCYYMMDD)              
ALGRSTIM  DIM       8      8        84    Start Time (HH:MM:SS)              
ALGRDURN  DIM       3      3        92    Duration (Minutes)                 
ALGRDEPT  DIM       3      3        95    Department Code (alldepaf)         
ALGRFREQ  DIM       3      3        98    Frequency (Cat fr)                 
ALGRACTV  DIM       1      1        101   Active 0=Active 1=Inactive         
ALGRCDAT  DIM       8      8        102   Date Record Created (CCYYMMDD)     
ALGRCTIM  DIM       8      8        110   Time Record Created (HH:MM:SS)     
ALGRCUID  DIM       10     10       118   WEB User ID Created (websecaf)     
ALGRUDAT  DIM       8      8        128   Date Record Updated (CCYYMMDD)     
ALGRUTIM  DIM       8      8        136   Time Record Updated (HH:MM:SS)     
ALGRUUID  DIM       10     10       144   WEB User ID Updated (websecaf)     
ALGRCONT  DIM       3      3        154   Contract (Cat gb)                  
ALGRUDF1  DIM       3      3        157   User Defined Field 1 (Cat g1)      
ALGRUDF2  DIM       3      3        160   User Defined Field 2 (Cat g2)      
ALGRUDF3  DIM       3      3        163   User Defined Field 3 (Cat g3)      
ALGRUDF4  DIM       3      3        166   User Defined Field 4 (Cat g4)      
ALGRSPAR  DIM       35     35       169   Spare                              
.
.End of Record                      204  
.
