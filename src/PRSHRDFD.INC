. V9.05.002 08/04/2006 JH  Added hospital code                               
. *----------------------------------------------------------------------
. * Include Name  :   PRSHRDFD.INC
. *
. * Function      :   File Def'n Include for PRS2 System                        
. *                   PRS2 Run Header                    
. *
. * File Type     :   SQL
. *
. * File Name     :   prshrdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRSHRDA1   IFILE    SQL, FIXED=93, KEY="U1-10"                                  
PRSHRDA2   IFILE    SQL, FIXED=93, KEY="U11-18,19-26,1-10"                      
PRSHRDA3   IFILE    SQL, FIXED=93, KEY="U43-45,11-18,19-26,1-10"                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
P2HRURUN  DIM       10     10       1     Unique Run Number                  
P2HRFDAT  DIM       8      8        11    From Date (CCYYMMDD)               
P2HRTDAT  DIM       8      8        19    To Date (CCYYMMDD)                 
P2HRCDAT  DIM       8      8        27    Date Extract Created (CCYYMMDD)    
P2HRRDAT  DIM       8      8        35    Date Extract Re-Run (CCYYMMDD)     
P2HRHOSP  DIM       3      3        43    Hospital Code (pathspaf)           
P2HRSPAR  DIM       47     47       46    Spare                              
.
.End of Record                      93   
.
