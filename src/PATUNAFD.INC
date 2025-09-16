.  ***************************************************************************
.  *                                                                         *
.  *     Include Name : PATUNAFD.INC                                         *
.  *                                                                         *
.  *     Function     : File Definition include for Patient                  *
.  *                    Unadmit/Undischarge/Adm & Dsch Date Change Audit     *
.  *                                                                         *
.  *     File Type    : SQL                                                  *
.  *                                                                         *
.  *     File Name    : patunaaf.dat                                         *
.  *                                                                         *
.  *     Keys         : KEY25    KEY25    KEY25                              *
.  *                                                                         *
.  *     Mods         :                                                      *
.  *      V10.04.01 02/01/2014  Patrick Adair     CAR 295318                 *
.  *                Moved PTUNOPRD out of spare variable                     *
.  *      V10.03.02 03/09/2013  Davin             CAR 289907                 *
.  *                Added PTUNOPRD to spare variable                         *
.  *                Added PTUNTYPE type = 6 Change Provisional DRG           *
.  *      V10.03.01 10/11/2011  Mike Laming       CAR 234355                 *
.  *                File change to move PTUNOTTM data out of Spare & increase*
.  *      V10.02.01 07/10/2011  Saroeun Soeur     CAR 234355                 *
.  *                added PTUNOTTM - adm/disc time                           *
.  *      V10.00.01 31/03/2010  Steve Armstrong   CAR 219111                 *
.  *                Added option 5 to PTUNTYPE.                              *
.  *                Added fields PTUNTIME, PTUNAUID & PTUNCANC.              *
.  *      V9.06.01  11/05/06 J.Tan  CAR 90040                                *
.  *                Added Discharge Type                                     *
.  *      V9.06.01  11/05/06 J.Tan  CAR 90040                                *
.  *                Added Discharge Type                                     *
.  *      V9.05.01  18/04/06 J.Tan  CAR 91327                                *
.  *                Added 3th index                                          *
.  *      V5.07.001 07/08/1998 Jim Stathopoulos                              *
.  *                507 Changes                                              *
.  *                                                                         *
.  ***************************************************************************
.
PATUNAA1  IFILE  SQL, FIXED=110, KEY="U1-8,9-16,17-24,25-25"
PATUNAA2  IFILE  SQL, FIXED=110, KEY="U25-25,9-16,17-24,1-8"
PATUNAA3  IFILE  SQL, FIXED=110, KEY="U9-16,17-24,1-8,25-25"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DPTUNADM  DIM       8         8          1   Admission Number
PTUNDATE  DIM       8         8          9   Date of Alteration (ccyymmdd)
PTUNTIME  DIM       8         8         17   Time of Alteration (hh:mm:ss)
PTUNTYPE  DIM       1         1         25   Alteration type
.                                               "1" = Unadmit
.                                               "2" = Undischarge
.                                               "3" = Change Admission Date
.                                               "4" = Change Discharge Date
.                                               "5" = Cancel Pre-admission
.                                               "6" = Change Provisional DRG
PTUNODTE  DIM       8         8         26   Adm Date or Dsch Date affected
PTUNHOSP  DIM       3         3         34   Hospital number for Undischarged
.                                            patients
DPTUNSEN  DIM       1         1         37   Sent flag for EDI (Unadmitted)
.                                              0 = No
.                                              1 = Yes
PTUNDTYP  DIM       3         3         38   Discharge Type (Category D)
PTUNAUID  DIM       10        10        41   User Id of Person Making Alteration
PTUNCANC  DIM       3         3         51   Reason for Unadmit/Canc. (Cat PC)
PTUNOTTM  DIM       8         8         54   Adm Time or Dsch Time affected
PTUNOPRD  DIM       4         4         62   Original Provisional DRG
PTUNSPAR  DIM       44        44        66   Spare variable
.
.End of Record                          110
.
. redefine form fields in key
. ---------------------------
PTUNADMN  FORM      8         8          1   ADMISSION NUMBER
PTUNSENT  FORM      1         1          1   EDI Sent Flag
.
