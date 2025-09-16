. V10.05.02 14/10/2014 PV C-301518 Added Index 2                                
. V10.05.01 10/09/2014 SA C-301518 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   OBSAUDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Clinical Documents Audit           
. *
. * File Type     :   SQL
. *
. * File Name     :   obsaudaf.dat
. *
. * Index Values  :   KEY47   KEY47                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSAUDA1   IFILE    SQL, FIXED=101, KEY="U1-8,9-16,17-20,21-28,29-36,37-46,47-47"
OBSAUDA2   IFILE    SQL, FIXED=101, KEY="U21-28,29-36,1-8,9-16,17-20,37-46,47-47"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBAUURNO  DIM       8      8        1     U/R Number                         
OBAUVISN  DIM       8      8        9     Visit Number                       
OBAUCORR  DIM       4      4        17    Correspondence ID                  
OBAUDATE  DIM       8      8        21    Date of Access (ccyymmdd)          
OBAUTIME  DIM       8      8        29    Time of Access (hh:mm:ss)          
OBAUWEBU  DIM       10     10       37    Web User ID (websecaf)             
OBAUTYPE  DIM       1      1        47    Audit Type                         
.                                         A = Add                              
.                                         U = Update                           
.                                         V = View                             
.                                         D = Delete                           
OBAUREAS  DIM       3      3        48    Update Reason (Cat wo)             
OBAUSPAR  DIM       50     50       51    Spare Variable                     
.
.End of Record                      101  
.
