. V6.00.001 18/03/1997 BGA New Table                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINKEXFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog Keyword Exclusion List     
. *
. * File Type     :   SQL
. *
. * File Name     :   sinkexaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINKEXA1   IFILE    SQL, FIXED=36, KEY="U1-15"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIKEKWD   DIM       15     15       1     Keyword                            
SIKESPA   DIM       20     20       16    Spare                              
.
.End of Record                      36   
.
