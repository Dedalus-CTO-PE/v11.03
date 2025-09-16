. *****************************************************************************
. *  System        : Waiting Lists                                            *
. *                                                                           *
. *  Include Name  : WATSWSFD.INC                                             *
. *                                                                           *
. *  Function      : File Def'n Include for Waiting List                      *
. *                  Status Waiting Summary                                   *
. *                                                                           *
. *  File Type     : SQL                                                      *
. *                                                                           *
. *  File Name     : watswsaf.dat                                             *
. *                                                                           *
. *  Keys          : KEY19                                                    *
. *                                                                           *
. *  I/O Include   : WATSWSIO.INC                                             *
. *                                                                           *
. *  Author        : Justin Coates 26/07/1991                                 *
. *                                                                           *
. *  Modifications :                                                         *
. *****************************************************************************
.
.Data File Definition
.--------------------
.
WATSWSA1  IFILE     SQL, FIXED=80, KEY="U1-6,7-9,10-12,13-15,16-18,19-19"
.
. Name    Type      Length  Physical  Start  Description
. ----    ----      ------  --------  -----  -----------
WTSWDATE  DIM       6           6         1  Period Code (CCYYMM)
WTSWUNIT  DIM       3           3         7  Unit/Clinic (Cat WU)
WTSWPRTY  DIM       3           3        10  Priority Code (Cat TP)
WTSWATYP  DIM       3           3        13  Admission Type (Cat A)
WTSWCLSS  DIM       3           3        16  Admission Classification (Cat P)
DWTSWSTA  DIM       1           1        19  Waiting List Status
WTSWRNG1  FORM      8           5        20  No. of Patients Waiting Booking
.                                            (<Range 1)
WTSWRNG2  FORM      8           5        25  No. of Patients Waiting
.                                            (Range 1 < Range 2)
WTSWRNG3  FORM      8           5        30  No. of Patients Waiting   
.                                            (Range 2 < Range 3)
WTSWRNG4  FORM      8           5        35  No. of Patients Waiting   
.                                            (Range 3 < Range 4)
WTSWRNG5  FORM      8           5        40  No. of Patients Waiting   
.                                            (Range 4 < Range 5)
WTSWRNG6  FORM      8           5        45  No. of Patients Waiting   
.                                            (> Range 5)
WTSWSPAR  DIM       30         30        50  Spare variable
.End of Record                           80
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  ------------
WTSWSTAT  FORM      1       Waiting List Status
................................................................................
