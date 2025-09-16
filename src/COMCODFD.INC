. V9.03.001 31/07/2003 LV  Create New                                        
. *----------------------------------------------------------------------
. * Include Name  :   COMCODFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   COMMON CODES TABLE                 
. *
. * File Type     :   SQL
. *
. * File Name     :   comcodaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
COMCODA1   IFILE    SQL, FIXED=121, KEY="U1-2,3-5"                              
COMCODA2   IFILE    SQL, FIXED=121, KEY="U1-2,6-25,3-5"                         
COMCODA3   IFILE    SQL, FIXED=121, KEY="U3-5,1-2"                              
COMCODA4   IFILE    SQL, FIXED=121, KEY="U3-5,6-25,1-2"                         
COMCODA5   IFILE    SQL, FIXED=121, KEY="U1-2,26-29,3-5"                        
COMCODA6   IFILE    SQL, FIXED=121, KEY="U1-2,3-5,30-37"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CMCDTCOD  DIM       2      2        1     TYPE OF CODE TO TABLE              
CMCDACOD  DIM       3      3        3     ACTUAL CODE                        
CMCDDESC  DIM       20     20       6     TABLE DESCRIPTION                  
CMCDHDPE  DIM       4      4        26    HDP EQUIVALENT                     
CMCDFMDT  DIM       8      8        30    EFFECTIVE FROM DATE                
CMCDTODT  DIM       8      8        38    EFFECTIVE TO DATE                  
CMCDASSC  FORM      6      4        46    ASSOCIATED NUMBER                  
CMCDNATE  DIM       4      4        50    NATIONAL EQUIVALENT                
CMCDSI01  DIM       1      1        54    SPECIAL INDIC 1 (CATEG DEPEND)     
CMCDSI02  DIM       1      1        55    SPECIAL INDIC 2 (CATEG DEPEND)     
CMCDSI03  DIM       1      1        56    SPECIAL INDIC 3 (CATEG DEPEND)     
CMCDSI04  DIM       1      1        57    SPECIAL INDIC 4 (CATEG DEPEND)     
CMCDSI05  DIM       1      1        58    SPECIAL INDIC 5 (CATEG DEPEND)     
CMCDSI06  DIM       1      1        59    SPECIAL INDIC 6 (CATEG DEPEND)     
CMCDSI07  DIM       1      1        60    SPECIAL INDIC 7 (CATEG DEPEND)     
CMCDSI08  DIM       1      1        61    SPECIAL INDIC 8 (CATEG DEPEND)     
CMCDSI09  DIM       1      1        62    SPECIAL INDIC 9 (CATEG DEPEND)     
CMCDSI10  DIM       1      1        63    SPECIAL INDIC10 (CATEG DEPEND)     
CMCDSI11  DIM       1      1        64    SPECIAL INDIC11 (CATEG DEPEND)     
CMCDGRPV  DIM       3      3        65    GROUPER VERSION (031 OR 041)       
CMCDDEFT  DIM       1      1        68    DEFAULT CODE (0=NO 1=YES)          
CMCDSECL  DIM       2      2        69    SECURITY LEVEL                     
CMCDSPAR  DIM       50     50       71    SPARE VARIABLE                     
.
.End of Record                      121  
.
