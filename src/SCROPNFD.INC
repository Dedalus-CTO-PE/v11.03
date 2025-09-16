. V6.00.001 24/08/0091 BGA Generated                                         
. *----------------------------------------------------------------------
. * Include Name  :   SCROPNFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Tables to Open                      
. *
. * File Type     :   SQL
. *
. * File Name     :   scropnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCROPNA1   IFILE    SQL, FIXED=67, KEY="U1-8,9-16"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCOPPID   DIM       8      8        1     Program ID                         
SCOPFIL   DIM       8      8        9     File                               
SCOPPHY   DIM       8      8        17    Physical File                      
SCOPMOD   FORM      1      2        25    Mod 0=Gen,1=Add,2=Del,3=Spec,4=Audit
SCOPOPT   DIM       20     20       27    Open To Name                       
SCOPSPA   DIM       20     20       47    Spare                              
.
.End of Record                      67   
.
