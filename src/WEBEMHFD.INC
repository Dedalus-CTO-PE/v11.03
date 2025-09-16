. V11.01.01 02/12/2021 PVL C-0914306 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBEMHFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW-ECM Header Table  
. *
. * File Type     :   SQL
. *
. * File Name     :   webemhaf.dat
. *
. * Index Values  :   KEY23   KEY47   KEY59                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBEMHA1   IFILE    SQL, FIXED=809, KEY="U1-20,21-23"
WEBEMHA2   IFILE    SQL, FIXED=809, KEY="U24-47,1-20,21-23"
WEBEMHA3   IFILE    SQL, FIXED=809, KEY="U673-708,1-20,21-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBEUARID  DIM       20     20       1     Account Reference ID               
WBEURPTC  DIM       3      3        21    Report counter (right just.)       
WBEUCTID  DIM       24     24       24    Claim Transaction ID               
WBEUMSCD  DIM       4      4        48    Medicare Status Code               
WBEUMSTX  DIM       500    500      52    Medicare Status Text               
WBEUCPMN  DIM       10     10       552   Current Patient Medicare Number    
WBEUCPRN  DIM       1      1        562   Current Patient Reference Number   
WBEUCPFN  DIM       40     40       563   Current Patient First Name         
WBEUFLCN  DIM       8      8        603   Fund Location ID                   
WBEULDAT  DIM       10     10       611   Lodgement Date                     
WBEUCDTE  DIM       8      8        621   Date Created (ccyymmdd)            
WBEUCTIM  DIM       8      8        629   Time Created (hh:mm:ss)            
WBEUCUID  DIM       10     10       637   Created By                         
WBEUUDTE  DIM       8      8        647   Date Updated (ccyymmdd)            
WBEUUTIM  DIM       8      8        655   Time Updated (hh:mm:ss)            
WBEUUUID  DIM       10     10       663   Updated By                         
WBEUMSID  DIM       36     36       673   Message Id                         
WBEUSPAR  DIM       100    100      709   Spare Variable                     
.
.End of Record                      809  
.
