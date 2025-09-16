. V5.07.001 18/08/1998 Glenn 507 Changes
.  ********************************************************************
.  *                                                                  *
.  *  Include Name  : PATACHFD.INC                                    *
.  *                                                                  *
.  *  Function      : File Definition include for Patient             *
.  *                  Nursing Home/Hostel Additional Charging History *
.  *                                                                  *
.  *  File Type     : SQL                                             *
.  *                                                                  *
.  *  File Name     : patachaf.dat                                    *
.  *                                                                  *
.  *          V9.04.01  03/08/05 J.Tan    CAR 62750                   *
.  *                    Removed redefined amount variables            *
.  *                                                                  *
.  ********************************************************************
.
.Data File Definition
.--------------------
PATACHA1  IFILE     SQL, FIXED=43, KEY="U1-8,9-16"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DPTAHADM    DIM      8         8           1      Admission Number
PTAHDATE    DIM      8         8           9      Effective Date   (CCYYMMDD)
PTAHANNI    FORM  12.2         8          17      Annual Income
PTAHTOTL    FORM  12.2         8          25      Total Charge
PTAHSPAR    DIM     10        10          33      Spare Variable
.
.End of Record                            43
.
.Redefines form fields from key
PTAHADMN    FORM     8      
.
