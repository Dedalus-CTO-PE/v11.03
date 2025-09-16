. V10.08.00 01/06/2016 DN C-0294154 Added 'Mapped Value'. Reduced spare         
. V10.07.00 06/01/2016 DN C-294154 Created File                                 
. *----------------------------------------------------------------------
. * Include Name  :   PMSSRMFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   SMS Response Mapping               
. *
. * File Type     :   SQL
. *
. * File Name     :   pmssrmaf.dat
. *
. * Index Values  :   KEY60   KEY60                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSSRMA1   IFILE    SQL, FIXED=164, KEY="U1-10,11-60"                           
PMSSRMA2   IFILE    SQL, FIXED=164, KEY="U11-60,1-10"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSRMVAR  DIM       10     10       1     Mapped webPAS Variable (Yes & No)  
PMSRINBS  DIM       50     50       11    Inbound SMS Value                  
PMSRMVAL  DIM       1      1        61    Mapped Value                       
.                                         0 - No                               
.                                         1 - Yes                              
.                                         2 - Unknown                          
PMSRACTV  DIM       1      1        62    Active                             
.                                         0=No  1=Yes                          
PMSRWEBC  DIM       10     10       63    Web User ID Creator (websecaf)     
PMSRCDTE  DIM       8      8        73    Date Record Created (ccyymmdd)     
PMSRCTIM  DIM       8      8        81    Time Record Created (hh:mm:ss)     
PMSRWEBU  DIM       10     10       89    Web User ID Updated (websecaf)     
PMSRUDTE  DIM       8      8        99    Date Record Updated (ccyymmdd)     
PMSRUTIM  DIM       8      8        107   Time Record Updated (hh:mm:ss)     
PMSRSPAR  DIM       49     49       115   Spare                              
.
.End of Record                      164  
.
