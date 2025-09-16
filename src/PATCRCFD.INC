. *****************************************************************************
. *                                                                           *
. * Include Name  : PATCRCFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient                            *
. *                 Cross Consulting                                          *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patcrcaf.dat                                              *
. *                                                                           *
. * Keys          : KEY23 KEY31 KEY31                                         *
. *                                                                           *
. * I/O Include   : PATCRCIO.INC                                              *
. *                                                                           *
. * Author        : Lofty         04/03/1992                                  *
. *                                                                           *
. * Modifications :                                                           *
. *                 09/10/2017  Steve Armstrong  Task: N/A                    *
. *                 Added category to PTCRACTN                                *
. *                 29/11/2016  Davin         TSK 0814741                     *
. *                 Added PTCRTIME,PTCRACTN,PTCRUNIT,PTCRCOMM                 *
. *                 23/12/2013  Patrick Adair CAR 294369                      *
. *                 Moved PTCRSPEC out of the spare variable                  *
. *                 28/08/2012  Don Nguyen    CAR 270231                      *
. *                 Added PTCRSPEC to spare variable                          *
. *                 30/08/2005  Jill Habasque CAR 73269                       *
. *                 Added index 4                                             *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATCRCA1  IFILE     SQL, FIXED=310, KEY="U1-8,9-18,19-28,29-31"
PATCRCA2  IFILE     SQL, FIXED=310, KEY="U9-18,19-28,72-79,1-8,29-31"
PATCRCA3  IFILE     SQL, FIXED=310, KEY="U19-28,9-18,72-79,1-8,29-31"
PATCRCA4  IFILE     SQL, FIXED=310, KEY="U9-18,19-28,1-8,72-79,29-31"
PATCRCA5  IFILE     SQL, FIXED=310, KEY="U72-79,9-18,19-28,1-8,29-31"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
DPTCRBIL  DIM       8           8      1  Visit number
PTCRDOCT  DIM       10          10     9  Referring consultant
PTCRREFD  DIM       10          10    19  Referred  consultant
DPTCRCNT  DIM       3           3     29  Count
PTCRCMNT  DIM       40         40     32  Comments (for Count = 1)
PTCRDATE  DIM       8           8     72  Date seen
PTCRAMNT  FORM      3.2         4     80  Time Taken (Hrs)
PTCRMISC  DIM       9           9     84  Misc charge (patitemn)
PTCRSPEC  DIM       3           3     93  Speciality Code (Cat 'AC')
PTCRTIME  DIM       8           8     96  Consult Time
PTCRACTN  DIM       3           3    104  Action Code (Cat Ac)
PTCRUNIT  DIM       3           3    107  Referred to Consultant Unit
PTCRCOMM  DIM       100       100    110  Comments
PTCRSPAR  DIM       100       100    210  Spare variable
.End of Record                       310
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  --------------------------------------
PTCRBILL  FORM      8       Visit number
PTCRCNTR  FORM      3       Count
.
.
. The following fields use the spare variable
.
