.  ***************************************************************************
.  *                                                                         *
.  *     Include Name : MRTMOVFD.INC                                         *
.  *                                                                         *
.  *     Function     : File Definition include for Medical Records Tracking *
.  *                    Movement Reason                                      *
.  *                                                                         *
.  *     File Type    : SQL                                                  *
.  *                                                                         *
.  *     File Name    : mrtmovaf.dat                                         *
.  *                                                                         *
.  *     Keys         : KEY 4                                                * 
.  *                                                                         *
.  *     Modifications: V9.02.00  30/04/2002 Pat Dirito                      *
.  *                              Changed Description of Type & Reason       *
.  *                              Indicator as where not being saved in the  *
.  *                              format that was specified. Now start at 0. *
.  *                    V5.01.02  21/12/92  DIG                              *
.  *                              Added "Archive Home" to the Reason         *
.  *                              Indicator.                                 *
.  *                                                                         *
.  ***************************************************************************
.
MRTMOVA1   IFILE   SQL, FIXED=64, KEY="U1-4"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.  DESCRIPTION
. ----     ----   ------   --------  ----------  -----------
.
MRMOREAS   DIM       4         4          1      Reason for Movement
MRMODESC   DIM      30        30          5      Description
MRMOPERD   FORM      3         3         35      Borrowing Period   (Days)
MRMOTYPE   DIM       1         1         38      Type      0 = Ordinary
.                                                          1 = In-Patient
MRMOINDC   DIM       1         1         39      Reason Indicator 0 = Home
.                                                                 1 = Other
.                                                                 2 = Archive 
.                                                                     Home
MRMOSTAT   FORM      1         2         40      Status Indicator 0 = Active
.                                                                 1 = Non Active
MRMOUSAG   FORM      1         2         42      Usage Indicator  0 = Not Used
.                                                                 1 = Used
.                                                                 2 = Bulk Req
MRMOSPAR   DIM      20        20         44      Spare Variable
.
.
.End of Record                           64
.
.
.
.
