. V9.09.001 12/10/2007 EC  Created FD CAR 151931                             
. *----------------------------------------------------------------------
. * Include Name  :   PMSDLTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Doctors Letter Selections          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdltaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDLTA1   IFILE    SQL, FIXED=208, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDSSELI  DIM       4      4        1     Selection ID                       
PMDSDESC  DIM       35     35       5     Selection Description              
PMDSHCPF  DIM       10     10       40    HCP Code From (pmshcpaf)           
PMDSHCPT  DIM       10     10       50    HCP Code To (pmshcpaf)             
PMDSPSFR  DIM       3      3        60    Primary Speciality From (Cat DT)   
PMDSPSTO  DIM       3      3        63    Primary Speciality To (Cat DT)   
PMDSASFR  DIM       3      3        66    Additional Speciality From (Cat DT)
PMDSASTO  DIM       3      3        69    Additional Speciality To (Cat DT)  
PMDSHOSP  DIM       3      3        72    Hospital                           
PMDSPREF  DIM       3      3        75    Preferred Communication (Cat CZ)     
PMDSFADF  DIM       8      8        78    First Accred. Date From (ccyymmdd) 
PMDSFADT  DIM       8      8        86    First Accred. Date To (ccyymmdd)   
PMDSLADF  DIM       8      8        94    Last Accred. Date From (ccyymmdd)  
PMDSLADT  DIM       8      8        102   Last Accred. Date To (ccyymmdd)    
PMDSHCST  DIM       2      2        110   HCP Status                         
PMDSATYP  DIM       3      3        112   Accreditation Type (Cat AT)        
PMDSYACF  DIM       2      2        115   Years Of Accreditation From        
PMDSYACT  DIM       2      2        117   Years Of Accreditation To          
PMDSINSC  DIM       6      6        119   Insurance Code (patin1af)          
PMDSIDFF  DIM       8      8        125   Insurance Date From From(ccyymmdd) 
PMDSIDFT  DIM       8      8        133   Insurance Date From To(ccyymmdd)   
PMDSIDTF  DIM       8      8        141   Insurance Date To From(ccyymmdd)   
PMDSIDTT  DIM       8      8        149   Insurance Date To To(ccyymmdd)     
PMDSACTV  DIM       1      1        157   HCP Status 0=Active 1=Inactive     
PMDSSPAR  DIM       50     50       158   Spare                              
.
.End of Record                      208  
.
