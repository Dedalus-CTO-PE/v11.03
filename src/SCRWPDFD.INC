. V6.00.004 31/10/1991 BGA Add wp types                                      
. V6.00.005 01/11/1991 BGA Add Default Size                                  
. V6.00.006 01/11/1991 BGA Fix Default Size                                  
. V6.00.007 01/11/1991                                                       
. V6.00.008 12/11/1991 BGA Add Batch Type                                    
. V6.00.009 13/11/1991 BGA Add Batch Sequence                                
. *----------------------------------------------------------------------
. * Include Name  :   SCRWPDFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Word Processing Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   scrwpdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRWPDA1   IFILE    SQL, FIXED=92, KEY="U1-8,9-10,11-15"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCWPPID   DIM       8      8        1     Program ID                         
SCWPSID   DIM       2      2        9     Screen ID                          
SCWPITM   DIM       5      5        11    Item Number                        
SCWPFLD   DIM       8      8        16    Field to Load                      
SCWPPAK   DIM       36     36       24    Pak Key With                       
SCWPMLN   FORM      2      2        60    Match Length                       
SCWPCON   FORM      1      2        62    Confirm (Y/N)                      
SCWPRDS   FORM      1      2        64    Redraw (Y/N)                       
SCWPRDO   FORM      1      2        66    Read Only (Y/N)                    
SCWPSHM   FORM      1      2        68    Show More (Y/N)                    
SCWPDFR   FORM      2      2        70    Default Row                        
SCWPDFC   FORM      3      3        72    Default Column                     
SCWPNOR   FORM      2      2        75    Number of Lines                    
SCWPLEN   FORM      3      3        77    Width                              
SCWPBTY   FORM      1      2        80    Batch Screen Type                  
SCWPBSQ   FORM      1      2        82    Batch Sequence 0=Fwd. 1=Rev        
SCWPSPA   DIM       8      8        84    Spare                              
.
.End of Record                      92   
.
