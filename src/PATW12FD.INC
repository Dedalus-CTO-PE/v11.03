. V9.03.001 22/07/2004 HES Created WIES12  Weights file for 2004/5           
. *----------------------------------------------------------------------
. * Include Name  :   PATW12FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES12 (2004/2005)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw12af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW12A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT12DRGC  DIM       4      4        1     DRG Code                           
PT12DRGD  DIM       60     60       5     DRG Description                    
PT12SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT12MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT12CPAY  DIM       3      3        67    Other Co-payments                  
PT12LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT12HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT12ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT12SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT12TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT12TODW  FORM      6.4    6        87    Total One Day Weight               
PT12TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT12TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT12THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT12THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT12SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
