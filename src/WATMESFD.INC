. ************************************************************
. *                                                          *
. * Include Name :  WATMESFD                                 *
. *                                                          *
. * Function     :  File Definition Include for Waiting List *
. *                 Comments                                 *
. *                                                          *
. * File Type    :  SQL                                      *
. *                                                          *
. * File Name    :  watmesaf.dat                             *
. *                                                          *
. * Keys         :  KEY21                                    *
. *                                                          *
. * Modifications:  V5.00  15.02.89  B.G.Ackland (I.B.A.)    *
. *                        Rewrite Include                   *
. *                                                          *
. ************************************************************
.
WATMESA1   IFILE SQL, FIXED=112, KEY="U1-8,9-17,18-19,20-21"
.
.NAME         TYPE   LENGTH  PHYSICAL  START       DESCRIPTION
.----         ----   ------  --------  -----       -----------
WAURNO        DIM      8        8         1        U/R Number
WAPROC        DIM      9        9         9        Procedure Code
DWACNT        DIM      2        2        18        Procedure Count
DWACNT2       DIM      2        2        20        Comments Line Number
.
WATEXT        DIM      70       70       22        Comments Text
WASPARE       DIM      20       20       92        Spare
.
.End of Record                          112
.
SSWAURNO      DIM      8
WAENDP        FORM     2
WADIM127      DIM      127
.
.    redefine form fields from key
.    -----------------------------
.NAME         TYPE   LENGTH             START      DESCRIPTION
.----         ----   ------             -----      -----------
WACNT         FORM     2                  18       Procedure Count
WACNT2        FORM     2                  20       Comments Line Number
