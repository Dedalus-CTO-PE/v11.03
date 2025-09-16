. V9.08.002 22/11/2006                                                       
. V9.08.003 22/11/2006                                                       
. V9.08.004 22/11/2006                                                       
. V9.08.005 23/11/2006                                                       
. *----------------------------------------------------------------------
. * Include Name  :   MLTCFNFD.INC
. *
. * Function      :   File Def'n Include for Multi Hospital                     
. *                   Multi Hospital for Contract Funding
. *
. * File Type     :   SQL
. *
. * File Name     :   mltcfnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MLTCFNA1   IFILE    SQL, FIXED=101, KEY="U1-3,4-6,7-12,13-21,22-22,23-30,31-40" 
MLTCFNA2   IFILE    SQL, FIXED=101, KEY="U31-40,1-3,4-6,7-12,13-21,22-22,23-30" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MLCFHOSP  DIM       3      3        1     Hospital (pathspaf)                
MLCFCLMC  DIM       3      3        4     Claim Code (Cat CL)                
MLCFCNTR  DIM       6      6        7     Contract (Health Fund)             
MLCFPROC  DIM       9      9        13    Contract Procedure Code            
MLCFSTYP  DIM       1      1        22    Start Type 1=Adm.From 2=Disc.From  
MLCFSDAT  DIM       8      8        23    Start Date (ccyymmdd)              
MLCFHCPC  DIM       10     10       31    HCP Code                           
MLCFSPAR  DIM       60     60       41    Spare Variable                     
.
.End of Record                      101  
.
