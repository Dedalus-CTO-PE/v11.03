. 5.04 .001 16/04/1997                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OPRHISFD.INC
. *
. * Function      :   File Def'n Include for Theatre                       
. *                   Theatre History 
. *
. * File Type     :   SQL
. *
. * File Name     :   oprhisaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRHISA1   IFILE    SQL, FIXED=95, KEY="U1-8,9-16,17-26,27-34,35-38"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPHIURNO  DIM       8      8        1     U/R Number                         
OPHIEVNT  DIM       8      8        9     Event Number                       
OPHIUNIQ  DIM       10     10       17    Unique id for theatre booking      
OPHIEDAT  DIM       8      8        27    Effective From Date                
DOPHIUCN  DIM       4      4        35    Unique Count                       
OPHIDATE  DIM       8      8        39    Session Date (CCYYMMDD)            
OPHICHGD  DIM       3      3        47    Reason for Chg Session Date (Cat SC)
OPHITCHG  FORM      2      2        50    Type of Change                       
.                                           1 = Booked
.                                           2 = Rescheduled
.                                           3 = Cancelled
OPHISPAR  DIM       43     43       52    Spare Variable                     
.
.End of Record                      95   
.
.Redefine Key Variables
.----------------------
OPHIUCNT  FORM      4    
.
.Save variables        
.--------------
SAOPDATE  DIM       8      8        29    Session Date (CCYYMMDD)            
SAOPCHGD  DIM       3      3        47    Reason for Chg Session Date (Cat SC)
