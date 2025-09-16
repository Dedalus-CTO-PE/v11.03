. *----------------------------------------------------------------------
. * Include Name  :   FMSNRIFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Template Reporting Totals
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnriXX.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRIA1   IFILE    SQL, FIXED=187, KEY="U1-3,4-15,16-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNIREPT  DIM       3      3        1     Template Reporting Code            
FMNIACCT  DIM       12     12       4     Account                            
FMNITYPE  DIM       1      1        16    0=Act,1=Last Act,2=Bud,3=Alt Bud   
FMNIPEBR  FORM      12.5   10       17    Brought Forward                    
FMNIPECE  FORM      12.5   10       27    Committed Expenditure              
FMNIPE01  FORM      12.5   10       37    Period 01                          
FMNIPE02  FORM      12.5   10       47    Period 02                          
FMNIPE03  FORM      12.5   10       57    Period 03                          
FMNIPE04  FORM      12.5   10       67    Period 04                          
FMNIPE05  FORM      12.5   10       77    Period 05                          
FMNIPE06  FORM      12.5   10       87    Period 06                          
FMNIPE07  FORM      12.5   10       97    Period 07                          
FMNIPE08  FORM      12.5   10       107   Period 08                          
FMNIPE09  FORM      12.5   10       117   Period 09                          
FMNIPE10  FORM      12.5   10       127   Period 10                          
FMNIPE11  FORM      12.5   10       137   Period 11                          
FMNIPE12  FORM      12.5   10       147   Period 12                          
FMNIPE13  FORM      12.5   10       157   Period 13                          
FMNISPAR  DIM       20     20       167   Spare                              
.
.End of Record                      187  
.
