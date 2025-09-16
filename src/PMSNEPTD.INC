. *----------------------------------------------------------------------
. * Include Name  :   PMSNEPTD.INC
. *
. * Function      :   CGI variables for PMSNEPFD - pmsnepaf.dat
. *----------------------------------------------------------------------
.  Modifications  :
. * V11.01.02 01/09/2022 J.Tan     TSK 0906597
. *           Mod to var VTYPE01,VTYPE02,VTYPE03
. * V11.01.01 08/09/2021 J.Tan     TSK 0906222
. *           Created
. *----------------------------------------------------------------------
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMNEP001  DIM       6      Contract ID
PMNEP002  DIM       2      Type of Visit
PMNEP003  DIM       10     Code Set
PMNEP004  DIM       10     Indicator Number
PMNEP005  DIM       30     Indicator Value
PMNEP006  FORM      14.4   Price
PMNEP007  DIM       1      Active/Inactive     * 1=Inactive
.
VTYPE01   INIT      "Emergency      "
VTYPE02   INIT      "Outpat/Referral"
VTYPE03   INIT      "Inpat/Sub-Acute"
VTYPE04   INIT      "Events         "
.
