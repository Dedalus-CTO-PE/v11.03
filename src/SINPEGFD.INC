. *********************************************************
. *                                                       *
. * Include Name :  SINPEGFD                              *
. *                                                       *
. * Function     :  File Definition Include for           *
. *                 PEG Purchase Order Transfer           *
. *                                                       *
. * File Type    :  ASCII                                 *
. *                                                       *
. * File Name    :  pegfilaf.dat                          *
. *                                                       *
. *                                                       *
. *********************************************************
PEGFILE FILE  ASCII, FIXED=900
.
.Name       Type     Length   Position    Description
.
.------------------------------------------------------------------------------
.                    DESCRIPTIVE Record
.------------------------------------------------------------------------------
.
SIP0TYPE    INIT     "HCHDR"     1-  5    (M) Constant:"HCHDR"
.PIPE                            6-  6        "|"
SIP0TRAN    INIT     "ORDERS"    7- 12    (M) Constant:"ORDERS"
.PIPE                           13- 13        "|"
SIP0ORDN    DIM      35         14- 48    (M) Order Number            <SIPAPON
.PIPE                           49- 49        "|"
SIP0TEST    INIT     "P"        50- 50    (M) Test/Production Flag T or P
.PIPE                           51- 51        "|"
SIP0RCID    DIM      35         52- 86    (M) Purchaser Code (Company EAN or
.                                               PC ExChange ID)       <SNCOHEAN
.PIPE                           87- 87        "|"
SIP0SNID    DIM      35         88-122    (M) Supplier Code  (Company EAN or
.                                               PC ExChange ID)       <APMACEDI
.PIPE                          123-123        "|"
SIP0ORDT    DIM       8        124-131    (M) Order Date (CCYYMMDD)   <SIPADIN
.PIPE                          132-132        "|"
SIP0INDT    DIM       8        133-140    (O) Invoice Date (CCYYMMDD)
.PIPE                          141-141        "|"
SIP0EXDT    DIM       8        142-149    (O) Expiry Date (CCYYMMDD)
.PIPE                          150-150        "|"
SIP0DEDT    DIM       8        151-158    (O) Expected Delivery Date (CCYYMMDD)
.PIPE                          159-159        "|"
SIP0AFDT    DIM       8        160-167    (O) Deliver Prior or On Date(CCYYMMDD)
.PIPE                          168-168        "|"
SIP0BFDT    DIM       8        169-176    (O) Deliver Not Before Date (CCYYMMDD)
.PIPE                          177-177        "|"
SIP0PUCN    DIM      35        178-212    (O) Purchaser Contact Name  <SIPAICN
.PIPE                          213-213        "|"
SIP0PUEM    DIM      70        214-283    (O) Purchaser Email Address
.PIPE                          284-284        "|"
SIP0PUPH    DIM      35        285-319    (O) Purchaser Phone Number
.PIPE                          320-320        "|"
SIP0SUCO    DIM      35        321-355    (M) Supplier Company Name   <APMASN1
.PIPE                          356-356        "|"
SIP0DESP    DIM      35        357-391    (M) Delivery Ship Code (EAN)<SNCOHEAN
.PIPE                          392-392        "|"
SIP0DENM    DIM      35        393-427    (O) Delivery Name           <HSHORT
.PIPE                          428-428        "|"
SIP0DEA1    DIM      35        429-463    (O) Delivery Address Line 1 <SIPADEL
.PIPE                          464-464        "|"
SIP0DEA2    DIM      35        465-499    (O) Delivery Address Line 2 <CHADD1
.PIPE                          500-500        "|"
SIP0DEA3    DIM      35        501-535    (O) Delivery Address Line 3 <CHADD2
.PIPE                          536-536        "|"
SIP0DEPC    DIM       9        537-545    (O) Delivery Post Code      <CHPOST
.PIPE                          546-546        "|"
SIP0BICD    DIM      35        547-581    (O) Billing Code (EAN)      <SNCOHEAN
.PIPE                          582-582        "|"
SIP0BINM    DIM      35        583-617    (O) Billing Name            <HSHORT
.PIPE                          618-618        "|"
SIP0BIA1    DIM      35        619-653    (O) Billing Address Line 1  <CHADD1
.PIPE                          654-654        "|"
SIP0BIA2    DIM      35        655-689    (O) Billing Address Line 2
.PIPE                          690-690        "|"
SIP0BIA3    DIM      35        691-725    (O) Billing Address Line 3  <CHADD2
.PIPE                          726-726        "|"
SIP0BIPC    DIM       9        727-735    (O) Billing Address P Code  <CHPOST
.PIPE                          736-736        "|"
SIP0ITAX    DIM      20        737-756    (O) Tax Information
.PIPE                          757-757        "|"
SIP0FTX1    DIM      70        758-827    (O) Additional Information Line 1
.                                              from Message Code      <SIPAMES
.PIPE                          828-828        "|"
SIP0FTX2    DIM      70        829-898    (O) Additional Information Line 2
.                                              from Confirmation Code <SIPACON
.TILDA                         899-899        "~"
.
.End of Record                     900
.
.------------------------------------------------------------------------------
.                    DETAIL Record
.------------------------------------------------------------------------------
.
SIP1TYPE    INIT     "LINEITEM"  1-  8    (M) Constant:"LINEITEM"
.PIPE                            9-  9        "|"
SIP1LINE    DIM       6         10- 15    (M) Order Line Number       <SIPCITM
.PIPE                           16- 16        "|"
SIP1PDCD    DIM      35         17- 51    (M) Product Code (Catalog)  <SIPCCAT
.PIPE                           52- 52        "|"
SIP1PEAN    DIM      35         53- 87    (O) Product EAN             <SIICUR1
.PIPE                           88- 88        "|"
SIP1SPPC    DIM      35         89-123    (O) Supplier Product Code   <SIPCPN
.PIPE                          124-124        "|"
SIP1ITDS    DIM      70        125-194    (O) Product Description     <SIPCPD
.PIPE                          195-195        "|"
SIP1QTY     DIM      15        196-210    (M) Quantity Ordered        <SIPCOQT
.PIPE                          211-211        "|"
SIP1UOM     DIM       3        212-214    (O) Unit of Measure         <SIICUOM
.                                               BX=Box, CT=Carton, EA=Each,
.                                               PK=Pack, SR=Strip
.PIPE                          215-215        "|"
SIP1DEDT    DIM       8        216-223    (O) Expected Delivery Date (CCYYMMDD)
.PIPE                          224-224        "|"                     <SIPCEDD
SIP1AFDT    DIM       8        225-232    (O) Deliver Prior or On Date(CCYYMMDD)
.PIPE                          233-233        "|"
SIP1BFDT    DIM       8        234-241    (O) Deliver Not Before Date (CCYYMMDD)
.PIPE                          242-242        "|"
SIP1EXDT    DIM       8        243-250    (O) Goods Expiry Date (CCYYMMDD)
.PIPE                          251-251        "|"
SIP1PRTY    DIM       3        252-254    (M) Code to Advise Origin of Price
.                                               CAT=Catalog,
.                                               CON=Contract,
.                                               GRP=Gross Unit Price,
.                                               NTP=Net Unit Price
.PIPE                          255-255        "|"
SIP1UNPR    DIM      15        256-270    (M) Unit Price Net $ Value  <SIPCECT
.PIPE                          271-271        "|"
SIP1NUMP    DIM       8        272-279    (O) Number of Inners (N/A if EAN)
.PIPE                          280-280        "|"
SIP1PACK    DIM       3        281-283    (O) 1-Inners,3-Outers, -Outers
.PIPE                          284-284        "|"
SIP1FUOM    DIM       3        285-287    (O) Unit of Measure Free Goods
.PIPE                          288-288        "|"
SIP1FQTY    DIM      15        289-303    (O) Quantity of Free Goods
.PIPE                          304-304        "|"
SIP1DISP    DIM       8        305-312    (O) Discount Percentage
.PIPE                          313-313        "|"
SIP1REBP    DIM       8        314-321    (O) Rebate Percentage
.PIPE                          322-211        "|"
SIP1ITAX    DIM      17        323-339    (O) Tax Item Information
.PIPE                          340-340        "|"
SIP1FTX1    DIM      70        341-410    (O) Additional Information Line 1
.PIPE                          411-411        "|"
SIP1FTX2    DIM      70        412-481    (O) Additional Information Line 2
.TILDA                         482-482        "~"
.
.End of Record                     483
.------------------------------------------------------------------------------
.                    FILE TOTAL Record
.------------------------------------------------------------------------------
.
SIP2TYPE    INIT     "END"       1-  3    (M) Constant:"END"
SIP2ORDN    DIM      35          4- 37    (M) Order Number            <SIPAPON
.TILDA                          38- 38        "~"
.
.End of Record                      39
.
