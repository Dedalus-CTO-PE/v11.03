. V10.13.01 17/08/2018 DS C-0860935 Use PTWISDMT for Non-Invasive Ventilation   
. V10.11.01 14/08/2017 DS C-0842626 Added PTWISSDR and PTWISSWT (from spare)    
. V10.06.01 19/03/2015 PHA C-304813 Created Table                               
. *----------------------------------------------------------------------
. * Include Name  :   PATWIEFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cost Weights for WIES              
. *
. * File Type     :   SQL
. *
. * File Name     :   patwieaf.dat
. *
. * Index Values  :   KEY7                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATWIEA1   IFILE    SQL, FIXED=177, KEY="U1-4,65-67"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTWIDRGC  DIM       4      4        1     DRG Code                           
PTWIDRGD  DIM       60     60       5     DRG Description                    
PTWIVRSN  DIM       3      3        65    WIES Version Number                
PTWISDMT  DIM       1      1        68    Non-Invasive Ventilation Eligible  
PTWIMVEL  DIM       1      1        69    Mech. Ventilation Eligibility      
PTWICPAY  DIM       3      3        70    Other Co-payments                  
PTWILIBP  FORM      4      3        73    Low Inlier Boundary Point (days)   
PTWIHIBP  FORM      4      3        76    High Inlier Boundary Point (days)  
PTWIILOS  FORM      4.2    4        79    Average Inlier Lngth of Stay (days)
PTWISDOD  DIM       1      1        83    (S)ame Day or (O)ne Day DRG        
PTWITDSW  FORM      6.4    6        84    Total Same Day Weight              
PTWITODW  FORM      6.4    6        90    Total One Day Weight               
PTWITLOM  FORM      6.4    6        96    Total Low Outlier Multiday Weight  
PTWITIMW  FORM      6.4    6        102   Total Inlier Multiday Weight       
PTWITHOM  FORM      6.4    6        108   Total High Outlier Multiday Weight 
PTWITHIH  FORM      6.4    6        114   Total Hospital In The Home Weight  
PTWISSDR  DIM       1      1        120   Short Stay DRG (S)                 
PTWISSWT  FORM      6.4    6        121   Short Stay Weight                  
PTWISPAR  DIM       50     50       127   Spare                              
.
.End of Record                      177  
.
