. *----------------------------------------------------------------------
. * Include Name  :   ALLREFTD.INC
. *
. * Function      :   CGI variables for ALLREFFD - allrefaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.------------------------------------------------------------------------
.  V11.00.01  11/03/2020  Ebon Clements TSK 0888624
.             Added ALREF192
.------------------------------------------------------------------------------
.  V10.13.01  03/10/2018  Thanh T       TSK 0859743
.             Added ALREF188 ALREF189 ALREF190 and ALREF191.
.------------------------------------------------------------------------
.  V10.10.01  30/03/2017  Ebon Clements TSK 0833052
.             Added ALREF186 and ALREF187
.  V10.07.01  13/11/2015  Ebon Clements CAR 320392
.             Added ALREF176 to ALREF185
.  V10.06.02  22/05/2015  Ebon Clements CAR 303389
.             Added ALREF169 to ALREF175
.  V10.06.01  17/03/2015  Ebon Clements CAR 303389
.             Changed descriptions of ALREF112 and ALREF113
.  V10.05.01  11/09/2015  Ebon Clements CAR 291413
.             Added ALREF168 - Referral Renewal Date (CCYYMMDD)
.  V10.04.01  24/03/2014  Patrick Adair CAR 256037
.             Added additional UDF HCP's ALREF166 & ALREF167
.  V10.03.01  15/08/2012  Ebon Clements CAR 261277
.             Assigned new cat code to ALREF071
.  V10.02.01  18/07/2011  Ebon Clements CAR 242070
.             Restored ALREF107 hospital functionality
.  V10.01.01  17/03/2011  Ebon Clements CAR 239576
.             Added ALREF165
.  V10.00.02  30/04/2010  Ebon Clements CAR 220289   
.             Added ALREF154 to ALREF164
.  V10.00.01  24/03/2010  Ebon Clements CAR 135505   
.             Added ALREF153
.  V9.10.01   15/05/2008  Mike Laming   CAR 152286   
.             Added ALREF146 to ALREF152 (ALREDIAT,ALREUYN7,ALREUYN8,ALREUYN9 &
.                   ALREUCD1,ALREUCD2,ALREUCD3)
.  V9.08.02   17.05.2007  Ebon Clements CAR 140983   
.             Added ALREF145
.  V9.08.01   17.04.2007  Ebon Clements CAR 135524
.             Added ALREF140 to ALREF144
.  V9.07.01   02.08.2006  Ebon Clements CAR 113925
.             Added ALREF139
.  V9.05.B03  24/01/2006  Ebon Clements CAR 76341
.             Added cgi 136 - 138
.  V9.05.B02  11/01/2006  Davin         CAR 76341
.             Added cgi 132 - 135
.  V9.05.B01  13/12/2005  Ebon Clements CAR 76341
.             Added cgi 128 - 131
.  V9.04.05   22/03/2005  Ebon Clements CAR 56375
.             Added cgi 127
.  V9.04.04   14/02/2005  Ebon Clements CAR 56375
.             Added cgi 126
.  V9.04.03   03/02/2005  Davin         CAR 56671
.             Added cgis 108-125 for HIC Claims
.  V9.04.02   22/11/2004  Ebon Clements CAR 54239
.             Changed name of ALREF087
.  V9.04.01   31/08/2004  Ebon Clements CAR 53089
.             Removed CGI for ALREHOSN (ALREF107)
.  V9.02.03   10/10/2002  Sylvek Litewka
.             Added ALREF107 (Hospital/Unit Number).
.
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
ALREF001  DIM       8       Referral/Visit Number                       
ALREF002  DIM       8       U/R Number                         
ALREF003  DIM       1       Status                             
ALREF004  DIM       8       Date Active (CCYYMMDD)             
ALREF005  DIM       8       Linked Visit Number
ALREF006  DIM       3       Reason for Closure (Category LL)   
ALREF007  DIM       8       Date Closed (CCYYMMDD)             
ALREF008  DIM       8       Time Closed (HH:MM:SS)             
ALREF009  DIM       10      WEB User ID Closed (websecaf)      
ALREF010  DIM       3       Reason Cancelled (Category LN)     
ALREF011  DIM       8       Date Cancelled (CCYYMMDD)          
ALREF012  DIM       8       Time Cancelled (HH:MM:SS)          
ALREF013  DIM       10      WEB User ID Cancelled (websecaf)   
ALREF014  DIM       3       Reason Inactive (Category LI)      
ALREF015  DIM       8       Date Inactive (CCYYMMDD)           
ALREF016  DIM       8       Time Inactive (HH:MM:SS)           
ALREF017  DIM       8       Date Inactive Until (CCYYMMDD)     
ALREF018  DIM       10      WEB User ID Inactive (websecaf)    
ALREF019  DIM       8       Date of Referral (CCYYMMDD)        
ALREF020  DIM       3       Referred to Department (alldepaf)  
ALREF021  DIM       10      Referred by Doctor DO NOT USE  
ALREF022  DIM       10      Referring HCP (pmshcpaf)           
ALREF023  DIM       10      Referring Practice (pmshclaf)      
ALREF024  DIM       2       Referring Group Count (pmshcgaf)      
ALREF025  DIM       3       Department Code (alldepaf)         
ALREF026  DIM       3       Unit/Specialty (Category AC)       
ALREF027  DIM       3       Priority (Category TP)             
ALREF028  DIM       9       Problem Code 1 (allprraf)          
ALREF029  DIM       9       Problem Code 2 (allprraf)          
ALREF030  DIM       9       Problem Code 3 (allprraf)          
ALREF031  DIM       9       Diagnosis Code 1 (alldiaaf)        
ALREF032  DIM       9       Diagnosis Code 2 (alldiaaf)        
ALREF033  DIM       9       Diagnosis Code 3 (alldiaaf)        
ALREF034  DIM       3       Source of Referral (Category S)    
ALREF035  DIM       3       Compensation Code (Category CL)    
ALREF036  DIM       1       Bulk Bill (0=No,1=Yes)             
ALREF037  DIM       8       Date of Next Review (CCYYMMDD)     
ALREF038  DIM       10      Responsible HCP (patdo1af)         
ALREF039  DIM       8       Date Referral Received (CCYYMMDD)  
ALREF040  DIM       3       User Defined Code 1 (Category la)  
ALREF041  DIM       3       User Defined Code 2 (Category lb)  
ALREF042  DIM       3       User Defined Code 3 (Category lc)  
ALREF043  DIM       3       User Defined Code 4 (Category ld)  
ALREF044  DIM       3       User Defined Code 5 (Category le)  
ALREF045  DIM       3       User Defined Code 6 (Category lf)  
ALREF046  DIM       3       User Defined Code 7 (Category lg)  
ALREF047  DIM       3       User Defined Code 8 (Category lh)  
ALREF048  DIM       3       User Defined Code 9 (Category li)  
ALREF049  DIM       3       User Defined Code 10 (Category lj) 
ALREF050  DIM       3       User Defined Code 11 (Category lk) 
ALREF051  DIM       3       User Defined Code 12 (Category ll) 
ALREF052  DIM       3       User Defined Code 13 (Category lm) 
ALREF053  DIM       3       User Defined Code 14 (Category ln) 
ALREF054  DIM       3       User Defined Code 15 (Category lo) 
ALREF055  DIM       3       User Defined Code 16 (Category lp) 
ALREF056  DIM       3       User Defined Code 17 (Category lq) 
ALREF057  DIM       3       User Defined Code 18 (Category lr) 
ALREF058  DIM       3       User Defined Code 19 (Category ls) 
ALREF059  DIM       3       User Defined Code 20 (Category lt) 
ALREF060  DIM       3       User Defined Code 21 (Category lu) 
ALREF061  DIM       3       User Defined Code 22 (Category lv) 
ALREF062  DIM       3       User Defined Code 23 (Category lw) 
ALREF063  DIM       3       User Defined Code 24 (Category lx) 
ALREF064  DIM       3       User Defined Code 25 (Category ly) 
ALREF065  DIM       3       User Defined Code 26 (Category lz) 
ALREF066  DIM       3       User Defined Code 27 (Category lA) 
ALREF067  DIM       3       User Defined Code 28 (Category lB) 
ALREF068  DIM       3       User Defined Code 29 (Category lC) 
ALREF069  DIM       3       User Defined Code 30 (Category lD) 
ALREF070  DIM       3       User Defined Code 31 (Category lE) 
ALREF071  DIM       3       User Defined Code 32 (Category lO) 
ALREF072  DIM       3       User Defined Code 33 (Category lG) 
ALREF073  DIM       3       User Defined Code 34 (Category lH) 
ALREF074  DIM       3       User Defined Code 35 (Category lI) 
ALREF075  DIM       3       User Defined Code 36 (Category lJ) 
ALREF076  DIM       3       User Defined Code 37 (Category lK) 
ALREF077  DIM       3       User Defined Code 38 (Category lL) 
ALREF078  DIM       3       User Defined Code 39 (Category lM) 
ALREF079  DIM       3       User Defined Code 40 (Category lN) 
ALREF080  DIM       1       User Defined Y/N 1 (0=No,1=Yes)    
ALREF081  DIM       1       User Defined Y/N 2 (0=No,1=Yes)    
ALREF082  DIM       1       User Defined Y/N 3 (0=No,1=Yes)    
ALREF083  DIM       1       User Defined Y/N 4 (0=No,1=Yes)    
ALREF084  DIM       10      User Defined HCP 1 (patdo1af)      
ALREF085  DIM       10      User Defined HCP 2 (patdo1af)      
ALREF086  DIM       10      User Defined HCP 3 (patdo1af)      
ALREF087  DIM       10      HCP Case Team Code (allcasaf)
ALREF088  DIM       60      User Defined Free Format 1         
ALREF089  DIM       60      User Defined Free Format 2         
ALREF090  DIM       8       User Defined Date 1 (CCYYMMDD)     
ALREF091  DIM       8       User Defined Time 1 (HH:MM:SS)     
ALREF092  DIM       8       User Defined Date 2 (CCYYMMDD)     
ALREF093  DIM       8       User Defined Time 2 (HH:MM:SS)     
ALREF094  DIM       8       User Defined Date 3 (CCYYMMDD)     
ALREF095  DIM       8       User Defined Time 3 (HH:MM:SS)     
ALREF096  DIM       8       User Defined Date 4 (CCYYMMDD)     
ALREF097  DIM       8       User Defined Time 4 (HH:MM:SS)     
ALREF098  FORM      12.2    User Defined Numeric 1             
ALREF099  FORM      12.2    User Defined Numeric 2             
ALREF100  DIM       8       Date Record Created (CCYYMMDD)     
ALREF101  DIM       8       Time Record Created (HH:MM:SS)     
ALREF102  DIM       10      WEb user id created (websecaf)     
ALREF103  DIM       8       Update Date (CCYYMMDD)             
ALREF104  DIM       8       Update Time (HH:MM:SS)             
ALREF105  DIM       10      WEB User ID Updated (websecaf)     
ALREF106  DIM       6       Clinic Type
ALREF107  DIM       3       Hospital/Unit Number
ALREF108  DIM       60      Referring HCP (Free Format)
ALREF109  DIM       60      Referring HCP Addr 1 (Free Format)
ALREF110  DIM       60      Referring HCP Addr 2 (Free Format)
ALREF111  DIM       60      Referring HCP Addr 3 (Free Format)
ALREF112  DIM       8       Referring HCP State (Free Format)
ALREF113  DIM       8       Referring HCP Post Code (Free Frm)
ALREF114  DIM       20      Referring HCP Bus. Phone (Free Frm)
ALREF115  DIM       20      Referring HCP Bus. Fax (Free Frm)
ALREF116  DIM       10      Referring HCP Prov.Numb. (Free Frm)
ALREF117  DIM       3       Slot Type (Category CV)
ALREF118  DIM       50      Presenting Complaint (Free Format)
ALREF119  DIM       6       Preferred Site
ALREF120  DIM       6       Clinic ID
ALREF121  DIM       3       Claim Status (Category sc)
ALREF122  DIM       3       HIC Reason for Rejection (Cat hr)
ALREF123  DIM       50      Claim Comments (Free Format)
ALREF124  DIM       3       Type of Referral (Category RI)
ALREF125  DIM       8       Referral Expiry Date (ccyymmdd)
ALREF126  DIM       8       Must Be Seen By Date (ccyymmdd)
ALREF127  DIM       8       Priority Date (ccyymmdd)
ALREF128  DIM       3       SACS Reason for Rejection (Cat rr)
ALREF129  DIM       8       SACS Date Rejected (CCYYMMDD)
ALREF130  DIM       8       SACS Time Rejected (hh:mm:ss)
ALREF131  DIM       10      SACS WEB User Rejected (websecaf)
ALREF132  DIM       8       User Defined Date 5 (CCYYMMDD)
ALREF133  DIM       8       User Defined Time 5 (HH:MM:SS)
ALREF134  DIM       1       User Defined Y/N 5 (0=No,1=Yes)
ALREF135  DIM       10      User Defined User ID 1 (websecaf)
ALREF136  DIM       8       User Defined Date 6 (CCYYMMDD)
ALREF137  DIM       8       User Defined Time 6 (HH:MM:SS)
ALREF138  DIM       1       User Defined Y/N 6 (0=No,1=Yes)
ALREF139  DIM       8       Case Review Date (CCYYMMDD)
ALREF140  DIM       3       Purchaser (Cat HP)
ALREF141  DIM       3       Outcome of Priority (CAT AO)
ALREF142  DIM       3       Contract (Cat gb)
ALREF143  DIM       6       Score
ALREF144  DIM       1       MOH Indicator Record sent to MHINC
ALREF145  DIM       3       Event Program (Cat zG)
ALREF146  DIM       50      Diagnosis Code Free Text     (ALREDIAT)
ALREF147  DIM       1       User Defined Y/N 7           (ALREUYN7)
ALREF148  DIM       1       User Defined Y/N 8           (ALREUYN8)
ALREF149  DIM       1       User Defined Y/N 9           (ALREUYN9)
ALREF150  DIM       1       User Defined Code 1 (0 to 9) (ALREUCD1)
ALREF151  DIM       1       User Defined Code 2 (0 to 9) (ALREUCD2)
ALREF152  DIM       1       User Defined Code 3 (0 to 9) (ALREUCD3)
ALREF153  DIM       30      Referral Originator
ALREF154  DIM       1       User Defined Y/N 10 (0=No,1=Yes)
ALREF155  DIM       1       User Defined Y/N 11 (0=No,1=Yes)
ALREF156  DIM       1       User Defined Y/N 12 (0=No,1=Yes)
ALREF157  DIM       8       User Defined Date 7 (CCYYMMDD)
ALREF158  DIM       8       User Defined Time 7 (HH:MM:SS)
ALREF159  DIM       8       User Defined Date 8 (CCYYMMDD)
ALREF160  DIM       8       User Defined Time 8 (HH:MM:SS)
ALREF161  DIM       8       User Defined Date 9 (CCYYMMDD)
ALREF162  DIM       8       User Defined Time 9 (HH:MM:SS)
ALREF163  DIM       8       Impairment Onset Date (CCYYMMDD)
ALREF164  DIM       8       Adv. Care Plan Doc. Date (CCYYMMDD)
ALREF165  DIM       8       User Defined Date 10 (CCYYMMDD)
ALREF166  DIM       10      User Defined HCP 5 (alreuhc5)      
ALREF167  DIM       10      User Defined HCP 6 (alreuhc6)      
ALREF168  DIM       8       Referral Renewal Date (CCYYMMDD)
ALREF169  DIM       9       Diagnosis Code 4 (alldiaaf)
ALREF170  DIM       9       Diagnosis Code 5 (alldiaaf)
ALREF171  DIM       9       Procedure Code 1 (allproaf)
ALREF172  DIM       9       Procedure Code 2 (allproaf)
ALREF173  DIM       9       Procedure Code 3 (allproaf)
ALREF174  DIM       9       Procedure Code 4 (allproaf)
ALREF175  DIM       9       Procedure Code 5 (allproaf)
ALREF176  DIM       8       User Defined Date 11 (CCYYMMDD)
ALREF177  DIM       8       User Defined Time 11 (HH:MM:SS)
ALREF178  DIM       8       User Defined Date 12 (CCYYMMDD)
ALREF179  DIM       8       User Defined Time 12 (HH:MM:SS)
ALREF180  DIM       8       User Defined Date 13 (CCYYMMDD)
ALREF181  DIM       8       User Defined Time 13 (HH:MM:SS)
ALREF182  DIM       8       User Defined Date 14 (CCYYMMDD)
ALREF183  DIM       8       User Defined Time 14 (HH:MM:SS)
ALREF184  DIM       8       User Defined Date 15 (CCYYMMDD)
ALREF185  DIM       8       User Defined Time 15 (HH:MM:SS)
ALREF186  DIM       3       Current Triage Status (Cat ts)
ALREF187  DIM       8       Current Triage Date (CCYYMMDD)
ALREF188  DIM       3       Referral Override (Cat ro)
ALREF189  DIM       3       Referral Period (Cat RF)
ALREF190  DIM       2       Referral Period Months (1-98)
ALREF191  DIM       1       Benefit Assignment Authorised
ALREF192  DIM       3       Referral in First Triage Score
.
ALREF201  INIT      "la"
ALREF202  INIT      "lb"
ALREF203  INIT      "lc"
ALREF204  INIT      "ld"
ALREF205  INIT      "le"
ALREF206  INIT      "lf"
ALREF207  INIT      "lg"
ALREF208  INIT      "lh"
ALREF209  INIT      "li"
ALREF210  INIT      "lj"
ALREF211  INIT      "lk"
ALREF212  INIT      "ll"
ALREF213  INIT      "lm"
ALREF214  INIT      "ln"
ALREF215  INIT      "lo"
ALREF216  INIT      "lp"
ALREF217  INIT      "lq"
ALREF218  INIT      "lr"
ALREF219  INIT      "ls"
ALREF220  INIT      "lt"
ALREF221  INIT      "lu"
ALREF222  INIT      "lv"
ALREF223  INIT      "lw"
ALREF224  INIT      "lx"
ALREF225  INIT      "ly"
ALREF226  INIT      "lz"
ALREF227  INIT      "lA"
ALREF228  INIT      "lB"
ALREF229  INIT      "lC"
ALREF230  INIT      "lD"
ALREF231  INIT      "lE"
ALREF232  INIT      "lO"
ALREF233  INIT      "lG"
ALREF234  INIT      "lH"
ALREF235  INIT      "lI"
ALREF236  INIT      "lJ"
ALREF237  INIT      "lK"
ALREF238  INIT      "lL"
ALREF239  INIT      "lM"
ALREF240  INIT      "lN"
.
ALLRFDIA  DIM       9       Diagnosis Code For Select List Output
ALLRFPRB  DIM       9       Problem Code For Select List Output
.
