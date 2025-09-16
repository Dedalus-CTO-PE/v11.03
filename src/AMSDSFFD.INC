. V6.00.001 08/01/1993                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSDSFFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Depreciation Summary               
. *
. * File Type     :   SQL
. *
. * File Name     :   amsdsfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSDSFA1   IFILE    SQL, FIXED=305, KEY="U1-2,3-14,15-18"                       
AMSDSFA2   IFILE    SQL, FIXED=305, KEY="U15-18,1-2,3-14"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMDSREG   DIM       2      2        1     Register                           
AMDSASS   DIM       12     12       3     Asset                              
AMDSYEAR  DIM       4      4        15    Financial Year                     
AMDSG01   FORM      1      2        19    GL Tran 0=No Period 1              
AMDSG02   FORM      1      2        21    GL Tran 0=No Period 2              
AMDSG03   FORM      1      2        23    GL Tran 0=No Period 3              
AMDSG04   FORM      1      2        25    GL Tran 0=No Period 4              
AMDSG05   FORM      1      2        27    GL Tran 0=No Period 5              
AMDSG06   FORM      1      2        29    GL Tran 0=No Period 6              
AMDSG07   FORM      1      2        31    GL Tran 0=No Period 7              
AMDSG08   FORM      1      2        33    GL Tran 0=No Period 8              
AMDSG09   FORM      1      2        35    GL Tran 0=No Period 9              
AMDSG10   FORM      1      2        37    GL Tran 0=No Period 10             
AMDSG11   FORM      1      2        39    GL Tran 0=No Period 11             
AMDSG12   FORM      1      2        41    GL Tran 0=No Period 12             
AMDSG13   FORM      1      2        43    GL Tran 0=No Period 13             
AMDSA01   FORM      12.2   8        45    Account Dep'n Period 1             
AMDSA02   FORM      12.2   8        53    Account Dep'n Period 2             
AMDSA03   FORM      12.2   8        61    Account Dep'n Period 3             
AMDSA04   FORM      12.2   8        69    Account Dep'n Period 4             
AMDSA05   FORM      12.2   8        77    Account Dep'n Period 5             
AMDSA06   FORM      12.2   8        85    Account Dep'n Period 6             
AMDSA07   FORM      12.2   8        93    Account Dep'n Period 7             
AMDSA08   FORM      12.2   8        101   Account Dep'n Period 8             
AMDSA09   FORM      12.2   8        109   Account Dep'n Period 9             
AMDSA10   FORM      12.2   8        117   Account Dep'n Period 10            
AMDSA11   FORM      12.2   8        125   Account Dep'n Period 11            
AMDSA12   FORM      12.2   8        133   Account Dep'n Period 12            
AMDSA13   FORM      12.2   8        141   Account Dep'n Period 13            
AMDST01   FORM      12.2   8        149   Tax Dep'n Period 1                 
AMDST02   FORM      12.2   8        157   Tax Dep'n Period 2                 
AMDST03   FORM      12.2   8        165   Tax Dep'n Period 3                 
AMDST04   FORM      12.2   8        173   Tax Dep'n Period 4                 
AMDST05   FORM      12.2   8        181   Tax Dep'n Period 5                 
AMDST06   FORM      12.2   8        189   Tax Dep'n Period 6                 
AMDST07   FORM      12.2   8        197   Tax Dep'n Period 7                 
AMDST08   FORM      12.2   8        205   Tax Dep'n Period 8                 
AMDST09   FORM      12.2   8        213   Tax Dep'n Period 9                 
AMDST10   FORM      12.2   8        221   Tax Dep'n Period 10                
AMDST11   FORM      12.2   8        229   Tax Dep'n Period 11                
AMDST12   FORM      12.2   8        237   Tax Dep'n Period 12                
AMDST13   FORM      12.2   8        245   Tax Dep'n Period 13                
AMDSAAD   FORM      12.2   8        253   Account Acc'm Dep'n at EOY         
AMDSTAD   FORM      12.2   8        261   Tax Acc'm Dep'n at EOY             
AMDSRVT   FORM      12.2   8        269   Revaluation Total at EOY           
AMDSTDT   DIM       4      4        277   Tax Dep'n Type at EOY              
AMDSADT   DIM       4      4        281   Account Dep'n Type at EOY          
AMDSSPA   DIM       20     20       285   Spare                              
.
.End of Record                      305  
.
