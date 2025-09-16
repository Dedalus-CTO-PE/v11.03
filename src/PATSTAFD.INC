.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATSTAFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Admission/Discharge Statistics                  *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patstads.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
PATSTAD1   IFILE SQL, FIXED=70, KEY="U1-4,5-5,6-8"
.
. NAME     TYPE   LENGTH   PHYSICAL    START LOC.  DESCRIPTION
. ----     ----   ------   --------   ----------  -----------
SADYEAR    DIM       4           4          1     YEAR OF STATISTICS CCYY
.
SADTYPE    DIM       1           1          5     STATISTIC TYPE
.                                                   A=ADMISSION TYPE
.                                                   B=ADMISSION SOURCE
.                                                   D=DISCHARGE CODE
.
.             MATERNITY SYSTEM ONLY                 M=MATERNITY ADMISSION
.                                                   N=MATERNITY DISCHARGE
.
SADCODE    DIM       3           3          6     STATISTIC CODE
.
.             MATERNITY SYSTEM ONLY                 M  =MALE
.                                                   F  =FEMALE
.
SADMTH1    FORM      5           4          9     TOTAL FOR MONTH 1
SADMTH2    FORM      5           4         13     TOTAL FOR MONTH 2
SADMTH3    FORM      5           4         17     TOTAL FOR MONTH 3
SADMTH4    FORM      5           4         21     TOTAL FOR MONTH 4
SADMTH5    FORM      5           4         25     TOTAL FOR MONTH 5
SADMTH6    FORM      5           4         29     TOTAL FOR MONTH 6
SADMTH7    FORM      5           4         33     TOTAL FOR MONTH 7
SADMTH8    FORM      5           4         37     TOTAL FOR MONTH 8
SADMTH9    FORM      5           4         41     TOTAL FOR MONTH 9
SADMTH10   FORM      5           4         45     TOTAL FOR MONTH 10
SADMTH11   FORM      5           4         49     TOTAL FOR MONTH 11
SADMTH12   FORM      5           4         53     TOTAL FOR MONTH 12
SADMTH13   FORM      5           4         57     TOTAL FOR MONTH 13
SADSPARE   DIM       9           9         61     SPARE VARIABLE
.
.End of Record
