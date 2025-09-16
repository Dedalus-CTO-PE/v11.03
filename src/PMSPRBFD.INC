. V10.00.01 08/04/2010 JP  Added linked visit                                
. *----------------------------------------------------------------------
. * Include Name  :   PMSPRBFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Problem Master Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsprbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPRBA1   IFILE    SQL, FIXED=274, KEY="U1-8,9-13"                             
PMSPRBA2   IFILE    SQL, FIXED=274, KEY="U197-204,1-8,9-13"                     
PMSPRBA3   IFILE    SQL, FIXED=274, KEY="U244-251,1-8,9-13"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPBURNO  DIM       8      8        1     U/R Number                         
PMPBPNUM  DIM       5      5        9     Problem Number                     
PMPBSPIN  DIM       1      1        14    Sub Problem Indicator              
PMPBPPNO  DIM       5      5        15    Parent Problem Number              
PMPBPRID  DIM       3      3        20    Problem ID                         
PMPBPRTY  DIM       3      3        23    Problem Type                       
PMPBACTV  DIM       1      1        26    Active (Y/N)                       
PMPBPRST  DIM       3      3        27    Problem Status                     
PMPBDSC1  DIM       50     50       30    Diagnosis/Problem Description 1    
PMPBDSC2  DIM       50     50       80    Diagnosis/Problem Description 2    
PMPBDCSY  DIM       5      5        130   Diagnosis Coding System            
PMPBDCOD  DIM       10     10       135   Diagnosis Code                     
PMPBESDT  DIM       8      8        145   Established Date                   
PMPBESTI  DIM       5      5        153   Established Time                   
PMPBESBY  DIM       10     10       158   Established By                     
PMPBERDT  DIM       8      8        168   Est Resolution Date                
PMPBERTI  DIM       5      5        176   Est Resolution Time                
PMPBARDT  DIM       8      8        181   Actual Resolution Date             
PMPBARTI  DIM       5      5        189   Actual Resolution Time             
PMPBRVST  DIM       3      3        194   Review Status                      
PMPBNRDT  DIM       8      8        197   Next Review Date                   
PMPBNRTI  DIM       5      5        205   Next Review Time                   
PMPBUDC1  DIM       3      3        210   User Def Code 1                    
PMPBUDC2  DIM       3      3        213   User Def Code 2                    
PMPBUDY1  DIM       1      1        216   User Def Y/N 1                     
PMPBUDY2  DIM       1      1        217   User Def Y/N 2                     
PMPBUDD1  DIM       8      8        218   User Def Date 1                    
PMPBUDD2  DIM       8      8        226   User Def Date 2                    
PMPBUDT1  DIM       5      5        234   User Def Time 1                    
PMPBUDT2  DIM       5      5        239   User Def Time 2                    
PMPBLVIS  DIM       8      8        244   Linked Visit Number                
PMPBSPAR  DIM       22     22       252   Spare                              
.
.End of Record                      274  
.
