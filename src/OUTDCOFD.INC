. V10.02.01 24/08/2011 EC C-242014 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   OUTDCOFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Outpatient Direct Comments         
. *
. * File Type     :   SQL
. *
. * File Name     :   outdcoaf.dat
. *
. * Index Values  :   KEY29                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTDCOA1   IFILE    SQL, FIXED=232, KEY="U1-8,9-16,17-24,25-26,27-29"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTDOURNO  DIM       8      8        1     U/R Number                         
OTDOADAT  DIM       8      8        9     Action Date (CCYYMMDD)             
OTDOATIM  DIM       8      8        17    Action Time (HH:MM:SS)             
OTDOATYP  DIM       2      2        25    Action Type                        
.                                         " 0" = PMI Update                    
.                                         " 1" = Appointment Message           
.                                         " 2" = Reschedule Appointment        
.                                         " 3" = Cancel Appointment            
.                                         " 4" = Pending Reschedule            
.                                         " 5" = Closed Referral               
OTDOCLNO  DIM       3      3        27    Comment Line Number                
OTDOCOMM  DIM       100    100      30    Comment Line                       
OTDOCDAT  DIM       8      8        130   Date Record Created (CCYYMMDD)     
OTDOCTIM  DIM       8      8        138   Time Record Created (HH:MM:SS)     
OTDOCUID  DIM       10     10       146   Web User ID Created (websecaf)     
OTDOUDAT  DIM       8      8        156   Date Record Updated (CCYYMMDD)     
OTDOUTIM  DIM       8      8        164   Time Record Updated (HH:MM:SS)     
OTDOUUID  DIM       10     10       172   Web User ID Updated (websecaf)     
OTDOSPAR  DIM       50     50       182   Spare Variable                     
.
.End of Record                      232  
.
