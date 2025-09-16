. V11.00.02 04/08/2020 PVL C-0895294 Added Status comments to WBOPRESP
. V11.00.01 18/07/2020 PVL C-0894707 Created WebServices OPV - PVM FD           
. *----------------------------------------------------------------------
. * Include Name  :   WEBOPVFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OPV - PVM Table        
. *
. * File Type     :   SQL
. *
. * File Name     :   webopvaf.dat
. *
. * Index Values  :   KEY26   KEY50   KEY27   KEY62                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBOPVA1   IFILE    SQL, FIXED=746, KEY="U1-8,9-16,17-24,25-26"
WEBOPVA2   IFILE    SQL, FIXED=746, KEY="U30-53,9-16,17-24,1-8,25-26"
WEBOPVA3   IFILE    SQL, FIXED=746, KEY="U609-609,1-8,9-16,17-24,25-26"
WEBOPVA4   IFILE    SQL, FIXED=746, KEY="U610-645,1-8,9-16,17-24,25-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBOPURNO  DIM       8      8        1     U/R Number                         
WBOPDATE  DIM       8      8        9     Date of OPV - PVM (CCYYMMDD)       
WBOPTIME  DIM       8      8        17    Time of OPV - PVM (hh:mm:ss)       
DWBOPCNT  DIM       2      2        25    Counter (Right Justified)          
WBOPHOSP  DIM       3      3        27    Hospital Code (pathspaf)           
WBOPTRID  DIM       24     24       30    Transaction ID                     
WBOPFNAM  DIM       40     40       54    Current Patient First Name         
WBOPMEDN  DIM       10     10       94    Current Medicare Card No.          
WBOPMEDR  DIM       1      1        104   Current Medicare Reference No.     
WBOPSTAT  DIM       4      4        105   Medicare Status Code               
WBOPEROR  DIM       500    500      109   Error Description                  
WBOPRESP  DIM       1      1        609   Status 0 = Waiting (ECLWEB02)
.                                                1 = Request Sent (ECLWEB04)
.                                                2 = Response Processed 
.                                                    (ECLWEB05)
WBOPMSID  DIM       36     36       610   Message Id                         
WBOPSPAR  DIM       100    100      646   Spare                              
.
.End of Record                      746  
.
. Redefine form fields from key
. -----------------------------
WBOPCNTR  FORM      2
