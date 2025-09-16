. V6.05.001 08/01/1999                                                       
. V6.05.002 28/01/1999     Added New fields FUR,PID,VIS                      
. V6.05.003 24/03/1999 BGA Added Single Line Result Details Key              
. V6.06.004 24/06/1999     Added Index                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESPHRFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results PIT Format Results Header          
. *
. * File Type     :   SQL
. *
. * File Name     :   resphraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESPHRA1   IFILE    SQL, FIXED=147, KEY="U1-8,9-13,14-17"                       
RESPHRA2   IFILE    SQL, FIXED=147, KEY="U19-34,110-117,118-122,1-8,9-13,14-17" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REPHRDT   DIM       8      8        1     Result Date                        
REPHRTM   DIM       5      5        9     Result Time                        
REPHRUN   DIM       4      4        14    Unique ID                          
REPHFUR   DIM       1      1        18    PID is U/R 0=No 1=Yes              
REPHPID   DIM       16     16       19    Patient ID                         
REPHVIS   DIM       8      8        35    Visit Number                       
REPHNAM   DIM       60     60       43    Test Name                          
REPHLAB   DIM       3      3        103   Laboratory                         
REPHRRN   DIM       4      4        106   Report Run Number                  
REPHCDT   DIM       8      8        110   Creation Date                      
REPHCTM   DIM       5      5        118   Creation Time                      
REPHNOR   DIM       1      1        123   Normal Result 0=No 1=Yes           
REPHCON   DIM       1      1        124   Confidential 0=No 1=Yes            
REPHTCT   DIM       1      1        125   Test Category R=Routine U=Urgent   
REPHCOM   DIM       1      1        126   Test Complete 0=No 1=Yes           
REPHSTK   DIM       20     20       127   Single Line Detail Test Key        
.
.End of Record                      147  
.
