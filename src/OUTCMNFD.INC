. V5.10.001 27/04/2001 SB  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   OUTCMNFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   System Comments                    
. *
. * File Type     :   SQL
. *
. * File Name     :   outcmnaf.dat
. *
. * Modifications :
. *      V9.02.00  25/11/2002 Lina Vo
. *                Added site specific variable FILCMNA1
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTCMNA1   IFILE    SQL, FIXED=378, KEY="U1-8,9-16,17-19"                       
FILCMNA1   INIT     "cmnaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTCMTDAT  DIM       8      8        1     Comment Valid to Date (CCYYMMDD)   
OTCMFDAT  DIM       8      8        9     Comment Valid from Date (CCYYMMDD) 
OTCMCONO  DIM       3      3        17    Comment No. (Generated Unique Count)
OTCMCOM1  DIM       60     60       20    Comment Line 1                     
OTCMCOM2  DIM       60     60       80    Comment Line 2                     
OTCMCOM3  DIM       60     60       140   Comment Line 3                     
OTCMCOM4  DIM       60     60       200   Comment Line 4                     
OTCMSITE  DIM       6      6        260   Site Code (Blank for All Sites)    
OTCMCLIN  DIM       6      6        266   Clinic Type (Blank for All Clinics)
OTCMCDAT  DIM       8      8        272   Entered Date (System Generated)    
OTCMCTIM  DIM       8      8        280   Entered Time (System Generated)    
OTCMCUID  DIM       10     10       288   Entered By (System Gener. WEB User ID)
OTCMSPAR  DIM       80     80       298   Spare Variable                     
.
.End of Record                      378  
.
