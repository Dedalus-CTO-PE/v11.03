. V10.12.01 29/01/2018 JIP C-0846167 Created                                    
. *----------------------------------------------------------------------
. * Include Name  :   COMEDFFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   EDWARD Container Files             
. *
. * File Type     :   SQL
. *
. * File Name     :   comedfaf.dat
. *
. * Index Values  :   KEY14                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
COMEDFA1   IFILE    SQL, FIXED=323, KEY="U1-3,4-11,12-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CMEFDSTR  DIM       3      3        1     Data Stream                        
.                                         1=Client                             
.                                         3=ISP                                
.                                         5=Non-Admitted Service               
.                                         6=Service Scheduling                 
.                                         17=Admitted Patient                  
.                                         18=Emergency Department              
CMEFCNTN  DIM       8      8        4     Container Number                   
CMEFOBJT  DIM       3      3        12    Object Type                        
CMEFFNAM  DIM       100    100      15    File Name                          
CMEFMD5C  DIM       100    100      115   MD5 Checksum                       
CMEFCNTR  DIM       8      8        215   Count of records                   
CMEFSPAR  DIM       100    100      223   Spare                              
.
.End of Record                      323  
.
