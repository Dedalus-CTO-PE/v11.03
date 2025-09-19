. ******************************************************************************
. *  Include Name  : PATTERFD.INC
. *  Function      : File Definition include for Patient                    
. *                  Patient Terminal Location     
.
.                     This file is used by several system to determine where
.                     a particular terminal is located, and from this, restrict
.                     the access of that terminal in certain ways.
.
.                       Inpatients : Restrict access to a given nursing station
.
.                       Outpatients: Restrict access to a given site. If
.                                    PTTECLIN is not blank, then the access is
.                                    further restricted to the given clinic id
.                                    or clinic type (depending on a system
.                                    parameter).
.
. *                      A & E      : Access is restricted to A&E & Inpatients.
.
. *  File Type     : SQL
. *  File Name     : patteraf.dat
. *  Audit Name    : pataudte.dat
. *  Keys          : KEY2
. *  Programmer    : Bill Dew 12/12/89
. *  Modifications : 15/02/90 Graeme Williams (I.B.A)
.                           Added fields to expand this file to include
.                           outpatients and A & E, as well as inpatients.
.                : 07/09/90 Karin Peak      (I.B.A)
.                           Added PTTETYPE 4 & 5, other financial and day centre
.******************************************************************************
.
.Audit File Definition
.--------------------- 
PATAUDTE  IFILE     SQL, FIXED=89, KEY="D1-8,9-16,17-18,19-19" 
.
.Name     Type      Length  Physical Start DESCRIPTION
.----     ----      ------  -------- ----- -----------
PTTEAUDD  DIM       8       8        1     Date of change
PTTEAUDT  DIM       8       8        9     Time of change
PTTEAUDP  DIM       2       2        17    Port doing the change
PTTEAUDR  DIM       1       1        19    Record Type
.                                          A = Added record
.                                          B = Before any changes
.                                          C = After any changes
.                                          D = Deleted record
PTTEAUDS  FORM      1       2        20    Record Status
.                                          1 = Not printed
.                                          2 = Printed
PTTEAUDO  DIM       4       4        22    Operator ID
.
.Data File Definition 
.--------------------
PATTERA1  IFILE     SQL, FIXED=64, KEY="U1-2"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
PTTEPORT  DIM       2        2          1      Port number of terminal
PTTETYPE  FORM      1        2          3      Type of port
.                                                1 = A & E
.                                                2 = Outpatients
.                                                3 = Inpatient
.                                                4 = Other financial
.                                                5 = Day centre
PTTENSTN  DIM       3        3          5      Nursing station (PATNURFD) (I/P)
PTTESITE  DIM       6        6          8      Outpatient Site (OUTSITFD) (O/P)
PTTECLIN  DIM       6        6          14     Clinic id or Clinic type.  (O/P)
.                                                Clinic id, use OUTCLIFD
.                                                Clinic type, use OUTCTYFD
PTTESPAR  DIM       44       44         20     Spare variable
.
.End of Record                          64
.
