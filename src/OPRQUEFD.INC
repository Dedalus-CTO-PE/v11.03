.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   OPRQUEFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Theatre Bookings Queue for HL7 Messages       *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   oprqueaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY20                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  *      V11.03.01 26/07/2023  Ebon Clements    TSK 0935527              *
.  *                Added OPDAHOSP which is stored in the spare OPDASPAR  *
.  *      V10.12.01 05/04/2018  Steve Armstrong  TSK 0845588              *
.  *                Added fields OPDAPCOM to OPDADTFL, as well as OPDASPAR*
.  *      V10.02.01 04/11/2011  Steve Armstrong  CAR 254751               *
.  *                Extended operation description lines from DIM 55 to   *
.  *                DIM 80 to match OPRDEAFD.                             *
.  ************************************************************************
.
.Data File Definition
.--------------------
OPRQUEA1   IFILE SQL, FIXED=919, KEY="U1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DOPQUMES  DIM       20       20       1   Message Id
.
.OPDADATE DIM       8        8       21   Session Date (CCYYMMDD)
.OPDATIME DIM       5        5       29   Start Time (HH:MM)
.OPDACLIN DIM       6        6       34   Clinic/Surgeon
.OPDASTAT FORM      1        2       40   Booking Status
.                                            0 = Booked
.                                            1 = Preadmitted
.                                            2 = Admitted
.                                            3 = Cancelled
.                                            4 = Discharged
.OPDACASE DIM       3        3       42   Case Number
.OPDAADMN DIM       8        8       45   Admission Number
.OPDAUNIQ DIM       10       10      53   Unique id for theatre booking
.OPDAEXPS DIM       5        5       63   Expected Start Time
.OPDAEXPD FORM      4        3       68   Expected Duration (min)
.OPDAANAE DIM       3        3       71   Anaesthetic Code (Cat. OA )
.OPDATYPE DIM       3        3       74   Operation Type   (Cat. OY )
.OPDATRAN DIM       3        3       77   Transport Code   (Cat. OR )
.OPDAUSR1 DIM       3        3       80   Unplan return to theatre (Cat Y6)
.OPDAUSR2 DIM       3        3       83                2 (Category Y7)
.OPDAUSR3 DIM       3        3       86                3 (Category Y8)
.OPDAUSR4 DIM       3        3       89                4 (Category Y9)
.OPDAWAIT DIM       1        1       92   Waiting Lists (Y/N)
.OPDAPROV DIM       9        9       93   Provisional item # 1 ( MBS or ICD9CM)
.OPDAPRV2 DIM       9        9      102   Provisional item # 2 ( MBS or ICD9CM)
.OPDAPRV3 DIM       9        9      111   Provisional item # 3 ( MBS or ICD9CM)
.OPDADES1 DIM       80       80     120   Operation description line 1
.OPDADES2 DIM       80       80     200                              2
.OPDADES3 DIM       80       80     280                              3
.OPDACOMM DIM       40       40     360   Comments
.OPDACANC DIM       3        3      400   Cancellation Code (Category SC)
.OPDATHET DIM       6        6      403   Operating Room Code
.OPDAPRE1 DIM       5        5      409   Pre-operative time 1 (HH:MM)
.OPDAPRE2 DIM       5        5      414   Pre-operative time 2 (HH:MM)
.OPDAPRE3 DIM       5        5      419   Pre-operative time 3 (HH:MM)
.OPDAPRE4 DIM       5        5      424   Pre-operative time 4 (HH:MM)
.OPDAPRE5 DIM       5        5      429   Pre-operative time 5 (HH:MM)
.OPDAPOS1 DIM       5        5      434   Post-operative time 1 (HH:MM)
.OPDAPOS2 DIM       5        5      439   Post-operative time 2 (HH:MM)
.OPDAPOS3 DIM       5        5      444   Post-operative time 3 (HH:MM)
.OPDAPOS4 DIM       5        5      449   Post-operative time 4 (HH:MM)
.OPDATDUR FORM      4        3      454   Actual duration in theatre (mins)
.OPDAKNOW DIM       3        3      457   Known Infection (Category OK)
.OPDACDAT DIM       8        8      460   Cancellation Date             
.OPDAEQR1 DIM       3        3      468   Equipment Required 1(Category XE)
.OPDAEQR2 DIM       3        3      471   Equipment Required 2(Category XE)
.OPDALEQR DIM       3        3      474   Loan Equip. Required(Category XO)
.OPDAEQR3 DIM       3        3      477   Equipment Required 3(Category XE)
.OPDAUNIT DIM       3        3      480   Specialty/Unit (Category ST)
.OPDAURNO DIM       8        8      483   UR Number
.OPDAPROC DIM       9        9      491   WL Procedure Code(watproaf)
.OPDACONT DIM       2        2      500   WL Procedure Count
.OPDAASRC DIM       3        3      502   Admission Source (Cat S)
.OPDACSST DIM       1        1      505   Consent Obtained (N=No, Y=Yes)
.OPDACSDT DIM       8        8      506   Consect Changed Date (ccyymmdd)
.OPDACRDT DIM       8        8      514   Date record created (ccyymmdd)
.OPDACTIM DIM       8        8      522   Time record created (hh:mm:ss)
.OPDAWEBC DIM       10       10     530   WEB User Id rec.creator(websecaf)
.OPDAUDAT DIM       8        8      540   Last Update Date (ccyymmdd)
.OPDAUTIM DIM       8        8      548   Last Update Time (hh:mm:ss)
.OPDAWEBU DIM       10       10     556   WEB User Id rec.updater(websecaf)
.OPDAPCOM DIM       1        1      566   Prosthetic Items Complete
.                                              0=No 1=Yes
.OPDAVUN1 DIM       10       10     567   Verification User 1 (websecaf)
.OPDAVUN2 DIM       10       10     577   Verification User 2 (websecaf)
.OPDAPHMN DIM       10       10     587   Prosthetics Manager (websecaf)
.OPDAREQN DIM       10       10     597   Unique Request ID
.OPDADES4 DIM       80       80     607   Operation Description line 4
.OPDADES5 DIM       80       80     687   Operation Description line 5
.OPDADES6 DIM       80       80     767   Operation Description line 6
.OPDAFAST DIM       8        8      847   Fasting Time (hh:mm:ss)
.OPDAAPRC DIM       1        1      855   Adm Paperwork received (1=yes)
.OPDAACPD DIM       1        1      856   All charges posted (1=yes)
.OPDARICM DIM       3        3      857   Reason Incomplete (Category Rt)
.OPDAMHRC DIM       1        1      860   Medical History Received
.                                               0 or Blank = No
.                                               1 = Yes
.OPDAPOWD DIM       3        3      861   Expected Post-op Ward (patwr1af)
.OPDAPOBD DIM       3        3      864   Expected Post-op Bed (patwr1af)
.OPDACTYP DIM       3        3      867   Claim Type (Cat CL)
.OPDAATYP DIM       3        3      870   Admission Type (Cat P)
.OPDADTFF DIM       8        8      873   Date of Fasting Food (ccyymmdd)
.OPDADTFL DIM       8        8      881   Date of Fasting Fluid (ccyymmdd)
.OPDAPRV4 DIM       9        9      889   Provisional item # 4 ( MBS or ICD9CM)
.OPDAPRV5 DIM       9        9      898   Provisional item # 5 ( MBS or ICD9CM)
.OPDAPRV6 DIM       9        9      907   Provisional item # 6 ( MBS or ICD9CM)
.OPDASPAR  DIM      3        3      916   Spare (OPDAHOSP in V11.03)
.
.End of record                      919
.
.******************************************************************************
. OPDAHOSP stored as the first 3 characters of the spare OPDASPAR in V11.03
.
.OPDAHOSP DIM       3        3      916   Hospital (pathspaf)
.******************************************************************************
.
. Redefine form fields from key
. -----------------------------
OPQUMESI  FORM      20
