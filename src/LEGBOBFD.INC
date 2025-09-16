. *****************************************************************************
. *                                                                           *
. * Include Name  : LEGBOBFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                    Clinic Session Booking Table B                         *
. *                 Legacy Visits                                             *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : legbokbf.dat                                              *
. *                                                                           *
. * Keys          : KEY 8  KEY 16                                             *
. *                                                                           *
. * Modifications :                                                           *
. *       V9.03.00  03/05/2004  Ebon Clements    CAR 49209                    *
. *                 Ported from 6.11                                          *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
LEGBOKB1  IFILE     SQL, FIXED=286, KEY="U1-8"
LEGBOKB2  IFILE     SQL, FIXED=286, KEY="U79-86,1-8"
.
.NAME     TYPE    LENGTH  PHYSICAL  START  DESCRIPTION
.----     ----    ------  --------  -----  -----------
.DLOBAOUT  DIM       8        8         1   Outpatient Number
LOBASRCR  DIM       3        3         9   Source of Referral (S)      
LOBACOMP  DIM       3        3         12  Compensation Eligibility (CL)
LOBACLAS  DIM       3        3         15  Patient Classification (A )
LOBAINS   DIM       3        3         18  Insurance Status (U1)
LOBAATTN  DIM       3        3         21  Non attendance Code (CA)
LOBADOCT  DIM       6        6         24  Doctor's Code
LOBACOMM  DIM       25       25        30  Comments
LOTBBFUN  DIM       6        6         55  Health fund code
LOTBBTBL  DIM       8        8         61  Health fund table
DLOTBBPV  DIM       3        3         69  No. of prev. visits charged
LOTBBSPA  DIM       7        7         72  Spare variable
.LOBADATE  DIM       8        8         79  Date (CCYYMMDD)
LOBACAT   DIM       3        3         87  Patient Category (P )
LOBAPRTY  DIM       3        3         90  Priority Code (PR)
LOBARSCH  DIM       3        3         93  Reason for Reschedule (RR)
LOBBPORT  DIM       2        2         96  Port No. accessing this record
LOBBBOOK  DIM       1        1         98  Non-booked attendee flag
.                                            " " = Booked attendee
.                                            "N" = Non-booked attendee, no slot
.                                            "S" = Non-booked attendee with slot
LOBBCTYP  DIM       6        6         99  Clinic type for tracking NBA.s
LOBOUSR1  DIM       3        3        105  User Defined Field 1 (O1)
LOBOUSR2  DIM       3        3        108  User Defined Field 2 (O2)
LOBOUSR3  DIM       3        3        111  User Defined Field 3 (O3)
LOBOUSR4  DIM       3        3        114  User Defined Field 4 (O4)
LOBALADM  DIM       8        8        117  Linked Outpatient Visit Number
.                                          from re-appointments module
LOTBBDEP  DIM       3        3        125  Department code (Cat AC)
LOTBBTRA  DIM       3        3        128  Transport Allocation (Cat OB)
LOTBBLNG  DIM       3        3        131  Language of Interpreter (Cat OL)
LOTBBTMF  DIM       8        8        134  Time First Seen
LOTBBTMB  DIM       8        8        142  Time Booked Out
LOTBBGPF  DIM       20       20       150  GPFH Approval Number
LOTBBECR  DIM       20       20       170  ECR Approval Number
LOTBBRFG  DIM       8        8        190  Referring GP
LOTBBGPC  DIM       6        6        198  GP Practice Code
LOTBBADC  DIM       6        6        204  Actual Doctor Seen
LOTBBCIT  DIM       5        5        210  Check In Time
LOTBBAST  DIM       5        5        215  Time Actually Seen
LOTBBDPT  DIM       5        5        220  Time of Departure
LOTBBOUT  DIM       3        3        225  Outcome    (CAT OZ)
LOTBBSND  DIM       1        1        228  Send Letter (Y/N)
LOTBBGPP  DIM       2        2        229  GP Practice count
LOTBBDOF  DIM       3        3        231  District of Residence (Cat DA)
LOTBBOPE  DIM       4        4        234  Operator who made O/P Book/Re-app
LOBOUSR5  DIM       3        3        238  User Defined Field 5 (O5)
LOBOUSR6  DIM       3        3        241  User Defined Field 6 (O6)
LOBOUSR7  DIM       3        3        244  User Defined Field 7 (O7)
LOBOUSR8  DIM       3        3        247  User Defined Field 8 (O8)
LOTBBRAN  DIM       6        6        250  Patient Rank
LOTBBSPR  DIM       30       30       256
.
.End of Record                        286
.
.  redefine form fields from key
.  -----------------------------
.Name     Type      Length  Description
.-------  ---       ------  -----------
LSOBAOUT  FORM      8
LOTBBPVI  FORM      3
.
. Note following fields are defined in OUTBOAFD.INC
.
.OBAOUTNO FORM      8
.OBADATE  DIM       8
+
.

