. *----------------------------------------------------------------------
. * Include Name  :   PATW16FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES16 (2009/2010)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw16af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW16A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT16DRGC  DIM       4      4        1     DRG Code                           
PT16DRGD  DIM       60     60       5     DRG Description                    
PT16SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT16MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT16CPAY  DIM       3      3        67    Other Co-payments                  
PT16LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT16HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT16ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT16SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT16TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT16TODW  FORM      6.4    6        87    Total One Day Weight               
PT16TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT16TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT16THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT16THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT16SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
