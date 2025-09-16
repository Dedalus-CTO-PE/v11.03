. *----------------------------------------------------------------------
. * Include Name  :   GENSNDVR.INC
. *
. * Function      :   Variables for GENSNDEX.PBL - to generate a Soundex
. *                   key
. *
. * Modifications :
. *
. * V10.11.01   08/08/2017  Tracey Nguyen  TSK 0299206
. *             Created Include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
SXCHAR1   DIM       1        
SXCHAR2   DIM       1
.
SXKEYIN   DIM       60     * Keyword In 
SXKEYOUT  DIM       60     * Generated Soundex Keyword Out
SXKEYSTR  DIM       60     * Temp Keyword string 
.
.         Special pairs of characters
.
SXCHARCK  INIT      "CK"
SXCHARGH  INIT      "GH"
SXCHARLM  INIT      "LM"
SXCHARMN  INIT      "MN"
SXCHARMP  INIT      "MP"
SXCHARS   INIT      "S "
SXCHARSC  INIT      "SC"
SXCHARST  INIT      "ST"
SXCHARTZ  INIT      "TZ"
SXCHPAIR  DIM       2
.
.         Sound-Ex replacement numeric value
.
SXNUMREP  INIT      "A0E0H0I0O0U0W0Y0":
                    "B1F1P1V1":
                    "C2G2J2K2Q2S2X2Z2":
                    "D3T3":
                    "L4":
                    "M5N5":
                    "R6"

