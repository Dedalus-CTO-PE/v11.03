. V5.09.001 26/07/2000 P.D Created FD                                      
. *----------------------------------------------------------------------
. * Include Name  :   WATEXBFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Extract Level 2                    
. *
. * File Type     :   SQL
. *
. * File Name     :   watexbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATEXBA1   IFILE    SQL, FIXED=166, KEY="U1-10,11-20"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTXBNLV1  DIM       10     10       1     Level 1 Analysis Code              
WTXBNLV2  DIM       10     10       11    Level 2 Analysis Code              
WTXBNLEP  FORM      6      4        21    Total Number of Episodes           
WTXBNTL1  FORM      12.4   9        25    Analysis Measure 1 Total           
WTXBNMN1  FORM      12.2   8        34    Analysis Measure 1 Minimum         
WTXBNMX1  FORM      12.2   8        42    Analysis Measure 1 Maximum         
WTXBNSV1  FORM      12.4   9        50    Analysis Measure 1 Stat Variance   
WTXBNTL2  FORM      12.4   9        59    Analysis Measure 2 Total           
WTXBNMN2  FORM      12.2   8        68    Analysis Measure 2 Minimum         
WTXBNMX2  FORM      12.2   8        76    Analysis Measure 2 Maximum         
WTXBNSV2  FORM      12.4   9        84    Analysis Measure 2 Stat Variance   
WTXBNTL3  FORM      12.4   9        93    Analysis Measure 3 Total           
WTXBNMN3  FORM      12.2   8        102   Analysis Measure 3 Minimum         
WTXBNMX3  FORM      12.2   8        110   Analysis Measure 3 Maximum         
WTXBNSV3  FORM      12.4   9        118   Analysis Measure 3 Stat Variance   
WTXBNSPA  DIM       39     39       127   Spare                              
.
.End of Record                      166  
.
