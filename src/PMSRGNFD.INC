. V10.00.02 11/08/2010 JP  Added Completion Code                                
. V10.00.01 24/05/2010 jp  Created 222551                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSRGNFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Pregnancy Details                  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsrgnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSRGNA1   IFILE    SQL, FIXED=350, KEY="U1-8,9-18,19-21"                       
PMSRGNA2   IFILE    SQL, FIXED=350, KEY="U9-18,19-21"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMRGURNO  DIM       8      8        1     UR Number                          
PMRGUNIQ  DIM       10     10       9     Unique Pregnancy ID                
PMRGCNTR  DIM       3      3        19    Record Counter                     
PMRGGRAV  DIM       1      1        22    Gravidity                          
PMRGTOTL  DIM       2      2        23    Total Number Previous Pregnancies  
PMRGTOPL  DIM       2      2        25    Total Previous LB Died<28 days     
PMRGTOPB  DIM       2      2        27    Total Previous LB Died>28 days     
PMRGCURL  DIM       2      2        29    Current Number of Live Children    
PMRGTOPS  DIM       2      2        31    Total Previous Still Births        
PMRGTPND  DIM       2      2        33    Total Previous Neonatial Births    
PMRGTPAS  DIM       2      2        35    Total Previous Abortions Spontaneou
PMRGTPAI  DIM       2      2        37    Total Previous Abortions Induced   
PMRGTPEO  DIM       2      2        39    Total Previous Ectopic Outcomes    
PMRGTPUO  DIM       2      2        41    Total Previous Unknown Outcomes    
PMRGDATE  DIM       8      8        43    Completion Date last preg CCYYMMDD 
PMRGOUTL  DIM       3      3        51    Outcome Last Preg (Cat PA)         
PMRGLASM  DIM       3      3        54    Last Birth Multiple (CAT PM)       
PMRGLASC  DIM       1      1        57    Last Birth Ceasarian (1=Yes)       
PMRGTOTS  DIM       2      2        58    Total Ceasareans                   
PMRGPLVB  DIM       3      3        60    Plan for VBAC (Cat PB)             
PMRGISBR  DIM       3      3        63    Intended Setting for Birth(Cat PJ) 
PMRGDATM  DIM       8      8        66    Date Last Menstrual Period CCYYMMDD
PMRGESTD  DIM       8      8        74    Estimated Due Date CCYYMMDD        
PMRGEDDB  DIM       3      3        82    Est Due Date Based on (Cat PL)     
PMRGHGHT  DIM       6      6        85    Height (cms)                       
PMRGWGHT  DIM       6      6        91    Weight (kgs)                       
PMRGESGA  DIM       2      2        97    Estimated Gestation (weeks)        
PMRGEGAS  DIM       8      8        99    Est Gestation Age As At (CCYYMMDD) 
PMRGNU14  DIM       2      2        107   No Ultrasounds 10-14 weeks         
PMRGNU26  DIM       2      2        109   No Ultrasounds 15-26 weeks         
PMRGNU27  DIM       2      2        111   No Ultrasounds > 27 weeks          
PMRGML20  DIM       3      3        113   Maternal Smoking < 20 weeks        
PMRGMG20  DIM       3      3        116   Maternal Smoking >= 20 weeks       
PMRGACRC  DIM       3      3        119   Antenatal Care Received (Cat PN)   
PMRGDACP  DIM       3      3        122   Discipline of ACP (Cat PX)         
PMRGANCP  DIM       10     10       125   Antenatal Care Provider (pmshcpaf) 
PMRGASBR  DIM       3      3        135   Actual Setting of Birth (Cat SB)   
PMRGASBF  DIM       50     50       138   Actual Setting of Birth-free format
PMRGCIBS  DIM       3      3        188   Change of Intent Birth Setting (SV)
PMRGCIBR  DIM       3      3        191   Reason for Change of Intent CAT SX 
PMRGUDF1  DIM       3      3        194   User Defined Field 1 (Cat p1)      
PMRGUDF2  DIM       3      3        197   User Defined Field 2 (Cat p2)      
PMRGUDF3  DIM       3      3        200   User Defined Field 3 (Cat p3)      
PMRGUDF4  DIM       3      3        203   User Defined Field 4 (Cat p4)      
PMRGUDF5  DIM       3      3        206   User Defined Field 5 (Cat p5)      
PMRGUDF6  DIM       3      3        209   User Defined Field 6 (Cat p6)      
PMRGUDF7  DIM       3      3        212   User Defined Field 7 (Cat p7)      
PMRGUDF8  DIM       3      3        215   User Defined Field 8 (Cat p8)      
PMRGUDF9  DIM       3      3        218   User Defined Field 9 (Cat p9)      
PMRGUDF0  DIM       3      3        221   User Defined Field 10 (Cat p0)     
PMRGWEBC  DIM       10     10       224   Web User Id Created                
PMRGDATC  DIM       8      8        234   Date Created (CCYYMMDD)            
PMRGTIMC  DIM       8      8        242   Time Created (hh:mm:ss)            
PMRGREAS  DIM       3      3        250   Reason for Change (Cat KY)         
PMRGCOMP  DIM       3      3        253   Completion Code (Cat FB)           
PMRGSPAR  DIM       94     94       256   Spare                              
.
.End of Record                      350  
.
