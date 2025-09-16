. V5.09.001 31/08/2000 P.D Addded Analysis Measure Totals   
. *----------------------------------------------------------------------
. * Include Name  :   WATEPSFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List Patient Extract Table 
. *
. * File Type     :   SQL
. *
. * File Name     :   watepsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATEPSA1   IFILE    SQL, FIXED=112, KEY="U1-4,5-12,13-21,22-23"                 
WATEPSA2   IFILE    SQL, FIXED=112, KEY="U24-33,34-43,44-53,54-63,1-4,5-12,13-21,22-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTEPEID   DIM       4      4        1     Extract ID                         
WTEPURN   DIM       8      8        5     U/R Number                         
WTEPPRO   DIM       9      9        13    Procedure                          
WTEPCNT   DIM       2      2        22    Count                              
WTEPLEV1  DIM       10     10       24    Summary Level 1                    
WTEPLEV2  DIM       10     10       34    Summary Level 2                    
WTEPLEV3  DIM       10     10       44    Summary Level 3                    
WTEPLEV4  DIM       10     10       54    Summary Level 4                    
WTEPANL1  FORM      12.4   9        64    Analysis Measure 1 Total           
WTEPANL2  FORM      12.4   9        73    Analysis Measure 2 Total           
WTEPANL3  FORM      12.4   9        82    Analysis Measure 3 Total           
WTEPDEL   DIM       1      1        91    Deleted from Extract 0=No 1=Yes    
WTEPSPA   DIM       20     20       92    Spare                              
.
.End of Record                      112  
.
