. *********************************************************
. *                                                       *
. * Include Name :  AMSNEWFD                              *
. *                                                       *
. * Function     :  File Definition Include for           *
. *                 New Assets File                       *
. *                                                       *
. * File Type    :  ASCII                                 *
. *                                                       *
. * File Name    :  assetnew.txt                          *
. *                                                       *
. * Modifications:  V5.00  15.02.89  S.Barcham   (I.B.A.) *
. *                        Rewrite Include                *
. *                                                       *
. *                 V6.00  06.01.92 B.G.Ackland  (I.B.A.) *
. *                        Copy of ASSNEWFD for the new   *
. *                        Assets System (AMS) IBAAMS48   *
. *                                                       *
. *                 V7.00  22.06.98 Charles Handaya       *
. *                        Change CNAMT to form 12.2      *
. *********************************************************
.
ASSETNEW  FILE       ASCII, FIXED=256
.
.           SECTOR    0
.
.Name     Type      Length     Start   Description
.----     ----      ------     -----   -----------
CNSECTOR  FORM      5            1     Next Sector Number
.
.          SECTOR    1 ONWARDS
.
.Name     Type      Length     Start   Description
.----     ----      ------     -----   -----------
CNCRED    DIM       5            1     Creditor Code   
CNREFNO   DIM       15           6     Reference Number       
CNORDER   DIM       8           21     Order Number
CNDESC    DIM       35          29     Transaction Description
CNAMT     FORM      12.2        64     Amount of Purchase
CNDATE    DIM       8           75     Invoice Date (CCYYMMDD)
CNBATCH   DIM       5           83     Batch Number
.
.End of Record                  88
.
