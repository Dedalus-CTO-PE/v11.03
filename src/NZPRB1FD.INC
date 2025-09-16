. V9.08.001 26/10/2006 JT Created FD CAR 120001
. *----------------------------------------------------------------------
. * Include Name  :   NZPRB1FD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   New NZ Private Contract Procedure Revenue Breakdown File  
. *
. * File Type     :   SQL
. *
. * File Name     :   nzprb1af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPRBR11   IFILE    SQL, FIXED=110, KEY="U1-3,4-6,7-12,13-20,21-29,30-37,38-40" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.   SAME FORMAT AS NZPRBRFD
