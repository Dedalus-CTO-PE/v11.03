. V5.08.001 26/07/2000 BGA Multi Hospital U/R Link Table                     
. *----------------------------------------------------------------------
. * Include Name  :   RESLURFD.INC
. *
. * Function      :   File Def'n Include for Clinical Results                   
. *                   Link Results by U/R                
. *
. * File Type     :   SQL
. *
. * File Name     :   resluraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESLURA1   IFILE    SQL, FIXED=106, KEY="U1-8,9-16,17-21,22-25"                 
RESLURA2   IFILE    SQL, FIXED=106, KEY="U9-16,17-21,22-25,1-8"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RELUURN   DIM       8      8        1     U/R No.                            
RELURDT   DIM       8      8        9     Result Date (ccyymmdd)             
RELURTM   DIM       5      5        17    Result Time (hh:mm)                
RELURUN   DIM       4      4        22    Result Unique ID                   
RELUMSN   DIM       1      1        26    Marked as Seen                     
RELUSDT   DIM       8      8        27    Date First Seen                    
RELUSTM   DIM       5      5        35    Time First Seen (hh:mm)            
RELUSPC   DIM       4      4        40    Seen by Passcode                   
RELUFUR   DIM       1      1        44    PID is U/R 0=No 1=Yes              
RELUPID   DIM       16     16       45    Patient ID                         
RELUUCS   DIM       12     12       61    Universal Coding System OBR-4      
RELUUSC   DIM       12     12       73    Universal Service Code OBR-4       
RELUDSS   DIM       10     10       85    Diagnostic Service Sector          
RELUNOR   DIM       1      1        95    Normal Result 0=No 1=Yes           
RELURTY   DIM       1      1        96    Result Type 0=HL7 1=PIT            
RELURST   DIM       2      2        97    Result Status                      
RELULAB   DIM       3      3        99    Laboratory Code                    
RELUSPA   DIM       4      4        102   Spare                              
.
.End of Record                      106  
.
