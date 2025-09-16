. V11.01.01 21/07/2021 PVL C-0909175 BBSW Batch Header FD created               
. *----------------------------------------------------------------------
. * Include Name  :   WEBBBBFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices BBSW Batch Header      
. *
. * File Type     :   SQL
. *
. * File Name     :   webbbbaf.dat
. *
. * Index Values  :   KEY8    KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBBBBA1   IFILE    SQL, FIXED=210, KEY="U1-8"
WEBBBBA2   IFILE    SQL, FIXED=210, KEY="U21-28,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBBBBTHN  DIM       8      8        1     Batch No                           
WBBBBTHL  FORM      12.2   8        9     Batch Total                        
WBBBTRIB  FORM      6      4        17    Total records in batch             
WBBBDTBC  DIM       8      8        21    Date batch created (ccyymmdd)      
WBBBTMBC  DIM       8      8        29    Time batch created (hh:mm:ss)      
WBBBOPER  DIM       10     10       37    Web User Id                        
WBBBEFNM  DIM       18     18       47    Extract Filename                   
WBBBLOCN  DIM       65     65       65    Location Id                        
WBBBSNID  DIM       60     60       130   Sender Id (email)                  
WBBBSPAR  DIM       20     20       190   Spare variable                     
.
.End of Record                      210  
.
