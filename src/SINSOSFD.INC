. **************************************************************************
. *                                                                        *
. *  Include Name      : SINSOSFD                                          *
. *                                                                        *
. *  Function          : File Definition Include for                       *
. *                      VHA SOS file transfer                             *
. *                                                                        *
. *  File Type         : ASCII                                             *
. *                                                                        *
. *  File Name         : Xyymmdd.nnn                                       *
. *                      yymmdd = Date Transmitted                         *
. *                      nnn    = Sequence number for current day          *
. *                                                                        *
. *  Modifications     : 5.01 29/10/90 Glen Hobby                          *
. *                           FD created                                   *
. *                                                                        *
. **************************************************************************
.
SINSOSAF  FILE      ASCII, FIXED=121
.
.Name     Type      Length Description
.----     ----      ------ -----------
INSSLINE  DIM       120    Packed line
.
.Header Records Details
.----------------------
INSSPURA  DIM       7      Purchase order number
INSSDAT   DIM       6      Purchase order date
INSSCUS   DIM       6      Customer code (control file - INCNVHAC)
INSSDEL   DIM       50     Delivery instructions (INVPURAF - PADELDES)
.
.Line Item Details
.-----------------
INSSLNO   FORM      3      Line number          
INSSQTY   FORM      8      Quantity             (INVPURBF - PBQTYORG) Stock
.                                               (INVPURCF - PCQTYORG) Non-stock
INSSPACK  DIM       15     Pack unit            (INVPURBF - PBSUPPLY) Stock
.                                               (INVPURCF - PCSUPP  ) Non-stock
INSSPRIC  FORM      7.2    Unit price           (INVPURBF - PBCOST  ) Stock
.                                               (INVPURCF - PCCOST  ) Non-stock
INSSCATA  DIM       7      Catalog code         (INVPURBF - PBCATA  ) Stock
.                                               (INVPURBF - PCCATA  ) Non-stock
INSSVCOD  DIM       20     Supplier Part Number (INVCATBF - BSUPPPT ) Stock
.                                               (INVPURCF - PCPART  ) Non-stock
.Trailer Record Details
.----------------------
INSSNUM   FORM      3      Number of items
INSSSEGS  FORM      3      Number of data segments
INSSVHA   FORM      1      VHA Transfer 1=Yes
