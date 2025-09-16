.******************************************************************************
.*                                                                            *
.*                                 EPSON1                                     *
.*                                 -----                                      *
.*                                                                            *
.*    Include to set the escape sequences for the various different styles of *
.*    printing we can perform with the Epson print drivers.                   *
.*                                                                            *
.******************************************************************************
ALT$ON    INIT      033,"t",001		* Alternate character set on
ALT$OFF   INIT      033,"t",000		* Alternate character set off
.
BOLD$ON   INIT      033,"G"		* Bold/Double strike on
BOLD$OFF  INIT      033,"H"		* Bold/Double strike off
.
CPI10     INIT      033,"P"		* 10 charactes per inch
CPI12     INIT      033,"M"		* 12 charactes per inch
CPI17     INIT      033,017 		* approx 17 charactes per inch
.
DBL$ON    INIT      033,"W",001		* Double width on
DBL$OFF   INIT      033,"W",000		* Double width off
DRAFT     INIT      033,"x",000		* Draft quality
.
ELITE     INIT      033,"x",001		* Elite quality
.ESC       EQU       033                 * Escape character, octal 033
.
ITAL$ON   INIT      033,"4"		* Italics (Blinking) on
ITAL$OFF  INIT      033,"5"		* Italics (Blinking) off
.
LPI6      INIT      033,"2"		* 6 lines per inch
LPI8      INIT      033,"0"		* 8 lines per inch
.
NLQ       INIT      033,"x",002		* Near letter quality
.
PROP$ON   INIT      033,"p",001		* Porportionally spaced characters on
PROP$OFF  INIT      033,"p",000		* Porportionally spaced characters off
.
REV$ON    INIT      033,"E"		* Reverse image on
REV$OFF   INIT      033,"F"		* Reverse image off
.
SUPSCR    INIT      033,"S",000		* Superscript on
SUBSCR    INIT      033,"S",001		* Subscript on
SU$OFF    INIT      033,"T"		* Superscript/Subscript off
.
ULINE$ON  INIT      033,"-",001		* Underline on
ULINE$OFF INIT      033,"-",000		* Underline off
