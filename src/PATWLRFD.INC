. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
. *----------------------------------------------------------------------
. * Include Name  :   PATWLRFD.INC
. *
. * Function      :   File Def'n Include for Patient                        
. *                   Ward Inpatient Rates               
. *
. * File Type     :   SQL
. *
. * File Name     :   patwlraf.dat
. * Audit Name    :   pataudwr.dat
. *
. * Keys          :   KEY19 KEY12
. *
. * Modifications :   
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
PATAUDWR   IFILE    SQL, FIXED=109, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTWRAUDD  DIM       8      8        1     Date of Change
PTWRAUDT  DIM       8      8        9     Time of Change
PTWRAUDP  DIM       2      2        17    Port
PTWRAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
PTWRAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
PTWRAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
PATWLRA1   IFILE    SQL, FIXED=83, KEY="U1-3,4-6,7-9,10-12"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTWRRESI  DIM       3      3        1     Resident Status (Cat T )           
PTWRCOMP  DIM       3      3        4     Compensation Eligibility (Cat CL)  
PTWRWARD  DIM       3      3        7     Ward Code                          
PTWRDEPT  DIM       3      3        10    Department (Cat A )                
PTWRPRDY  FORM     12.2    8        13    Charge per Day                     
PTWRPDES  DIM       20     20       21    Charge Description                 
PTWREXDY  FORM     12.2    8        41    Extra Charge Per Day               
PTWREDES  DIM       20     20       49    Extra Charge Description           
PTWRSPAR  DIM       14     14       69    Spare                              
.
.End of Record                      83   
.
PTWRPDAY  FORM      5.2  
PTWREDAY  FORM      5.2 
