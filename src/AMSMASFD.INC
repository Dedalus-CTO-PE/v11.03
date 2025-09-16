. V6.00.006 25/01/1993                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSMASFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Asset Master Details                   
. *
. * File Type     :   SQL
. *
. * File Name     :   amsmasaf.dat
. * Audit Name    :   amsaudma.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
AMSAUDMA   IFILE    SQL, FIXED=670, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMMAAUDD  DIM       8      8        1     Date of Change
AMMAAUDT  DIM       8      8        9     Time of Change
AMMAAUDP  DIM       2      2        17    Port
AMMAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
AMMAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
AMMAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
AMSMASA1   IFILE    SQL, FIXED=644, KEY="U1-2,3-14"
AMSMASA2   IFILE    SQL, FIXED=644, KEY="U56-58,59-64,1-2,3-14"
AMSMASA3   IFILE    SQL, FIXED=644, KEY="U53-55,1-2,3-14"
AMSMASA4   IFILE    SQL, FIXED=644, KEY="U50-52,1-2,3-14"
AMSMASA5   IFILE    SQL, FIXED=644, KEY="U349-353,1-2,3-14"
AMSMASA6   IFILE    SQL, FIXED=644, KEY="U166-173,1-2,3-14"
AMSMASA7   IFILE    SQL, FIXED=644, KEY="U183-190,1-2,3-14"
AMSMASA8   IFILE    SQL, FIXED=644, KEY="U137-140,1-2,3-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMMAREG   DIM       2      2        1     Register                           
AMMAASS   DIM       12     12       3     Asset Code                         
AMMADES   DIM       35     35       15    Description                        
AMMATYP   DIM       3      3        50    Asset Type (Cat AT)                
AMMADPT   DIM       3      3        53    Department (Cat DP)                
AMMABLD   DIM       3      3        56    Building (Cat BL)                  
AMMALOC   DIM       6      6        59    Location/Level/Room                
AMMALCM   DIM       30     30       65    Location Comment                   
AMMASDT   DIM       8      8        95    Last Stocktake Date                
AMMAVDT   DIM       8      8        103   Last Revaluetion Date              
AMMARVT   FORM      12.2   8        111   Revaluation Total                  
AMMASEC   FORM      1      2        119   Second-hand 0=No                   
AMMALEA   FORM      1      2        121   Leased 0=No                        
AMMAREN   FORM      1      2        123   Rented 0=No                        
AMMAPRI   FORM      4.2    4        125   Private Use Percentage             
AMMARDT   DIM       8      8        129   Replacement Date                   
AMMAADT   DIM       4      4        137   Account Depreciation Type          
AMMATDT   DIM       4      4        141   Tax Depreciation Type              
AMMATAD   FORM      12.2   8        145   Accumulated Dep'n (Tax)            
AMMAAAD   FORM      12.2   8        153   Accumulated Dep'n (Account)        
AMMAGIC   DIM       5      5        161   General Ledger Interface Code      
AMMAAQD   DIM       8      8        166   Acquisition Date                   
AMMAAYR   DIM       4      4        174   Acquisition Year                   
AMMAAPR   DIM       2      2        178   Acquisition Period                 
AMMASOF   DIM       3      3        180   Source of Funds (Cat SF)           
AMMADDT   DIM       8      8        183   Disposal Date                      
AMMADYR   DIM       4      4        191   Disposal Year                      
AMMADPR   DIM       2      2        195   Disposal Period                    
AMMADRF   DIM       15     15       197   Disposal Reference                 
AMMADTY   DIM       3      3        212   Disposal Type (Cat DT)             
AMMADVA   FORM      12.2   8        215   Disposal Value                     
AMMAAQO   DIM       8      8        223   Purchase Order                     
AMMAAQI   DIM       15     15       231   Invoice Reference                  
AMMASER   DIM       30     30       246   Serial Number                      
AMMACST   FORM      12.2   8        276   Original Cost                      
AMMAMANC  DIM       5      5        284   Manufacturer Code                  
AMMAMANN  DIM       30     30       289   Manufacturer Name                  
AMMAMANP  DIM       30     30       319   Manufacturer Part Number           
AMMASUPC  DIM       5      5        349   Supplier Code                      
AMMASUPN  DIM       30     30       354   Supplier Name                      
AMMASUPP  DIM       30     30       384   Supplier Part Number               
AMMARVR   FORM      12.2   8        414   Revaluation Reserve Total          
AMMAUA1   FORM      12.2   8        422   User Def Amt 1                     
AMMAUA2   FORM      12.2   8        430   User Def Amt 2                     
AMMAUA3   FORM      12.2   8        438   User Def Amt 3                     
AMMAUR1   DIM       30     30       446   User Def Ref 1                     
AMMAUR2   DIM       30     30       476   User Def Ref 2                     
AMMAUR3   DIM       30     30       506   User Def Ref 3                     
AMMAUR4   DIM       30     30       536   User Def Ref 4                     
AMMAUD1   DIM       8      8        566   User Def Date 1                    
AMMAUD2   DIM       8      8        574   User Def Date 2                    
AMMAUD3   DIM       8      8        582   User Def Date 3                    
AMMAUD4   DIM       8      8        590   User Def Date 4                    
AMMAUC1   DIM       3      3        598   User Def Code 1 (Cat A1)           
AMMAUC2   DIM       3      3        601   User Def Code 2 (Cat A2)           
AMMAUC3   DIM       3      3        604   User Def Code 3 (Cat A3)           
AMMAUC4   DIM       3      3        607   User Def Code 4 (Cat A4)           
AMMAUY1   DIM       1      1        610   User Def Y/N 1                     
AMMAUY2   DIM       1      1        611   User Def Y/N 2                     
AMMAUY3   DIM       1      1        612   User Def Y/N 3                     
AMMAUY4   DIM       1      1        613   User Def Y/N 4                     
AMMASPA   DIM       30     30       614                                      
.
.End of Record                      644  
.
