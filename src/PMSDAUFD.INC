. V11.01.01 10/09/2021 TT C-0889595 Added Index 3                               
. V11.00.02 06/07/2020 DS C-0864683 Added Record Type 012 - NHI MWS Local Edits 
. V11.00.01 09/06/2020 PVL C-0878550 Added Record Type 008 - MyHR Consent       
. V10.12.01 11/07/2018 PVL C-0845218 Add new Record Types comments              
. V10.07.01 05/11/2015 SA C-309601 Added Type 004 to PMDERTYP                   
. V10.06.01 15/04/2015 PV C-312723 Added Type of Rec 003 Advance Care Plan Alert
. V10.04.00 27/03/2014 JT C- 279251 Created new FD for Death Audit file         
. *----------------------------------------------------------------------
. * Include Name  :   PMSDAUFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Death Audit table                  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdauaf.dat
. *
. * Index Values  :   KEY27   KEY27   KEY27                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDAUA1   IFILE    SQL, FIXED=1238, KEY="U1-8,9-16,17-24,25-27"
PMSDAUA2   IFILE    SQL, FIXED=1238, KEY="U1-8,25-27,9-16,17-24"
PMSDAUA3   IFILE    SQL, FIXED=1238, KEY="U25-27,9-16,17-24,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDEURNO  DIM       8      8        1     U/R Number                         
PMDECDAT  DIM       8      8        9     Date Created                       
PMDECTIM  DIM       8      8        17    Time Created                       
PMDERTYP  DIM       3      3        25    Type of Record                     
.                                         001 - Death Details                  
.                                         002 - HCP Details                    
.                                         003 - Advance Care Plan Alert Change 
.                                         004 - Accessed Clinical Notes        
.                                         005 - PMI Name Detail Changes        
.                                         006 - PMI Demographics Confirmed     
.                                         007 - PMI Details Change 1           
.                                         008 - PMI Details Change 2           
.                                         012 - NHI MWS Local Edits            
PMDEFL01  DIM       100    100      28    Field 1                            
.                                         Record type 001 - Date of Death      
.                                         Record type 002 - HCP                
.                                         Record type 003 - Advance Care Plan  
.                                                           Flag               
.                                         Record type 004 - Visit Number       
.                                         Record type 005 - Surname            
.                                         Record type 007 - Marital Status     
.                                                           (Cat M)            
.                                         Record type 008 - Interpreter        
.                                                           Required           
.                                         Record type 012 - MWS Warning Action 
.                                                           (Add/Update/Delete)
PMDEFL02  DIM       100    100      128   Field 2                            
.                                         Record type 001 - Unknown Date of    
.                                                           Death flag         
.                                         Record type 002 - HCP Practice       
.                                         Record type 004 - Template Id        
.                                                           (program id,       
.                                                           report no,         
.                                                           template no)       
.                                         Record type 005 - First Given Name   
.                                         Record type 007 - Religion (Cat R)   
.                                         Record type 008 - Preferred Language 
.                                                           (Cat LA)           
.                                         Record type 012 - MWS Date of Onset  
PMDEFL03  DIM       100    100      228   Field 3                            
.                                         Record type 001 - Notification Type  
.                                                           (Cat DY)           
.                                         Record type 002 - HCP Practice Count 
.                                         Record type 005 - Second Given Name  
.                                         Record type 007 - Country of Birth   
.                                                           (Cat C)            
.                                         Record type 008 - Privacy Indicator  
.                                                           (Cat PV)           
.                                         Record type 012 - MWS Warning        
.                                                           Description        
PMDEFL04  DIM       100    100      328   Field 4                            
.                                         Record type 001 - Death Certificate  
.                                                           Number             
.                                         Record type 005 - Title              
.                                         Record type 007 - Resident Status    
.                                                           (Cat T)            
.                                         Record type 008 - Folder Selection   
.                                                           (Cat FS)           
PMDEFL05  DIM       100    100      428   Field 5                            
.                                         Record type 005 - Gender             
.                                         Record type 007 - Indigenous Status  
.                                                           (Cat VA)           
.                                         Record type 008 - MyHR Consent       
.                                                           (PMPXSN16)         
PMDEFL06  DIM       100    100      528   Field 6                            
.                                         Record type 005 - Date of Birth      
.                                         Record type 007 - Employment Status  
.                                                           (Cat U7)           
PMDEFL07  DIM       100    100      628   Field 7                            
.                                         Record type 005 - Preferred Given    
.                                                           Names              
.                                         Record type 007 - Medicare Number    
PMDEFL08  DIM       100    100      728   Field 8                            
.                                         Record type 007 - Medicare Code      
PMDEFL09  DIM       100    100      828   Field 9                            
.                                         Record type 007 - Medicare Valid to  
.                                                           Date               
PMDEFL10  DIM       100    100      928   Field 10                           
.                                         Record type 007 - Usual PRFA         
PMDECUID  DIM       10     10       1028  User ID Created                    
PMDESPAR  DIM       200    200      1038  Spare variable                     
.
.End of Record                      1238 
.
