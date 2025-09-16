. *----------------------------------------------------------------------
. * Include Name  :   PATW15FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES15 (2008/2009)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw15af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW15A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT15DRGC  DIM       4      4        1     DRG Code                           
PT15DRGD  DIM       60     60       5     DRG Description                    
PT15SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT15MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT15CPAY  DIM       3      3        67    Other Co-payments                  
PT15LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT15HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT15ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT15SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT15TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT15TODW  FORM      6.4    6        87    Total One Day Weight               
PT15TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT15TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT15THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT15THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT15SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
