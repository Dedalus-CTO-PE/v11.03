. RKS 03/04/94 srf 131260 Changed SINVHAA3 from '89-94' to '89-95'
. **************************************************************************
. *                                                                        *
. *  Include Name      : SINVHAFD                                          *
. *                                                                        *
. *  Function          : File Definition Include for Supply and Inventory  *
. *                      VHA SOS file transfer acknoledgements             *
. *                                                                        *
. *  File Type         : SQL                                               *
. *                                                                        *
. *  File Name         : sinvhaaf.dat                                      *
. *                                                                        *
. *  Modifications     :                                                   *
. *     02/06/94  RKS  Added SIVHTYPE - Which Supplier being used          *
. **************************************************************************
.
SINVHAA1  IFILE    SQL, FIXED=125, KEY="U1-6,7-9,30-32"
SINVHAA2  IFILE    SQL, FIXED=125, KEY="U81-81,10-29,1-6,7-9,30-32"
SINVHAA3  IFILE    SQL, FIXED=125, KEY="U10-29,82-88,89-95,1-6,7-9,30-32"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIVHDAT   DIM       6      6        1     Date
SIVHFNO   DIM       3      3        7     File Number
SIVHORD   DIM       20     20       10    Order Number
SIVHLIN   DIM       3      3        30    Line Number
SIVHQTY   FORM      7      5        33    Quantity Ordered
SIVHSUN   DIM       15     15       38    Supply Unit
SIVHCOS   FORM      9.4    8        53    Cost
SIVHPAT   DIM       20     20       61    Part Number (Customers Code)
SIVHSTA   DIM       1      1        81    Status 0 = Load 1 = Overwritten
.                                         2 = Processed
SIVHCOR   DIM       7      7        82    Purchase Order Created
SIVHCAT   DIM       7      7        89    Purchase Order Catalog Created
SIVHTYP   DIM       1      1        96    0=All Types, 1=Stock Only, 2=Non-Stock
SIVHVEN   DIM       20     20       97    Part Number (Vendor Number)
SIVHTYPE  FORM      2      2        117   0-VHA,1-Barwon,2-Next Suppliers
SIVHSPA   DIM       6      6        119   
.
.End                                125
.
SIVHLORD  DIM       20
SIVHF1    FORM      1
SIVHSTAX  INIT      "           "
SIVHSTA0  INIT      "Load       "
SIVHSTA1  INIT      "Overwritten"
SIVHSTA2  INIT      "Processed  "
.
.End of Record                      125
