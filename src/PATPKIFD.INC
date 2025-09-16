. *----------------------------------------------------------------------
. * Include Name  :   PATPKIFD.INC
. *
. * Function      :   File Def'n Include for Eclipse Participants      
. *                   Eclipse Participants Key Words   
. *
. * File Type     :   SQL
. *
. * File Name     :   patpkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATPKIA1   IFILE    SQL, FIXED=104, KEY="U1-3,4-53"                            
PATPKIA2   IFILE    SQL, FIXED=104, KEY="U4-53,1-3"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTPKCODE  DIM       3      3        1     Participant Code                     
PTPKKKWD  DIM       50     50       4     Key Word                           
PTPKSPAR  DIM       50     50       54    Spare                              
.
.End of Record                      104  
.
