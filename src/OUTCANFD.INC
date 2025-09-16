. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTCANFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                 Cancelled Booking Details                                 *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outcanaf.dat                                              *
. *                                                                           *
. * Keys          : KEY8, KEY24, KEY33, KEY22                                 *
. *                                                                           *
. * Modifications :                                                           *
. *  **** Programmer Note **************                                      *
. *       Any changes to this FD may also need to be made in OUTQUEFD.        *
. *       Please check this before proceeding.                                *
. *                                                                           *
. *       V10.12.01  05/03/2018  Ebon Clements    TSK 0846913                 *
. *                  Added OPCNBKDT-OBABKDTE date/time original booking made  *
. *       V10.05.01  16/07/2014  Ebon Clements    CAR 251384                  *
. *                  Added OTBBTCOD Tier 2 Code (category NC)                 *
. *       15/12/2011 Ebon Clements    CAR 246872                              *
. *                  Added OPCNREFN                                           *
. *       21/07/2011 Steve Armstrong  CAR 246872                              *
. *                  Added OPCNCTYP, OPCNNMDS, OPCNSRVC & OPCNCART.           *
. *       01/02/1996 Justin Coates  (SUHT Mods)                               *
. *                  Added OPCNVTYP - visit type of booking                   *
. *                  Added OPCNRLRR - referral letter reason for referral     *
. *       28/07/1995 Max White      SRF 441225 (Quote 440056)                 *
. *                  Added OPCNTRAN - transport allocation                    *
. *       11/04/1995 Paul Howells   SRF 134941                                *
. *                  Added Operator Id.                                       *
. *       02/03/1994 Justin Coates  (Hawkes Bay mods)                         *
. *                  added fifth index, site/date order                       *
. *       16/05/1990 Steve O'Gorman  SRF 104803                               *
. *                  Added Date to the middle of 2nd key                      *
. *                  to get records in U/R - Date order                       *
. *       31/08/1989 Graeme Williams                                          *
. *                  Created FD                                               *
. *****************************************************************************
.
.Data file definition
.--------------------
OUTCANA1  IFILE     SQL, FIXED=150, KEY="U34-41"
OUTCANA2  IFILE     SQL, FIXED=150, KEY="U42-49,13-20,34-41"
OUTCANA3  IFILE     SQL, FIXED=150, KEY="U1-6,7-12,13-20,21-25,34-41"
OUTCANA4  IFILE     SQL, FIXED=150, KEY="U1-6,53-60,34-41"
OUTCANA5  IFILE     SQL, FIXED=150, KEY="U1-6,13-20,34-41"
.
FILCANA1  INIT      "canaf"
FILCANA2  INIT      "canaf"
FILCANA3  INIT      "canaf"
FILCANA4  INIT      "canaf"
FILCANA5  INIT      "canaf"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  ----------------------------------
OPCNSITE  DIM       6         6        1  Site of cancelled booking
OPCNCLIN  DIM       6         6        7  Clinic of cancelled booking
OPCNDATE  DIM       8         8       13  Date of cancelled booking
OPCNSTRT  DIM       5         5       21  Cancelled session start time
DOPCNSLO  DIM       3         3       26  Cancelled session slot number
OPCNTIME  DIM       5         5       29  Cancelled session slot time
DOPCNOUT  DIM       8         8       34  Outpatient number cancelled
OPCNURNO  DIM       8         8       42  U/R number cancelled
OPCNREAS  DIM       3         3       50  Reason for cancellation (CB)
OPCNRDTE  DIM       8         8       53  Date of cancellation
OPCNRTIM  DIM       8         8       61  Time of cancellation
OPCNSRCR  DIM       3         3       69  Cancelled source of referral (S)
OPCNCOMP  DIM       3         3       72  Cancelled Comp Code (CL)
OPCNCLAS  DIM       3         3       75  Cancelled Patient Class. (Cat A)
OPCNINS   DIM       3         3       78  Cancelled Ins. status (U1)
OPCNCAT   DIM       3         3       81  Cancelled Patient Cat. (P )
OPCNPRTY  DIM       3         3       84  Cancelled Priority Code (PR)
OPCNOPER  DIM       4         4       87  Operator Id.
OPCNTRAN  DIM       3         3       91  Cancelled Transport Allocation (OB)
OPCNVTYP  DIM       3         3       94  Visit Type of Booking (CV)
OPCNRLRR  DIM       3         3       97  Referral Letter - Referral reason
OPCNCTYP  DIM       6         6      100  Clinic Type (outctyaf)
OPCNNMDS  DIM       3         3      106  NMDS Clinic (Cat NM)
OPCNSRVC  DIM       3         3      109  Service Delivery (Cat sd)
OPCNCART  DIM       3         3      112  Care Type (Cat CC)
OPCNREFN  DIM       8         8      115  Linked AH Referral Number
OPCNTCOD  DIM       3         3      123  Tier 2 Code (category NC)
OPCNBKDT  DIM       16        16     126  Book Date/Time(CCYYMMDDHH:MM:SS)
OPCNSPAR  DIM       8         8      142  Spare variable
.
.End of Record                       150
.
.  redefine form fields from key
.  -----------------------------
.Name     Type      Length  Description
.-------  ----      ------  -------------------------------
OPCNOUTN  FORM      8       Outpatient number
OPCNSLOT  FORM      3       Cancelled session slot number
.
