. V10.13.01 29/10/2018 EC C-0856616 Add counter to key for record types 1 and 4 
.                      2 characters at postion 20 right justified blank to 99
. V10.08.02 11/04/2016 SA C-0312570 Updates to file to reflect V1.6             
.                           specification changes                               
. V10.08.01 30/03/2016 SA C-0312570 Created table                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSEDGFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Effective DRG                      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsedgaf.dat
. *
. * Index Values  :   KEY34   KEY42                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSEDGA1   IFILE    SQL, FIXED=206, KEY="U1-1,2-31,32-34"
PMSEDGA2   IFILE    SQL, FIXED=206, KEY="U1-1,2-31,38-45,32-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEGRTYP  DIM       1      1        1     Record Type                        
.                                          1 = Health Fund (patfn1af)          
.                                          2 = Claim Code (Cat CL - patcodes)  
.                                          3 = State                           
.                                          4 = Hospital(pathspaf)/Health Fund  
.                                          The following record types are not  
.                                          implemented yet.                    
.                                          5 = Hospital/Claim Code             
.                                          6 = Hospital/State                  
PMEGKEYV  DIM       30     30       2     Key Value                          
.                                         Value based on Record Type, eg:      
.                                          Health Fund Pos 20 Counter          
.                                          Claim Code                          
.                                          State                               
.                                             0 = Not Australia                
.                                             1 = New Zealand                  
.                                             2 = New South Wales              
.                                             3 = Victoria                     
.                                             4 = Queensland                   
.                                             5 = South Australia              
.                                             6 = Western Australia            
.                                             7 = Tasmania                     
.                                             8 = Northern Territory           
.                                             9 = Australian Capital Territory 
.                                          Hospital/Health Fund Pos 20 Counter 
.                                          Hospital/Claim Code                 
.                                          Hospital/State                      
PMEGDRGV  DIM       3      3        32    DRG Version                        
.                                         041, 042, 050, 051, 052, 060, 062,   
.                                         070, 080                             
PMEGPYCD  DIM       3      3        35    3M Pay Code                        
PMEGFDAT  DIM       8      8        38    DRG Effective From Date (ccyymmdd) 
PMEGTDAT  DIM       8      8        46    DRG Effective To Date (ccyymmdd)   
PMEGCUID  DIM       10     10       54    Created by User Id (websecaf)      
PMEGCDAT  DIM       8      8        64    Date Record Created (ccyymmdd)     
PMEGCTIM  DIM       8      8        72    Time Record Created (hh:mm:ss)     
PMEGUUID  DIM       10     10       80    Updated by User Id (websecaf)      
PMEGUDAT  DIM       8      8        90    Date Record Updated (ccyymmdd)     
PMEGUTIM  DIM       8      8        98    Time Record Updated (hh:mm:ss)     
PMEGCOMM  DIM       50     50       106   Comments                           
PMEGSPAR  DIM       50     50       156   Spare Variable                     
.
.End of Record                      206  
.
