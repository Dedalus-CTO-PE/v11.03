. V5.07.007 10/09/1999 kcn Added HL7 message ID                              
. *----------------------------------------------------------------------
. * Include Name  :   RESLOGFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results PIT Format Results Log             
. *
. * File Type     :   SQL
. *
. * File Name     :   reslogaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESLOGA1   IFILE    SQL, FIXED=139, KEY="U1-10"                                 
RESLOGA2   IFILE    SQL, FIXED=139, KEY="U11-18,19-23,1-10"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RELGUID   DIM       10     10       1     Unique ID                          
RELGDTE   DIM       8      8        11    Date                               
RELGTME   DIM       5      5        19    Time                               
RELGPCO   DIM       3      3        24    Pathology Company                  
RELGRUN   DIM       4      4        27    Pathology Run Number               
RELGCMP   DIM       1      1        31    Completed (Y/N)                    
RELGEXP   FORM      6      4        32    Expected Record Count              
RELGRPR   FORM      6      4        36    Records Processed                  
RELGERR   FORM      6      4        40    Error Records                      
RELGINF   DIM       50     50       44    Input File Name                    
RELGMER   DIM       20     20       94    Message Error                      
RELGMID   FORM      8      5        114   HL7 Message ID                     
RELGSPA   DIM       20     20       119   Spare                              
.
.End of Record                      139  
.
