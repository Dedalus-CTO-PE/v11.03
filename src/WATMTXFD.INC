. V10.00.01 15/04/2010 EC  Created FD CAR 218982                                
. *----------------------------------------------------------------------
. * Include Name  :   WATMTXFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List Comments Text         
. *
. * File Type     :   SQL
. *
. * File Name     :   watmtxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATMTXA1   IFILE    SQL, FIXED=182, KEY="U1-8,9-17,18-19,20-22,23-28,29-31"     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTMTURNO  DIM       8      8        1     U/R Number                         
WTMTPROC  DIM       9      9        9     Procedure Code                     
WTMTPCNT  DIM       2      2        18    Procedure Count                    
WTMTTYPE  DIM       3      3        20    Comment Type                       
.                                         001 - Waiting List Comments          
.                                         002 - Pre Admission Comments         
WTMTNOTE  DIM       6      6        23    Note Number                        
WTMTUNIQ  DIM       3      3        29    Line Number                        
WTMTCMNT  DIM       100    100      32    Comment                            
WTMTSPAR  DIM       50     50       132   Spare                              
.
.End of Record                      182  
.
