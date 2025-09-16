.******************************************************************************
.* System   :  OUTPATIENTS                                                    *
.* Program  :  OUTPLTDF.INC                                                   *
.* Desc     :  Data definition for adhoc letter printing                      *
.******************************************************************************
.* Date     :  26/05/93                                                       *
.* Author   :  Gabrielle Cameron                                              *
.* Comment  :  V5.01.01  Includes printing and temporary file variables       *
.******************************************************************************
.* Modifications  :                                                           *
.*         V11.02.01 01/04/2022  Sunny         TSK 0899125                    *
.*                  Added CLDAYSRT, CLMTHSRT                                  *
.*         V10.02.01 30/05/2011  Ebon Clements CAR 239552                     *
.*                  Added TEMPPUID                                            *
.*         V9.09.03 04/12/2007 Peter McMullen  CAR 137137                     *
.*                  add temp var TEMPCLDR for raw clinic description          *
.*         V9.09.02 14/11/2007 Mike Laming   CAR 131844                       *
.*                  Change all internal vars for Address fields to DIM 60     *
.*         V9.09.01 23/10/2007 Mike Laming   CAR 131844                       *
.*                  Add vars from HCP clean up for missing fields             *
.*         V9.08.01 16/05/2007 Ebon Clements CAR 131843                       *
.*                  Added RFGPTITLR,RFGPTELP,RFGPFAXN,RFGPEMAL and RFGPPRMC   *
.*         V9.02.01 21/03/2002 Ebon Clements                                  *
.*                  Added RGGPFNAM                                            *
.*                  10/01/1994    LOFTY                                       *
.*                  added the new GP practice vars here                       *
.*         V5.03.01 10/07/1995    Max White  SRF 441324 / Quote 440069        *
.*                  Added %day     - clinic day (Monday, Tuesday ..)          *
.*                        %cldate  - clinic date (1st, 2nd ...)               *
.*                        %month   - clinic month (January, February ..)      *
.*                        %year    - clinic century & year (1995 ...)         *
.*                        %loctype - clinic location type                     *
.*                        %locn    - clinic location                          *
.******************************************************************************
.
          INC       OUTLVLET/INC            * LC and LX variables
.
.         Temporary File Variables
.
.TEMP1     IFILE     SQL, FIXED=520, KEY="d1-1,398-403,500-505"
.
POSTCLSS  DIM       1      1      1
TEMPOUTN  FORM      8      5      2             * outpatient number
TEMPATTD  DIM       20     20     7             * attendence description
TEMPATDT  DIM       20     20     27            * attendence date
TEMPATTM  DIM       8      8      47            * attendence time
TEMPBDAT  DIM       20     20     55            * birthdate
TEMPCTRY  DIM       20     20     75            * country of birth
TEMPCTYP  DIM       30     30     95            * clinic type description
TEMPCOMP  DIM       20     20     125           * compensation eligibility
TEMPTDAY  DIM       20     20     145           * todays date
TEMPNAME  DIM       50     50     165           * patients full name
TEMPINSR  DIM       20     20     215           * insurance status
TEMPPCAT  DIM       20     20     235           * patient category
TEMPCLSS  DIM       20     20     255           * patient classification
TEMPPRTY  DIM       20     20     275           * patient priority
TEMPPSEX  DIM       6      6      295           * patients sex
TEMPSREF  DIM       20     20     301           * source of referral
TEMPURNO  DIM       8      8      321           * ur number
TEMPSITE  DIM       30     30     329           * site description
TEMPBKDT  DIM       20     20     359           * booking date
TEMPBTIM  DIM       8      8      379           * booking time
TEMPSLOT  DIM       3      3      387           * slot
TEMPSTIM  DIM       8      8      390           * slot time
TEMPCLID  DIM       6      6      398           * clinic id
TEMPCLDX  DIM       30     30     404           * clinc description
TEMPDTIT  DIM       9      9      434           * doctor title
TEMPDSNM  DIM       20     20     443           * doctor surname
TEMPDGNM  DIM       25     25     463           * doctor given name
TEMPDOCT  DIM       6      6      488           * doctor code
SITE      DIM       6      6      494
TEMPCLTY  DIM       6      6      500           * clinic type
TEMPDATE  DIM       8      8      506           * clinic date
TEMPSTRT  DIM       5      5      514
TEMPRSHF  DIM       1      1      519
.eof                              520
.
.         Common Variables
.
GRANTOTL  FORM      8.2
.
INVDATE   DIM       8
.
SUMHEAD   INIT      " Invoice #   Date     Inv.Total    Paid      Journals":
                    "   Outstanding"
SUMULINE  INIT      " --------- -------- ----------- ---------- ------------":
                    " -----------"
SUMULIN2  INIT      "                    =========== ========== ============":
                    " ==========="
SUMULIN3  INIT      "                    ----------- ---------- ------------":
                    " -----------"
.
TEMPATDS  DIM       10
TEMPCLDR  DIM       30
TEMPPUID  DIM       10
TMPFORM2  FORM      2
TEMPINV   FORM      8.2
TEMPJOUR  FORM      8.2
TOTLJOUR  FORM      8.2
TOTLINV2  FORM      8.2
.
SHRTPAID  FORM      7.2
SHRTTOTL  FORM      7.2
.
RGPRSURG  DIM       80            * Registered GP PRACTICE vars
RGPRSAD1  DIM       60
RGPRSAD2  DIM       60
RGPRSAD3  DIM       60
RGPRSAD4  DIM       60
RGPRSPCD  DIM       8 
RGPRTELE  DIM       20
.
RESPPMOC  DIM       20            * Responsible HCP vars
RESPSEML  DIM       80
RESPFDRT  DIM       9
RESPFDRS  DIM       20
RESPFDRG  DIM       25
RESPHPPC  DIM       8
RESPHPPH  DIM       15            * "999999999999999"
RESPHPFX  DIM       20            * "99999999999999999999"
RESPHPNM  DIM       60
RESPHPA2  DIM       60
RESPHPA3  DIM       60
RESPHPA4  DIM       60
RESPHPA5  DIM       60
RESPHPA6  DIM       60
.
RFGPADR5  DIM       60            * Referring GP vars
RFGPADR6  DIM       60
RFGPFAX0  DIM       20
RFGPMOBN  DIM       20
RFGPPAGN  DIM       20
RFGPPHON  DIM       20
RFGPPPNO  DIM       20
RFGPPRM0  DIM       20
RFGPPROV  DIM       10
.
RFPRFAXN  DIM       20            * Referring GP PRACTICE vars
RFPRSAD1  DIM       60
RFPRSAD2  DIM       60
RFPRSAD3  DIM       60
RFPRSAD4  DIM       60
RFPRSPCD  DIM       8 
RFPRSURG  DIM       80 
RFPRTELE  DIM       20
.
RGGPSNAM  DIM       20            * Registered GP vars
RGGPGNAM  DIM       20
RGGPADD1  DIM       60
RGGPADD2  DIM       60
RGGPADD3  DIM       60
RGGPADD4  DIM       60
RGGPPOST  DIM       8
RGGPEMLA  DIM       80
RGGPFNAM  DIM       40
RGGPPRMC  DIM       20
RGPRFAXN  DIM       20
RGPRPRCC  DIM       10           
.
RFGPSNAM  DIM       20            * Referring GP vars
RFGPGNAM  DIM       20
RFGPADD1  DIM       60
RFGPADD2  DIM       60
RFGPADD3  DIM       60
RFGPADD4  DIM       60
RFGPPOST  DIM       8
RFGPTITL  DIM       10
RFGPTELP  DIM       20
RFGPFAXN  DIM       20
RFGPEMAL  DIM       80
RFGPPRMC  DIM       20
RFGPSEML  DIM       80
.
CLDAY     DIM       9             * Clinic Date vars
CLDAYSRT  DIM       3             * Clinic day short 
CLDATE    DIM       4
CLMONTH   DIM       9
CLMTHSRT  DIM       3             * Clinic month short
CLYR      DIM       4
CLLTYP    DIM       20            * Clinic Location vars
CLCLOC    DIM       30
.
