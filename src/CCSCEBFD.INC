. VF.01.001 05/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCEBFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Casemix Extract Level 1 Summary    
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscebaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCEBA1   IFILE    SQL, FIXED=156, KEY="U1-10"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEBLV1   DIM       10     10       1     Level 1 Casemix Extract Code       
CCEBNEP   FORM      6      4        11    Total Number of Episodes           
CCEBFTC   FORM      12.4   9        15    Comp. From Total Cost              
CCEBFMN   FORM      12.2   8        24    Comp. From Minimum Cost            
CCEBFMX   FORM      12.2   8        32    Comp. From Maximum Cost            
CCEBFSV   FORM      12.4   9        40    Comp. From Statistical Variance    
CCEBTTC   FORM      12.4   9        49    Comp. To Total Cost                
CCEBTMN   FORM      12.2   8        58    Comp. To Minimum Cost              
CCEBTMX   FORM      12.2   8        66    Comp. To Maximum Cost              
CCEBTSV   FORM      12.4   9        74    Comp. To Statistical Variance      
CCEBLTO   FORM      12.2   8        83    Total Length of Stay               
CCEBLMN   FORM      12.2   8        91    Minimum L.O.S.                     
CCEBLMX   FORM      12.2   8        99    Maximum L.O.S.                     
CCEBLSV   FORM      12.4   9        107   L.O.S. Statistical Variance        
CCEBSPA   DIM       40     40       116   Spare                              
.
.End of Record                      156  
.
CCEBIDX   INIT      " 156 UC1-10"
