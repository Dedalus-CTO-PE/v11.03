. 5.04 .001 16/04/1997                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OUTHISFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                       
. *                   History 
. *
. * File Type     :   SQL
. *
. * File Name     :   outhisaf.dat
. *
. * Modifications :
. *      V9.02.00  25/11/2002 Lina Vo
. *                Added site specific variable FILHISA1
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTHISA1   IFILE    SQL, FIXED=81, KEY="U1-8,9-16,17-24,25-28"           
FILHISA1   INIT     "hisaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTHIURNO  DIM       8      8        1     U/R Number                         
OTHIEVNT  DIM       8      8        9     Event Number                       
OTHIEDAT  DIM       8      8        17    Effective From Date                
DOTHIUCN  DIM       4      4        25    Unique Count                       
OTHIPRIO  DIM       3      3        29    Priority (Cat PR)                  
OTHIRANK  FORM      6      4        32    Patient Rank                       
OTHISPAR  DIM       45     45       36    Spare Variable                     
.
.End of Record                      81   
.
.Redefine Key Variables
.----------------------
OTHIUCNT  FORM      4    
.
.Save variables        
.--------------
SAOTPRIO  DIM       3      Priority (Cat PR)                  
SAOTRANK  DIM       6      Patient Rank                       
.
