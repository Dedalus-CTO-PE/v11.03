. V10.00.01 25/05/2010 JP  Created for CAR 222551                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSPCTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Pregnancy Complications/treatments 
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspctaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPCTA1   IFILE    SQL, FIXED=283, KEY="U1-10,11-18,19-26,27-34,35-37,38-40"   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPCUNIQ  DIM       10     10       1     Pregnancy Unique Id                
PMPCADMN  DIM       8      8        11    Admission Number                   
PMPCDATE  DIM       8      8        19    Event Date                         
PMPCTIME  DIM       8      8        27    Event Time                         
PMPCTYPE  DIM       3      3        35    Record Type 001 - Complication     
.                                                     002 - Birth Event
.                                                     003 - Labour Event  
PMPCETYP  DIM       3      3        38    Event Type (Cat CK)                
PMPCESTA  DIM       3      3        41    Event Status (Cat EK)              
PMPCDES1  DIM       50     50       44    Free Format Description 1          
PMPCDES2  DIM       50     50       94    Free Format Description 2          
PMPCWEBC  DIM       10     10       144   Web User ID Created (websecaf)     
PMPCDATC  DIM       8      8        154   Date Created (CCYYMMDD)            
PMPCTIMC  DIM       8      8        162   Time Created (hh:mm:ss)            
PMPCWEBU  DIM       10     10       170   Web User ID Updated (websecaf)     
PMPCDATU  DIM       8      8        180   Date Updated (CCYYMMDD)            
PMPCTIMU  DIM       8      8        188   Time Updated (hh:mm:ss)            
PMPCRECS  DIM       1      1        196   Record status 1=Deleted            
PMPCWEBD  DIM       10     10       197   Web User ID Deleted                
PMPCDATD  DIM       8      8        207   Date Deleted (CCYYMMDD)            
PMPCTIMD  DIM       8      8        215   Time Deleted (hh:mm:ss)            
PMPCSPAR  DIM       60     60       223   Spare                              
.
.End of Record                      283  
.
