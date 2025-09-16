. V9.03.001 23/03/2004 P.D Created FD                                        
. V9.03.001 23/03/2004                                                       
. V9.03.002 23/03/2004                                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSCLPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Clinical Pathways Details  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsclpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCLPA1   IFILE    SQL, FIXED=527, KEY="U1-8,9-11,12-19"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCPADMN  DIM       8      8        1     Admission Number                   
PMCPCLPT  DIM       3      3        9     Clinical Pathway (Cat PW)          
PMCPUNIQ  DIM       8      8        12    Clinical Pathway Unique No.        
PMCPDIG1  DIM       9      9        20    Diagnosis Code 1                   
PMCPDDT1  DIM       8      8        29    Diagnosis 1 Date (CCYYMMDD)        
PMCPDTM1  DIM       8      8        37    Diagnosis 1 Time (HH:MM:SS)        
PMCPD1O1  DIM       3      3        45    Diagnosis 1 Outcome 1 (Cat PF)     
PMCPD1O2  DIM       3      3        48    Diagnosis 1 Outcome 2 (Cat PF)     
PMCPD1O3  DIM       3      3        51    Diagnosis 1 Outcome 3 (Cat PF)     
PMCPD1O4  DIM       3      3        54    Diagnosis 1 Outcome 4 (Cat PF)     
PMCPD1D1  DIM       8      8        57    Diagnosis 1 Outcome Date 1         
PMCPD1T1  DIM       8      8        65    Diagnosis 1 Outcome Time 1         
PMCPD1D2  DIM       8      8        73    Diagnosis 1 Outcome Date 2         
PMCPD1T2  DIM       8      8        81    Diagnosis 1 Outcome Time 2         
PMCPD1D3  DIM       8      8        89    Diagnosis 1 Outcome Date 3         
PMCPD1T3  DIM       8      8        97    Diagnosis 1 Outcome Time 3         
PMCPD1D4  DIM       8      8        105   Diagnosis 1 Outcome Date 4         
PMCPD1T4  DIM       8      8        113   Diagnosis 1 Outcome Time 4         
PMCPDIG2  DIM       9      9        121   Diagnosis Code 2                   
PMCPDDT2  DIM       8      8        130   Diagnosis 2 Date (CCYYMMDD)        
PMCPDTM2  DIM       8      8        138   Diagnosis 2 Time (HH:MM:SS)        
PMCPD2O1  DIM       3      3        146   Diagnosis 2 Outcome 1 (Cat PF)     
PMCPD2O2  DIM       3      3        149   Diagnosis 2 Outcome 2 (Cat PF)     
PMCPD2O3  DIM       3      3        152   Diagnosis 2 Outcome 3 (Cat PF)     
PMCPD2O4  DIM       3      3        155   Diagnosis 2 Outcome 4 (Cat PF)     
PMCPD2D1  DIM       8      8        158   Diagnosis 2 Outcome Date 1         
PMCPD2T1  DIM       8      8        166   Diagnosis 2 Outcome Time 1         
PMCPD2D2  DIM       8      8        174   Diagnosis 2 Outcome Date 2         
PMCPD2T2  DIM       8      8        182   Diagnosis 2 Outcome Time 2         
PMCPD2D3  DIM       8      8        190   Diagnosis 2 Outcome Date 3         
PMCPD2T3  DIM       8      8        198   Diagnosis 2 Outcome Time 3         
PMCPD2D4  DIM       8      8        206   Diagnosis 2 Outcome Date 4         
PMCPD2T4  DIM       8      8        214   Diagnosis 2 Outcome Time 4         
PMCPDIG3  DIM       9      9        222   Diagnosis Code 3                   
PMCPDDT3  DIM       8      8        231   Diagnosis 3 Date (CCYYMMDD)        
PMCPDTM3  DIM       8      8        239   Diagnosis 3 Time (HH:MM:SS)        
PMCPD3O1  DIM       3      3        247   Diagnosis 3 Outcome 1 (Cat PF)     
PMCPD3O2  DIM       3      3        250   Diagnosis 3 Outcome 2 (Cat PF)     
PMCPD3O3  DIM       3      3        253   Diagnosis 3 Outcome 3 (Cat PF)     
PMCPD3O4  DIM       3      3        256   Diagnosis 3 Outcome 4 (Cat PF)     
PMCPD3D1  DIM       8      8        259   Diagnosis 3 Outcome Date 1         
PMCPD3T1  DIM       8      8        267   Diagnosis 3 Outcome Time 1         
PMCPD3D2  DIM       8      8        275   Diagnosis 3 Outcome Date 2         
PMCPD3T2  DIM       8      8        283   Diagnosis 3 Outcome Time 2         
PMCPD3D3  DIM       8      8        291   Diagnosis 3 Outcome Date 3         
PMCPD3T3  DIM       8      8        299   Diagnosis 3 Outcome Time 3         
PMCPD3D4  DIM       8      8        307   Diagnosis 3 Outcome Date 4         
PMCPD3T4  DIM       8      8        315   Diagnosis 3 Outcome Time 4         
PMCPDIG4  DIM       9      9        323   Diagnosis Code 4                   
PMCPDDT4  DIM       8      8        332   Diagnosis 4 Date (CCYYMMDD)        
PMCPDTM4  DIM       8      8        340   Diagnosis 4 Time (HH:MM:SS)        
PMCPD4O1  DIM       3      3        348   Diagnosis 4 Outcome 1 (Cat PF)     
PMCPD4O2  DIM       3      3        351   Diagnosis 4 Outcome 2 (Cat PF)     
PMCPD4O3  DIM       3      3        354   Diagnosis 4 Outcome 3 (Cat PF)     
PMCPD4O4  DIM       3      3        357   Diagnosis 4 Outcome 4 (Cat PF)     
PMCPD4D1  DIM       8      8        360   Diagnosis 4 Outcome Date 1         
PMCPD4T1  DIM       8      8        368   Diagnosis 4 Outcome Time 1         
PMCPD4D2  DIM       8      8        376   Diagnosis 4 Outcome Date 2         
PMCPD4T2  DIM       8      8        384   Diagnosis 4 Outcome Time 2         
PMCPD4D3  DIM       8      8        392   Diagnosis 4 Outcome Date 3         
PMCPD4T3  DIM       8      8        400   Diagnosis 4 Outcome Time 3         
PMCPD4D4  DIM       8      8        408   Diagnosis 4 Outcome Date 4         
PMCPD4T4  DIM       8      8        416   Diagnosis 4 Outcome Time 4         
PMCPACTV  DIM       1      1        424   Active Indicator 1=Active 0=Inactive
PMCPDTCR  DIM       8      8        425   Date Record Created                
PMCPTMCR  DIM       8      8        433   Time Record Created                
PMCPWBCR  DIM       10     10       441   Web User ID Created                
PMCPDTUP  DIM       8      8        451   Date Record Updated                
PMCPTMUP  DIM       8      8        459   Time Record Updated                
PMCPWBUP  DIM       10     10       467   Web User ID Updated                
PMCPSPAR  DIM       50     50       477   Spare                              
.
.End of Record                      527  
.
