. V11.03.01 30/11/2023 PVL C-0935874 Added index 4,5,6 and ExceptionDescription
. V10.04.01 30/01/2014 EC C-291879 Created FD
. *----------------------------------------------------------------------
. * Include Name  :   PMSIHEFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   IHI Exceptions                     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsiheaf.dat
. *
. * Index Values  :   KEY72   KEY72   KEY72   KEY88   KEY88   KEY88          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIHEA1   IFILE    SQL, FIXED=866, KEY="U1-8,9-28,29-56,57-64,65-72"
PMSIHEA2   IFILE    SQL, FIXED=866, KEY="U9-28,57-64,65-72,1-8,29-56"
PMSIHEA3   IFILE    SQL, FIXED=866, KEY="U57-64,65-72,9-28,1-8,29-56"
PMSIHEA4   IFILE    SQL, FIXED=866, KEY="U1-8,9-28,29-56,214-221,222-229,57-64,65-72"
PMSIHEA5   IFILE    SQL, FIXED=866, KEY="U9-28,214-221,222-229,1-8,29-56,57-64,65-72"
PMSIHEA6   IFILE    SQL, FIXED=866, KEY="U214-221,222-229,9-28,1-8,29-56,57-64,65-72"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIEURNO  DIM       8      8        1     U/R Number                         
PMIEIHIN  DIM       20     20       9     IHI Number                         
PMIEOTUR  DIM       28     28       29    Other U/R IHI Number Combination   
PMIEADAT  DIM       8      8        57    Date of Assignment (CCYYMMDD)      
PMIEATIM  DIM       8      8        65    Time of Assignment (HH:MM:SS)      
PMIEVSTA  DIM       1      1        73    IHI Verification Status            
.                                         1 = IHI Verified                     
.                                         2 = IHI Manual                       
PMIEASTA  DIM       1      1        74    IHI Activation Status              
.                                         1 = Active                           
.                                         2 = Deceased                         
.                                         3 = Retired                          
.                                         4 = Expired                          
.                                         5 = Resolved                         
PMIEIHIS  DIM       2      2        75    IHI Source                         
.                                         1 = HI Services B2B Channel          
.                                         2 = Electronic Message               
.                                         3 = Manual Entry                     
PMIEHISV  DIM       10     10       77    HI Service Version Number          
PMIEMESI  DIM       127    127      87    HI Service Message ID              
PMIECDAT  DIM       8      8        214   Created Date (CCYYMMDD)            
PMIECTIM  DIM       8      8        222   Created Time (HH:MM:SS)            
PMIECUID  DIM       10     10       230   Created By (websecaf)              
PMIEUDAT  DIM       8      8        240   Updated Date (CCYYMMDD)            
PMIEUTIM  DIM       8      8        248   Updated Time (HH:MM:SS)            
PMIEUUID  DIM       10     10       256   Updated By (websecaf)              
PMIEDESC  DIM       500    500      266   Exception Description              
PMIESPAR  DIM       100    100      766   Spare                              
.
.End of Record                      866  
.
