. V9.06.001 16/05/2006 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLCSTFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   SCTT External Referral Comments    
. *
. * File Type     :   SQL
. *
. * File Name     :   allcstaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLCSTA1   IFILE    SQL, FIXED=177, KEY="U1-8,9-16,17-19,20-22"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALCSURNO  DIM       8      8        1     U/R Number                         
ALCSCNTR  DIM       8      8        9     Counter                            
ALCSTYPE  DIM       3      3        17    Referral Comment Type              
.                                         001 - Consumer Service Requested
.                                         002 - Consumer Notes
.                                         003 - Referral Reason
.                                         004 - Referral Notes
.                                         005 - Living Arrangement Comments
.                                         006 - Health Condition Comments
.                                         007 - Psycho. Support Comments
.                                         008 - Psycho. Relationship Comments
ALCSLINE  DIM       3      3        20    Line No                            
ALCSDATA  DIM       100    100      23    Line                               
ALCSUKEY  DIM       24     24       123   Update Key (date/time/user id)     
ALCSSPAR  DIM       30     30       147   Spare Variable                     
.
.End of Record                      177  
.
