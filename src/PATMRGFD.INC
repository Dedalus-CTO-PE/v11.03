.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATMRGFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Merge U/R Request                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patmrgaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY17, KEY24                                    * 
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                    30/03/10  Steve Armstrong CAR 219045            *
.  *                              Added PTMRSTIM                        *
.  *                    08/04/09  Jill Habasque CAR 194133              *
.  *                              Added status to index 3 and 4         *
.  *                    27/03/06  Jill Habasque CAR 78524               *
.  *                              Added web user id requesting merge    *
.  *                    23/08/89  S. O'Gorman                           *
.  *                              Created FD                            *
.  *                                                                    *
.  **********************************************************************
.
PATMRGG1   IFILE     SQL, FIXED=108, KEY="U49-49,1-8,9-16"
PATMRGG2   IFILE     SQL, FIXED=108, KEY="U49-49,9-16,1-8"
PATMRGG3   IFILE     SQL, FIXED=108, KEY="U17-24,1-8,9-16,49-49"
PATMRGG4   IFILE     SQL, FIXED=108, KEY="U50-57,1-8,9-16,49-49"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PTMROLUR  DIM        8         8          1       Old U/R Number
PTMRNWUR  DIM        8         8          9       New U/R Number
PTMRRDTE  DIM        8         8         17       Requested Date ( CCYYMMDD )
PTMRRHOS  DIM        4         4         25       Requesting Hos (From Hos File)
PTMRAPPR  DIM       20        20         29       Approval Indicators (one for
.                                                   each Hos Pos corresponds to
.                                                   the HOSINDX on Hos File)
DPTMRSTA  DIM        1         1         49       Status of Request
.                                                   1 = Merge Requested
.                                                   2 = Merge Fully Accepted
.                                                   3 = Merge Processed
.                                                   4 = Merge Rejected
PTMRSDTE  DIM        8         8         50       Date of Last Status Change
.                                                      (ccyymmdd)
PTMRSTIM  DIM        8         8         58       Time of Last Status Change
.                                                      (hh:mm:ss)
PTMRLOCK  DIM        2         2         66       Lock Variable
PTMRSENT  DIM        1         1         68       MRGHCU sent 0=No 1=Yes
PTMRUSER  DIM       10        10         69       User Id requesting merge
PTMRFILL  DIM       29        29         79       Spare Variable
.
.End of Record                          108
.
.  redefine form fields from key
.  -----------------------------
.NAME      TYPE     LENGTH    DESCRIPTION
.----      ----     ------    -----------
PTMRSTAT   FORM        1       Status of Request
