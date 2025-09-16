. V10.11.01 21/09/2017  Steve Armstrong  Added description of "Year-based file"
. V9.05.001 21/12/2005  Steve Armstrong  CAR 89329  Added FILRSLNK          
. V9.02.001 28/01/2003 TT  Added 4th Index                                   
. V6.05.010 15/09/1999
. *----------------------------------------------------------------------
. * Include Name  :   RESLNKFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results Linking Table               
. *                   (Year-based file)
. *
. * File Type     :   SQL
. *
. * File Name     :   reslnkaf.dat
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESLNKA1   IFILE    SQL, FIXED=110, KEY="U1-2,3-12,13-20,21-25,26-29"           
RESLNKA2   IFILE    SQL, FIXED=110, KEY="U1-2,3-12,30-30,13-20,21-25,26-29"     
RESLNKA3   IFILE    SQL, FIXED=110, KEY="U13-20,21-25,26-29,1-2,3-12"           
RESLNKA4   IFILE    SQL, FIXED=110, KEY="U49-64,1-2,3-12,13-20,21-25,26-29"     
FILRSLNK   INIT     "reln"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RELNLTY   DIM       2      2        1     Link Type                          
.                                         01=UR Number
.                                         02=Visit
.                                         03=Attending/Referring
.                                         04=Ward
.                                         05=GP
.                                         06=Visiting Doctor/Clinic
.                                         07=Attending Doctor Only
.                                         08=Referring Doctor Only
.                                         09=Emergency Site
.                                         99=Linking Error
RELNLKY   DIM       10     10       3     Link Key                           
RELNRDT   DIM       8      8        13    Result Date (ccyymmdd)             
RELNRTM   DIM       5      5        21    Result Time (hh:mm)                
RELNRUN   DIM       4      4        26    Result Unique ID                   
RELNMSN   DIM       1      1        30    Marked as Seen                     
RELNSDT   DIM       8      8        31    Date First Seen                    
RELNSTM   DIM       5      5        39    Time First Seen (hh:mm)            
RELNSPC   DIM       4      4        44    Seen by Passcode                   
RELNFUR   DIM       1      1        48    PID is U/R 0=No 1=Yes              
RELNPID   DIM       16     16       49    Patient ID                         
RELNUCS   DIM       12     12       65    Universal Coding System OBR-4      
RELNUSC   DIM       12     12       77    Universal Service Code  OBR-4       
RELNDSS   DIM       10     10       89    Diagnostic Service Sector          
RELNNOR   DIM       1      1        99    Normal Result 0=No 1=Yes           
RELNRTY   DIM       1      1        100   Result Type 0=HL7 1=PIT            
RELNRST   DIM       2      2        101   Result Status                      
RELNLAB   DIM       3      3        103   Laboratory Code                    
RELNSPA   DIM       4      4        106   Spare                              
.
.End of Record                      110  
.
