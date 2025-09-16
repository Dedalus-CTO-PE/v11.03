. *----------------------------------------------------------------------
. * Include Name  :   PATW18FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES18 (2011/2012)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw18af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW18A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT18DRGC  DIM       4      4        1     DRG Code                           
PT18DRGD  DIM       60     60       5     DRG Description                    
PT18SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT18MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT18CPAY  DIM       3      3        67    Other Co-payments                  
PT18LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT18HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT18ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT18SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT18TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT18TODW  FORM      6.4    6        87    Total One Day Weight               
PT18TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT18TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT18THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT18THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT18SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
