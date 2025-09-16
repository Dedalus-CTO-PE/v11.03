. *----------------------------------------------------------------------
. * Include Name  :   HICITIFD.INC
. *
. * Function      :   File Def'n Include for HIC CLAIMS                         
. *                   HIC Items Invoice File             
. *
. * File Type     :   SQL
. *
. * File Name     :   hicitiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HICITIA1   IFILE    SQL, FIXED=83, KEY="U1-8,9-16,17-24,25-26"                  
HICITIA2   IFILE    SQL, FIXED=83, KEY="U9-16,1-8,17-24,25-26"                  
HICITIA3   IFILE    SQL, FIXED=83, KEY="U27-34,9-16,17-24,25-26,1-8"            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCITINVN  DIM       8      8        1     Invoice Number                     
HCITCLMN  DIM       8      8        9     Claim Number                       
HCITVISN  DIM       8      8        17    Visit Number                       
HCITTRAN  DIM       2      2        25    Item Count                         
HCITIDAT  DIM       8      8        27    Invoice Date (ccyyddmmdd)          
HCITIINV  FORM      12.2   8        35    Invoice Amount for Item            
HCITSPAR  DIM       40     40       43    Spare Variable                     
.
.End of Record                      83   
.
