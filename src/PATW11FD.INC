. V9.03.001 15/08/2003 HES Created WIES11 Weights file for 2003/2004         
. *----------------------------------------------------------------------
. * Include Name  :   PATW11FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES11 (2003/2004)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw11af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW11A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT11DRGC  DIM       4      4        1     DRG Code                           
PT11DRGD  DIM       60     60       5     DRG Description                    
PT11SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT11MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT11CPAY  DIM       3      3        67    Other Co-payments                  
PT11LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT11HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT11ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT11SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT11TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT11TODW  FORM      6.4    6        87    Total One Day Weight               
PT11TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT11TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT11THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT11THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT11SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
