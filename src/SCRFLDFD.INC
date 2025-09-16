. V6.00.007 28/10/1991 BGA New Index for Batch Screens                       
. *----------------------------------------------------------------------
. * Include Name  :   SCRFLDFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Fields Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   scrfldaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRFLDA1   IFILE    SQL, FIXED=139, KEY="U1-8,9-10,11-15"                       
SCRFLDA2   IFILE    SQL, FIXED=139, KEY="U1-8,9-10,99-103,11-15"                
SCRFLDA3   IFILE    SQL, FIXED=139, KEY="U1-8,9-10,108-112,11-15"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCFLPID   DIM       8      8        1     Program ID                         
SCFLSID   DIM       2      2        9     Screen Id                          
SCFLFNO   DIM       5      5        11    Field Number                       
SCFLDES   DIM       35     35       16    Description                        
SCFLTYP   FORM      1      2        51    Type 0.Key 1.Sel 2.Dis 3.Fun 4.Scr 
SCFLFLD   DIM       8      8        53    Field                              
SCFLCAL   DIM       8      8        61    Call Routine                       
SCFLWPF   DIM       8      8        69    Word Processor File                
SCFLFSC   DIM       2      2        77    Screen to Call                     
SCFLDEC   FORM      1      2        79    Declare Field in Program 0=No      
SCFLMIN   FORM      3      3        81    Minimum Screen Length              
SCFLMAX   FORM      3      3        84    Maximum Screen Length              
SCFLFLN   FORM      3.1    4        87    Field Length                       
SCFLFTY   FORM      1      2        91    Field Type 0=Dim                   
SCFLKTY   FORM      1      2        93    Keyin Type 0-6                     
SCFLMAN   FORM      1      2        95    Mandatory 0=No                     
SCFLFEX   FORM      1      2        97    Function Exit Type                 
SCFLDAF   DIM       5      5        99    Display After Field                
SCFLMUL   FORM      1      2        104   Multiple Displays 1=Yes            
SCFLKEY   FORM      1      2        106   Type of Key Field 0,1,2 (CKEYTYP)  
SCFLMTY   DIM       5      5        108   Multiple File Group Sys/Fil/Idx    
SCFLSPA   DIM       26     26       113                                      
.
.End of Record                      139  
.
