. V10.14.01 12/06/2019 RPH C-0864951 Create new FD                              
. *----------------------------------------------------------------------
. * Include Name  :   PATCCHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Concession Card History Details    
. *
. * File Type     :   SQL
. *
. * File Name     :   patcchaf.dat
. *
. * Index Values  :   KEY35   KEY35                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATCCHA1   IFILE    SQL, FIXED=134, KEY="U1-8,32-39,9-11,68-75,76-83"
PATCCHA2   IFILE    SQL, FIXED=134, KEY="U9-11,32-39,1-8,68-75,76-83"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCCURNO  DIM       8      8        1     Patient U/R Number                 
PTCCCTYP  DIM       3      3        9     Card Type (Cat ct)                 
PTCCCNUM  DIM       20     20       12    Concession Card Number             
PTCCEXDT  DIM       8      8        32    Card Expiry Date                   
PTCCDVAC  DIM       3      3        40    DVA Card Colour (Cat DX)           
PTCCUPDT  DIM       1      1        43    Update Type                        
.                                         'A' = Added                          
.                                         'U' = Updated                        
.                                         'D' = Deleted                        
PTCCUPDR  DIM       3      3        44    Update Reason (cat cH)             
PTCCPEXD  DIM       8      8        47    Previous Expiry Date               
.                                         Previous card entry expiry date for  
.                                         an Update entry                      
PTCCPCDC  DIM       3      3        55    Previous Card Colour               
.                                         Previous Card Colour value for update
.                                         for Cat/Code'DX'                     
PTCCURID  DIM       10     10       58    User ID                            
.                                         webPAS user ID that Created, Updated 
.                                         or Deleted the entry                 
PTCCDATE  DIM       8      8        68    Date                               
.                                         System Date that the Concession Card 
.                                         was Added, Updated or Deleted        
PTCCTIME  DIM       8      8        76    Time                               
.                                         System Time the Concession Card was  
.                                         Added, Updated or Deleted            
PTCCSPAR  DIM       50     50       84    Spare Variable                     
.
.End of Record                      134  
.
