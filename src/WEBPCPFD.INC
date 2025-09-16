. V11.00.01 20/08/2020 PVL C-0895969 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBPCPFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices GPRW Capability Table  
. *
. * File Type     :   SQL
. *
. * File Name     :   webpcpaf.dat
. *
. * Index Values  :   KEY9    KEY9                                           
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPCPA1   IFILE    SQL, FIXED=187, KEY="U1-3,4-6,7-9"
WEBPCPA2   IFILE    SQL, FIXED=187, KEY="U4-6,1-3,7-9"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPCCODE  DIM       3      3        1     Participant Code                   
WBPCCPID  DIM       3      3        4     Capability Id                      
WBPCSCID  DIM       3      3        7     Secondary Capability Id            
WBPCCVID  DIM       1      1        10    Capability Version Id              
WBPCCNAM  DIM       70     70       11    Capability Name                    
WBPCCROL  DIM       6      6        81    Capability Role Code               
WBPCSPAR  DIM       100    100      87    Spare Variable                     
.
.End of Record                      187  
.
