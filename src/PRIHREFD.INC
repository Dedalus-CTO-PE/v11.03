.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIHREFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Holding Table for Doctor referral details     *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   prihreff.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY27, KEY28                                  *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.  *      V11.01.01 03/03/2021  Thanh T       TSK 0299439                 *
.  *                Added 2 new indexes PRIHREF4 and PRIHREF5             *    
.  ************************************************************************
.  *      V10.14.01 10/04/2019  Tracey Nguyen TSK 0872823                 *
.  *                Added PRHRHCPP/PRHRE039 - Referring HCP Practice      *
.  *                Added PRHRHCGC/PRHRE040 - Referring HCP Group Count   *
.  *                Reduced length of PRHRSPAR                            *
.  ************************************************************************
.  *      V10.13.02 27/09/2018  Tracey Nguyen TSK 0859743                 *
.  *                Added PRHRROVR/PRHRE038 - Referral Override (Cat ro)  *
.  *                Reduced length of PRHRSPAR                            *
.  *      V10.13.01 27/07/2018  Richa Phogat  TSK 0848506                 *
.  *                Updated field length for PRHRDOCT & PRHRREFD from 6 to*
.  *                10                                                    *
.  ************************************************************************
.  *      V10.11.03 10/10/2017  Steve Armstrong  TSK 0837619              *
.  *                Added PRHRFIDI and reduced length of PRHRSPAR.        *
.  *      V10.11.02 29/08/2017  Peter Vela       TSK 0837619              *
.  *                Changed PRHRLVIS to not used                          *
.  *                Removed PRHRROVR and increased spare                  *
.  *      V10.11.01 14/07/2017  Steve Armstrong  TSK 0837619              *
.  *                Added PRHRRPER and PRHRROVR and reduced length of     *
.  *                PRHRSPAR.                                             *
.  ************************************************************************
.  *      V10.08.02 15/04/2016  Steve Armstrong  CAR 0294177              *
.  *                Added PRHRFPID and extended file after further        *
.  *                changes to IMC specification (V2).                    *
.  *      V10.08.01 24/03/2016  Steve Armstrong  CAR 0294177              *
.  *                Added PRHRTACC, PRHRLVIS, PRHRACCI, PRHRACPD,         *
.  *                PRHRBASS, PRHRISSC, PRHRSTCD and reduced length of    *
.  *                PRHRSPAR.                                             *
.  ************************************************************************
.  *      V10.04.01 21/01/2014  Patrick Adair    CAR 265844               *
.  *                Increase PRA address and phone field lengths and add  *
.  *                new fields for State and mobile phone                 *
.  ************************************************************************
.  *      V10.01.01 21/03/2011  Steve Armstrong  CAR 229506               *
.  *                Added Index 3                                         *
.  ************************************************************************
.  *      V5.08     28/08/2000  J Habasque                                *
.  *                Added PRHRRFPD - Referral Period                      *
.  *      V6.01     16/03/92  DIG                                         *
.  *                Changed PRHRBULK variable and added PRHRBCOD variable.*
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRIHREF1   IFILE SQL, FIXED=505, KEY="U1-8,9-14,15-24,25-27" 
PRIHREF2   IFILE SQL, FIXED=505, KEY="U96-96,1-8,9-14,15-24,25-27" 
PRIHREF3   IFILE SQL, FIXED=505, KEY="U9-14,15-24,25-27,1-8"
PRIHREF4   IFILE SQL, FIXED=505, KEY="U96-96,9-14,15-24,25-27,1-8" 
PRIHREF5   IFILE SQL, FIXED=505, KEY="U96-96,15-24,1-8,9-14,25-27" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPRHRUNQ  DIM       8      8        1     Unique Identifier 
PRHRPRAC  DIM       6      6        9     Medical Practice Code 
PRHRDOCT  DIM       10     10       15    Service Doctor 
PRHRPIND  DIM       3      3        25    Patient Indicator (Category GI)
.
PRHRREFD  DIM       10     10       28    Referring Doctor 
PRHRRDAT  DIM       8      8        38    Referral Date (CCYYMMDD)
PRHRREFT  DIM       50     50       46    Referral Details 
DPRHRPIN  DIM       1      1        96    Invoice to be printed
.                                             0 = No
.                                             1 = Yes
PRHRMESS  DIM       3      3        97    Message Code (PATMESG1)
PRHRBULK  DIM       3      3        100   Bulk Bill Code (Cat GB)
PRHRBCOD  DIM       6      6        103   Fund/Insurance Co./Govt Code
PRHROCOD  DIM       20     20       109   Operation Codes
PRHRUDF1  DIM       3      3        129   User Defined Field 1 (Category G1)
PRHRUDF2  DIM       3      3        132   User Defined Field 2 (Category G2)
PRHRUDF3  DIM       3      3        135   User Defined Field 3 (Category G3)
PRHRUDF4  DIM       3      3        138   User Defined Field 4 (Category G4)
.
PRHRNAME  DIM       45     45       141   Name of Person Responsible for A/C
PRHRADD1  DIM       35     35       186   P.R.A. Address Line 1
PRHRADD2  DIM       35     35       221   P.R.A. Address Line 2
PRHRADD3  DIM       35     35       256   P.R.A. Address Line 3
PRHRADD4  DIM       35     35       291   P.R.A. Address Line 4
PRHRPOST  DIM       8      8        326   P.R.A. Postcode
PRHRTELP  DIM       20     20       334   P.R.A. Private Telephone
PRHRTELB  DIM       20     20       354   P.R.A. Business Telephone
PRHRMPHN  DIM       20     20       374   P.R.A. Mobile Telephone
PRHRRELP  DIM       10     10       394   P.R.A. Relationship
.
PRHRUNCL  FORM      8      5        404   Unique claims number
PRHRADMN  DIM       3      3        409   Admission Class
PRHRRFPD  DIM       3      3        412   Referral Period (Cat RF)
PRHRTACC  DIM       3      3        415   Type of Account/Claim (Cat ta)
PRHRLVIS  DIM       8      8        418   Not Used
PRHRACCI  DIM       1      1        426   Accident Indicator
.                                          0 or Blank = No
.                                          1 = Yes
PRHRACPD  DIM       1      1        427   Account Paid
.                                          0 or Blank = No
.                                          1 = Yes
PRHRBASS  DIM       1      1        428   Benefit Assigned Authorised
.                                          0 or Blank = No
.                                          1 = Yes
PRHRISSC  DIM       3      3        429   IFC Issue Code (Cat ic)
PRHRSTCD  DIM       3      3        432   Service Type Code (Cat st)
PRHRFPID  DIM       40     40       435   Fund Payee ID
PRHRRPER  DIM       2      2        475   Referral Period (months, 1-98)
.                                          (R-Justified)
PRHRFIDI  DIM       1      1        477   Financial Interest Disclosure
.                                         Indicator
.                                           Blank or 0 = No
.                                           1 = Yes
PRHRROVR  DIM       3       3       478   Referral Override (Cat ro)
PRHRHCPP  DIM       10      10      481   Referring HCP Practice (pmshclaf)
PRHRHCGC  DIM       2       2       491   Referring HCP Group count (pmshcgaf)
PRHRSPAR  DIM       12      12      493   Spare Variable
.
.End of Record                      505
.
.
. Redefine FORM fields from key
. -----------------------------
PRHRUNIQ  FORM      8
PRHRPINV  FORM      1
