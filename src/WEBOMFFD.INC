. V11.01.01 29/11/2021 PVL C-0914306 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBOMFFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices Free Format / History  
. *
. * File Type     :   SQL
. *
. * File Name     :   webomfaf.dat
. *
. * Index Values  :   KEY8    KEY16   KEY88   KEY88   KEY19   KEY32   KEY44  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBOMFA1   IFILE    SQL, FIXED=616, KEY="U1-8"
WEBOMFA2   IFILE    SQL, FIXED=616, KEY="U9-16,1-8"
WEBOMFA3   IFILE    SQL, FIXED=616, KEY="U62-101,22-61,1-8"
WEBOMFA4   IFILE    SQL, FIXED=616, KEY="U22-61,62-101,1-8"
WEBOMFA5   IFILE    SQL, FIXED=616, KEY="U389-396,397-399,1-8"
WEBOMFA6   IFILE    SQL, FIXED=616, KEY="U401-424,1-8"
WEBOMFA7   IFILE    SQL, FIXED=616, KEY="U425-460,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBOFELGN  DIM       8      8        1     Eligibility Number                 
WBOFURNO  DIM       8      8        9     U/R Number                         
WBOFOECC  DIM       1      1        17    Patient OEC Consent                
WBOFTITL  DIM       4      4        18    Title                              
WBOFFNAM  DIM       40     40       22    Patient First Name                 
WBOFSNAM  DIM       40     40       62    Patient Second Name                
WBOFHFGN  DIM       40     40       102   Health Fund Given Name             
WBOFHFSN  DIM       40     40       142   Health Fund Surname                
WBOFGEND  DIM       1      1        182   Gender                             
WBOFBDAT  DIM       8      8        183   Date of Birth                      
WBOFEADT  DIM       8      8        191   Expected Admission Date            
WBOFISTY  DIM       3      3        199   Intended Stay                      
WBOFPLOS  DIM       3      3        202   Planned LOS                        
WBOFDINT  DIM       3      3        205   Discharge Intention                
WBOFPEAI  DIM       1      1        208   PEA Indicator                      
WBOFEMAD  DIM       1      1        209   Emergency Admission                
WBOFPRIC  DIM       3      3        210   Presenting Illness Code            
WBOFPRIM  DIM       9      9        213   Presenting Illness MBS             
WBOFCLTY  DIM       3      3        222   Claim Type                         
WBOFHFND  DIM       6      6        225   Health Fund                        
WBOFHFNT  DIM       8      8        231   Health Fund Table                  
WBOFHFMN  DIM       19     19       239   Health Fund Membership Number      
WBOFDIAG  DIM       50     50       258   Diagnosis                          
WBOFSRV1  DIM       9      9        308   Service Code 1                     
WBOFSRV2  DIM       9      9        317   Service Code 2                     
WBOFSRV3  DIM       9      9        326   Service Code 3                     
WBOFSRV4  DIM       9      9        335   Service Code 4                     
WBOFSRV5  DIM       9      9        344   Service Code 5                     
WBOFCUID  DIM       10     10       353   User who created record            
WBOFCDAT  DIM       8      8        363   Date record created                
WBOFCTIM  DIM       8      8        371   Time record created                
WBOFDVAN  DIM       10     10       379   Repatriation Number                
WBOFVISN  DIM       8      8        389   Visit Number                       
WBOFCNTR  DIM       3      3        397   Report Counter                     
WBOFFLAG  DIM       1      1        400   Created by (0=Software,1=Fixit)    
WBOFTRID  DIM       24     24       401   Transaction ID                     
WBOFMSID  DIM       36     36       425   Message ID                         
WBOFSTCD  DIM       3      3        461   Service Type Code (Cat st)         
WBOFMEDI  DIM       10     10       464   Medicare Member Number             
WBOFMEDR  DIM       1      1        474   Medicare Ref Number                
WBOFPRPR  DIM       8      8        475   Principal Provider Number          
WBOFSVPR  DIM       8      8        483   Service Provider Number            
WBOFITM1  DIM       5      5        491   Item Number 1                      
WBOFITM2  DIM       5      5        496   Item Number 2                      
WBOFITM3  DIM       5      5        501   Item Number 3                      
WBOFITM4  DIM       5      5        506   Item Number 4                      
WBOFITM5  DIM       5      5        511   Item Number 5                      
WBOFSPAR  DIM       100    100      516   Spare Variable                     
.
.End of Record                      616  
.
