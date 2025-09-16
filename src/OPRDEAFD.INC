.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRDEAFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    OPERATION DETAIL                                *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprdetaf.dat                                    *
.  *     Audit File   : opraudda.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 26  - 1st index                             *
.  *                    KEY 31  - 2nd index                             *
.  *                    KEY 10  - 3rd index                             *
.  *                    KEY 29  - 4th index                             *
.  *                    KEY 26  - 5th index                             *
.  *                    KEY 26  - 6th index                             *
.  *                    KEY19   - audit file                            *
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.  *        V11.03.02   22/02/2023 Ebon Clements     TSK 0909393        *
.  *                    Added index 6                                   *
.  *        V11.03.01   09/02/2023 Ebon Clements     TSK 0909393        *
.  *                    Added OPDAHOSP to file. Added OPDAHOSP to       *
.  *                    index 1 and 5 (Prior to OPDADATE)               *
.  **********************************************************************
.  *        V11.02.01   16/03/2022 Thanh             TSK 0904278        *
.  *                    Added fields OPDAPRV4, OPDAPRV5 and OPDAPRV6    *
.  **********************************************************************
.  *        V10.12.02   05/04/2018 Steve Armstrong   TSK 0845588        *
.  *                    Added fields OPDADTFF & OPDADTFL and reduced    *
.  *                    length of OPDASPAR                              *
.  *        V10.12.01   23/03/2018 Steve Armstrong   TSK 0843171        *
.  *                    Added fields OPDAPOWD to OPDAATYP and reduced   *
.  *                    length of OPDASPAR                              *
.  *        V10.11.01   09/10/2017 Steve Armstrong   TSK N/A            *
.  *                    Fixed descriptions for OPDADES5 & OPDADES6      *
.  *        V10.08.01   31/03/2016 Steve Armstrong   TSK 0313944        *
.  *                    Added OPDAMHRC                                  *
.  **********************************************************************
.  *        V10.06.01   16/04/2015 Don Nguyen     CAR 299117            *
.  *                    Added OPDAACPD & OPDARICM to spare              *
.  **********************************************************************
.  *        V10.05.01   08/08/2014 Jill Parkinson CAR 299980            *
.  *                    Added OPDADES4, OPDADES5 & OPDADES6             *
.  *                    08/08/2014 Ebon Clements  CAR 283332            *
.  *                    Added OPDAFAST & OPDAAPRC                       *
.  **********************************************************************
.  *        V10.04.01   18/02/2014 Peter Vela     CAR 218689            *
.  *                    Added OPDAREQN                                  *
.  **********************************************************************
.  *        V10.02.01   21/06/2011 Ebon Clements  CAR 244975            *
.  *                    Added OPDAPCOM to OPDAPHMN                      *
.  **********************************************************************
.  *        V10.01.01   11/01/2011 Jill Parkinson CAR 234014            *
.  *                    Increased opdades1,2 and 3                      *
.  **********************************************************************
.  *        V9.09.01    20/12/07 Jill Habasque  CAR 126282              *
.  *                    Added date/time created and updated             *
.  **********************************************************************
.  *        V9.04.01    27/09/05 Mike Laming    CAR 52354               *
.  *                    Add OPDACSST and OPDACSDT - Consent & Change Dte*
.  *                    29/07/03 Jill Habasque  CAR 41815               *
.  *                    Added UR, procedure code and count for WL       *
.  *                    02/03/90 Graeme Williams                        *
.  *                    Deleted "Session Co-ordinator" (OPDACORD)       *
.  *                    02/05/90 Graeme Williams                        *
.  *                    Added second index (admission number sequence)  *
.  *                    8/10/90 J. Ceniza changed according to new specs*
.  *                02/12/1993  Glenn Berry      Hawkes Bay Changes     *
.  *                Added 3rd Index                                     *
.  *                28/05/2001  Dean Cramer                             *
.  *                Added OPDACDAT, OPDAEQR1, OPDAEQR2, OPDALEQR        *       
.  *                26/11/2001  Ashwin                                  *
.  *                Added OPDAEQR3                                      *
.  *                V9.02.02  14/03/2003  Ebon Clements SRF 21034       *
.  *                Added OPDAUNIT                                      *
.  **********************************************************************
.Audit File Definition
.---------------------
OPRAUDDA  IFILE     SQL, FIXED=970, KEY="D1-8,9-16,17-18,19-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPDAAUDD  DIM       8         8       1        Date of change
OPDAAUDT  DIM       8         8       9        Time of change
OPDAAUDP  DIM       2         2       17       Port doing change
OPDAAUDR  DIM       1         1       19       Record type
.                                                 A = Added 
.                                                 B = Before image
.                                                 C = After image
.                                                 D = Deleted
OPDAAUDS  FORM      1         2       20      Record status
.                                                 1 = Not printed
.                                                 2 = Printed
OPDAAUDO  DIM       4         4       22      Operator id that did the change
.
.Data File Definition
.--------------------
OPRDETA1  IFILE     SQL, FIXED=945, KEY="U895-897,1-8,9-13,14-19,20-20,21-23"
OPRDETA2  IFILE     SQL, FIXED=945, KEY="U24-31,20-20,1-8,9-13,14-19,21-23"
OPRDETA3  IFILE     SQL, FIXED=945, KEY="U32-41"
OPRDETA4  IFILE     SQL, FIXED=945, KEY="U462-469,470-478,479-480,32-41"
OPRDETA5  IFILE     SQL, FIXED=945, KEY="U895-897,1-8,9-13,14-19,21-23,20-20"
OPRDETA6  IFILE     SQL, FIXED=945, KEY="U1-8,9-13,14-19,21-23,20-20,895-897"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPDADATE  DIM       8        8        1        Session Date (CCYYMMDD)
OPDATIME  DIM       5        5        9        Start Time (HH:MM)
OPDACLIN  DIM       6        6        14       Clinic/Surgeon
DOPDASTA  DIM       1        1        20       Booking Status
.                                                0 = Booked
.                                                1 = Preadmitted
.                                                2 = Admitted
.                                                3 = Cancelled
.                                                4 = Discharged
OPDACASE  DIM       3        3        21       Case Number
OPDAADMN  DIM       8        8        24       Admission Number
.
OPDAUNIQ  DIM       10       10       32       Unique id for theatre booking
OPDAEXPS  DIM       5        5        42       Expected Start Time
OPDAEXPD  FORM      4        3        47       Expected Duration (min)
OPDAANAE  DIM       3        3        50       Anaesthetic Code (Cat. OA )
OPDATYPE  DIM       3        3        53       Operation Type   (Cat. OY )
OPDATRAN  DIM       3        3        56       Transport Code   (Cat. OR )
OPDAUSR1  DIM       3        3        59       Unplan return to theatre (Cat Y6)
OPDAUSR2  DIM       3        3        62                    2 (Category Y7)
OPDAUSR3  DIM       3        3        65                    3 (Category Y8)
OPDAUSR4  DIM       3        3        68                    4 (Category Y9)
OPDAWAIT  DIM       1        1        71       Waiting Lists (Y/N)
OPDAPROV  DIM       9        9        72       Provisional item # 1 ( MBS or
.                                              ICD9CM)
OPDAPRV2  DIM       9        9        81       Provisional item # 2 ( MBS or
.                                              ICD9CM)
OPDAPRV3  DIM       9        9        90       Provisional item # 3 ( MBS or
.                                              ICD9CM)
OPDADES1  DIM       80       80       99       Operation description line 1
OPDADES2  DIM       80       80       179                                 2
OPDADES3  DIM       80       80       259                                 3
OPDACOMM  DIM       40       40       339       Comments
OPDACANC  DIM       3        3        379      Cancellation Code (Category SC)
OPDATHET  DIM       6        6        382      Operating Room Code
OPDAPRE1  DIM       5        5        388      Pre-operative time 1 (HH:MM)
OPDAPRE2  DIM       5        5        393      Pre-operative time 2 (HH:MM)
OPDAPRE3  DIM       5        5        398      Pre-operative time 3 (HH:MM)
OPDAPRE4  DIM       5        5        403      Pre-operative time 4 (HH:MM)
OPDAPRE5  DIM       5        5        408      Pre-operative time 5 (HH:MM)
OPDAPOS1  DIM       5        5        413      Post-operative time 1 (HH:MM)
OPDAPOS2  DIM       5        5        418      Post-operative time 2 (HH:MM)
OPDAPOS3  DIM       5        5        423      Post-operative time 3 (HH:MM)
OPDAPOS4  DIM       5        5        428      Post-operative time 4 (HH:MM)
OPDATDUR  FORM      4        3        433      Actual duration in theatre (mins)
OPDAKNOW  DIM       3        3        436      Known Infection (Category OK)
OPDACDAT  DIM       8        8        439      Cancellation Date             
OPDAEQR1  DIM       3        3        447      Equipment Required 1(Category XE)
OPDAEQR2  DIM       3        3        450      Equipment Required 2(Category XE)
OPDALEQR  DIM       3        3        453      Loan Equip. Required(Category XO)
OPDAEQR3  DIM       3        3        456      Equipment Required 3(Category XE)
OPDAUNIT  DIM       3        3        459      Specialty/Unit (Category ST)
OPDAURNO  DIM       8        8        462      UR Number
OPDAPROC  DIM       9        9        470      WL Procedure Code(watproaf)
OPDACONT  DIM       2        2        479      WL Procedure Count
OPDAASRC  DIM       3        3        481      Admission Source (Cat S)
OPDACSST  DIM       1        1        484      Consent Obtained (N=No, Y=Yes)
OPDACSDT  DIM       8        8        485      Consect Changed Date (ccyymmdd)
OPDACRDT  DIM       8        8        493      Date record created (ccyymmdd)
OPDACTIM  DIM       8        8        501      Time record created (hh:mm:ss)
OPDAWEBC  DIM       10       10       509      WEB User Id rec.creator(websecaf)
OPDAUDAT  DIM       8        8        519      Last Update Date (ccyymmdd)
OPDAUTIM  DIM       8        8        527      Last Update Time (hh:mm:ss)
OPDAWEBU  DIM       10       10       535      WEB User Id rec.updater(websecaf)
OPDAPCOM  DIM       1        1        545      Prosthetic Items Complete
.                                              0=No 1=Yes
OPDAVUN1  DIM       10       10       546      Verification User 1 (websecaf)
OPDAVUN2  DIM       10       10       556      Verification User 2 (websecaf)
OPDAPHMN  DIM       10       10       566      Prosthetics Manager (websecaf)
OPDAREQN  DIM       10       10       576      Unique Request ID
OPDADES4  DIM       80       80       586      Operation Description line 4
OPDADES5  DIM       80       80       666      Operation Description line 5
OPDADES6  DIM       80       80       746      Operation Description line 6
OPDAFAST  DIM       8        8        826      Fasting Time (hh:mm:ss)
OPDAAPRC  DIM       1        1        834      Adm Paperwork received (1=yes)
OPDAACPD  DIM       1        1        835      All charges posted (1=yes)
OPDARICM  DIM       3        3        836      Reason Incomplete (Category Rt)
OPDAMHRC  DIM       1        1        839      Medical History Received
.                                               0 or Blank = No
.                                               1 = Yes
OPDAPOWD  DIM       3        3        840      Expected Post-op Ward (patwr1af) 
OPDAPOBD  DIM       3        3        843      Expected Post-op Bed (patwr1af)
OPDACTYP  DIM       3        3        846      Claim Type (Cat CL)
OPDAATYP  DIM       3        3        849      Admission Type (Cat P)
OPDADTFF  DIM       8        8        852      Date of Fasting Food (ccyymmdd)
OPDADTFL  DIM       8        8        860      Date of Fasting Fluid (ccyymmdd)
OPDAPRV4  DIM       9        9        868      Provisional item # 4 
OPDAPRV5  DIM       9        9        877      Provisional item # 5
OPDAPRV6  DIM       9        9        886      Provisional item # 6
OPDAHOSP  DIM       3        3        895      Hospital (pathspaf)
OPDASPAR  DIM       47       47       898      Spare
.
.End of record                        945
.
.
.Redefined FORM fields for key
.-----------------------------
OPDASTAT  FORM      1        2        1       Booking Status
