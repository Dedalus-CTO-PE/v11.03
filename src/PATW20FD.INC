. *----------------------------------------------------------------------
. * Include Name  :   PATW20FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES20 (2013/2014)
. *
. * File Type     :   SQL
. *
. * File Name     :   patw20af.dat
. *
. *      V10.03.00    06/08/2013  Davin             CAR 284960
. *                   Created for 2013/2014 WIES20 changes
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATW20A1   IFILE    SQL, FIXED=167, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PT20DRGC  DIM       4      4        1     DRG Code                           
PT20DRGD  DIM       60     60       5     DRG Description                    
PT20SDMT  DIM       1      1        65    Same Day Medical Target (Y/N)      
PT20MVEL  DIM       1      1        66    Mech. Ventilation Eligibility      
PT20CPAY  DIM       3      3        67    Other Co-payments                  
PT20LIBP  FORM      4      3        70    Low Inlier Boundary Point (days)   
PT20HIBP  FORM      4      3        73    High Inlier Boundary Point (days)  
PT20ILOS  FORM      4.2    4        76    Average Inlier Lngth of Stay (days)
PT20SDOD  DIM       1      1        80    (S)ame Day or (O)ne Day DRG        
PT20TSDW  FORM      6.4    6        81    Total Same Day Weight              
PT20TODW  FORM      6.4    6        87    Total One Day Weight               
PT20TLOM  FORM      6.4    6        93    Total Low Outlier Multiday Weight  
PT20TIMW  FORM      6.4    6        99    Total Inlier Multiday Weight       
PT20THOM  FORM      6.4    6        105   Total High Outlier Multiday Weight 
PT20THIH  FORM      6.4    6        111   Total Hospital In The Home Weight  
PT20SPAR  DIM       50     50       117   Spare                              
.
.End of Record                      167  
.
