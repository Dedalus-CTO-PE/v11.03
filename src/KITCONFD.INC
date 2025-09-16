.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : KITCONFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                      Kits Control File                             *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     Sector used  : 35                                              *
.  *                                                                    *
.  *     File Name    : controlf.txt                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V5.03.01  04/01/1996  Greg Horvat                             *
.  *                Commented out the menu program, security key, IBA   *
.  *                screen password & data directory variables          *
.  *                                                                    *
.  **********************************************************************
.
.             SECTOR USED    :  35
.
. NAME    TYPE   LENGTH  START LOC.   DESCRIPTION
. ----    ----   ------  ----------   -----------
.....KTCNMENU  DIM       8        1        Main Menu
.....KTCNSECU  DIM       6        9        Security Code
.....KTCNDATA  DIM       20       15       Data Directory
.....KTCNPASS  DIM       8        35       Password for IBAKIT98
.
. ------- Audits  0=Off 1=On -------
.
KTCNAUDA  FORM      1        43       Audit 1   (kitmasaf)
KTCNAUDB  FORM      1        44       Audit 2   (kitrecaf)
KTCNAUDC  FORM      1        45       Audit 3
KTCNAUDD  FORM      1        46       Audit 4
KTCNAUDE  FORM      1        47       Audit 5
KTCNAUDF  FORM      1        48       Audit 6
KTCNAUDG  FORM      1        49       Audit 7
KTCNAUDH  FORM      1        50       Audit 8
KTCNAUDI  FORM      1        51       Audit 9
KTCNAUDJ  FORM      1        52       Audit 10
KTCNAUDK  FORM      1        53       Audit 11
KTCNAUDL  FORM      1        54       Audit 12
KTCNAUDM  FORM      1        55       Audit 13
KTCNAUDN  FORM      1        56       Audit 14
KTCNAUDO  FORM      1        57       Audit 15
KTCNAUDP  FORM      1        58       Audit 16
KTCNAUDQ  FORM      1        59       Audit 17
KTCNAUDR  FORM      1        60       Audit 18
KTCNAUDS  FORM      1        61       Audit 19
KTCNAUDT  FORM      1        62       Audit 20
KTCNAUDU  FORM      1        63       Audit 21
KTCNAUDV  FORM      1        64       Audit 22
KTCNAUDW  FORM      1        65       Audit 23
KTCNAUDX  FORM      1        66       Audit 24
KTCNAUDY  FORM      1        67       Audit 25
KTCNAUDZ  FORM      1        68       Audit 26
.
KTCNCPKS  FORM      1        71       Copy kit status from arrival to return ?
.                                       0 = No, 1 = Yes
.
KTCNCPCM  FORM      1        72       Copy comments from arrival to return ?
.                                       0 = No, 1 = Yes
KTCNRECK  FORM      8        73       Unique key for kit recording file
.
