. VF.01.001 05/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCEEFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Casemix Extract Level 3 Summary    
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsceeaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCEEA1   IFILE    SQL, FIXED=176, KEY="U1-10,11-20,21-30"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEELV1   DIM       10     10       1     Level 1 Casemix Extract Code       
CCEELV2   DIM       10     10       11    Level 2 Casemix Extract Code       
CCEELV3   DIM       10     10       21    Level 3 Casemix Extract Code       
CCEENEP   FORM      6      4        31    Total Number of Episodes           
CCEEFTC   FORM      12.4   9        35    Comp. From Total Cost              
CCEEFMN   FORM      12.2   8        44    Comp. From Minimum Cost            
CCEEFMX   FORM      12.2   8        52    Comp. From Maximum Cost            
CCEEFSV   FORM      12.4   9        60    Comp. From Statistical Variance    
CCEETTC   FORM      12.4   9        69    Comp. To Total Cost                
CCEETMN   FORM      12.2   8        78    Comp. To Minimum Cost              
CCEETMX   FORM      12.2   8        86    Comp. To Maximum Cost              
CCEETSV   FORM      12.4   9        94    Comp. To Statistical Variance      
CCEELTO   FORM      12.2   8        103   Total Length of Stay               
CCEELMN   FORM      12.2   8        111   Minimum L.O.S.                     
CCEELMX   FORM      12.2   8        119   Maximum L.O.S.                     
CCEELSV   FORM      12.4   9        127   L.O.S. Statistical Variance        
CCEESPA   DIM       40     40       136   Spare                              
.
.End of Record                      176  
.
CCEEIDX   INIT      " 176 UC1-10,11-20,21-30"
