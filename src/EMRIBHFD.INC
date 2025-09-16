. V10.13.01 23/08/2018 PV C-0859742 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   EMRIBHFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Store and Forward Batch Header     
. *
. * File Type     :   SQL
. *
. * File Name     :   emribhaf.dat
. *
. * Index Values  :   KEY8    KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRIBHA1   IFILE    SQL, FIXED=153, KEY="U1-8"
EMRIBHA2   IFILE    SQL, FIXED=153, KEY="U21-28,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMIBBTHN  DIM       8      8        1     Batch No                           
EMIBBHTL  FORM      12.2   8        9     Batch Total                        
EMIBTRIB  FORM      6      4        17    Total records in batch             
EMIBDTBC  DIM       8      8        21    Date batch created (ccyymmdd)      
EMIBTMBC  DIM       8      8        29    Time batch created (hh:mm:ss)      
EMIBOPER  DIM       10     10       37    Web User Id                        
EMIBEFNM  DIM       18     18       47    Extract Filename                   
EMIBLOCN  DIM       8      8        65    Location Id                        
EMIBSNID  DIM       60     60       73    Sender Id (email)                  
EMIBSPAR  DIM       20     20       133   Spare variable                     
.
.End of Record                      153  
.
