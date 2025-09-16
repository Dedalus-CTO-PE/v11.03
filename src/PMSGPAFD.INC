. V9.11.001 22/04/2009 JH  Created FD - CAR 145706                              
. *----------------------------------------------------------------------
. * Include Name  :   PMSGPAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   GP Access Override Details         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsgpaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSGPAA1   IFILE    SQL, FIXED=438, KEY="U1-8,9-18,372-379,380-387"             
PMSGPAA2   IFILE    SQL, FIXED=438, KEY="U372-379,380-387,1-8,9-18"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMGPURNO  DIM       8      8        1     UR Number                          
PMGPWEBU  DIM       10     10       9     Web User Id                        
PMGPUGPC  DIM       10     10       19    Web User GP Code (at override time)
PMGPPGPC  DIM       10     10       29    Patient GP Code (at override time) 
PMGPPPRC  DIM       10     10       39    Patient Practice (at override time)
PMGPOVRS  DIM       3      3        49    Override Reason (Cat OJ)           
PMGPOVT1  DIM       80     80       52    Override Text Line 1               
PMGPOVT2  DIM       80     80       132   Override Text Line 2               
PMGPOVT3  DIM       80     80       212   Override Text Line 3               
PMGPOVT4  DIM       80     80       292   Override Text Line 4               
PMGPDATC  DIM       8      8        372   Date record Created                
PMGPTIMC  DIM       8      8        380   Time record Created                
PMGPSPAR  DIM       50     50       388   Spare                              
.
.End of Record                      438  
.
