.  ****************************************************************************
.  *                                                                          *
.  *     Include Name  : PATEX1FD.INC                                         *
.  *                                                                          *
.  *     Function      : File Definition include for Patient                  *
.  *                     Management Analysis Generation Extract A             *
.  *                                                                          *
.  *     File Type     : SQL                                                  *
.  *                                                                          *
.  *     File Name     : patex1NN.dat                                         *
.  *                                                                          *
.  *     Keys          : KEY 8                                                *
.  *                                                                          *
.  *     Modifications :                                                      *
.  *     V10.05.01  08/08/2014  Steve Armstrong  CAR 304720                   *
.  *                Moved PTXAPLAN from SPARE into FD                         *
.  *     V10.04.02  07/05/2014  J.Tan         CAR 297283                      *
.  *                Mods Preferred language (Catg LA) to be held in spare     *
.  *     V10.04.01  04/04/2014  J.Tan         CAR 297283                      *
.  *                Added Preferred language (Catg LA)                        *
.  *     V10.00.01  29/03/2010  Mike Laming   CAR 157391                      *
.  *                Added new PMSVX1FD fields that used to be in User Fields  *
.  *      ........  28/03/1995  Helen Crick                                   *
.  *                Standardised FD                                           *
.  *                                                                          *
.  ****************************************************************************
.
.Data File Definition
.--------------------
PATEX1A1  IFILE     SQL, FIXED=400, KEY="U1-8"
.
FILEXAA1  INIT      "patexa"
FILEX1A1  INIT      "patex1"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DPTXAADM   DIM       8        8           1       Admission number
PTXAADAT   DIM       8        8           9       Admission date (CCYYMMDD)
PTXADDAT   DIM       8        8          17       Discharge date (CCYYMMDD)
PTXADAYC   FORM      1        2          25       Day case indicator
.                                                   1 = Daycase
.                                                   0 = Other
PTXAPLOS   FORM      4        3          27       Length of stay during period
.                                                   - Zero for daycases
PTXAALOS   FORM      4        3          30       Length of stay since admiss.
.                                                   - Zero for daycases
PTXAPLVE   FORM      4        3          33       On-leave days during period
PTXAALVE   FORM      4        3          36       On-leave days since admission
PTXAAWRD   DIM       3        3          39       Ward at admission
PTXAABED   DIM       3        3          42       Bed at admission
PTXASWRD   DIM       3        3          45       Ward at start of period
PTXASBED   DIM       3        3          48       Bed at start of period
PTXADWRD   DIM       3        3          51       Ward at end of period
PTXADBED   DIM       3        3          54       Bed at end of period
PTXAATYP   DIM       3        3          57       Admission type at admission 
.                                                   - (Cat A)
PTXASTYP   DIM       3        3          60       Admission type at start of 
.                                                 period - (Cat A)
PTXADTYP   DIM       3        3          63       Admission type at end of 
.                                                 period - (Cat A)
PTXASEX    DIM       1        1          66       Patients sex  (M or F)
PTXAPOST   DIM       8        8          67       Postcode
PTXAMLGA   DIM       4        4          75       L.G.A code from PMI
PTXAPLGA   DIM       4        4          79       L.G.A code from postcode
PTXARELG   DIM       3        3          83       Religion - (Cat R)
PTXACONT   DIM       3        3          86       Country of birth - (Cat C)
PTXARESI   DIM       3        3          89       Resident status - (Cat T)
PTXAMSTT   DIM       3        3          92       Marital status - (Cat M)
PTXAAAGD   FORM      5        4          95       Patients age at admission 
.                                                   - in days
PTXAAAGM   FORM      4        3          99       Patients age at admission 
.                                                   - in months
PTXAAAGY   FORM      3        3         102       Patients age at admission 
.                                                   - in years
PTXASAGD   FORM      5        4         105       Patients age at start of 
.                                                 period - in days
PTXASAGM   FORM      4        3         109       Patients age at start of 
.                                                 period - in months
PTXASAGY   FORM      3        3         112       Patients age at start of 
.                                                 period - in years
PTXADAGD   FORM      5        4         115       Patients age at end of period
.                                                   - in days
PTXADAGM   FORM      4        3         119       Patients age at end of period
.                                                   - in months
PTXADAGY   FORM      3        3         122       Patients age at end of period
.                                                   - in years
PTXAPUS1   DIM       3        3         125       PMI user defined field 1 
.                                                   - (Cat P1)
PTXAPUS2   DIM       3        3         128       PMI user defined field 2 
.                                                   - (Cat P2)
PTXAPUS3   DIM       3        3         131       PMI user defined field 3 
.                                                   - (Cat P3)
PTXAPUS4   DIM       3        3         134       PMI user defined field 4 
.                                                   - (Cat P4)
PTXAPUS5   DIM       3        3         137       PMI user defined field 5 
.                                                   - (Cat P5)
PTXAPUS6   DIM       3        3         140       PMI user defined field 6 
.                                                   - (Cat P6)
PTXAPYN1   DIM       1        1         143       Using PMI user defined field
.                                                 1 - (Y or N)
PTXAPYN2   DIM       1        1         144       Using PMI user defined field
.                                                 2 - (Y or N)
PTXAPYN3   DIM       1        1         145       Using PMI user defined field
.                                                 3 - (Y or N)
PTXADCSE   DIM       1        1         146       Deceased during period 
.                                                   - (Y or N)
PTXADDTH   DIM       8        8         147       Date of death (CCYYMMDD)
PTXABADD   DIM       1        1         155       Bad Debt ? (Y or N)
PTXAAADC   DIM       6        6         156       Attending doctor at admission
PTXAAADT   DIM       3        3         162       Attending doc. type at 
.                                                 admission - (Cat DT)
PTXASADC   DIM       6        6         165       Attending doctor at start of
.                                                 period
PTXASADT   DIM       3        3         171       Attending doc. type at start
.                                                 of period - (Cat DT)
PTXADADC   DIM       6        6         174       Attending doctor at end of 
.                                                 period
PTXADADT   DIM       3        3         180       Attending doc. type at end 
.                                                 of period - (Cat DT)
PTXAARDC   DIM       6        6         183       Referring doctor
PTXAARDT   DIM       3        3         189       Referring doc. type (Cat DT)
PTXAATDC   DIM       6        6         192       Associated doctor
PTXAATDT   DIM       6        6         198       Associated doc. type (Cat DT)
PTXASOUR   DIM       3        3         204       Source of referral - (Cat S)
PTXAAHOS   DIM       5        5         207       Admission transfer source 
PTXACLMC   DIM       3        3         212       Claim code - (Cat CL)
PTXADIET   DIM       3        3         215       Diet code - (Cat DC)
PTXAACLS   DIM       3        3         218       Admission class - (Cat P)
PTXAACRE   DIM       3        3         221       Care class at admission 
.                                                   - (Cat CC)
PTXASCRE   DIM       3        3         224       Care class at start of the 
.                                                 period - (Cat CC)
PTXADCRE   DIM       3        3         227       Care class at end of the 
.                                                 period - (Cat CC)
PTXAADPT   DIM       3        3         230       Account classification at 
.                                                 time of admission - (Cat AC)
PTXASDPT   DIM       3        3         233       Account classification at 
.                                                 start of period - (Cat AC)
PTXADDPT   DIM       3        3         236       Account classification at end
.                                                 of period - (Cat AC)
PTXAFUND   DIM       6        6         239       Health fund code
PTXAFTBL   DIM       8        8         245       Health fund table code
PTXAAUS1   DIM       3        3         253       Admission user defined field
.                                                 1 - (Cat U1)
PTXAAUS2   DIM       3        3         256       Admission user defined field 
.                                                 2 - (Cat U2)
PTXAAUS3   DIM       3        3         259       Admission user defined field 
.                                                 3 - (Cat U3)
PTXAAUS4   DIM       3        3         262       Admission user defined field 
.                                                 4 - (Cat U4)
PTXAAUS5   DIM       3        3         265       Admission user defined field 
.                                                 5 - (Cat U5)
PTXAAUS6   DIM       3        3         268       Admission user defined field 
.                                                 6 - (Cat U6)
PTXAAUS7   DIM       3        3         271       Admission user defined field 
.                                                 7 - (Cat U7)
PTXAADIA   DIM       9        9         274       Admitting diagnosis code
PTXADDIA   DIM       9        9         283       Discharge diagnosis code
PTXADSTT   DIM       3        3         292       Discharge status - (Cat D)
PTXADDST   DIM       3        3         295       Discharge dest. - (Cat DD)
PTXADHOS   DIM       5        5         299       Discharge transfer source 
PTXADUS1   DIM       3        3         303       Discharge user defined field
.                                                 1 - (Cat D1)
PTXADUS2   DIM       3        3         306       Discharge user defined field 
.                                                 2 - (Cat D2)
PTXADUS3   DIM       3        3         309       Discharge user defined field 
.                                                 3 - (Cat D3)
PTXADUS4   DIM       3        3         312       Discharge user defined field 
.                                                 4 - (Cat D4)
PTXADUS5   DIM       3        3         315       Discharge user defined field 
.                                                 5 - (Cat D5)
PTXADRGC   DIM       6        6         319       DRG Code
PTXAMDCC   DIM       5        5         324       MDC Code
.                                                 *** added in V10.00 *I-157391
PTXAOPID   DIM      10       10         329       Operator
PTXARLOC   DIM       3        3         339       Record Location     ? (Cat MV)
PTXAABRG   DIM       3        3         341       Aboriginality PRS/2   (Cat VA)
PTXACADM   DIM       3        3         344       Admissn. Criterion    (Cat VB)
PTXAIRAD   DIM       3        3         347       Intent to Readmit     (Cat VR)
PTXAIDUS   DIM       3        3         351       Intend Stay Duration  (Cat VI)
PTXAMHLS   DIM       3        3         354       Mental Health L.Stat  (Cat LS)
PTXAASUT   DIM       3        3         357       Admiss.Serv. Unit Type(Cat KA)
PTXAELPS   DIM       3        3         360       Elective Patient Statu(Cat KC)
PTXAEMPL   DIM       3        3         363       Employment Status     (Cat KD)
PTXAREAD   DIM       3        3         366       Re-Admissn in 28 Days (Cat KM)
PTXAUDIN   DIM       3        3         369       Discharge Intention   (Cat KN)
PTXAUREA   DIM       3        3         372       Unplanned Readmission (Cat KO)
PTXAUVTH   DIM       3        3         375       Unplan.Visit to Theatr(Cat KB)
PTXAPLAN   DIM       3        3         378       Preferred Language    (Cat LA)
PTXASPRE   DIM       19       19        381        
.
.End of Record                          400
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
PTXAADMN    FORM       8          1       Admission number
