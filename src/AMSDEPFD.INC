. V6.00.001 30/12/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSDEPFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Depreciation Types                
. *
. * File Type     :   SQL
. *
. * File Name     :   amsdepaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSDEPA1   IFILE    SQL, FIXED=186, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMDEDEP   DIM       4      4        1     Depreciation Code                  
AMDEDES   DIM       35     35       5     Description                        
AMDEBAS   FORM      2      2        40    Value Based on 1=Prime, 2=Diminish 
AMDEFRQ   FORM      2      2        42    Frequency                          
AMDERAT   FORM      4.2    4        44    Default Rate                       
AMDERT01  FORM      4.2    4        48    Year 1                             
AMDERT02  FORM      4.2    4        52    Year 2                             
AMDERT03  FORM      4.2    4        56    Year 3                             
AMDERT04  FORM      4.2    4        60    Year 4                             
AMDERT05  FORM      4.2    4        64    Year 5                             
AMDERT06  FORM      4.2    4        68    Year 6                             
AMDERT07  FORM      4.2    4        72    Year 7                             
AMDERT08  FORM      4.2    4        76    Year 8                             
AMDERT09  FORM      4.2    4        80    Year 9                             
AMDERT10  FORM      4.2    4        84    Year 10                            
AMDEUR1   DIM       30     30       88    User Def Ref 1                     
AMDEUR2   DIM       30     30       118   User Def Ref 2                     
AMDEUD1   DIM       8      8        148   User Def Date 1                    
AMDEUD2   DIM       8      8        156   User Def Date 2                    
AMDEUY1   DIM       1      1        164   User Def Y/N 1                     
AMDEUY2   DIM       1      1        165   User Def Y/N 2                     
AMDESPA   DIM       20     20       166   Spare                              
.
.End of Record                      186  
.
