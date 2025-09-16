. V11.00.01 20/08/2020 PVL C-0895969 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBELFFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW Free Frm / History
. *
. * File Type     :   SQL
. *
. * File Name     :   webelfaf.dat
. *
. * Index Values  :   KEY8    KEY16   KEY88   KEY88   KEY19   KEY32   KEY44  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBELFA1   IFILE    SQL, FIXED=561, KEY="U1-8"
WEBELFA2   IFILE    SQL, FIXED=561, KEY="U9-16,1-8"
WEBELFA3   IFILE    SQL, FIXED=561, KEY="U62-101,22-61,1-8"
WEBELFA4   IFILE    SQL, FIXED=561, KEY="U22-61,62-101,1-8"
WEBELFA5   IFILE    SQL, FIXED=561, KEY="U389-396,397-399,1-8"
WEBELFA6   IFILE    SQL, FIXED=561, KEY="U401-424,1-8"
WEBELFA7   IFILE    SQL, FIXED=561, KEY="U425-460,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBEFELGN  DIM       8      8        1     Eligibility Number                 
WBEFURNO  DIM       8      8        9     U/R Number                         
WBEFOECC  DIM       1      1        17    Patient OEC Consent                
WBEFTITL  DIM       4      4        18    Title                              
WBEFFNAM  DIM       40     40       22    Patient First Name                 
WBEFSNAM  DIM       40     40       62    Patient Second Name                
WBEFHFGN  DIM       40     40       102   Health Fund Given Name             
WBEFHFSN  DIM       40     40       142   Health Fund Surname                
WBEFGEND  DIM       1      1        182   Gender                             
WBEFBDAT  DIM       8      8        183   Date of Birth                      
WBEFEADT  DIM       8      8        191   Expected Admission Date            
WBEFISTY  DIM       3      3        199   Intended Stay                      
WBEFPLOS  DIM       3      3        202   Planned LOS                        
WBEFDINT  DIM       3      3        205   Discharge Intention                
WBEFPEAI  DIM       1      1        208   PEA Indicator                      
WBEFEMAD  DIM       1      1        209   Emergency Admission                
WBEFPRIC  DIM       3      3        210   Presenting Illness Code            
WBEFPRIM  DIM       9      9        213   Presenting Illness MBS             
WBEFCLTY  DIM       3      3        222   Claim Type                         
WBEFHFND  DIM       6      6        225   Health Fund                        
WBEFHFNT  DIM       8      8        231   Health Fund Table                  
WBEFHFMN  DIM       19     19       239   Health Fund Membership Number      
WBEFDIAG  DIM       50     50       258   Diagnosis                          
WBEFSRV1  DIM       9      9        308   Service Code 1                     
WBEFSRV2  DIM       9      9        317   Service Code 2                     
WBEFSRV3  DIM       9      9        326   Service Code 3                     
WBEFSRV4  DIM       9      9        335   Service Code 4                     
WBEFSRV5  DIM       9      9        344   Service Code 5                     
WBEFCUID  DIM       10     10       353   User who created record            
WBEFCDAT  DIM       8      8        363   Date record created                
WBEFCTIM  DIM       8      8        371   Time record created                
WBEFDVAN  DIM       10     10       379   Repatriation Number                
WBEFVISN  DIM       8      8        389   Visit Number                       
WBEFCNTR  DIM       3      3        397   Report Counter                     
WBEFFLAG  DIM       1      1        400   Created by (0=Software,1=Fixit)    
WBEFTRID  DIM       24     24       401   Transaction ID                     
WBEFMSID  DIM       36     36       425   Message ID                         
WBEFSPAR  DIM       100    100      461   Spare Variable                     
.
.End of Record                      561  
.
