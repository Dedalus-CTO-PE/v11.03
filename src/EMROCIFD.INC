. V10.09.01 28/11/2016 DS C-0814745 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   EMROCIFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Other Clinical Information (New)   
. *
. * File Type     :   SQL
. *
. * File Name     :   emrociaf.dat
. *
. * Index Values  :   KEY10                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMROCIA1   IFILE    SQL, FIXED=220, KEY="U1-8,9-10"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMOCVISN  DIM       8      8        1     ED Visit Number                    
EMOCCNTR  DIM       2      2        9     Other Clinical Information Count   
EMOCTYPE  DIM       3      3        11    Clinical Type (Cat ty)             
EMOCORDR  DIM       1      1        14    Ordered Field                      
EMOCCTOD  DIM       8      8        15    Clinical Type Ordered Date         
.                                         ccyymmdd                             
EMOCCTOT  DIM       8      8        23    Clinical Type Ordered Time         
.                                         hh:mm:ss                             
EMOCPRET  DIM       1      1        31    Patient Returned                   
EMOCCTRD  DIM       8      8        32    Clinical Type Returned Date        
.                                         ccyymmdd                             
EMOCCTRT  DIM       8      8        40    Clinical Type Returned Time        
.                                         hh:mm:ss                             
EMOCRSFL  DIM       1      1        48    Report Seen Field                  
EMOCCTSD  DIM       8      8        49    Clinical Type Report Seen Date     
.                                         ccyymmdd                             
EMOCCTST  DIM       8      8        57    Clinical Type Report Seen Time     
.                                         hh:mm:ss                             
EMOCPCCD  DIM       3      3        65    Pathology Company Code (Cat PQ)    
EMOCCUID  DIM       10     10       68    webPAS User ID Created (websecaf)  
EMOCCDAT  DIM       8      8        78    Date Record Created (ccyymmdd)     
EMOCCTIM  DIM       8      8        86    Time Record Created (hh:mm:ss)     
EMOCUUID  DIM       10     10       94    webPAS User ID Updated (websecaf)  
EMOCUDAT  DIM       8      8        104   Date Record Updated (ccyymmdd)     
EMOCUTIM  DIM       8      8        112   Time Record Updated (hh:mm:ss)     
EMOCSPAR  DIM       100    100      120   Spare                              
.
.End of Record                      220  
.
