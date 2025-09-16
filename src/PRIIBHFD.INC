. V10.08.01 14/06/2016 SA C-0294177 Create File Definition                      
. *----------------------------------------------------------------------
. * Include Name  :   PRIIBHFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   IMC Batch Header                   
. *
. * File Type     :   SQL
. *
. * File Name     :   priibhaf.dat
. *
. * Index Values  :   KEY8    KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIIBHA1   IFILE    SQL, FIXED=160, KEY="U1-8"                                  
PRIIBHA2   IFILE    SQL, FIXED=160, KEY="U27-34,1-8"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRIBBTHN  DIM       8      8        1     Batch no                           
PRIBHFND  DIM       6      6        9     Health Fund                        
PRIBBHTL  FORM      12.2   8        15    Batch total                        
PRIBTRIB  FORM      6      4        23    Total records in batch             
PRIBDTBC  DIM       8      8        27    Date batch created (ccyymmdd)      
PRIBTMBC  DIM       8      8        35    Time batch created (hh:mm:ss)      
PRIBOPER  DIM       10     10       43    Web User Id                        
DPIEBEET  DIM       1      1        53    Eclipse extract type               
.                                         0 - Health Fund                      
.                                         1 - Medicare                         
PRIBEFNM  DIM       18     18       54    Extract Filename                   
PRIBLOCN  DIM       8      8        72    Location Id                        
PRIBSNID  DIM       60     60       80    Sender Id (email)                  
PRIBSPAR  DIM       20     20       140   Spare variable                     
.
.End of Record                      160  
.
. Redefine FORM fields from key
. -----------------------------
PRIBEETP  FORM      1
+
