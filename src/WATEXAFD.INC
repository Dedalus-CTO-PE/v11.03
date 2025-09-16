. V5.09.001 26/07/2000 P.D Created FD 
. *----------------------------------------------------------------------
. * Include Name  :   WATEXAFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Extract Level 1 Summary            
. *
. * File Type     :   SQL
. *
. * File Name     :   watexaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATEXAA1   IFILE    SQL, FIXED=156, KEY="U1-10"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTXANLV1  DIM       10     10       1     Level 1 Analysis Code              
WTXANLEP  FORM      6      4        11    Total Number of Episodes           
WTXANTL1  FORM      12.4   9        15    Analysis Measure 1 Total           
WTXANMN1  FORM      12.2   8        24    Analysis Measure 1 Minimum         
WTXANMX1  FORM      12.2   8        32    Analysis Measure 1 Maximum         
WTXANSV1  FORM      12.4   9        40    Analysis Measure 1 Stat Variance   
WTXANTL2  FORM      12.4   9        49    Analysis Measure 2 Total           
WTXANMN2  FORM      12.2   8        58    Analysis Measure 2 Minimum         
WTXANMX2  FORM      12.2   8        66    Analysis Measure 2 Maximum         
WTXANSV2  FORM      12.4   9        74    Analysis Measure 2 Stat Variance   
WTXANTL3  FORM      12.4   9        83    Analysis Measure 3 Total           
WTXANMN3  FORM      12.2   8        92    Analysis Measure 3 Minimum         
WTXANMX3  FORM      12.2   8        100   Analysis Measure 3 Maximum         
WTXANSV3  FORM      12.4   9        108   Analysis Measure 3 Stat Variance   
WTXANSPA  DIM       39     39       117   Spare                              
.
.End of Record                      156  
.
