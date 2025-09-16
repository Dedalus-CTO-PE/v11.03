.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HL7WEXFD.INC                                  *
.  *                                                                      *
.  *  Function          :   HL7 W/L Extension File                        *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hl7wexaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY20                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *      28/06/2012  Steve Armstrong  CAR 267352                         *
.  *                  Fixed length of WMDESC to be 80 instead of 50 and   *
.  *                  entended file length accordingly.                   *
.  *      20/10/2001  Steve Armstrong                                     *
.  *                  FD Created                                          *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
HL7WEXA1   IFILE SQL, FIXED=160, KEY="U1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DHLWXMSG  DIM       20        20      1   Message Id
.WMURNO   DIM        8         8     21   U/R Number
.WMCODE   DIM        9         9     29   Procedure Code
.WMDESC   DIM       80        80     38   Procedure Description
.WMDATE1  DIM        8         8    118   Date on List (ccyymmdd)
.WMDATE2  DIM        8         8    126   Date of Last Review (ccyymmdd) /
.                                            Final Outcome of Offer
.WMBOOK   FORM       8         5    134   Booking Number
.WMDATE4  DIM        8         8    139   Removal Date (ccyymmdd)
.WMREMOVE DIM        3         3    147   Removal Reason (Category WR/BC)
HLWXSPAR  DIM       10        10    150   Spare Variable
.
. End of Record                     160
.
. Redefine form fields from key
. -----------------------------
HLWXMESG  FORM      20
