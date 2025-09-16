. VF.01.001 05/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCEDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Casemix Level 2 Summary            
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscedaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCEDA1   IFILE    SQL, FIXED=166, KEY="U1-10,11-20"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEDLV1   DIM       10     10       1     Level 1 Casemix Extract Code       
CCEDLV2   DIM       10     10       11    Level 2 Casemix Extract Code       
CCEDNEP   FORM      6      4        21    Total Number of Episodes           
CCEDFTC   FORM      12.4   9        25    Comp. From Total Cost              
CCEDFMN   FORM      12.2   8        34    Comp. From Minimum Cost            
CCEDFMX   FORM      12.2   8        42    Comp. From Maximum Cost            
CCEDFSV   FORM      12.4   9        50    Comp. From Statistical Variance    
CCEDTTC   FORM      12.4   9        59    Comp. To Total Cost                
CCEDTMN   FORM      12.2   8        68    Comp. To Minimum Cost              
CCEDTMX   FORM      12.2   8        76    Comp. To Maximum Cost              
CCEDTSV   FORM      12.4   9        84    Comp. To Statistical Variance      
CCEDLTO   FORM      12.2   8        93    Total Length of Stay               
CCEDLMN   FORM      12.2   8        101   Minimum L.O.S.                     
CCEDLMX   FORM      12.2   8        109   Maximum L.O.S.                     
CCEDLSV   FORM      12.4   9        117   L.O.S. Statistical Variance        
CCEDSPA   DIM       40     40       126   Spare                              
.
.End of Record                      166  
.
CCEDIDX   INIT      " 166 UC1-10,11-20"
