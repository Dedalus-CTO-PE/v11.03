. *-----------------------------------------------------------------------------
. * Include Name  :   PMSUTXFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Program Maintenance Comments       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsutxaf.dat
. *
. * Index Values  :   KEY43                                                 
. *
. * Modifications :
. * V10.05.01  30/07/2014  Patrick Adair                             CAR 294210
. *            Program Maintenance Comments
. *----------------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSUTXA1   IFILE SQL, FIXED=194, KEY="U1-8+9-11+12-14,15-20,21-23,24-31,32-34,35-40,41-43"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMUXURNO  DIM       8      8        1     U/R Number                         
PMUXATYP  DIM       3      3        9     Admission Type (Cat A)             
PMUXCTYP  DIM       3      3        12    Claim Type (Cat CL)                
PMUXHFND  DIM       6      6        15    Health Fund                        
PMUXHTAB  DIM       3      3        21    Health Fund Table Type (Cat HT)    
PMUXEXPD  DIM       8      8        24    Expiry Date (ccyymmdd)             
PMUXCOMT  DIM       3      3        32    Comment Type                       
.                                         001 - Program Maintenance Comments   
PMUXNNUM  DIM       6      6        35    Note Number                        
PMUXLNUM  DIM       3      3        41    Line Number                        
PMUXCOMM  DIM       100    100      44    Comment                            
PMUXSPAR  DIM       50     50       144   Spare                              
.
.End of Record                      194  
.
