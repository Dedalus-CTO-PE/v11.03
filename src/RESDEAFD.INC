. V10.11.01 21/09/2017  Steve Armstrong  Added description of "Year-based file"
. V9.05.001 21/12/2005  Steve Armstrong  CAR 89329  Added FILRSDEA
. V6.05.006 13/09/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESDEAFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Details                     
. *                   (Year-based file)
. *
. * File Type     :   SQL
. *
. * File Name     :   resdeaaf.dat
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESDEAA1  IFILE    SQL, FIXED=365, KEY="U1-8,9-13,14-17,18-21"                 
RESDEAA2  IFILE    SQL, FIXED=365, KEY="U22-37,52-63,40-51,1-8,9-13,14-17,18-21"
FILRSDEA  INIT     "reda"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REDARDT   DIM       8      8        1     Result Date                        
REDARTM   DIM       5      5        9     Result Time                        
REDARUN   DIM       4      4        14    Result Unique ID                   
REDASID   DIM       4      4        18    Set ID                             
REDAPID   DIM       16     16       22    Patient ID                         
REDAVTY   DIM       2      2        38    Value Type                         
REDAOTY   DIM       12     12       40    Observation Type          OBX-03   
REDAOCS   DIM       12     12       52    Observation Coding Scheme OBX-03   
REDAOSC   DIM       10     10       64    Observation Sub ID Code            
REDAOSD   DIM       20     20       74    Observation Sub Description        
REDAVST   DIM       127    127      94    Value String                       
REDAVNM   FORM      10.4   8        221   Value Numeric                      
REDAUNI   DIM       20     20       229   Unit                               
REDARFR   DIM       20     20       249   Reference Range                    
REDAABF   DIM       5      5        269   Abnormal Flag                      
REDAPRB   FORM      4.2    4        274   Probability                        
REDANAT   DIM       2      2        278   Nature of Abnormal Test            
REDASTA   DIM       1      1        280   Result Status                      
REDATFL   DIM       1      1        281   Text Flag 0=No Text 1=Text         
REDAODT   DIM       8      8        282   Date of Observation                
REDAOTM   DIM       5      5        290   Time of Observation                
REDAPER   DIM       25     25       295   Performer ID & Name                
REDAROB   DIM       25     25       320   Responsible Observer               
REDASPA   DIM       20     20       345   Spare                              
.
.End of Record                      365  
.
