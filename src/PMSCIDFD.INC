. V11.02.01 27/04/2022 EC C-0906597 Added PMCICLDT                              
. V11.01.01 03/03/2021 JT C-0863287 Added field 'Using Patient Only Invoices'   
. V10.01.01 21/02/2011 DS  Created FD   CAR 233033                              
. *----------------------------------------------------------------------
. * Include Name  :   PMSCIDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Contract ID file                   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscidaf.dat
. *
. * Index Values  :   KEY6                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCIDA1   IFILE    SQL, FIXED=206, KEY="U1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCICNTR  DIM       6      6        1     Contract ID                        
PMCIFDAT  DIM       8      8        7     Effective From Date                
PMCITDAT  DIM       8      8        15    Effective To Date                  
PMCIDESC  DIM       80     80       23    Description                        
PMCIDELE  DIM       1      1        103   Deleted? 1=Yes                     
PMCICUID  DIM       10     10       104   User who Created record (websecaf) 
PMCICDAT  DIM       8      8        114   Date record Created (CCYYMMDD)     
PMCICTIM  DIM       8      8        122   Time record Created (HH:MM:SS)     
PMCIUUID  DIM       10     10       130   User who Updated record (websecaf) 
PMCIUDAT  DIM       8      8        140   Date record Updated (CCYYMMDD)     
PMCIUTIM  DIM       8      8        148   Time record Updated (HH:MM:SS)     
PMCIPINV  DIM       1      1        156   Using Patient Only Invoices ?      
.                                         Blank,0 = No, 1 = Yes                
PMCICLDT  DIM       8      8        157   Close Off Date (CCYYMMDD)          
PMCISPAR  DIM       41     41       165   Spare variable                     
.
.End of Record                      206  
.
