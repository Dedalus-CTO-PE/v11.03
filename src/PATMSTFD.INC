.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATMSTFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Monthly Inpatient Statistic Summary             *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patmstsf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 15                                          *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 13/06/90 J.Tan                            *
.  *                          Added a new field separation bed days     *
.  *                    V5.03.01 02/04/1996  Steve Armstrong            *
.  *                           Added MSACBDAY                           *
.  *                                                                    *
.  **********************************************************************
.
PATMSTS1   IFILE SQL, FIXED=125, KEY="U1-3,4-6,7-9,10-15"
PATMSTS2   IFILE SQL, FIXED=125, KEY="U4-6,7-9,1-3,10-15"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
MSWARD     DIM       3           3        1       WARD
MSDCLS     DIM       3           3        4       DOCTOR CLASS
MSWCLS     DIM       3           3        7       WARD CLASS
MSDATE     DIM       6           6       10       DATE (CCYYMM)
MSNPRAD    FORM      8           5       16       NO OF ADM.(PRIV NOT BOARDERS)
MSNPBAD    FORM      8           5       21       NO OF ADM.(PUB NOT BOARDERS)
MSTRIN     FORM      8           5       26       NO OF TRANSFER IN
MSTROUT    FORM      8           5       31       NO OF TRANSFER OUT
MSDSCH     FORM      8           5       36       NO OF DISCHARGES
MSNBDAY    FORM      8           5       41       NO OF BED DAYS (NOT BOARDERS)
MSBBDAY    FORM      8           5       46       NO OF BED DAYS (BOARDERS)
MSDEATH    FORM      8           5       51       NO OF DEATHS
MSBPRAD    FORM      8           5       56       NO OF ADM.(PRIVATE BOARDERS)
MSBPBAD    FORM      8           5       61       NO OF ADM.(PUBLIC BOARDERS)
MSLVBD     FORM      8           5       66       NO OF BED DAYS ON LEAVE
MSAEADM    FORM      8           5       71       NO OF A+E ADMISS (SOURCE=A+E)
MSOBSTH    FORM      8           5       76       NO OF OBSTERTRICS THEATRE
MSOUTTH    FORM      8           5       81       NO OF OUT-PATIENT THEATRE
MSDYMTH    FORM      2           2       86       NO OF DAYS IN MONTH
MSNOPAT    FORM      8           5       88       NO OF PATIENT IN MONTH
MSSEPBD    FORM      8           5       93       NO OF SEPARATION BED DAYS
DMSACBDY   DIM       8           8       98       NO OF ACTIVE BED DAYS
MSSPARE    DIM      19          19      106       SPARE VARIABLE
.
.End of Record                          125
.
MSACBDAY   FORM      8
.
.
