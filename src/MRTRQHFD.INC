. V10.02.02 27/05/2011 ML C-240724 Added Hospital Id to Index 3 (before Location
. V10.02.01 09/05/2011 ML C-240707 Change MRRQCOMM from DIM 30 to DIM 50        
. V9.11.001 06/03/2009 EC C-191020 Added Index                                  
. V9.08.001 12/12/2006 PV C-127930 Added MRRQTRIG Triage Category               
. V9.05.B01 23/02/2006 EC C-60884  Added Audit File                             
. V9.01.009 15/08/2001 dc          Added Index 4                                
. *----------------------------------------------------------------------
. * Include Name  :   MRTRQHFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Medical Records Request Header     
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtrqhaf.dat
. * Audit Name    :   mrtaudrq.dat
. *
. * Index Values  :   KEY10   KEY23   KEY30   KEY20   KEY23   KEY23          
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
MRTAUDRQ   IFILE    SQL, FIXED=267, KEY="D18-27,1-8,9-16,17-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRRQAUDD  DIM       8      8        1     Date of Change
MRRQAUDT  DIM       8      8        9     Time of Change
MRRQAUDR  DIM       1      1        17    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
.MRRQRQNO DIM       10     10       18    Request Number
.
.Data File Definition
.--------------------
MRTRQHR1   IFILE    SQL, FIXED=250, KEY="U1-10"                                 
MRTRQHR2   IFILE    SQL, FIXED=250, KEY="U24-31,32-36,1-10"                     
MRTRQHR3   IFILE    SQL, FIXED=250, KEY="U133-135,37-40,24-31,32-36,1-10"       
MRTRQHR4   IFILE    SQL, FIXED=250, KEY="U136-145,1-10"                         
MRTRQHR5   IFILE    SQL, FIXED=250, KEY="U11-18,19-23,1-10"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRRQRQNO  DIM       10     10       1     Request Number                     
MRRQDAYE  DIM       8      8        11    Current Date (ccyymmdd)            
MRRQTIYM  DIM       5      5        19    Current Time (hh:mm)               
MRRQDTRQ  DIM       8      8        24    Date Request Required (ccyymmdd)   
MRRQTMRQ  DIM       5      5        32    Time Request Required (hh:mm)      
MRRQLOCR  DIM       4      4        37    MR Required Location (mrtlocaf)    
MRRQPERS  DIM       35     35       41    Person Requesting Record           
MRRQMOVR  DIM       4      4        76    Movement Reason (mrtmovaf)         
MRRQURGY  DIM       3      3        80    Urgency (Cat QU)                   
MRRQCOMM  DIM       50     50       83    Request Comment                    
MRRQHOSC  DIM       3      3        133   MR Required Hospital Code (pathspaf)
MRRQUSID  DIM       10     10       136   User ID (websecaf)                 
MRRQDTUP  DIM       8      8        146   Date Record Updated (ccyymmdd)     
MRRQTMUP  DIM       5      5        154   Time Record Updated (hh:mm)        
MRRQUSUP  DIM       10     10       159   User ID updating (websecaf)        
MRRQEXTN  DIM       20     20       169   Extention No.                      
MRRQPAGE  DIM       20     20       189   Pager No.                          
MRRQTRIG  DIM       3      3        209   Triage Category (Cat AA)           
MRRQSPAE  DIM       38     38       212   Spare                              
.
.End of Record                      250  
.
