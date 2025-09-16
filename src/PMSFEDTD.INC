. *----------------------------------------------------------------------
. * Include Name  :   PMSFEDTD.INC
. *
. * Function      :   CGI variables for PMSFEDFD - pmsfedaf.dat                 
. *----------------------------------------------------------------------
. *
. * Modifications :   
. *                   V11.02.01 11/02/2022 J.Tan    TSK 0910723 
. *                   Changed MISAMT to DIM15 
. *----------------------------------------------------------------------
. *                   V9.09.02 29/11/2007 Peter Vela CAR 151897
. *                   Added Fee Estimation Comment Lines 1 to 5
. *                   V9.09.01 28/11/2007 J.Tan CAR 151897
. *                   Added Bed types and No.of days
. *                   V9.09.02 17/04/2008 J.Tan CAR 164036
. *                   Fixed Bed types to DIM3 and No.of days DIM5
. *                   V9.10.01 30/06/2008 Ebon Clements CAR 160213
. *                   Added PMSFD026 and PMSFD027
. *                   V9.10.02 16/04/2010 J.Tan    CAR 188189
. *                   Added Doctor code
. *                  V10.00.01 08/08/2010  Davin   CAR 221046
. *                  Added misamt01-misamt06
. *                  V10.03.01 16/08/2013  Davin   CAR 289111
. *                  Changed pmsfd026 to be numeric (fund excess)
. *                  V10.03.02 25/09/2013  J.Tan   CAR 251004
. *                  Added PMSFD029 for 'Adm.type used for Accommodation charge
. *                  V10.08.01 11/04/2016  J.Tan   CAR 313842
. *                  Added PMSFD030 for 'Use Basic Cover rate'
. *                  V10.11.01 04/01/2017  J.Tan   TSK 0844301
. *                  Added array of items variables
. *
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
PMSFD001  DIM       12     Quote Number                       
PMSFD002  DIM       8      UR Number                          
PMSFD003  DIM       5      Number of Nights Stay              
PMSFD004  DIM       8      Admission Date                     
PMSFD005  DIM       6      Health Fund                        
PMSFD006  DIM       8      Health Fund Table                  
PMSFD007  DIM       9      Casemix Code                       
PMSFD008  DIM       3      Claim Type                         
PMSFD009  DIM       3      Bed Type                           
PMSFD010  DIM       3      Admission Type                     
PMSFD011  DIM       1      Accomodation GST 0=No 1=Yes        
PMSFD012  DIM       3      Bed Type 2
PMSFD013  DIM       3      Bed Type 3
PMSFD014  DIM       3      Bed Type 4
PMSFD015  DIM       3      Bed Type 5
PMSFD016  DIM       5      No.of Days Stay 2
PMSFD017  DIM       5      No.of Days Stay 3
PMSFD018  DIM       5      No.of Days Stay 4
PMSFD019  DIM       5      No.of Days Stay 5
PMSFD021  DIM       70     Comments Line 1
PMSFD022  DIM       70     Comments Line 2
PMSFD023  DIM       70     Comments Line 3
PMSFD024  DIM       70     Comments Line 4
PMSFD025  DIM       70     Comments Line 5
PMSFD026  FORM      12.2   Excess
PMSFD027  DIM       8      Expiry Date
PMSFD028  DIM       10     Doctor Code
PMSFD029  DIM       1      Keyin Adm.type - Use for Accommodation charge
PMSFD030  DIM       1      Use Basic Cover Rate
.
MISCHG     DIM       9[99]
.MISCHG01   DIM       9     
.MISCHG02   DIM       9     
.MISCHG03   DIM       9     
.MISCHG04   DIM       9     
.MISCHG05   DIM       9     
.MISCHG06   DIM       9     
.
MISQUA     FORM      2[99]
.MISQUA01   FORM      2     
.MISQUA02   FORM      2     
.MISQUA03   FORM      2     
.MISQUA04   FORM      2     
.MISQUA05   FORM      2     
.MISQUA06   FORM      2     
.
GSTAPM     DIM       1[99]
.GSTAPM01   DIM       1
.GSTAPM02   DIM       1
.GSTAPM03   DIM       1
.GSTAPM04   DIM       1
.GSTAPM05   DIM       1
.GSTAPM06   DIM       1
.
GSTCOM     DIM       6[99]
.GSTCOM01   DIM       6
.GSTCOM02   DIM       6
.GSTCOM03   DIM       6
.GSTCOM04   DIM       6
.GSTCOM05   DIM       6
.GSTCOM06   DIM       6
.
THEFEE     DIM       9[99]
.THEFEE01   DIM       9
.THEFEE02   DIM       9
.THEFEE03   DIM       9
.THEFEE04   DIM       9
.THEFEE05   DIM       9
.THEFEE06   DIM       9
.
THEQUA     FORM      2[99]
.THEQUA01   FORM      2     
.THEQUA02   FORM      2     
.THEQUA03   FORM      2     
.THEQUA04   FORM      2     
.THEQUA05   FORM      2     
.THEQUA06   FORM      2     
.
GSTAPL     DIM       1[99]
.GSTAPL01   DIM       1
.GSTAPL02   DIM       1
.GSTAPL03   DIM       1
.GSTAPL04   DIM       1
.GSTAPL05   DIM       1
.GSTAPL06   DIM       1
.
GSTCOD     DIM       6[99]
.GSTCOD01   DIM       6
.GSTCOD02   DIM       6
.GSTCOD03   DIM       6
.GSTCOD04   DIM       6
.GSTCOD05   DIM       6
.GSTCOD06   DIM       6
.
MISAMT     DIM       15[99]
.MISAMT01   FORM      12.2  
.MISAMT02   FORM      12.2  
.MISAMT03   FORM      12.2  
.MISAMT04   FORM      12.2  
.MISAMT05   FORM      12.2  
.MISAMT06   FORM      12.2  
.
