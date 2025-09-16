. *----------------------------------------------------------------------
. * Include Name  :   PATW17FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES17 (2010/2011)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw17af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW17A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT17DRGC  DIM       4      4        1     DRG Code                           
PT17DRGD  DIM       60     60       5     DRG Description                    
PT17SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT17MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT17CPAY  DIM       3      3        67    Other Co-payments                  
PT17LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT17HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT17ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT17SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT17TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT17TODW  FORM      6.4    6        87    Total One Day Weight               
PT17TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT17TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT17THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT17THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT17SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
