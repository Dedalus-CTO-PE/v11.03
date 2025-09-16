. V10.03.01 29/08/2012 JP C-269884 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   PMSCHAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Transfer Record Changes    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmschaaf.dat
. *
. * Index Values  :   KEY46                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCHAA1  IFILE    SQL, FIXED=379, KEY="U1-8,9-16,17-24,25-27,28-30,31-38,39-46"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCHADMN  DIM       8      8        1     Admission Number                   
PMCHTDAT  DIM       8      8        9     Transfer Date (CCYYMMDD)           
PMCHTTIM  DIM       8      8        17    Transfer Time (hh:mm:ss)           
PMCHTWAR  DIM       3      3        25    Transfer Ward                      
PMCHTBED  DIM       3      3        28    Transfer Bed                       
PMCHCDAT  DIM       8      8        31    Change Date (CCYYMMDD)             
PMCHCTIM  DIM       8      8        39    Change Time (hh:mm:ss)             
PMCHCTYP  DIM       3      3        47    Type of change                     
.                                         01 - Ward/Bed Changed                
.                                         02 - Financial Election              
.                                         03 - Patient Type                    
.                                         04 - Clinician/Unit/Team             
.                                         05 - Care Type                       
.                                         06 - Bed Type                        
.                                         07 - Date/Time of Record             
.                                         08 - Registrar                       
.                                         09 - Resident                        
PMCHREAS  DIM       3      3        50    Reason for change (Cat IZ)         
PMCHOVAL  DIM       100    100      53    Old value                          
PMCHNVAL  DIM       100    100      153   New value                          
PMCHWEBC  DIM       10     10       253   User id created (websecaf)         
PMCHDATC  DIM       8      8        263   Date created (CCYYMMDD)            
PMCHTIMC  DIM       8      8        271   Time created (hh:mm:ss)            
PMCHSPAR  DIM       100    100      279   Spare                              
.
.End of Record                      379  
.
