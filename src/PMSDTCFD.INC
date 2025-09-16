. V10.02.01 18/08/2011 DS C-248341 Added TEAM field                             
. V9.04 .001 09/02/2005 JH  Created                                             
. V9.04 .002 10/02/2005                                                         
. V9.04 .003 11/02/2005 JH  Added times                                         
. V9.04 .004 14/02/2005                                                         
. *----------------------------------------------------------------------
. * Include Name  :   PMSDTCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Date of Care Table                 
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdtcaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDTCA1   IFILE    SQL, FIXED=156, KEY="U1-8,22-29,30-37"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDTVISN  DIM       8      8        1     Visit Number                       
PMDTDOCT  DIM       10     10       9     Doctor Code                        
PMDTUNIT  DIM       3      3        19    Unit (Category AC)                 
PMDTSDAT  DIM       8      8        22    Start Date                         
PMDTSTIM  DIM       8      8        30    Start Time (hh:mm:ss)              
PMDTEDAT  DIM       8      8        38    End Date                           
PMDTETIM  DIM       8      8        46    End Time (hh:mm:ss)                
PMDTCDAT  DIM       8      8        54    Date Created (ccyymmdd)            
PMDTCTIM  DIM       8      8        62    Time Created (hh:mm:ss)            
PMDTCUID  DIM       10     10       70    Web User ID Created (websecaf)     
PMDTUDAT  DIM       8      8        80    Date Updated (ccyymmdd)            
PMDTUTIM  DIM       8      8        88    Time Updated (hh:mm:ss)            
PMDTUUID  DIM       10     10       96    Web User ID Updated (websecaf)     
PMDTTEAM  DIM       5      5        106   Team (pmstemaf)                    
PMDTSPAR  DIM       45     45       111   Spare                              
.
.End of Record                      156  
.
