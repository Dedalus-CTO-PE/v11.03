. V11.00.01 14/01/2021 PVL C-0898361 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBECOFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices Outstanding Ass Reports
. *
. * File Type     :   SQL
. *
. * File Name     :   webecoaf.dat
. *
. * Index Values  :   KEY31   KEY39   KEY31                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBECOA1   IFILE    SQL, FIXED=167, KEY="U1-6,7-7,8-31"
WEBECOA2   IFILE    SQL, FIXED=167, KEY="U49-56,7-7,8-31,1-6"
WEBECOA3   IFILE    SQL, FIXED=167, KEY="U8-31,1-6,7-7"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBEOHFND  DIM       6      6        1     Health Fund/Claim Code             
WBEODFLG  DIM       1      1        7     Deleted Status Flag                
WBEOTRID  DIM       24     24       8     Transaction Id                     
WBEOINVN  DIM       8      8        32    Invoice Number                     
WBEOBATN  DIM       8      8        40    Batch Number                       
WBEOCTYP  DIM       1      1        48    Claim Type                         
WBEOCDAT  DIM       8      8        49    Created Date                       
WBEOUSER  DIM       10     10       57    User who Deleted                   
WBEOSPAR  DIM       100    100      67    Spare Variable                     
.
.End of Record                      167  
.
