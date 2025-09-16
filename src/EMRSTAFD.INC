. V9.11.001 09/04/2009 SS  Created EMRSTAFD and EMRSTAIO CAR ??????          
. *----------------------------------------------------------------------
. * Include Name  :   EMRSTAFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Emergency Statistic Table          
. *
. * File Type     :   SQL
. *
. * File Name     :   emrstaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRSTAA1   IFILE    SQL, FIXED=50, KEY="U1-2,3-5,6-13"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMSTCATA  DIM       2      2        1     CATEGORY                           
EMSTCODE  DIM       3      3        3     USER DEFINED CODE                  
EMSTDATE  DIM       8      8        6     DATE (CCYYMMDD)                    
EMSTNUMB  FORM      6      4        14    NUMBER PER PERIOD                  
EMSTSPAR  DIM       32     32       18    SPARE                              
.
.End of Record                      50   
.
