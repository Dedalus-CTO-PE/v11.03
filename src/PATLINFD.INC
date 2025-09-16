.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATLINFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    U/R Linkages                                    *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patlinkf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 16                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                    V10.12.01 19/01/2018  Jill Parkinson TSK 0846167*
.  *                              Added index 2                         *
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 01.06.89 K.Peak      (IBA)                *
.  *                          Change U/R's to 8 characters              *
.  *                    V5.02 07.06.90 J.Tan                            *
.  *                          Add new fields                            *
.  *                                                                    *
.  **********************************************************************
.
PATLINK1   IFILE SQL, FIXED=54, KEY="U1-8,9-16"
PATLINK2   IFILE SQL, FIXED=54, KEY="U17-24,1-8,9-16"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
LINKFUR     DIM         8         8       1     U/R NUMBER LINKED FROM
LINKTUR     DIM         8         8       9     U/R NUMBER LINKED TO
LINKDAT     DIM         8         8      17     LINKED DATE
LINKREA     DIM         3         3      25     REASON FOR LINK (Cat LU)
LINKSPR     DIM        26        26      28     SPARE
.
.End of Record
