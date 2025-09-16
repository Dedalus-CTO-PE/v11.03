. V10.09.02 28/02/2017 JT C-0829089 Added Lot/Serial number & Changed Indexes   
. V10.09.01 18/01/2017 SA C-0829089 Added OPTIBCOD & OPTIAIMP                   
. V9.09.001 01/10/2007 EC  Added OPTIREGI CAR 150315                            
. V9.03.001 07/06/2004 SL  Added STATUS field                                   
. *----------------------------------------------------------------------
. * Include Name  :   OPRTHIFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Theatre Implants Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   oprthiaf.dat
. *
. * Index Values  :   KEY75   KEY75   KEY75   KEY76                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRTHIA1   IFILE    SQL, FIXED=306, KEY="U1-15,208-267"
OPRTHIA2   IFILE    SQL, FIXED=306, KEY="D16-75,1-15"
OPRTHIA3   IFILE    SQL, FIXED=306, KEY="U208-267,1-15"
OPRTHIA4   IFILE    SQL, FIXED=306, KEY="U268-268,208-267,1-15"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPTICODE  DIM       15     15       1     Implant Code/EAN No.               
OPTIDESC  DIM       60     60       16    Description                        
OPTIMCHG  DIM       9      9        76    Miscellaneous Charge Code          
OPTITYIM  DIM       3      3        85    Type of Implant (Category OW)      
OPTIMANU  DIM       60     60       88    Manufacturer                       
OPTISIZE  DIM       10     10       148   Size                               
OPTISUPP  DIM       30     30       158   Supplied Name                      
OPTICOST  FORM      12.2   8        188   Cost                               
OPTICOPC  DIM       10     10       196   Commonwealth Prosthetic Code       
OPTISTAT  DIM       1      1        206   Status  1=Inactive                 
OPTIREGI  DIM       1      1        207   Prompt For Joint Registry Info     
.                                         Blank or 0 = No                      
.                                         1 = Yes                              
OPTIBCOD  DIM       60     60       208   Barcode                            
OPTIAIMP  DIM       1      1        268   Ad-hoc Implant                     
.                                         Blank or 0 = No                      
.                                         1 = Yes                              
OPTILOTN  DIM       20     20       269   Lot/Serial Number                  
OPTISPAR  DIM       17     17       289   Spare variable                     
.
.End of Record                      306  
.
