.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   BOKQUEFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Queuing Patient Booking Message File          *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   bokqueaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY20                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *     V10.06.01 25/06/2015  Steve Armstrong CAR 318558                 *
.  *               Changed BKRERFGP to XXXXRFGP                           *
.  *      V9.02.00 01/10/2001  Steve Armstrong                            *
.  *               FD Created                                             *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
BOKQUEA1   IFILE SQL, FIXED=600, KEY="U1-20"
.
.Name      Type  Length Physical Start Description
.----      ----  ------ -------- ----- -----------
DBKQUMES   DIM     20      20       1   Message Id
.
.          BOKRC1FD variables
.
.BKREBOOK  FORM     8       5      21   Booking/Admission No.
.BKREURNO  DIM      8       8      26   U/R Number
.BKREADOC  DIM      6       6      34   Attending Doctor
.BKRESDOC  DIM      6       6      40   Referring Doctor
.BKREEDAT  DIM      8       8      46   Expected due date (CCYYMMDD)
.BKREATIM  DIM      8       8      54   Expected assessment time
.BKREPDAT  DIM      8       8      62   Pre-assessment date
.BKREPTIM  DIM      8       8      70   Pre-assessment time
.BKREADAT  DIM      8       8      78   Date booking was made CCYYMMDD
.BKRETYPE  DIM      3       3      86   Booking type (Cat "BK")
.BKRECANC  DIM      3       3      89   Cancellation reason (Cat "BC")
.BKREOMEM  DIM      1       1      92   Benefit fund member (Y/N/U)
.BKREPREV  DIM      1       1      93   Previous inpatient (Y/N/U)
.BKREACCM  DIM      3       3      94   Preferred accommodation (Cat BP)
.BKREPROC  DIM      9       9      97   Waiting list procedure code
.BKRECNT   FORM     2       2     106   Waiting list procedure count
.BKREWARD  DIM      3       3     108   Expected ward
.BKREADMN  FORM     8       5     111   Maternity admission number
.BKREPREA  DIM      1       1     116   Deposit paid (Y/N) Matern only
.BKREEBED  DIM      3       3     117   Expected bed
.BKRECLSS  DIM      3       3     120   Patient Cat./Adm Class. (Cat P)
.BKREATYP  DIM      3       3     123   Adm Type/Pat. Class (Cat A)
.BKREDEPT  DIM      3       3     126   Department (Cat AC)
.BKRETDOC  DIM      6       6     129   Associated Doctor
.BKRECLMT  DIM      3       3     135   Claim type (Cat CL)
XXXXRFGP   DIM      8       8     138   Referring GP
.BKREGPPC  DIM      6       6     146   GP Practice code
.BKREGPFA  DIM      20      20    152   GPFH Approval Number
.BKRERESI  DIM      3       3     172   Resident Status (Cat T)
.BKREEATY  DIM      3       3     175   Elective Admission Type  (Cat CC)
.BKREECRA  DIM      20      20    178   ECR Approval Number
.BKREGPPT  DIM      2       2     198   GP Practice count
.BKREDOFR  DIM      3       3     200   District of Residence (Cat DA)
.BKREOPER  DIM      4       4     203   Operator who made I/P Booking
.BKREELOS  FORM     3       3     207   Expected Length of Stay (Days)
.BKREBKDT  DIM      8       8     210   Booking date (ccyymmdd)
.
.          BOKRX1FD variables
.
.BKRXPOWD  DIM      3       3     218   Post-Op Ward (patwr1af)
.BKRXADWD  DIM      3       3     221   Admitting Ward (patwr1af)
.BKRXCDTE  DIM      8       8     224   Contact Date (ccyymmdd)
.BKRXPSTY  DIM      1       1     232   Parent Staying (0=NO,1=YES)
.BKRXCNDT  DIM      8       8     233   Confirmation Date (ccyymmdd)
.BKRXUDF1  DIM      3       3     241   User Defined Field 1 (Cat BE)
.BKRXUDF2  DIM      3       3     244   User Defined Field 2 (Cat BF)
.BKRXUDF3  DIM      3       3     247   User Defined Field 3 (Cat BG)
.BKRXUDF4  DIM      3       3     250   User Defined Field 4 (Cat BH)
.BKRXUDF5  DIM      3       3     253   User Defined Field 5 (Cat BL)
.BKRXUDD1  DIM      8       8     256   User Defined Date 1 (ccyymmdd)
.BKRXUDD2  DIM      8       8     264   User Defined Date 2 (ccyymmdd)
.BKRXUDD3  DIM      8       8     272   User Defined Date 3 (ccyymmdd)
.BKRXUDD4  DIM      8       8     280   User Defined Date 4 (ccyymmdd)
.BKRXUFF1  DIM     50      50     288   Procedure Description 1
.BKRXUFF2  DIM     50      50     338   Procedure Description 2
.BKRXUFF3  DIM     50      50     388   Procedure Description 3
.BKRXUFF4  DIM     50      50     438   User Defined Free Format 4
.BKRXEDC1  DIM     10      10     488   Extra Doctor Code 1 (pmshcpaf)
.BKRXEDC2  DIM     10      10     498   Extra Doctor Code 2 (pmshcpaf)
.BKRXEDC3  DIM     10      10     508   Extra Doctor Code 3 (pmshcpaf)
.BKRXODTE  DIM      8       8     518   Operation Date (ccyymmdd)
.BKRXOPRD  DIM      3       3     526   Operation Period (Cat SP)
BKQUSPAR   DIM     71      71     529   Spare Variable
.
. End of Record                   600
.
.
. Redefine form fields from key
. -----------------------------
BKQUMESI   FORM    20
