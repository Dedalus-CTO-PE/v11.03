. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSGILFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   General Ledger Interface           
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsgilaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSGILA1   IFILE    SQL, FIXED=61, KEY="U1-20,21-22,23-30,31-34"                
CCSGILA2   IFILE    SQL, FIXED=61, KEY="U21-22,23-30,31-34,1-20"                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCGIKEY   DIM       20     20       1     Interface Key - General Ledger     
CCGIHCD   DIM       2      2        21    Hospital Code                      
CCGIDPT   DIM       8      8        23    Department                         
CCGICTY   DIM       4      4        31    Cost Type                          
CCGIPER   FORM      4.6    6        35    Percentage Allocation              
CCGISPA   DIM       20     20       41    Spare                              
.
.End of Record                      61   
.
