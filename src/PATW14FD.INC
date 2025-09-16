. *----------------------------------------------------------------------
. * Include Name  :   PATW14FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES14 (2007/2008)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw14af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW14A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT14DRGC  DIM       4      4        1     DRG Code                           
PT14DRGD  DIM       60     60       5     DRG Description                    
PT14SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT14MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT14CPAY  DIM       3      3        67    Other Co-payments                  
PT14LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT14HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT14ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT14SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT14TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT14TODW  FORM      6.4    6        87    Total One Day Weight               
PT14TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT14TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT14THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT14THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT14SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
