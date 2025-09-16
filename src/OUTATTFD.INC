.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTATTFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Attendance Details                              *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outattaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 24                                          *
.  *                                                                    *
.  *     Modifications: V5.00 03.05.89 H.Donnard   (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 07.05.89 E.Phan      (IBA)                *
.  *                          Added OATNBKD for Non-booked attendees    *
.  *      V5.01.03  25/03/1994  Glenn Berry      Taranaki Mods (3.3.5)  * 
.  *                Added OTATDSCH                                      *
.  *                                                                    *
.  **********************************************************************
.
OUTATTA1  IFILE     SQL, FIXED=48, KEY="U1-6,7-9,10-15,16-18,19-24"
FILATTA1  INIT      "attaf"
.
.NAME     TYPE   LENGTH    PHYSICAL   START       DESCRIPTION
.----     ----   ------    --------   -----       -----------
OATSITE   DIM       6         6         1         Site ID (IDDD)
OATGRUP   DIM       3         3         7         Group Code (CG)
OATCTYP   DIM       6         6         10        Clinic Type
OATREFR   DIM       3         3         16        Source of Referral (S )
OATDATE   DIM       6         6         19        Date (CCYYMM)
.
OATNREF   FORM      5         4         25        No.of Attendees
OATNNON   FORM      5         4         29        No.of Non-attendees (DNA'S)
OATNBKD   FORM      5         4         33        No.of Non-booked attendees
OTATDSCH  FORM      5         4         37        Number of Discharges
OATSPAR   DIM       7         7         41        ****  SPARE  ****
.
.End of Record                          48
.
