. V11.03.01 25/09/2023 PV C-0935874 Added Type 07,08,09
. V10.04.01 21/02/2014 EC C-291879 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSIERFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   HI Service Error Messages          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsieraf.dat
. *
. * Index Values  :   KEY88   KEY88   KEY88                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIERA1   IFILE    SQL, FIXED=403, KEY="U1-2,3-52,53-72,73-80,81-88"           
PMSIERA2   IFILE    SQL, FIXED=403, KEY="U73-80,81-88,1-2,3-52,53-72"           
PMSIERA3   IFILE    SQL, FIXED=403, KEY="U53-72,73-80,81-88,1-2,3-52"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIRRTYP  DIM       2      2        1     Request Type                       
.                                         "01" - IHI lookup                    
.                                         "02" - HPI-I lookup - HCP            
.                                         "03" - HPI-O lookup - Hospital       
.                                         "04" - HPI-O lookup - Practice       
.                                         "05" - HPI-O lookup - Hospital Unit  
.                                         "06" - HPI-O lookup - OP Clinic      
.                                         "07" - IHI lookup
.                                         "08" - Clear IHI
.                                         "09" - Clear IHI then IHI Lookup
PMIRCODE  DIM       50     50       3     Request Code                       
.                                         "01" - U/R                           
.                                         "02" - HCP                           
.                                         "03" - Hospital                      
.                                         "04" - Practice code and count       
.                                         "05" - Hospital code, unit code and H
.                                         PI-O                                 
.                                         "06" - OP Site, clinic, date, start a
.                                         nd slot                              
.                                         "07" - Unique Transaction ID
.                                         "08" - Unique Transaction ID
.                                         "09" - Unique Transaction ID
PMIRINUM  DIM       20     20       53    Identifier Number                  
.                                         "01" = IHI Number                    
.                                         "02" = HPI-I Number                  
.                                         "03 - 06" = HPI-O Number             
PMIRRDAT  DIM       8      8        73    Request Date (CCYYMMDD)            
PMIRRTIM  DIM       8      8        81    Request Time (HH:MM:SS)            
PMIRRUID  DIM       10     10       89    Request User Id (websecaf)         
PMIRECOD  DIM       4      4        99    Error Code                         
PMIREMES  DIM       200    200      103   Error Message                      
PMIRSPAR  DIM       100    100      303   Spare                              
.
.End of Record                      403  
.
