. V10.13.01 26/09/2018 PVL C-0859743 Created File Definition                    
. *----------------------------------------------------------------------
. * Include Name  :   OUTIBHFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Bulk Billing Batch Header          
. *
. * File Type     :   SQL
. *
. * File Name     :   outibhaf.dat
. *
. * Index Values  :   KEY8    KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTIBHA1   IFILE    SQL, FIXED=153, KEY="U1-8"
OUTIBHA2   IFILE    SQL, FIXED=153, KEY="U21-28,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTIBBTHN  DIM       8      8        1     Batch No                           
OTIBBHTL  FORM      12.2   8        9     Batch Total                        
OTIBTRIB  FORM      6      4        17    Total records in batch             
OTIBDTBC  DIM       8      8        21    Date batch created (ccyymmdd)      
OTIBTMBC  DIM       8      8        29    Time batch created (hh:mm:ss)      
OTIBOPER  DIM       10     10       37    Web User Id                        
OTIBEFNM  DIM       18     18       47    Extract Filename                   
OTIBLOCN  DIM       8      8        65    Location Id                        
OTIBSNID  DIM       60     60       73    Sender Id (email)                  
OTIBSPAR  DIM       20     20       133   Spare variable                     
.
.End of Record                      153  
.
