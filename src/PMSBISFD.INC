. V9.04.001 06/09/2004 JT Added hospital id
. V9.03.001 21/04/2004 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PMSBISFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Bulk Backdate Invoice Selection         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsbisaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSBISA1   IFILE    SQL, FIXED=41, KEY="U1-4"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMBSSEID  DIM       4      4        1     Selection ID                       
PMBSINVD  DIM       8      8        5     Invoice Date                       
PMBSASAT  DIM       8      8        13    As at Date                         
PMBSHOSP  DIM       3      3        21    Hospital ID
PMBSSPAR  DIM       17     17       24    Spare variable                     
.
.End of Record                      41   
.
