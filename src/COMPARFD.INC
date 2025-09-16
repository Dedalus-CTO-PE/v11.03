. V11.01.01 19/03/2021 PV C-0900574 Added Days of Week Comment
. V11.00.01 17/11/2020 EC C-0876663 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   COMPARFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   Common System Parameters           
. *
. * File Type     :   SQL
. *
. * File Name     :   comparaf.dat
. *
. * Index Values  :   KEY11   KEY14                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
COMPARA1   IFILE    SQL, FIXED=684, KEY="U1-3,4-11"
COMPARA2   IFILE    SQL, FIXED=684, KEY="U580-582,1-3,4-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CMPAHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
CMPAPARM  DIM       8      8        4     Parameter ID                       
CMPADESC  DIM       256    256      12    Parameter Description              
CMPAVALU  DIM       256    256      268   Parameter Value                    
CMPATYPE  DIM       3      3        524   Parameter Type                     
.                                         "  0" - Text                         
.                                         "  1" - Date                         
.                                         "  2" - Time                         
.                                         "  3" - HCP Code                     
.                                         "  4" - Category/Code                
.                                         "  5" - Yes/No                       
.                                         "  6" - Numeric                      
.                                         "  7" - Days of Week
CMPAACTV  DIM       1      1        527   Status (0=Active 1=Inactive)       
CMPACDAT  DIM       8      8        528   Date Record Created (CCYYMMDD)     
CMPACTIM  DIM       8      8        536   Time Record Created (HH:MM:SS)     
CMPACUID  DIM       10     10       544   WEB User ID Created (websecaf)     
CMPAUDAT  DIM       8      8        554   Date Record Updated (CCYYMMDD)     
CMPAUTIM  DIM       8      8        562   Time Record Updated (HH:MM:SS)     
CMPAUUID  DIM       10     10       570   WEB User ID Updated (websecaf)     
CMPASYST  DIM       3      3        580   System                             
CMPAVCON  DIM       1      1        583   Vendor Controlled (0=No 1=Yes)     
CMPASPAR  DIM       100    100      584   Spare                              
.
.End of Record                      684  
.
