. V6.00.001 29/12/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSCODFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Codes Table                  
. *
. * File Type     :   SQL
. *
. * File Name     :   amscodaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSCODA1   IFILE    SQL, FIXED=123, KEY="U1-2,3-5"                              
AMSCODA2   IFILE    SQL, FIXED=123, KEY="U3-5,1-2"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMCDCAT   DIM       2      2        1     Category                           
AMCDCOD   DIM       3      3        3     Code                               
AMCDDES   DIM       35     35       6     Description                        
AMCDUR1   DIM       30     30       41    User Def Ref 1                     
AMCDUR2   DIM       30     30       71    User Def Ref 2                     
AMCDUY1   DIM       1      1        101   User Def Y/N 1                     
AMCDUY2   DIM       1      1        102   User Def Y/N 2                     
AMCDSPA   DIM       20     20       103   Spare                              
.
.End of Record                      123  
.
