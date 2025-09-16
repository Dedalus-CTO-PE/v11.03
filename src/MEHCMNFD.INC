. V10.02.01 20/09/2011 JT C-242151 New template for MH Comments/Document name   
. *----------------------------------------------------------------------
. * Include Name  :   MEHCMNFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   Mental Health LS Comments file     
. *
. * File Type     :   SQL
. *
. * File Name     :   mehcmnaf.dat
. *
. * Index Values  :   KEY38                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHCMNA1   IFILE    SQL, FIXED=291, KEY="U1-8,9-16,17-24,25-32,33-35,36-38"     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHCMURNO  DIM       8      8        1     U/R Number                         
MHCMUNIQ  DIM       8      8        9     Unique Number                      
MHCMSDAT  DIM       8      8        17    Start Date (ccyymmdd)              
MHCMSTIM  DIM       8      8        25    Start Time (hh:mm:ss)              
MHCMCTYP  DIM       3      3        33    Comment Type                       
.                                         001 - Legal Status Document Name     
MHCMLINE  DIM       3      3        36    Line No                            
MHCMDATA  DIM       100    100      39    Line                               
MHCMCDAT  DIM       8      8        139   Date Record Created (CCYYMMDD)     
MHCMCTIM  DIM       8      8        147   Time Record Created (HH:MM:SS)     
MHCMCUID  DIM       10     10       155   WEB User ID Created (websecaf)     
MHCMUDAT  DIM       8      8        165   Date Record Updated (CCYYMMDD)     
MHCMUTIM  DIM       8      8        173   Time Record Updated (HH:MM:SS)     
MHCMUUID  DIM       10     10       181   WEB User ID Updated (websecaf)     
MHCMSPAR  DIM       100    100      191   Spare                              
.
.End of Record                      291  
.
