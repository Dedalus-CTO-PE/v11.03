. V11.03.01 18/05/2023 JT C-0923703 Added Type 004 AMHCC End Code               
. V11.02.02 09/11/2022 DS C-0923862 Added type 003 Amount To Be Invoiced
. V11.02.01 07/04/2022 EC C-0915984 Added type 002 discharge details
. V10.10.01 02/05/2017 PV C-0833345 Created Include
. *----------------------------------------------------------------------
. * Include Name  :   VISXDCFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Visit Extra Data Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   visxdcaf.dat
. *
. * Index Values  :   KEY11                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISXDCA1   IFILE    SQL, FIXED=1291, KEY="U1-8,9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSXDVISN  DIM       8      8        1     Visit Number                       
VSXDTYDA  DIM       3      3        9     Type of Data Collection            
.                                         001 - EMR Visit Alcohol Data         
.                                         002 - Discharge Details              
.                                         003 - Amount To Be Invoiced          
.                                         004 - AMHCC End Class Code           
VSXDVAL1  DIM       10     10       12    Value 1                            
VSXDVAL2  DIM       10     10       22    Value 2                            
VSXDVAL3  DIM       10     10       32    Value 3                            
VSXDVAL4  DIM       10     10       42    Value 4                            
VSXDVAL5  DIM       10     10       52    Value 5                            
VSXDVAL6  DIM       10     10       62    Value 6                            
VSXDVAL7  DIM       10     10       72    Value 7                            
VSXDVAL8  DIM       10     10       82    Value 8                            
VSXDVAL9  DIM       10     10       92    Value 9                            
VSXDVA10  DIM       10     10       102   Value 10                           
VSXDCOD1  DIM       3      3        112   Coded Field 1                      
VSXDCOD2  DIM       3      3        115   Coded Field 2                      
VSXDCOD3  DIM       3      3        118   Coded Field 3                      
VSXDCOD4  DIM       3      3        121   Coded Field 4                      
VSXDCOD5  DIM       3      3        124   Coded Field 5                      
VSXDCOD6  DIM       3      3        127   Coded Field 6                      
VSXDCOD7  DIM       3      3        130   Coded Field 7                      
VSXDCOD8  DIM       3      3        133   Coded Field 8                      
VSXDCOD9  DIM       3      3        136   Coded Field 9                      
VSXDCO10  DIM       3      3        139   Coded Field 10                     
VSXDTXT1  DIM       80     80       142   Text 1                             
VSXDTXT2  DIM       80     80       222   Text 2                             
VSXDTXT3  DIM       80     80       302   Text 3                             
VSXDTXT4  DIM       80     80       382   Text 4                             
VSXDTXT5  DIM       80     80       462   Text 5                             
VSXDTXT6  DIM       80     80       542   Text 6                             
VSXDTXT7  DIM       80     80       622   Text 7                             
VSXDTXT8  DIM       80     80       702   Text 8                             
VSXDTXT9  DIM       80     80       782   Text 9                             
VSXDTX10  DIM       80     80       862   Text 10                            
VSXDYN01  DIM       1      1        942   Y/N 1 (0 = No, 1 = Yes, 2 = N/A)   
VSXDYN02  DIM       1      1        943   Y/N 2 (0 = No, 1 = Yes, 2 = N/A)   
VSXDYN03  DIM       1      1        944   Y/N 3 (0 = No, 1 = Yes, 2 = N/A)   
VSXDYN04  DIM       1      1        945   Y/N 4 (0 = No, 1 = Yes, 2 = N/A)   
VSXDYN05  DIM       1      1        946   Y/N 5 (0 = No, 1 = Yes, 2 = N/A)   
VSXDYN06  DIM       1      1        947   Y/N 6 (0 = No, 1 = Yes, 2 = N/A)   
VSXDYN07  DIM       1      1        948   Y/N 7 (0 = No, 1 = Yes, 2 = N/A)   
VSXDYN08  DIM       1      1        949   Y/N 8 (0 = No, 1 = Yes, 2 = N/A)   
VSXDYN09  DIM       1      1        950   Y/N 9 (0 = No, 1 = Yes, 2 = N/A)   
VSXDYN10  DIM       1      1        951   Y/N 10 (0 = No, 1 = Yes, 2 = N/A)  
VSXDDAT1  DIM       8      8        952   User Defined Date Field 1          
VSXDTIM1  DIM       8      8        960   User Defined Time Field 1          
VSXDDAT2  DIM       8      8        968   User Defined Date Field 2          
VSXDTIM2  DIM       8      8        976   User Defined Time Field 2          
VSXDDAT3  DIM       8      8        984   User Defined Date Field 3          
VSXDTIM3  DIM       8      8        992   User Defined Time Field 3          
VSXDDAT4  DIM       8      8        1000  User Defined Date Field 4          
VSXDTIM4  DIM       8      8        1008  User Defined Time Field 4          
VSXDDAT5  DIM       8      8        1016  User Defined Date Field 5          
VSXDTIM5  DIM       8      8        1024  User Defined Time Field 5          
VSXDDAT6  DIM       8      8        1032  User Defined Date Field 6          
VSXDTIM6  DIM       8      8        1040  User Defined Time Field 6          
VSXDDAT7  DIM       8      8        1048  User Defined Date Field 7          
VSXDTIM7  DIM       8      8        1056  User Defined Time Field 7          
VSXDDAT8  DIM       8      8        1064  User Defined Date Field 8          
VSXDTIM8  DIM       8      8        1072  User Defined Time Field 8          
VSXDDAT9  DIM       8      8        1080  User Defined Date Field 9          
VSXDTIM9  DIM       8      8        1088  User Defined Time Field 9          
VSXDDA10  DIM       8      8        1096  User Defined Date Field 10         
VSXDTI10  DIM       8      8        1104  User Defined Time Field 10         
VSXDDELT  DIM       1      1        1112  Deleted Record 0=No,1=Strikethrough
VSXDCUSR  DIM       10     10       1113  User who created record            
VSXDCDAT  DIM       8      8        1123  Date Record Created                
VSXDCTIM  DIM       8      8        1131  Time Record Created                
VSXDUUSR  DIM       10     10       1139  User Who Last Updated Record       
VSXDUDAT  DIM       8      8        1149  Date record last updated           
VSXDUTIM  DIM       8      8        1157  Time record last updated           
VSXDUCID  DIM       10     10       1165  User who completed Data collection 
VSXDUCDT  DIM       8      8        1175  Date data collection completed     
VSXDUCTM  DIM       8      8        1183  Time data collection completed     
VSXDSPAR  DIM       100    100      1191  Spare                              
.
.End of Record                      1291 
.
