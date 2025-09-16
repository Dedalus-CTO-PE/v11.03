.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATODCFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Operation Change Details                        *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patodcaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY8, KEY16                                     *
.  *                                                                    *
.  *     Modifications: V5.01.01  07.11.90  D.G.P                       *
.  *                              New Include                           *
.  *                                                                    *
.  **********************************************************************
.
PATODCA1   IFILE SQL, FIXED=67, KEY="U1-8"
PATODCA2   IFILE SQL, FIXED=67, KEY="U9-16,1-8"
.
. NAME     TYPE  LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----     ----  ------  --------  ----------   -----------
DPTODADM   DIM      8         8          1      Admission Number
PTODDATE   DIM      8         8          9      Dat of Last Change (CCYYMMDD)
PTODSENT   DIM      1         1         17      Sent in EDI extract
.                                               0 = No 1 = Yes
PTODFILL   DIM     49        49         18      Spare Variable
.
.End of Record                          67
.
. --- Redefines ---
PTODADMN  FORM      8
