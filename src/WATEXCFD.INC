. V5.09.001 26/07/2000 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   WATEXCFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Analysis Extract Level 3           
. *
. * File Type     :   SQL
. *
. * File Name     :   watexcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATEXCA1   IFILE    SQL, FIXED=176, KEY="U1-10,11-20,21-30"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTXCNLV1  DIM       10     10       1     Level 1 Analysis Code              
WTXCNLV2  DIM       10     10       11    Level 2 Analysis Code              
WTXCNLV3  DIM       10     10       21    Level 3 Analysis Code              
WTXCNLEP  FORM      6      4        31    Total Number of Episodes           
WTXCNTL1  FORM      12.4   9        35    Analysis Measure 1 Total           
WTXCNMN1  FORM      12.2   8        44    Analysis Measure 1 Minimum         
WTXCNMX1  FORM      12.2   8        52    Analysis Measure 1 Maximum         
WTXCNSV1  FORM      12.4   9        60    Analysis Measure 1 Stat Variance   
WTXCNTL2  FORM      12.4   9        69    Analysis Measure 2 Total           
WTXCNMN2  FORM      12.2   8        78    Analysis Measure 2 Minimum         
WTXCNMX2  FORM      12.2   8        86    Analysis Measure 2 Maximum         
WTXCNSV2  FORM      12.4   9        94    Analysis Measure 2 Stat Variance   
WTXCNTL3  FORM      12.4   9        103   Analysis Measure 3 Total           
WTXCNMN3  FORM      12.2   8        112   Analysis Measure 3 Minimum         
WTXCNMX3  FORM      12.2   8        120   Analysis Measure 3 Maximum         
WTXCNSV3  FORM      12.4   9        128   Analysis Measure 3 Stat Variance   
WTXCNSPA  DIM       39     39       137   Spare                              
.
.End of Record                      176  
.
