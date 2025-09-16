. *****************************************************************************
. *                                                                           *
. *     Include Name : OUTBUDFD.INC                                           *
. *                                                                           *
. *     Function     : File Definition include for Outpatients                *
. *                    OUTPATIENT BOOKING AUDIT                               *
. *                                                                           *
. *     File Type    : SQL                                                    *
. *                                                                           *
. *     File Name    : outbudaf.dat                                           *
. *                                                                           *
. *     Keys         : KEY 8, KEY 16                                          *
. *                                                                           *
. *     Modifications: V5.01.00  11/03/93  Graeme Williams                    *
. *                              Created file                                 *
. *                    V5.02  28/03/1995  Helen Crick                         *
. *                           Standardised FD                                 *
. *****************************************************************************
.
.
.Data File Definition
.--------------------
OUTBUDA1   IFILE SQL, FIXED=57, KEY="U1-8"
OUTBUDA2   IFILE SQL, FIXED=57, KEY="U9-16,1-8"
.
FILBUDA1   INIT     "budaf"
FILBUDA2   INIT     "budaf"
.
. NAME    TYPE   LENGTH   PHYSICAL   START   DESCRIPTION
. ----    ----   ------   --------   -----   -----------
DOTBUADM  DIM       8        8         1     Visit number
OTBUDATE  DIM       8        8         9     Date booking made
OTBUTIME  DIM       8        8        17     Time booking made
OTBUOPER  DIM       4        4        25     Operator
OTBUPORT  DIM       2        2        29     Port
OTBUSITE  DIM       6        6        31     Site code of booking
OTBUSPAR  DIM      20       20        37     Spare Variable
.
.End of Record                        57
.
.  redefine form fields for key
.  ----------------------------
. NAME     TYPE   LENGTH      DESCRIPTION
. ----     ----   ------      -----------
OTBUADMN  FORM       8        Visit Number
