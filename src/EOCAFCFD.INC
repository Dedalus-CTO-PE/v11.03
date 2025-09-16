.  **********************************************************************
.  *                                                                    *
.  *     Include Name : EOCAFCFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Episodes of Care    *
.  *                    Accident Flag Changes                           *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : eocafcaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY8, KEY16                                     *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  **********************************************************************
.
EOCAFCA1   IFILE SQL, FIXED=67, KEY="U1-8"
EOCAFCA2   IFILE SQL, FIXED=67, KEY="U9-16,1-8"
.
. NAME     TYPE  LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----     ----  ------  --------  ----------   -----------
DECAFADM   DIM      8         8          1      Admission Number
ECAFDATE   DIM      8         8          9      Date of Last Change (CCYYMMDD)
ECAFSENT   DIM      1         1         17      Sent in EDI extract
.                                               0 = No 1 = Yes
ECAFSPAR   DIM     49        49         18      Spare Variable
.
.End of Record                          67
.
. --- Redefines ---
ECAFADMN  FORM      8
