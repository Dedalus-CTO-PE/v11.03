. V9.11.002 17/03/2009 ML  Change Unique No. to Dim 3 (was Dim 2)            
. V9.11.001 08/01/2009 ML  Updated to V9.10 specs                               
. V9.10.001 07/01/2009 ML  New Table                                            
. *----------------------------------------------------------------------
. * Include Name  :   MEHPLSFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   PRIMHD Transmission LS Record      
. *
. * File Type     :   SQL
. *
. * File Name     :   mehplsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHPLSA1   IFILE    SQL, FIXED=220, KEY="U1-8,9-11,12-19,20-22"                 
MEHPLSA2   IFILE    SQL, FIXED=220, KEY="U12-19,1-8,9-11,20-22"                 
MEHPLSA3   IFILE    SQL, FIXED=220, KEY="U23-30,1-8,9-11,12-19,20-22"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHPSXDAT  DIM       8      8        1     Extract Date                       
MHPSXNUM  DIM       3      3        9     Extract Run No. for this Date      
MHPSVISN  DIM       8      8        12    Legal Status Id.                   
MHPSUNIQ  DIM       3      3        20    Unique No. for Legal Status Id.    
MHPSURNO  DIM       8      8        23    UR No./Event HCU Id.               
.                                         *                             
MHPSSTAT  DIM       1      1        31    Transmission Status                
.                                         1=Sent, 2=Errors, 3=Accepted  
MHPSETYP  DIM       1      1        32    Error Type "E" Error, "W" Warning  
MHPSECNT  DIM       3      3        33    Error Count                        
MHPSWCNT  DIM       3      3        36    Warning Count                      
MHPSERID  DIM       9      9        39    Error/Warning Ref Code             
.                                         * ---- start of LS record ----
MHPSFVER  DIM       3      3        48    File Version                       
MHPSLSID  DIM       20     20       51    Legal Status Id.                   
MHPSSORG  DIM       8      8        71    Submitting Org Id                  
MHPSORID  DIM       8      8        79    Organisation Id                    
MHPSFDAT  DIM       19     19       87    Extract From Date Time             
MHPSTDAT  DIM       19     19       106   Extracted Date Time                
MHPSDELT  DIM       7      7        125   Deleted Flag                       
MHPSOTYP  DIM       3      3        132   Organisation Type                  
MHPSEHCU  DIM       8      8        135   Event HCU Id. (UR No.)             
MHPSPSEX  DIM       1      1        143   Sex                                
MHPSPDOB  DIM       10     10       144   Date of Birth                      
MHPSLSCD  DIM       2      2        154   Legal Status Code                  
MHPSRCPN  DIM       6      6        156   Responsible Clinician CPN          
MHPSSDAT  DIM       19     19       162   Start Date Time                    
MHPSEDAT  DIM       19     19       181   End Date Time                      
MHPSSPAR  DIM       20     20       200   Spare                              
.
.End of Record                      220  
.
