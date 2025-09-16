. V9.08.001 29/01/2007 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   NZPFIGFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Priv GST Financial Summary          
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpfigaf.dat (GST Financial file)
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPFIGA1   IFILE    SQL, FIXED=194, KEY="U4-4,5-10,11-14,15-15,16-28,1-3"
NZPFIGA2   IFILE    SQL, FIXED=194, KEY="U1-3,4-4,5-10,11-14,15-15,16-28"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.      SAME FORMAT AS NZPFINFD
.
.  Note:
.  NZFITYPE = A  & NZFICODE = A for GST
.  NZFITYPE = A  & NZFICODE = Q for GST Credit Note
.
