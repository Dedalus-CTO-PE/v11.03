. V9.04.001 13/01/2006 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   MEHMTXFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   Mental Health Notes Free Text      
. *
. * File Type     :   SQL
. *
. * File Name     :   mehmtxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHMTXA1   IFILE    SQL, FIXED=171, KEY="U1-8,9-11,12-17,18-20"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHMTURNO  DIM       8      8        1     U/R Number                         
MHMTTYPE  DIM       3      3        9     Comment Type                       
.                                         001 - Legal Status Referral Comments
MHMTNOTE  DIM       6      6        12    Note Number                        
MHMTUNIQ  DIM       3      3        18    Line Number                        
MHMTCMNT  DIM       100    100      21    Comments                           
MHMTSPAR  DIM       50     50       121   Spare Variable                     
.
.End of Record                      171  
.
