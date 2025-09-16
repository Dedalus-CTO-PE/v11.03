. V6.00.001 05/06/1991 BGA Add Call Before Routine                           
. *----------------------------------------------------------------------
. * Include Name  :   SYSHVRFD.INC
. *
. * Function      :   File Def'n Include for Common
. *                   Help Routine Table                  
. *
. * File Type     :   SQL
. *
. * File Name     :   syshvraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SYSHVRA1   IFILE    SQL, FIXED=469, KEY="U1-2,3-4,5-5"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SYHVSYS   DIM       2      2        1     System                             
SYHVFIL   DIM       2      2        3     File                               
SYHVHID   DIM       1      1        5     Help Routine I.D.                  
SYHVDES   DIM       20     20       6     Help Routine Description           
SYHVFLD   DIM       4      4        26    Field for Help                     
SYHVIDX   DIM       1      1        30    Index                              
SYHVDTOP  DIM       2      2        31    Default Top                        
SYHVDBOT  DIM       2      2        33            Bottom                     
SYHVDLEF  DIM       2      2        35            Left                       
SYHVDRIG  DIM       2      2        37            Right                      
SYHVCH01  DIM       20     20       39    Column Heading                     
SYHVCH02  DIM       20     20       59                                       
SYHVCH03  DIM       20     20       79                                       
SYHVCH04  DIM       20     20       99                                       
SYHVCH05  DIM       20     20       119                                      
SYHVCH06  DIM       20     20       139                                      
SYHVCH07  DIM       20     20       159                                      
SYHVCH08  DIM       20     20       179                                      
SYHVCH09  DIM       20     20       199                                      
SYHVCH10  DIM       20     20       219                                      
SYHVCF01  DIM       8      8        239   Column Field                       
SYHVCF02  DIM       8      8        247                                      
SYHVCF03  DIM       8      8        255                                      
SYHVCF04  DIM       8      8        263                                      
SYHVCF05  DIM       8      8        271                                      
SYHVCF06  DIM       8      8        279                                      
SYHVCF07  DIM       8      8        287                                      
SYHVCF08  DIM       8      8        295                                      
SYHVCF09  DIM       8      8        303                                      
SYHVCF10  DIM       8      8        311                                      
SYHVER01  DIM       8      8        319   External Routine                   
SYHVER02  DIM       8      8        327                                      
SYHVER03  DIM       8      8        335                                      
SYHVER04  DIM       8      8        343                                      
SYHVER05  DIM       8      8        351                                      
SYHVER06  DIM       8      8        359                                      
SYHVER07  DIM       8      8        367                                      
SYHVER08  DIM       8      8        375                                      
SYHVER09  DIM       8      8        383                                      
SYHVER10  DIM       8      8        391                                      
SYHVCW01  FORM      2      2        399   Column Width                       
SYHVCW02  FORM      2      2        401   Column Width                       
SYHVCW03  FORM      2      2        403   Column Width                       
SYHVCW04  FORM      2      2        405   Column Width                       
SYHVCW05  FORM      2      2        407   Column Width                       
SYHVCW06  FORM      2      2        409   Column Width                       
SYHVCW07  FORM      2      2        411   Column Width                       
SYHVCW08  FORM      2      2        413   Column Width                       
SYHVCW09  FORM      2      2        415   Column Width                       
SYHVCW10  FORM      2      2        417   Column Width                       
SYHVCBF   DIM       8      8        419   Call Before Routine                
SYHVSPAR  DIM       42     42       427                                      
.
.End of Record                      469  
.
