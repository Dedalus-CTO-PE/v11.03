. V6.00.002 11/09/1991 SOG Code Created                                      
. V6.00.003 11/09/0091                                                       
. V6.00.004 16/09/0091                                                       
. V6.00.005 16/09/0091                                                       
. V6.00.006 16/09/0091                                                       
. V6.00.007 20/09/0091                                                       
. *----------------------------------------------------------------------
. * Include Name  :   MSGIDSFD.INC
. *
. * Function      :   File Def'n Include for Common                     
. *                   Message Mailing Id Details                 
. *
. * File Type     :   SQL
. *
. * File Name     :   msgidsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MSGIDSA1   IFILE    SQL, FIXED=84, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MSIDMLID  DIM       8      8        1     Mailing Id                         
MSIDSNAM  DIM       20     20       9     Users Surname                      
MSIDGNAM  DIM       25     25       29    Users Given Name                   
MSIDSPAR  DIM       30     30       54    Spare                              
.
.End of Record                      84   
.
