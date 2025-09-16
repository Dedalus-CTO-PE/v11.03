.  **********************************************************************
.  *                                                                    *
.  *     Include Name : BOKCONFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Control File        *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     File Name    : controlf.txt                                    *
.  *                                                                    *
.  *     Modifications: V5.00 04.05.89 H.Donnard   (IBA)                *
.  *                          Change include heading                    *
.  *      V5.03.01  04/01/1996  Greg Horvat                             *
.  *                Commented out the menu program, security key, IBA   *
.  *                screen password & data directory variables          *
.  *                                                                    *
.  **********************************************************************
.
.            SECTOR          :  27
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.....HMENUBOK    DIM          8         1      Booking Main Menu
.....HSECURTY    DIM          6         9      Company Security Code
.....HDATABOK    DIM         20        15      Data Directory
.....HSECRET     DIM          8        35      Password IBABOK98
.
. ---- associated doctor checked in sector 10 pos 197   1=yes 2=no
.
HPREFACM    DIM          3        43      Preferred Accommodation (Category BP)
.
HBWAIT      FORM         1        46      Waiting Lists 1=ON,2=OFF (IBABOK01)
HGENBOOK    FORM         1        47      GENerate BOOKing in BOK01  1=ON 0=OFF
