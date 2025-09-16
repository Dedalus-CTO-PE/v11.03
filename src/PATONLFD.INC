.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATONLFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    On Leave Patients                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patonlvf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 14                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *        V9.12.01    15.06.2009  Ebon Clements  CAR 159088           *
.  *                    Added OERTIME - Expected return time            *
.  *        V9.02.00    05.12.2001  Glenn Saunders                      *
.  *                    Add second index for faster ward/bed nxtpat00   *
.  *        V5.01.02    14/10/89    S.Barcham  (IBA)                    *
.  *                    Added Room Allocation - OROOM                   *
.  *        V5.01.01    08/07/89    M.Ohleiter (IBA)                    *
.  *                    Added expected return date - OERDATE            *
.  *        V5.01 01    06.89       K.Peak      (IBA)                   *
.  *                    Change Admission to 8 characters                *
.  *        V5.00       31.03.89    J.Clark     (IBA)                   *
.  *                    Change include heading                          *
.  *                                                                    *
.  **********************************************************************
.
PATONLV1   IFILE SQL, FIXED=43, KEY="U1-3,4-6,7-14"
PATONLV2   IFILE SQL, FIXED=43, KEY="U7-14,1-3,4-6"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
OWARD      DIM       3           3          1      WARD NUMBER
OBED       DIM       3           3          4      BED NUMBER
DOADMNO    DIM       8           8          7      PATIENT ADMISSION NO.
OERDATE    DIM       8           8         15      EXPECTED RETURN DATE-ccyymmdd
OROOM      DIM       3           3         23      ROOM ALLOCATION
OERTIME    DIM       8           8         26      EXPECTED RETURN TIME-hh:mm:ss
OSPARE     DIM       9           9         34      SPARE
.
.End of Record                             43
.
.  redefine form fields for key
.  ----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
OADMNO     FORM         8             7      PATIENT ADMISSION NO.
