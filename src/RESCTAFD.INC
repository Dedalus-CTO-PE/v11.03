. V6.06.003 27/10/1999 BGA Added Security Level                              
. *----------------------------------------------------------------------
. * Include Name  :   RESCTAFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Coding Table               
. *
. * File Type     :   SQL
. *
. * File Name     :   resctaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESCTAA1   IFILE    SQL, FIXED=143, KEY="U1-3,4-6,7-8,9-20,21-32"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RECTLAB   DIM       3      3        1     Laboratory Code                    
RECTSEG   DIM       3      3        4     HL7 Segment                        
RECTFLD   DIM       2      2        7     Field No                           
RECTSYS   DIM       12     12       9     Coding System                      
RECTCOD   DIM       12     12       21    Code                               
RECTDES   DIM       50     50       33    Description                        
RECTSLV   DIM       2      2        83    Security Level                     
RECTSPA   DIM       58     58       85    Spare                              
.
.End of Record                      143  
.
