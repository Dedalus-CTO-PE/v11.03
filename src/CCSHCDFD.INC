. *----------------------------------------------------------------------
. * Include Name  :   CCSHCDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Hospital Master Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   ccshcdaf.dat
. *
. * Change History
. *   v9.02.01        27.Jun.2002   Glenn Saunders  (port to v9.xx)
. *                   Amend to incorporate Southland specific fields.
. *   V9.02.00         2.May.2002   Glenn Saunders  (port to v9.xx)
. *
. *   VF.01.001        8.May.2000   Sandra Barcham
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSHCDA1   IFILE    SQL, FIXED=78, KEY="U1-2"                                   
CCSHCDA2   IFILE    SQL, FIXED=78, KEY="U3-37,1-2"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCHCHCD   DIM       2      2        1     Hospital Code                      
CCHCDES   DIM       35     35       3     Hospital Description               
CCHCPREF  DIM       1      1        38    Alpha Prefix for Episode No.s (S/land)
CCHCPUSE  DIM       1      1        39    Use Prefix for Episode No.    (S/land)
CCHCSPA   DIM       38     38       40    Spare                              
.
.End of Record                      78   
.
