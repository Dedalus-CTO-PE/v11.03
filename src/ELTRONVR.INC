.****************************************************************************
.*                          ELTRONVR.INC                                    *
.*            This include contains the variables required when             *
.*            printing with the ELTRON barcode printer                      *
.*                                                                          *
.*  Author: Steve Armstrong   19/05/1997     WHL                            *
.*  Mods  :                                                                 *
.****************************************************************************
.
ANSA0     INIT      "A0"               * text printing prefix
.
ELTRON    INIT      "0,4,1,1,N,#""     * standard text printing string
ENDQUOTE  INIT      "#""               * end of string quote
.
LINEDIFF  FORM      2                  * number to subtract from screen line
.                                        to get actual print line number
LINEFRMT  DIM       3                  * formatted line number (in dots)
LINEONE   FORM      2                  * starting line for label
LINEPRNT  FORM      3                  * line calculation variable
.
SAVLBCOS  FORM      1
.
USINGELT  FORM      1                  * Using ELTRON printer flag
.                                           0 = no
.                                           1 = yes
