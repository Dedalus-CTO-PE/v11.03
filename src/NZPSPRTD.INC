. *---------------------------------------------------------------------- 
. * Include Name  :   NZPSPRTD.INC
. *
. * Function      :   CGI Variables for NZPSPRFD - nzpspraf
. *
. * Mods          :
. *       V10.01.01 19/01/2011  Jill Habasque CAR 234014
. *                 Increased description to 80
. *       V9.08.00  05/10/2006  Jill Habasque CAR 120004
. *                 Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
NZSPR001  DIM       8        Admission number
NZSPR002  DIM       3        Claim Code (Cat CL)
NZSPR003  DIM       10       Surgeon/Consultant (pmshcpaf)
NZSPR004  DIM       9        Procedure Code
NZSPR005  DIM       3        Counter/Unique Number
NZSPR006  DIM       6        Contract/Fund/Expected Payer
NZSPR007  DIM       9        Contract Procedure Code (patcmcaf)
NZSPR008  DIM       1        Primary Procedure 1=Yes 0=No
NZSPR009  DIM       10       Anaesthetist
NZSPR010  DIM       80       Full Procedure Description
NZSPR011  DIM       1        RP Invoice Capture Status
NZSPR012  DIM       1        Planned/Performed Ind
NZSPR013  DIM       1        Patient Insurance 1=Yes 0=No
NZSPR014  DIM       3        Insurer (Catg I)
NZSPR015  DIM       20       Approval Number
NZSPR016  DIM       1        Approval Sighted 1=Yes 0=No
NZSPR017  DIM       20       Claim Number
NZSPR018  DIM       30       Approval Notes
NZSPR019  DIM       30       Comments
NZSPR020  DIM       5        Chargeable Theatre Duration-Minutes
NZSPR021  DIM       12.2     Theatre Fee
NZSPR022  DIM       3        User Defined 1 (Cat UJ)
NZSPR023  DIM       3        User Defined 2 (Cat UK)
NZSPR024  DIM       8        Approval Date
NZSPR025  DIM       10       Unique theatre ID
.
