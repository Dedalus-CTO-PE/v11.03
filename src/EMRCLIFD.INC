. V10.13.01 17/01/2019 SA C-0867489 Updated description for EMCIOR08            
. V9.12.01 01/06/2009 SS  Created FD CAR 1978930                                
. *----------------------------------------------------------------------
. * Include Name  :   EMRCLIFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Other Clinical Information         
. *
. * File Type     :   SQL
. *
. * File Name     :   emrcliaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRCLIA1   IFILE    SQL, FIXED=438, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMCIVISN  DIM       8      8        1     ED Visit Number                    
EMCIOR01  DIM       1      1        9     Ordered Field 1 (X-Ray)            
EMCIOR02  DIM       1      1        10    Ordered Field 2 (CT Scan)          
EMCIOR03  DIM       1      1        11    Ordered Field 3 (U/S)              
EMCIOR04  DIM       1      1        12    Ordered Field 4 (MRI)              
EMCIOR05  DIM       1      1        13    Ordered Field 5 (Nuclear Medicine) 
EMCIOR06  DIM       1      1        14    Ordered Field 6 (LMO Contacted)    
EMCIOR07  DIM       1      1        15    Ordered Field 7                    
.                                         (Speciality/Other Hospital Contacted)
EMCIOR08  DIM       1      1        16    Ordered Field 8 (Risk Assessment)  
EMCIOR09  DIM       1      1        17    Ordered Field 9                    
EMCIOR10  DIM       1      1        18    Ordered Field 10                   
EMCIPR01  DIM       1      1        19    Patient Returned Field 1 (X-Ray)   
EMCIPR02  DIM       1      1        20    Patient Returned Field 2 (CT Scan) 
EMCIPR03  DIM       1      1        21    Patient Returned field 3 (U/S)     
EMCIPR04  DIM       1      1        22    Patient Returned Field 4 (MRI)     
EMCIPR05  DIM       1      1        23    Patient Returned Field 5           
.                                         (Nuclear Medicine)                   
EMCIPR06  DIM       1      1        24    Patient Returned Field 6           
EMCIPR07  DIM       1      1        25    Patient Returned Field 7           
EMCIPR08  DIM       1      1        26    Patient Returned Field 8           
EMCIPR09  DIM       1      1        27    Patient Returned Field 9           
EMCIPR10  DIM       1      1        28    Patient Returned Field 10          
EMCIRS01  DIM       1      1        29    Report Seen Field 1 (X-Ray)        
EMCIRS02  DIM       1      1        30    Report Seen Field 2 (CT Scan)      
EMCIRS03  DIM       1      1        31    Report Seen Field 3 (U/S)          
EMCIRS04  DIM       1      1        32    Report Seen Field 4 (MRI)          
EMCIRS05  DIM       1      1        33    Report Seen Field 5                
.                                         (Nuclear Medicine)                   
EMCIRS06  DIM       1      1        34    Report Seen Field 6                
EMCIRS07  DIM       1      1        35    Report Seen Field 7                
EMCIRS08  DIM       1      1        36    Report Seen Field 8                
EMCIRS09  DIM       1      1        37    Report Seen Field 9                
EMCIRS10  DIM       1      1        38    Report Seen Field 10               
EMCIPCOM  DIM       3      3        39    Pathology Company (Code Field)     
EMCILMDS  DIM       50     50       42    LMO Contacted Free Format          
.                                         Description                          
EMCILMCD  DIM       10     10       92    LMO Contacted HCP Code             
EMCILMCF  DIM       3      3        102   LMO Contacted Via Coded Field      
EMCIRCCD  DIM       10     10       105   Relative Contacted Code            
.                                         (pmsrelaf)                           
EMCIRCFF  DIM       50     50       115   Relative Contacted Free Format     
.                                         Description                          
EMCIRCTM  DIM       5      5        165   Relative Contacted Time            
EMCISCFF  DIM       50     50       170   Speciality/Other Hos Contacted Free
EMCISCVC  DIM       3      3        220   Speciality/Other Hos Via Coded     
.                                         Field (Cat CZ)
EMCITSCT  DIM       5      5        223   Time Speciality/Other Hos Contacted
EMCIPRDT  DIM       8      8        228   Patient Review Date (CCYYMMDD)     
EMCIRRFF  DIM       50     50       236   Reason For Review (Free Format)    
EMCIUWCR  DIM       10     10       286   User who Created Record            
EMCIRCDT  DIM       8      8        296   Date Record Created                
EMCITRCD  DIM       8      8        304   Time Record Created                
EMCIUUPD  DIM       10     10       312   User Who Updated Record            
EMCIRUDT  DIM       8      8        322   Date Record Updated                
EMCITRUP  DIM       8      8        330   Time Record Updated                
EMCISPAR  DIM       100    100      338   Spare Variable                     
.
.End of Record                      438  
.
