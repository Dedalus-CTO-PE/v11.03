. V9.05.001 07/04/2006 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLSCTFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   SCTT External Referrals            
. *
. * File Type     :   SQL
. *
. * File Name     :   allsctaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLSCTA1   IFILE    SQL, FIXED=1990, KEY="U1-8,9-16"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALSCURNO  DIM       8      8        1     U/R Number                         
ALSCCNTR  DIM       8      8        9     Counter                            
ALSCSER1  DIM       3      3        17    Current Service 1                  
ALSCSER2  DIM       3      3        20    Current Service 2                  
ALSCSER3  DIM       3      3        23    Current Service 3                  
ALSCSER4  DIM       3      3        26    Current Service 4                  
ALSCSER5  DIM       3      3        29    Current Service 5                  
ALSCSER6  DIM       3      3        32    Current Service 6                  
ALSCSER7  DIM       3      3        35    Current Service 7                  
ALSCSER8  DIM       3      3        38    Current Service 8                  
ALSCSER9  DIM       3      3        41    Current Service 9                  
ALSCAGN1  DIM       30     30       44    Referral Agency 1                  
ALSCAGN2  DIM       30     30       74    Referral Agency 2                  
ALSCAGN3  DIM       30     30       104   Referral Agency 3                  
ALSCAGN4  DIM       30     30       134   Referral Agency 4                  
ALSCAGN5  DIM       30     30       164   Referral Agency 5                  
ALSCAGN6  DIM       30     30       194   Referral Agency 6                  
ALSCAGN7  DIM       30     30       224   Referral Agency 7                  
ALSCRFR1  DIM       60     60       254   Referral Reason 1                  
ALSCRFR2  DIM       60     60       314   Referral Reason 2                  
ALSCRFR3  DIM       60     60       374   Referral Reason 3                  
ALSCRFR4  DIM       60     60       434   Referral Reason 4                  
ALSCRFR5  DIM       60     60       494   Referral Reason 5                  
ALSCRFR6  DIM       60     60       554   Referral Reason 6                  
ALSCRFR7  DIM       60     60       614   Referral Reason 7                  
ALSCCCN1  DIM       3      3        674   Consumer Consent 1                 
ALSCCCN2  DIM       3      3        677   Consumer Consent 2                 
ALSCCCN3  DIM       3      3        680   Consumer Consent 3                 
ALSCCCN4  DIM       3      3        683   Consumer Consent 4                 
ALSCCCN5  DIM       3      3        686   Consumer Consent 5                 
ALSCCCN6  DIM       3      3        689   Consumer Consent 6                 
ALSCCCN7  DIM       3      3        692   Consumer Consent 7                 
ALSCRFM1  DIM       3      3        695   Referral Method 1                  
ALSCRFM2  DIM       3      3        698   Referral Method 2                  
ALSCRFM3  DIM       3      3        701   Referral Method 3                  
ALSCRFM4  DIM       3      3        704   Referral Method 4                  
ALSCRFM5  DIM       3      3        707   Referral Method 5                  
ALSCRFM6  DIM       3      3        710   Referral Method 6                  
ALSCRFM7  DIM       3      3        713   Referral Method 7                  
ALSCFDB1  DIM       3      3        716   Feedback Required 1                
ALSCFDB2  DIM       3      3        719   Feedback Required 2                
ALSCFDB3  DIM       3      3        722   Feedback Required 3                
ALSCFDB4  DIM       3      3        725   Feedback Required 4                
ALSCFDB5  DIM       3      3        728   Feedback Required 5                
ALSCFDB6  DIM       3      3        731   Feedback Required 6                
ALSCFDB7  DIM       3      3        734   Feedback Required 7                
ALSCRDT1  DIM       8      8        737   Referral Date 1 (ccyymmdd)         
ALSCRDT2  DIM       8      8        745   Referral Date 2 (ccyymmdd)         
ALSCRDT3  DIM       8      8        753   Referral Date 3 (ccyymmdd)         
ALSCRDT4  DIM       8      8        761   Referral Date 4 (ccyymmdd)         
ALSCRDT5  DIM       8      8        769   Referral Date 5 (ccyymmdd)         
ALSCRDT6  DIM       8      8        777   Referral Date 6 (ccyymmdd)         
ALSCRDT7  DIM       8      8        785   Referral Date 7 (ccyymmdd)         
ALSCLIVA  DIM       3      3        793   Living Arrangement                 
ALSCACCM  DIM       3      3        796   Accommodation                      
ALSCEMST  DIM       3      3        799   Employment Status                  
ALSCMHAS  DIM       3      3        802   Mental Health Act Status           
ALSCLORD  DIM       30     30       805   Other Legal Order                  
ALSCLOFL  DIM       1      1        835   Legal Order Flag                   
ALSCDMRS  DIM       3      3        836   Decision Making Responsibility     
ALSCCMOD  DIM       1      1        839   Capable of making own decisions    
ALSCFDEC  DIM       3      3        840   Financial Decision Maker           
ALSCTOFF  DIM       1      1        843   Financial Trade Offs               
ALSCCARA  DIM       3      3        844   Carer Availability                 
ALSCCARS  DIM       3      3        847   Carer Residency Status             
ALSCCARR  DIM       3      3        850   Carer Relationship                 
ALSCOHLT  DIM       1      1        853   Overall Health                     
ALSCBPAN  DIM       1      1        854   Bodily Pain                        
ALSCIFER  DIM       1      1        855   Interference with activities       
ALSCERED  DIM       1      1        856   Vision for reading                 
ALSCEDIS  DIM       1      1        857   Vision for distance                
ALSCHEAR  DIM       1      1        858   Hearing                            
ALSCFALL  DIM       3      3        859   No. of falls in last 6 months      
ALSCFRE1  DIM       60     60       862   Free Format Comments 1             
ALSCFRE2  DIM       60     60       922   Free Format Comments 2             
ALSCFRE3  DIM       60     60       982   Free Format Comments 3             
ALSCFRE4  DIM       60     60       1042  Free Format Comments 4             
ALSCFRE5  DIM       60     60       1102  Free Format Comments 5             
ALSCFRE6  DIM       60     60       1162  Free Format Comments 6             
ALSCFRE7  DIM       60     60       1222  Free Format Comments 7             
ALSCFRE8  DIM       60     60       1282  Free Format Comments 8             
ALSCFRE9  DIM       60     60       1342  Free Format Comments 9             
ALSCFR10  DIM       60     60       1402  Free Format Comments 10            
ALSCFR11  DIM       60     60       1462  Free Format Comments 11            
ALSCFR12  DIM       60     60       1522  Free Format Comments 13            
ALSCFR13  DIM       60     60       1582  Free Format Comments 13            
ALSCFR14  DIM       60     60       1642  Free Format Comments 14            
ALSCFR15  DIM       60     60       1702  Free Format Comments 15            
ALSCKS01  DIM       1      1        1762  K10 Scale Field 1                  
ALSCKS02  DIM       1      1        1763  K10 Scale Field 2                  
ALSCKS03  DIM       1      1        1764  K10 Scale Field 3                  
ALSCKS04  DIM       1      1        1765  K10 Scale Field 4                  
ALSCKS05  DIM       1      1        1766  K10 Scale Field 5                  
ALSCKS06  DIM       1      1        1767  K10 Scale Field 6                  
ALSCKS07  DIM       1      1        1768  K10 Scale Field 7                  
ALSCKS08  DIM       1      1        1769  K10 Scale Field 8                  
ALSCKS09  DIM       1      1        1770  K10 Scale Field 9                  
ALSCKS10  DIM       1      1        1771  K10 Scale Field 10                 
ALSCPSUP  DIM       1      1        1772  Personal/Social Support            
ALSCELDI  DIM       1      1        1773  Eligible for Disability Services   
ALSCELC1  DIM       1      1        1774  Eligibility Criteria 1             
ALSCELC2  DIM       1      1        1775  Eligibility Criteria 2             
ALSCELC3  DIM       1      1        1776  Eligibility Criteria 3             
ALSCELC4  DIM       1      1        1777  Eligibility Criteria 4             
ALSCFR16  DIM       60     60       1778  Free Format Comments 16            
ALSCCDAT  DIM       8      8        1838  Date Record Created (CCYYMMDD)     
ALSCCTIM  DIM       8      8        1846  Time Record Created (HH:MM:SS)     
ALSCCUID  DIM       10     10       1854  WEB User ID Created (websecaf)     
ALSCUDAT  DIM       8      8        1864  Update Date (CCYYMMDD)             
ALSCUTIM  DIM       8      8        1872  Update Time (HH:MM:SS)             
ALSCUUID  DIM       10     10       1880  WEB User ID Updated (websecaf)     
ALSCSPAR  DIM       100    100      1890  Spare Variable                     
.
.End of Record                      1990 
.
