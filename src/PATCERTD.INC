. *----------------------------------------------------------------------
. * Include Name  :   PATCERTD.INC
. *
. * Function      :   CGI Variables for PATCERFD - patceraf
. *
. * Mods          :   
. *       V10.02.01 15/06/2011  Jill Parkinson CAR 240715
. *                 Added Certificate Status
. *       V9.03.00  15/11/2005  Mike Laming  CAR 88460
. *                 Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PTCER001  DIM       8        U/R Number
PTCER002  DIM       3        Certificate Type (Category cr)
PTCER003  DIM       8        Date From (ccyymmdd)
PTCER004  DIM       8        Date To   (ccyymmdd)
PTCER005  DIM       8        Date Signed/Issued (ccyymmdd)
PTCER006  DIM       10       Certifying Code (patdo1af)
PTCER007  DIM       1        Certificate Sent (0=No, 1=Yes)
PTCER008  DIM       3        Certificate Status (Cat FG)
.
.
.Work Fields
DATEFR    DIM       12
DATETO    DIM       12
DATESN    DIM       12
