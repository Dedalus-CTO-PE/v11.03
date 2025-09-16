. 6.00.001 07.10.1994 Robs New File                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINIMFFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory
. *                   Import File for Requisitions
. *
. * File Type     :   TEXT
. *
. * File Name     :   user defined
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINIMFA1  FILE      ASCII,FIXED=92
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIMFTYPC  DIM       1      1        1     Record Type ("1" at moment)
SIMFDATC  DIM       8      8        2     Date of Requsition
SIMFCSTC  DIM       5      5        10    Cost Centre     
SIMFDELC  DIM      50     50        15    Delivery Details
SIMFWARC  DIM       5      5        65    Warehouse
SIMFCATC  DIM       7      7        70    Catalog Code 
SIMFQTYC  FORM     12.2   15        77    Quantity Required   
.
.End of Record                      92    Line Feed
.
.Data File Definition
.--------------------
SINIMFB1  IFILE     SQL, FIXED=85, KEY="U10-14,15-64,70-76,65-69,1-1"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIMFTYP   DIM       1      1        1     Record Type ("1" at moment)
SIMFDAT   DIM       8      8        2     Date of Requsition
SIMFCST   DIM       5      5        10    Cost Centre     
SIMFDEL   DIM      50     50        15    Delivery Details
SIMFWAR   DIM       5      5        65    Warehouse
SIMFCAT   DIM       7      7        70    Catalog Code 
SIMFQTY   FORM     12.2    8        77    Quantity Required   
.
.End of Record                      85
.
SINIMFNM  DIM       8
SINIMFAA  INIT      "sinimf"
.
