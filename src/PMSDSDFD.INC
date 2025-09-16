. V10.04.01 20/02/2014 SA C-290918 Added PMDDHCPC to PMDDESNT
. V10.00.01 06/05/2010 JP  Created table - CAR 207094
. *----------------------------------------------------------------------
. * Include Name  :   PMSDSDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Discharge Summary Details  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdsdaf.dat
. *
. * Index Values  :   KEY28                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDSDA1   IFILE    SQL, FIXED=153, KEY="U1-8,9-12,13-20,21-28"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDDVISN  DIM       8      8        1     Visit number                       
PMDDCPID  DIM       4      4        9     Correspondence id(link to obspcoaf)
PMDDDATE  DIM       8      8        13    Date Sent (CCYYMMDD)               
PMDDTIME  DIM       8      8        21    Time Sent (hh:mm:ss)               
PMDDDEST  DIM       20     20       29    Destination                        
PMDDFAXN  DIM       20     20       49    Fax number                         
PMDDCUID  DIM       10     10       69    Web User id created (websecaf)     
PMDDHCPC  DIM       10     10       79    HCP Code                           
PMDDHCPP  DIM       10     10       89    HCP Practice Code                  
PMDDHCPT  DIM       2      2        99    HCP Practice Code Count            
PMDDFAXS  DIM       1      1        101   Fax Sent                           
.                                         Blank or 0 = No                      
.                                         1 = Yes                              
PMDDESNT  DIM       1      1        102   Electronically Sent                
.                                         Blank or 0 = No                      
.                                         1 = Yes                              
PMDDSPAR  DIM       50     50       103   Spare                              
.
.End of Record                      153  
.
