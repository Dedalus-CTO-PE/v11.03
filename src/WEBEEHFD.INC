. V11.00.01 31/08/2020 PVL C-0895969 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBEEHFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW Header Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   webeehaf.dat
. *
. * Index Values  :   KEY23   KEY47   KEY59                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBEEHA1   IFILE    SQL, FIXED=484, KEY="U1-20,21-23"
WEBEEHA2   IFILE    SQL, FIXED=484, KEY="U24-47,1-20,21-23"
WEBEEHA3   IFILE    SQL, FIXED=484, KEY="U348-383,1-20,21-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBEHARID  DIM       20     20       1     Account Reference ID               
WBEHRPTC  DIM       3      3        21    Report counter (right just.)       
WBEHCTID  DIM       24     24       24    Claim Transaction ID               
WBEHBENL  DIM       1      1        48    Benefit Limitations Indicator 1=yes
WBEHCFAC  DIM       4      4        49    Claim Fund Assessment Code         
WBEHCPAM  DIM       9      9        53    CoPayment Amount                   
WBEHCPDR  DIM       4      4        62    CoPayment Days Remaining           
WBEHCPDI  DIM       1      1        66    CoPayment Description Ind 1=yes    
WBEHCPFN  DIM       40     40       67    Current Patient First Name         
WBEHCPMN  DIM       10     10       107   Current Patient Medicare Number    
WBEHCPRN  DIM       1      1        117   Current Patient Reference Number   
WBEHEXAM  DIM       9      9        118   Excess Amount                      
WBEHEADI  DIM       1      1        127   Excess Amount Desc Ind 1=yes       
WBEHEXBA  DIM       9      9        128   Excess Bonus Amount                
WBEHEXDI  DIM       1      1        137   Exclusion Desc Ind 1=yes           
WBEHFSTA  DIM       1      1        138   Financial Status                   
WBEHFRID  DIM       20     20       139   Fund Reference ID                  
WBEHFSCD  DIM       4      4        159   Fund Status Code                   
WBEHMSCD  DIM       4      4        163   Medicare Status Code               
WBEHPEAI  DIM       1      1        167   PEA Potential Indicator            
WBEHPSCD  DIM       30     30       168   Process Status Code                
WBEHTNAM  DIM       80     80       198   Table Name                         
WBEHTBDI  DIM       1      1        278   Table Description Ind 1=yes        
WBEHTBSC  DIM       15     15       279   Table Scale                        
WBEHVCID  DIM       2      2        294   Voucher ID                         
WBEHCDTE  DIM       8      8        296   Date Created (ccyymmdd)            
WBEHCTIM  DIM       8      8        304   Time Created (hh:mm:ss)            
WBEHCUID  DIM       10     10       312   Created By                         
WBEHUDTE  DIM       8      8        322   Date Updated (ccyymmdd)            
WBEHUTIM  DIM       8      8        330   Time Updated (hh:mm:ss)            
WBEHUUID  DIM       10     10       338   Created By                         
WBEHMSID  DIM       36     36       348   Message Id                         
WBEHSPAR  DIM       100    100      384   Spare Variable                     
.
.End of Record                      484  
.
