. V10.04.01 05/01/2014 AP C-294471 Moved OTDMPMCN and OTDMPMCR out of SPARE     
. V10.03.01 20/06/2013 PV Added OTDMPMCN, OTDMPMCR CAR 283202
. V10.02.01 23/08/2011 EC C-242014 Created FD
. *----------------------------------------------------------------------
. * Include Name  :   OUTDEMFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Outpatient Direct Demographics     
. *
. * File Type     :   SQL
. *
. * File Name     :   outdemaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTDEMA1   IFILE    SQL, FIXED=1894, KEY="U1-8,9-16,17-24"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTDMURNO  DIM       8      8        1     U/R Number                         
OTDMADAT  DIM       8      8        9     Action Date (CCYYMMDD)             
OTDMATIM  DIM       8      8        17    Action Time (HH:MM:SS)             
OTDMTITL  DIM       4      4        25    Title                              
OTDMSNAM  DIM       40     40       29    Surname                            
OTDMFGNM  DIM       40     40       69    First Given Name                   
OTDMSGNM  DIM       40     40       109   Second Given Name                  
OTDMGEND  DIM       1      1        149   Gender                             
OTDMBDAT  DIM       8      8        150   Date of Birth (CCYYMMDD)           
OTDMMSTA  DIM       3      3        158   Marital Status (Cat M)             
OTDMMEDN  DIM       10     10       161   Medicare Number                    
OTDMMEDR  DIM       2      2        171   Medicare Reference Number          
OTDMMEDV  DIM       8      8        173   Medicare Valid To Date (CCYYMMDD)  
OTDMDVED  DIM       8      8        181   DVA Card Expiry Date (CCYYMMDD)    
OTDMDVAN  DIM       20     20       189   DVA Number                         
OTDMDVAC  DIM       3      3        209   DVA Card Colour (Cat DX)           
OTDMADD1  DIM       35     35       212   Address Line 1                     
OTDMADD2  DIM       35     35       247   Address Line 2                     
OTDMADD3  DIM       35     35       282   Address Line 3                     
OTDMADD4  DIM       35     35       317   Address Line 4                     
OTDMPOST  DIM       8      8        352   Post Code                          
OTDMTELP  DIM       20     20       360   Telephone Private                  
OTDMTELW  DIM       20     20       380   Telephone Work                     
OTDMTELM  DIM       20     20       400   Telephone Mobile                   
OTDMEMAI  DIM       80     80       420   Email Address                      
OTDMDECD  DIM       8      8        500   Date of Death (CCYYMMDD)           
OTDMDETY  DIM       3      3        508   Death Type (Cat DY)                
OTDMUKDD  DIM       1      1        511   Unknown Date of Death (Y/N)        
.                                         "0"=No, "1"=Yes                      
OTDMC1TY  DIM       3      3        512   Contact 1 Type (Cat tc)            
OTDMC1TL  DIM       4      4        515   Contact 1 Title                    
OTDMC1SN  DIM       40     40       519   Contact 1 Surname                  
OTDMC1G1  DIM       40     40       559   Contact 1 Given Name 1             
OTDMC1G2  DIM       40     40       599   Contact 1 Given Name 2             
OTDMC1A1  DIM       35     35       639   Contact 1 Address Line 1           
OTDMC1A2  DIM       35     35       674   Contact 2 Address Line 2           
OTDMC1A3  DIM       35     35       709   Contact 3 Address Line 3           
OTDMC1A4  DIM       35     35       744   Contact 4 Address Line 4           
OTDMC1PC  DIM       8      8        779   Contact 1 Post Code                
OTDMC1TP  DIM       20     20       787   Contact 1 Telephone Private        
OTDMC1TB  DIM       20     20       807   Contact 1 Telephone Business       
OTDMC1TM  DIM       20     20       827   Contact 1 Telephone Mobile         
OTDMC1RP  DIM       10     10       847   Contact 1 Relationship             
OTDMC1EM  DIM       80     80       857   Contact 1 Email                    
OTDMC2TY  DIM       3      3        937   Contact 2 Type (Cat tc)            
OTDMC2TL  DIM       4      4        940   Contact 2 Title                    
OTDMC2SN  DIM       40     40       944   Contact 2 Surname                  
OTDMC2G1  DIM       40     40       984   Contact 2 Given Name 1             
OTDMC2G2  DIM       40     40       1024  Contact 2 Given Name 2             
OTDMC2A1  DIM       35     35       1064  Contact 2 Address Line 1           
OTDMC2A2  DIM       35     35       1099  Contact 2 Address Line 2           
OTDMC2A3  DIM       35     35       1134  Contact 2 Address Line 3           
OTDMC2A4  DIM       35     35       1169  Contact 2 Address Line 4           
OTDMC2PC  DIM       8      8        1204  Contact 2 Post Code                
OTDMC2TP  DIM       20     20       1212  Contact 2 Telephone Private        
OTDMC2TB  DIM       20     20       1232  Contact 2 Telephone Business       
OTDMC2TM  DIM       20     20       1252  Contact 2 Telephone Mobile         
OTDMC2RP  DIM       10     10       1272  Contact 2 Relationship             
OTDMC2EM  DIM       80     80       1282  Contact 2 Email                    
OTDMA1SN  DIM       30     30       1362  Alias 1 Surname                    
OTDMA1FG  DIM       30     30       1392  Alias 1 First Given Name           
OTDMA1SG  DIM       30     30       1422  Alias 1 Second Given Name          
OTDMA1GE  DIM       1      1        1452  Alias 1 Gender                     
OTDMA1DB  DIM       8      8        1453  Alias 1 Date of Birth (CCYYMMDD)   
OTDMA2SN  DIM       30     30       1461  Alias 2 Surname                    
OTDMA2FG  DIM       30     30       1491  Alias 2 First Given Name           
OTDMA2SG  DIM       30     30       1521  Alias 2 Second Given Name          
OTDMA2GE  DIM       1      1        1551  Alias 2 Gender                     
OTDMA2DB  DIM       8      8        1552  Alias 2 Date of Birth (CCYYMMDD)   
OTDMA3SN  DIM       30     30       1560  Alias 3 Surname                    
OTDMA3FG  DIM       30     30       1590  Alias 3 First Given Name           
OTDMA3SG  DIM       30     30       1620  Alias 3 Second Given Name          
OTDMA3GE  DIM       1      1        1650  Alias 3 Gender                     
OTDMA3DB  DIM       8      8        1651  Alias 3 Date of Birth (CCYYMMDD)   
OTDMA4SN  DIM       30     30       1659  Alias 4 Surname                    
OTDMA4FG  DIM       30     30       1689  Alias 4 First Given Name           
OTDMA4SG  DIM       30     30       1719  Alias 4 Second Given Name          
OTDMA4GE  DIM       1      1        1749  Alias 4 Gender                     
OTDMA4DB  DIM       8      8        1750  Alias 4 Date of Birth (CCYYMMDD)   
OTDMSFED  DIM       8      8        1758  Saftey Net Card Expiry (CCYYMMDD)  
OTDMSFNO  DIM       20     20       1766  Safety Net Card Number             
OTDMSFCT  DIM       3      3        1786  Safety Net Card Type (Cat ct)      
OTDMDVCT  DIM       3      3        1789  DVA Card Type (Cat ct)             
OTDMCDAT  DIM       8      8        1792  Date Record Created (CCYYMMDD)     
OTDMCTIM  DIM       8      8        1800  Time Record Created (HH:MM:SS)     
OTDMCUID  DIM       10     10       1808  Web User ID Created (websecaf)     
OTDMUDAT  DIM       8      8        1818  Date Record Updated (CCYYMMDD)     
OTDMUTIM  DIM       8      8        1826  Time Record Updated (HH:MM:SS)     
OTDMUUID  DIM       10     10       1834  Web User ID Updated (websecaf)     
OTDMPMCN  DIM       3      3        1844  Preferred Method of Contact (Cat Pn)
OTDMPMCR  DIM       3      3        1847  Preferred Method of Correspondence
                                          (Cat Pr)
OTDMSPAR  DIM       44     44       1850  Spare Variable                     
.
.End of Record                      1894 
.
