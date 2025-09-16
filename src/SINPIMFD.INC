. *----------------------------------------------------------------------
. * Include Name  :   SINPIMFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Purchase Import File
. *
. * File Type     :   ASCII
. *
. * File Name     :   
. *
. *----------------------------------------------------------------------
.
IMPTFILE   FILE    ASCII, FIXED=280
VERIFILE   FILE    ASCII, FIXED=280
IMPTNAME   DIM     40
VERINAME   DIM     40
.
.Name     Type      Length Start Description
.----     ----      ------ ----- -----------
IMPTORD   DIM       10     1     Supplier Document ID     (Opt)
IMPTLIN   DIM       3      11    Supplier Document Line   (Opt)
IMPTVEN   DIM       10     14    Supplier Vendor ID       (Opt)
IMPTDAT   DIM       8      24    Date Order Placed        (Opt)
IMPTCST   DIM       5      29    Cost Centre              (Opt)     
IMPTPRD   DIM       5      34    Product Group            (Opt)     
IMPTWAR   DIM       5      39    Warehouse                (Opt)     
IMPTCAT   DIM       7      44    Catalog                  (Opt)     
IMPTPN    DIM       30     51    Part Number                        
IMPTPD    DIM       30     81    Part Description         (Opt)     
IMPTSUT   DIM       15     96    Supply Unit              (Opt)     
IMPTEDD   DIM       8      114   Expected Delivery Date   (Opt)     
IMPTOQT   FORM      12.2   122   Order Quantity (S)      
IMPTECT   FORM      12.4   137   Exp.Cost per Supply Unit (Opt)
IMPTUR1   DIM       15     154   User Def Ref 1           (Opt)     
IMPTUR2   DIM       15     169   User Def Ref 2           (Opt)     
IMPTDEL   DIM       40     174   Special Delivery         (Opt)
IMPTGST   DIM       1      214   GST Applicable Y = Yes   (Opt)
.
.End of Record             215  
.
