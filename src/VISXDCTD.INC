. *----------------------------------------------------------------------
. * Include Name  :   VISXDCTD.INC
. *
. * Function      :   CGI variables for VISXDCTD - Visit Extra Data Table
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V11.02.02  24/10/2022  Davin         TSK 0923862
.             Added VSTYP003 - Amount To Be Invoiced
.  V11.02.01  07/04/2022  Ebon Clements TSK 0915984
.             Added VSTYP002 - Discharge Details
.  V10.10.01  02/05/2017  Peter Vela    TSK 0833345
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
VSXDC001  DIM       8      Visit Number                       
VSXDC002  DIM       3      Type of Data Collection            
VSXDC003  DIM       10     Value 1                            
VSXDC004  DIM       10     Value 2                            
VSXDC005  DIM       10     Value 3                            
VSXDC006  DIM       10     Value 4                            
VSXDC007  DIM       10     Value 5                            
VSXDC008  DIM       10     Value 6                            
VSXDC009  DIM       10     Value 7                            
VSXDC010  DIM       10     Value 8                            
VSXDC011  DIM       10     Value 9                            
VSXDC012  DIM       10     Value 10                           
VSXDC013  DIM       3      Coded Field 1                      
VSXDC014  DIM       3      Coded Field 2                      
VSXDC015  DIM       3      Coded Field 3                      
VSXDC016  DIM       3      Coded Field 4                      
VSXDC017  DIM       3      Coded Field 5                      
VSXDC018  DIM       3      Coded Field 6                      
VSXDC019  DIM       3      Coded Field 7                      
VSXDC020  DIM       3      Coded Field 8                      
VSXDC021  DIM       3      Coded Field 9                      
VSXDC022  DIM       3      Coded Field 10                     
VSXDC023  DIM       80     Text 1                             
VSXDC024  DIM       80     Text 2                             
VSXDC025  DIM       80     Text 3                             
VSXDC026  DIM       80     Text 4                             
VSXDC027  DIM       80     Text 5                             
VSXDC028  DIM       80     Text 6                             
VSXDC029  DIM       80     Text 7                             
VSXDC030  DIM       80     Text 8                             
VSXDC031  DIM       80     Text 9                             
VSXDC032  DIM       80     Text 10                            
VSXDC033  DIM       1      Y/N 1 (0 = No, 1 = Yes, 2 = N/A)   
VSXDC034  DIM       1      Y/N 2 (0 = No, 1 = Yes, 2 = N/A)   
VSXDC035  DIM       1      Y/N 3 (0 = No, 1 = Yes, 2 = N/A)   
VSXDC036  DIM       1      Y/N 4 (0 = No, 1 = Yes, 2 = N/A)   
VSXDC037  DIM       1      Y/N 5 (0 = No, 1 = Yes, 2 = N/A)   
VSXDC038  DIM       1      Y/N 6 (0 = No, 1 = Yes, 2 = N/A)   
VSXDC039  DIM       1      Y/N 7 (0 = No, 1 = Yes, 2 = N/A)   
VSXDC040  DIM       1      Y/N 8 (0 = No, 1 = Yes, 2 = N/A)   
VSXDC041  DIM       1      Y/N 9 (0 = No, 1 = Yes, 2 = N/A)   
VSXDC042  DIM       1      Y/N 10 (0 = No, 1 = Yes, 2 = N/A)  
VSXDC043  DIM       8      User Defined Date Field 1          
VSXDC044  DIM       8      User Defined Time Field 1          
VSXDC045  DIM       8      User Defined Date Field 2          
VSXDC046  DIM       8      User Defined Time Field 2          
VSXDC047  DIM       8      User Defined Date Field 3          
VSXDC048  DIM       8      User Defined Time Field 3          
VSXDC049  DIM       8      User Defined Date Field 4          
VSXDC050  DIM       8      User Defined Time Field 4          
VSXDC051  DIM       8      User Defined Date Field 5          
VSXDC052  DIM       8      User Defined Time Field 5          
VSXDC053  DIM       8      User Defined Date Field 6          
VSXDC054  DIM       8      User Defined Time Field 6          
VSXDC055  DIM       8      User Defined Date Field 7          
VSXDC056  DIM       8      User Defined Time Field 7          
VSXDC057  DIM       8      User Defined Date Field 8          
VSXDC058  DIM       8      User Defined Time Field 8          
VSXDC059  DIM       8      User Defined Date Field 9          
VSXDC060  DIM       8      User Defined Time Field 9          
VSXDC061  DIM       8      User Defined Date Field 10         
VSXDC062  DIM       8      User Defined Time Field 10         
VSXDC063  DIM       1      Deleted Record 0=No,1=Strikethrough
VSXDC064  DIM       10     User who created record            
VSXDC065  DIM       8      Date Record Created                
VSXDC066  DIM       8      Time Record Created                
VSXDC067  DIM       10     User Who Last Updated Record       
VSXDC068  DIM       8      Date record last updated           
VSXDC069  DIM       8      Time record last updated           
VSXDC070  DIM       10     User who completed Data collection 
VSXDC071  DIM       8      Date data collection completed     
VSXDC072  DIM       8      Time data collection completed     
.
VSTYPIND  FORM      3       Type index (1)
VSCODIND  FORM      1       Code Field index (1-10)
VSCODVAL  DIM       3       Coded Field value
VSTXTIND  FORM      1       Text Field index (1-10)
VSTXTVAL  DIM      80       Text Field value
VSVALIND  FORM      1       Value Field index (1-10)
VSVALVAL  DIM      10       Value Field value
VSYENIND  FORM      1       Yes No Field index (1-10)
VSYENVAL  DIM       1       Yes No Field value
VSDATIND  FORM      1       User Defined Date Field index (1-10)
VSDATVAL  DIM       8       User Defined Date value
VSTIMIND  FORM      1       User Defined Time Field index (1-10)
VSTIMVAL  DIM       8       User Defined Time value
.
VSTYP001  INIT      "001"   Data Type 1 - EMR Visit Alcohol Data
VSTYP002  INIT      "002"   Data Type 2 - Discharge Details
VSTYP003  INIT      "003"   Data Type 3 - Amount To Be Invoiced
VSTYP004  INIT      "004"   Data Type 4 - AMHACC End Class Code
