. V5.09.001 26/07/2000 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   WATEXDFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Analysis Extract Level 4           
. *
. * File Type     :   SQL
. *
. * File Name     :   watexdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATEXDA1   IFILE    SQL, FIXED=186, KEY="U1-10,11-20,21-30,31-40"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTXDNLV1  DIM       10     10       1     Level 1 Analysis Code              
WTXDNLV2  DIM       10     10       11    Level 2 Analysis Code              
WTXDNLV3  DIM       10     10       21    Level 3 Analysis Code              
WTXDNLV4  DIM       10     10       31    Level 4 Analysis Code              
WTXDNLEP  FORM      6      4        41    Total Number of Episodes           
WTXDNTL1  FORM      12.4   9        45    Analysis Measure 1 Total           
WTXDNMN1  FORM      12.2   8        54    Analysis Measure 1 Minimum         
WTXDNMX1  FORM      12.2   8        62    Analysis Measure 1 Maximum         
WTXDNSV1  FORM      12.4   9        70    Analysis Measure 1 Stat Variance   
WTXDNTL2  FORM      12.4   9        79    Analysis Measure 2 Total           
WTXDNMN2  FORM      12.2   8        88    Analysis Measure 2 Minimum         
WTXDNMX2  FORM      12.2   8        96    Analysis Measure 2 Maximum         
WTXDNSV2  FORM      12.4   9        104   Analysis Measure 2 Stat Variance   
WTXDNTL3  FORM      12.4   9        113   Analysis Measure 3 Total           
WTXDNMN3  FORM      12.2   8        122   Analysis Measure 3 Minimum         
WTXDNMX3  FORM      12.2   8        130   Analysis Measure 3 Maximum         
WTXDNSV3  FORM      12.4   9        138   Analysis Measure 3 Stat Variance   
WTXDNSPA  DIM       39     39       147   Spare                              
.
.End of Record                      186  
.
