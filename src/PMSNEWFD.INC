. V11.02.01 02/02/2022 EC C-0888071 Added PMNWFREE decription to PMNWDEFT
. V11.00.01 16/04/2020 EC C-0888071 Added PMNWFREE                              
. V9.04.001 27/05/2005 JH  Created                                              
. V9.04.001 27/05/2005                                                          
. V9.04.001 27/05/2005                                                          
. *----------------------------------------------------------------------
. * Include Name  :   PMSNEWFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Newborn default fields             
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsnewaf.dat
. *
. * Index Values  :   KEY8    KEY3                                           
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSNEWA1   IFILE    SQL, FIXED=73, KEY="U1-8"
PMSNEWA2   IFILE    SQL, FIXED=73, KEY="U9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMNWFIEL  DIM       8      8        1     Field                              
PMNWFLNO  DIM       3      3        9     Field number                       
PMNWDEFT  DIM       1      1        12    Default Type
.                                         0=Mother 1=Code 2 = Free Format
PMNWCODE  DIM       10     10       13    Default Code                       
PMNWFREE  DIM       40     40       23    Free Format Default                
PMNWSPAR  DIM       10     10       63    Spare                              
.
.End of Record                      73   
.
