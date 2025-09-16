. V10.13.01 20/08/2018 EC  T-0859742 Added EMSTPPRV
. V10.11.01 13/07/2017 TNG C-0820753 Added EMSTACTV
. V10.04.01 13/02/2014 AP C-275582 Added EMWFEDST & EMWFEDFP
. V9.08.001 12.12.2006 PV  Added Default Req Loc, Def Reas CAR 127930
. V5.09.001 12.07.2001 gjs Add Default location field [srf 10465]
. V5.07.000 14/10/1999 NMH Port to 5.07                                      
. V6.06.001 18/05/1999 kcn Created FD                                        
. V6.06.002 18/05/1999 kcn Added index                                       
. *----------------------------------------------------------------------
. * Include Name  :   EMRSITFD.INC
. *
. * Function      :   File Def'n Include for WEB                          
. *                   Emergency Site Table               
. *
. * File Type     :   SQL
. *
. * File Name     :   emrsitaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRSITA1   IFILE    SQL, FIXED=158, KEY="U1-3"
EMRSITA2   IFILE    SQL, FIXED=158, KEY="U4-28,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMSTSCOD  DIM       3      3        1     Site Code                          
EMSTDESC  DIM       25     25       4     Description                        
EMSTHRPW  FORM      6      4        29    Hours per Week                     
EMSTDPTY  DIM       3      3        33    Department Type                    
EMSTSPCO  DIM       3      3        36    Service Point Code                 
EMSTSPNO  DIM       10     10       39    Service Provider Number            
EMSTHSNO  DIM       3      3        49    Hospital Number                    
EMSTDLOC  DIM       3      3        52    Default ER Cubical location    
EMSTDRLC  DIM       4      4        55    Default MR Request Location
EMSTDRES  DIM       4      4        59    Default Reason
EMSTEDST  DIM       6      6        63    Stationary Template for ED Disc Sum
EMSTEDFP  DIM       6      6        69    Fax Printer Code
EMSTACTV  DIM       1      1        75    Active (0=Active 1=Inactive)
EMSTPPRV  DIM       8      8        76    Payee Provider Number
EMSTSPAR  DIM       74     74       84    Spare                              
.
.End of Record                     158   
.
