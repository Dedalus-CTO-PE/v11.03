. V10.13.01 24/09/2018 PVL C-0859743 Created File Definition                    
. *----------------------------------------------------------------------
. * Include Name  :   OUTECOFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Eclipse BLK Outstandings Ass Reps  
. *
. * File Type     :   SQL
. *
. * File Name     :   outecoaf.dat
. *
. * Index Values  :   KEY26   KEY34                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTECOA1   IFILE    SQL, FIXED=111, KEY="U1-1,2-2,3-26"
OUTECOA2   IFILE    SQL, FIXED=111, KEY="U43-50,2-2,3-26,1-1"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTEOMODL  DIM       1      1        1     webPAS Module                      
.                                         1 = Emergency                        
.                                         2 = Private Practice                 
.                                         3 = Outpatient                       
OTEODFLG  DIM       1      1        2     Deleted Status Flag                
.                                         0 = Open                             
.                                         1 = Closed                           
OTEOTRID  DIM       24     24       3     Transaction Id                     
OTEOINVN  DIM       8      8        27    Invoice Number                     
OTEOBATN  DIM       8      8        35    Batch Number                       
OTEOCDAT  DIM       8      8        43    Created Date                       
OTEOUSER  DIM       10     10       51    User who Deleted                   
OTEOSPAR  DIM       50     50       61    Spare Variable                     
.
.End of Record                      111  
.
