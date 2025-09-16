. *****************************************************************************
. *                                                                           *
. *     Include Name : OUTMROFD.INC                                           *
. *                                                                           *
. *     Function     : File Definition include for Outpatients                *
. *                    Medical Records Operation Table                        *
. *                    (OPCS4 Coding for the U.K.)                            *
. *                                                                           *
. *     File Type    : SQL                                                    *
. *                                                                           *
. *     File Name    : outmroaf.dat                                           *
. *                                                                           *
. *     Keys         : KEY 10                                                 *
. *                                                                           *
. *     Modifications:                                                        *
. *                                                                           *
. *****************************************************************************
.
OUTMROA1   IFILE SQL, FIXED=90, KEY="U1-8,9-10"
OUTMROA2   IFILE SQL, FIXED=90, KEY="U11-19,1-8,9-10"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
DOTMOADM    DIM       8          8          1      Admission number
DOTMOREC    DIM       2          2          9      Record Number
OTMOCODE    DIM       9          9         11      OPCS4 Code
OTMOODAT    DIM       8          8         20      Date of Operation (CCYYMMDD)
OTMOOSTM    DIM       8          8         28      Start Time of Operation
OTMOOETM    DIM       8          8         36      End Time of Operation
OTMODATE    DIM       8          8         44      Date of Coding (CCYYMMDD)
OTMOTIME    DIM       8          8         52      Time of Coding (HH:MM:SS)
OTMOUSER    DIM       4          4         60      User Id of the Coder
OTMOSPAR    DIM       26         26        64      Spare
.
.End of Record                             90
.
.
.  redefine form fields for key
.  ----------------------------
. NAME     TYPE   LENGTH      DESCRIPTION
. ----     ----   ------      -----------
OTMOADMN  FORM       8        Admission Number
OTMORECN  FORM       2        Record Number for Admission
