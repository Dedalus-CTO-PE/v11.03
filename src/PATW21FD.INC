. *----------------------------------------------------------------------
. * Include Name  :   PATW21FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES21 (2014/2015)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw21af.dat
. *
. *      V10.05.00    21/08/2014  Davin             CAR 296980
. *                   Created for 2014/2015 WIES21 changes
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW21A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT21DRGC  DIM       4      4        1     DRG Code                           
PT21DRGD  DIM       60     60       5     DRG Description                    
PT21SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT21MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT21CPAY  DIM       3      3        67    Other Co-payments                  
PT21LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT21HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT21ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT21SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT21TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT21TODW  FORM      6.4    6        87    Total One Day Weight               
PT21TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT21TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT21THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT21THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT21SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
