. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAPMDFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   DRG Payment Model                  
. *
. * File Type     :   SQL
. *
. * File Name     :   ceapmdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAPMDA1   IFILE    SQL, FIXED=59, KEY="U1-1,2-5"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEPMMOD   DIM       1      1        1     Model                              
CEPMDRGC  DIM       4      4        2     DRG Code                           
CEPMPCAS  FORM      10.2   7        6     Per Case Payment                   
CEPMPDAY  FORM      10.2   7        13    Per Diem Payment                   
CEPMSPA   DIM       39     39       20    Spare                              
.
.End of Record                      59   
.
