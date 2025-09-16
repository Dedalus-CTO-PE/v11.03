. V9.04.000 13/07/2005 JT  Added index 4                                     
. V9.03.001 23/03/2004 LV  Changed field prefix.
. V9.03.000 18/03/2004 LV  Created new
. *----------------------------------------------------------------------
. * Include Name  :   PRICNOFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Credit Note Header table           
. *
. * File Type     :   SQL
. *
. * File Name     :   pricnoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRICNOA1   IFILE    SQL, FIXED=105, KEY="U1-8"                                  
PRICNOA2   IFILE    SQL, FIXED=105, KEY="U17-24,25-26,1-8"                      
PRICNOA3   IFILE    SQL, FIXED=105, KEY="U27-34,1-8"                            
PRICNOA4   IFILE    SQL, FIXED=105, KEY="U9-16,1-8"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRCOCRNO  DIM       8      8        1     Credit Note number                 
PRCODATE  DIM       8      8        9     Credit Note date                   
PRCODEBT  DIM       8      8        17    Debtor Number                      
PRCOSCAN  DIM       2      2        25    Scan Flag                          
PRCOINVN  DIM       8      8        27    Invoice Number                     
PRCOSTAT  DIM       1      1        35    Credit Note Status                 
.                                         1 - Fully Credited
.                                         2 - Credit by Item
PRCOREAS  DIM       3      3        36    Reason for Credit Note (catg BX)   
PRCOAMNT  FORM      12.2   8        39    Total credit note amount (inc.GST) 
PRCOGSTM  FORM      12.2   8        47    GST credit note amount             
PRCOSPAR  DIM       50     50       55    Spare                              
.
.End of Record                      105  
.
