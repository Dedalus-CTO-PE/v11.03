. *----------------------------------------------------------------------
. * Include Name  :   PATW19FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES19 (2012/2013)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw19af.dat
. *
. *      V10.03.00    06/08/2012  Davin             CAR 270114
. *                   Created for 2012/2013 WIES19 changes
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW19A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT19DRGC  DIM       4      4        1     DRG Code                           
PT19DRGD  DIM       60     60       5     DRG Description                    
PT19SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT19MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT19CPAY  DIM       3      3        67    Other Co-payments                  
PT19LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT19HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT19ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT19SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT19TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT19TODW  FORM      6.4    6        87    Total One Day Weight               
PT19TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT19TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT19THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT19THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT19SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
