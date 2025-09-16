. V9.07.001 07/07/2006 PVV Created WIES13 Weights file for 2006/7           
. *----------------------------------------------------------------------
. * Include Name  :   PATW13FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES13 (2006/2007)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw13af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW13A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT13DRGC  DIM       4      4        1     DRG Code                           
PT13DRGD  DIM       60     60       5     DRG Description                    
PT13SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT13MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT13CPAY  DIM       3      3        67    Other Co-payments                  
PT13LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT13HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT13ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT13SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT13TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT13TODW  FORM      6.4    6        87    Total One Day Weight               
PT13TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT13TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT13THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT13THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT13SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
