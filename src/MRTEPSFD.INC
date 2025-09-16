. V5.09.002 17/10/2000 kcn Added Index 1                                     
. *----------------------------------------------------------------------
. * Include Name  :   MRTEPSFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Medical Records Extract Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtepsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTEPSA1   IFILE    SQL, FIXED=101, KEY="U1-4,5-12"                             
MRTEPSA2   IFILE    SQL, FIXED=101, KEY="U13-22,23-32,33-42,43-52,1-4,5-12"     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MREPEID   DIM       4      4        1     Extract ID                         
MREPVIS   DIM       8      8        5     Visit Number                       
MREPLEV1  DIM       10     10       13    Summary Level 1                    
MREPLEV2  DIM       10     10       23    Summary Level 2                    
MREPLEV3  DIM       10     10       33    Summary Level 3                    
MREPLEV4  DIM       10     10       43    Summary Level 4                    
MREPANL1  FORM      12.4   9        53    Analysis Measure 1 Total           
MREPANL2  FORM      12.4   9        62    Analysis Measure 2 Total           
MREPANL3  FORM      12.4   9        71    Analysis Measure 3 Total           
MREPDEL   DIM       1      1        80    Deleted From Extract (0=No 1=Yes)  
MREPSPAR  DIM       20     20       81    Spare                              
.
.End of Record                      101  
.
