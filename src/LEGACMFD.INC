. V10.06.01 15/09/2015 SA C-321333 New File for legacy alternate comments       
. *----------------------------------------------------------------------
. * Include Name  :   LEGACMFD.INC
. *
. * Function      :   File Def'n Include for Legacy Data System                 
. *                   Legacy Alternate Comment File      
. *
. * File Type     :   SQL
. *
. * File Name     :   legacmaf.dat
. *
. * Index Values  :   KEY35                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
LEGACMA1   IFILE    SQL, FIXED=156, KEY="U1-8,9-16,17-24,25-32,33-35"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
LGACURNO  DIM       8      8        1     Patient U/R (patma1af)             
LGACADAT  DIM       8      8        9     Event Date (ccyymmdd)              
LGACATIM  DIM       8      8        17    Event Time (hh:mm:ss)              
LGACEVNO  DIM       8      8        25    Event Number                       
LGACLINE  DIM       3      3        33    Line Number                        
LGACCOMM  DIM       70     70       36    Comment Line                       
LGACSPAR  DIM       50     50       106   Spare Variable                     
.
.End of Record                      156  
.
