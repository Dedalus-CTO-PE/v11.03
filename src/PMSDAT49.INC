.******************************************************************************
.* System  : Patient                                                          *
.* Program : PMSDAT49.INC                                                     *
.* Desc    : PRS2 variables & common files                                    *
.* Mods    :                                                                  *
.*        V9.03.01  11/06/2004  Mike Laming   CAR 49016  July 2004 PRS/2      *
.*                  - Increase sex description to 8 for "Intersex"            *
.*        V9.00.B02 18/06/2001  Steve Downing                                 *
.*                  Added PMSVX1FD                                            *
.*        V9.00.B01 15/05/2001  Harvinder Kumar                               *
.*                  Added PRSHRDFD.INC and PRSDTLFD.INC                       *
.*                  Used for PRS2 Extract                                     *
.*        C2.09.B01 08/03/2001  Greg Horvat      SRF 8741                     *
.*                  Added ABDYSMTD & DYSMTD & removed MEDBEDS & MEDDAYS       *
.*        V5.08.01  13/07/2000  Tonii   SRF 634562                            *
.*                  Added new variables PRSREP4, PRSRNG4, PRSREP5 & PRSRNG5,  *
.*                  used for 4th and 5th report requests                      *
.*                                                                            *
.******************************************************************************
.
          INC       IBAPOSFD/INC
          INC       PATACCFD/INC
          INC       PATACTFD/INC
          INC       PATASFFD/INC
          INC       PATCALAG/INC
          INC       PATCHCFD/INC
          INC       PATCMPFD/INC
          INC       PATCODFD/INC
          INC       PATCONFD/INC
          INC       PATDADFD/INC
          INC       PATDAYFD/INC
          INC       PATDHEAD/INC
          INC       PATDRGFD/INC
          INC       PATDSCFD/INC
          INC       PATECAFD/INC
          INC       PATECDFD/INC
          INC       PATECMFD/INC
          INC       PATECOFD/INC
          INC       PATICDFD/INC
          INC       PATICOFD/INC
          INC       PATICUFD/INC
          INC       PATLISFD/INC
          INC       PATMTDFD/INC
          INC       PATPEIFD/INC
          INC       PATPGRFD/INC
          INC       PATPTDFD/INC
          INC       PATRDEFD/INC
          INC       PATSFAFD/INC
          INC       PATTRNFD/INC
          INC       PATUNAFD/INC
          INC       PATURCFD/INC
          INC       PATVISFD/INC
          INC       PMSVX1FD/INC
          INC       PATWBHFD/INC
          INC       PATWVEFD/INC
          INC       PATYTDFD/INC
          INC       PRS2CLDF/INC
.
.---------V9.00.B01-----------------------------------------------------------
.
          INC       PRSHRDFD/INC
          INC       PRSDTLFD/INC
.
.-----------------------------------------------------------------------------
.
. ----- PRS2 file definfition -----
.
WORK      FILE      ASCII, FIXED=240
.
.H2 Header file
.--------------
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
H2        INIT    "H2"      1     Transaction type - H2
.PTCNHCOD DIM       3       3     Hospital code
PRDSTDTE  DIM       8       6     Period start date (ddmmccyy)
PRDEDDTE  DIM       8      14     Period end date (ddmmccyy)
NUMBEDS   DIM       4      22     Number of avaliable beds
RPTOPTN   DIM       1      26     Reporting option
.SP2      DIM       2      27     2 spaces
PRSREP1   DIM       2      29     1st request report code
PRSRNG1   DIM      12      31     1st request report date(mmccyymmccyy)
PRSREP2   DIM       2      43     2nd request report code
PRSRNG2   DIM      12      45     2nd request report date(mmccyymmccyy)
PRSREP3   DIM       2      57     3rd request report code
PRSRNG3   DIM      12      59     3rd request report date(mmccyymmccyy)
PRSREP4   DIM       2      71     4th request report code
PRSRNG4   DIM      12      73     4th request report date(mmccyymmccyy)
PRSREP5   DIM       2      85     5th request report code
PRSRNG5   DIM      12      87     5th request report date(mmccyymmccyy)
.SP139    DIM     139      99     139 spaces
PRSVER    DIM       3     238     Program version number
.
.End of Record            241
.
.E2 Episode file
.---------------
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
E2        INIT    "E2"      1     Transaction type - E2
UNIQKEY   DIM       6       3     Unique key
EPIURNO   DIM       8       9     U/R number
EPISITID  DIM       1      17     Site id
EPIMEDI   DIM      11      18     Medicare number
EPIMCSFX  DIM       3      29     Medicare suffix
EPISEX    FORM      1      32     Sex
EPIMSTAT  FORM      1      33     Marital status
EPIBDATE  DIM       8      34     Date of birth (ddmmccyy)
EPIPOST   FORM      4      42     Postcode
EPISUBRB  DIM      22      46     Suburb/locality
.
EPIADATR  DIM       8      68     Admission date (ddmmccyy)
EPIATIME  DIM       4      76     Admission time
EPIATYPE  DIM       1      80     Admission type
EPIASRCE  DIM       1      81     Admission source
EPITSRCE  DIM       4      82     Transfer source code 
.
EPILVMTD  FORM      2      86     Month to date leave days
EPILVTOT  FORM      3      88     Year to date leave days
EPILVYTD  FORM      3      91     Total leave days
.
EPIACST1  DIM       2      94     1st episode account status
EPIATYP1  FORM      1      96     1st episode accommodation type
EPIQTYP1  DIM       1      97     1st episode qualification status
EPIABDP1  FORM      2      98     1st episode month to date bed days
EPIABDY1  FORM      3      100    1st episode year to date bed days
EPIABDA1  FORM      4      103    1st episode total bed days
.
EPIACST2  DIM       2      107    2nd episode account status
EPIATYP2  FORM      1      109    2nd episode accommodation type
EPIQTYP2  DIM       1      110    2nd episode qualification status
EPIABDP2  FORM      2      111    2nd episode month to date bed days
EPIABDY2  FORM      3      113    2nd episode year to date bed days
EPIABDA2  FORM      4      116    2nd episode total bed days
.
EPIACST3  DIM       2      120    3rd episode account status
EPIATYP3  FORM      1      122    3rd episode accommodation type
EPIQTYP3  DIM       1      123    3rd episode qualification status
EPIABDP3  FORM      2      124    3rd episode month to date bed days
EPIABDY3  FORM      3      126    3rd episode year to date bed days
EPIABDA3  FORM      4      129    3rd episode total bed days
.
EPIACST4  DIM       2      133    4th episode account status
EPIATYP4  FORM      1      135    4th episode accommodation type
EPIQTYP4  DIM       1      136    4th episode qualification status
EPIABDP4  FORM      2      137    4th episode month to date bed days
EPIABDY4  FORM      3      139    4th episode year to date bed days
EPIABDA4  FORM      4      142    4th episode total bed days
.
EPIACST5  DIM       2      146    5th episode account status
EPIATYP5  FORM      1      148    5th episode accommodation type
EPIQTYP5  DIM       1      149    5th episode qualification status
EPIABDP5  FORM      2      150    5th episode month to date bed days
EPIABDY5  FORM      3      152    5th episode year to date bed days
EPIABDA5  FORM      4      155    5th episode total bed days
.
EPIACST6  DIM       2      159    6th episode account status
EPIATYP6  FORM      1      161    6th episode accommodation type
EPIQTYP6  DIM       1      162    6th episode qualification status
EPIABDP6  FORM      2      163    6th episode month to date bed days
EPIABDY6  FORM      3      165    6th episode year to date bed days
EPIABDA6  FORM      4      168    6th episode total bed days
.
EPIACST7  DIM       2      172    7th episode account status
EPIATYP7  FORM      1      174    7th episode accommodation type
EPIQTYP7  DIM       1      175    7th episode qualification status
EPIABDP7  FORM      2      176    7th episode month to date bed days
EPIABDY7  FORM      3      178    7th episode year to date bed days
EPIABDA7  FORM      4      181    7th episode total bed days
.
EPISDATE  DIM       8      185    Separation date (ddmmccyy)
EPISTIME  DIM       4      193    Separation time
EPISTYPE  DIM       1      197    Separation type
EPISTRFR  DIM       4      198    Separation transfer/trans. destinatn
EPISREFL  DIM       4      202    Separation referral
EPICAVAL  DIM       1      206    Carer availability
EPISACST  DIM       2      207    Separation account status/class
EPISATYP  FORM      1      209    Separation accommodation type
.
EPISCTYP  DIM       1      210    Care type
EPNEWCOB  DIM       4      211    Country of birth code
EPABRGNL  DIM       1      215    Aboriginality
EPADCRTN  DIM       1      216    Criterion for admission
EPIINLOS  DIM       1      217    Intended LOS
EPHLTHFD  DIM       3      218    Health insurance fund
EPILINSR  FORM      1      221    Level of insurance
EPIMNTLS  DIM       1      222    Mental health legal status
EPIPRGFS  DIM       1      223    Program funding source
.
EPISPFDA  DIM       1      224    Funding arrangement
EPICTTYP  DIM       1      225    Contract type
EPICTROL  DIM       1      226    Contract role
EPICTRID  DIM       4      227    Contract/spoke identifier
EPIMDCLD  DIM       2      231    Contract leave days (MTD)
EPIYDCLD  DIM       2      233    Contract leave days (YTD)
EPITLCLD  DIM       2      235    Total contract leave days
.
EPIUSERF  DIM       1      237    User flag
.SP3      DIM       3      338    3 spaces
.
.End of Record             241
.
.X2 Diagnosis file
.-----------------
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
X2        INIT    "X2"      1     Transaction type - X2
.UNIQKEY  DIM       6       3     Unique key
DIAG1     DIM       8       9     Diagnosis code 1
DIAG2     DIM       8      17     Diagnosis code 2
DIAG3     DIM       8      25     Diagnosis code 3
DIAG4     DIM       8      33     Diagnosis code 4
DIAG5     DIM       8      41     Diagnosis code 5
DIAG6     DIM       8      49     Diagnosis code 6
DIAG7     DIM       8      57     Diagnosis code 7
DIAG8     DIM       8      65     Diagnosis code 8
DIAG9     DIM       8      73     Diagnosis code 9
DIAG10    DIM       8      81     Diagnosis code 10
DIAG11    DIM       8      89     Diagnosis code 11
DIAG12    DIM       8      97     Diagnosis code 12
PROC1     DIM       8      105    Procedure code 1
PROC2     DIM       8      113    Procedure code 2
PROC3     DIM       8      121    Procedure code 3
PROC4     DIM       8      129    Procedure code 4
PROC5     DIM       8      137    Procedure code 5
PROC6     DIM       8      145    Procedure code 6
PROC7     DIM       8      153    Procedure code 7
PROC8     DIM       8      161    Procedure code 8
PROC9     DIM       8      169    Procedure code 9
PROC10    DIM       8      177    Procedure code 10
PROC11    DIM       8      185    Procedure code 11
PROC12    DIM       8      193    Procedure code 12
EPBAWGHT  DIM       4      201    Admission weight for babies
EPREADMT  DIM       1      205    Intention to readmit < 28 days
EPDUSRF   DIM       1      206    User flag
EPDSICUH  DIM       4      207    Duration of ICU stay
EPDCMVH   DIM       4      211    Duration of mechanical ventilation
EPDRG     DIM       4      215    DRG code
EPDSCCU   DIM       4      219    Duration of stay in CCU
EPRCCT    DIM       1      223    Reason for critical care transfer
.SP17     DIM      17      224    17 spaces
.
.End of Record             241
.
.Y2 Xtra diagnosis file
.----------------------
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
Y2        INIT    "Y2"      1     Transaction type - Y2
.UNIQKEY  DIM       6       3     Unique key
DIAG13    DIM       8       9     Diagnosis code 13
DIAG14    DIM       8      17     Diagnosis code 14
DIAG15    DIM       8      25     Diagnosis code 15
DIAG16    DIM       8      33     Diagnosis code 16
DIAG17    DIM       8      41     Diagnosis code 17
DIAG18    DIM       8      49     Diagnosis code 18
DIAG19    DIM       8      57     Diagnosis code 19
DIAG20    DIM       8      65     Diagnosis code 20
DIAG21    DIM       8      73     Diagnosis code 21
DIAG22    DIM       8      81     Diagnosis code 22
DIAG23    DIM       8      89     Diagnosis code 23
DIAG24    DIM       8      97     Diagnosis code 24
DIAG25    DIM       8      105    Diagnosis code 25
PROC13    DIM       8      113    Procedure code 13
PROC14    DIM       8      121    Procedure code 14
PROC15    DIM       8      129    Procedure code 15
PROC16    DIM       8      137    Procedure code 16
PROC17    DIM       8      145    Procedure code 17
PROC18    DIM       8      153    Procedure code 18
PROC19    DIM       8      161    Procedure code 19
PROC20    DIM       8      169    Procedure code 20
PROC21    DIM       8      177    Procedure code 21
PROC22    DIM       8      185    Procedure code 22
PROC23    DIM       8      193    Procedure code 23
PROC24    DIM       8      201    Procedure code 24
PROC25    DIM       8      209    Procedure code 25
.SP24     DIM      24      217    24 spaces
.
.End of Record             241
.
.V2 Veterian affairs file
.------------------------
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
V2        INIT    "V2"      1     Transaction type - V2
.UNIQKEY  DIM       6       3     Unique key
.EPIURNO  DIM       8       9     U/R number
VETNUMB   DIM       9      17     Veterian affairs number
VETSURN   DIM      20      26     Surname
VETGIVN   DIM      12      46     Given name/forename
.EPIADATR DIM       8      58     Admission date (ddmmccyy)
.EPISDATE DIM       8      66     Separation date (ddmmccyy)
VETUSRF   DIM       1      74     User flag
.SP170    DIM      166     75     170 spaces
.
.End of Record             241
.
.S2 Sub acute file
.-----------------
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
S2        INIT    "S2"      1     Transaction type - S2
.UNIQKEY  DIM       6       3     Unique key
.EPIURNO  DIM       8       9     U/R number
BTHIDXAD  DIM       3      17     Barthel index score on admin.
BTHIDXDS  DIM       3      20     Barthel index score on disch.
.PTRDCLSP DIM       3      23     Clinical sub program (Cat CU)
ONSETDTE  DIM       8      26     Onset date (ddmmccyy)
.PTRDARTR DIM       1      34     Admission/Readmission to rehab
.PTRDUSRF DIM       1      35     User flag
.PTRDPCSA DIM       1      36     Palliative care state on admin
.PTRDPCSD DIM       1      37     Palliative care state on disch
.PTRDRGAA DIM       2      38     RUG ADL on admission
.PTRDRGAD DIM       2      40     RUG ADL on discharge
.PTRDSRPC DIM       2      42     Source of referal to pall care
.SP197    DIM      197     44     197 Spaces
.
.End of Record             241
.
.T2 Trailer file - Private hospital format
.-----------------------------------------
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
T3        INIT    "T3"      1     Transaction type - T3 (< 1/7/2000)
.
T2        INIT    "T2"      1     Transaction type - T2 (>= 1/7/2000)
.PTCNHCOD DIM       3       3     Hospital code
RECCNT    FORM      5       6     Record counter (max 9999)
.
PEPINEW   FORM      4      11     New episode record counter
PEPICOR   FORM      4      15     Corrections episode record counter
PEPIDEL   FORM      4      19     Deletions episode record counter
.
DIAGNEW   FORM      4      23     New diagnosis record counter
DIAGCOR   FORM      4      27     Corrections diagnosis record counter
DIAGDEL   FORM      4      31     Deletions diagnosis record counter
.
DVANEW    FORM      4      35     New DVA record counter
DVACOR    FORM      4      39     Corrections DVA record counter
DVADEL    FORM      4      43     Deletions DVA record counter
.
.PTMDMADM FORM      4      47     Month to date admission days
.PTMDMSEP FORM      4      51     Month to date separation days
.PTMDMSTS FORM      4      55     Month to date statistical sep days
.PTMDMLVE FORM      3      59     Month to date on leave end date days
.PTMDMINH FORM      4      62     Month to date in hsp at end date days
.PTMDMBED FORM      5      66     Month to date bed days
.
.PTYDYADM FORM      5      71     Year to date admission days
.PTYDYSEP FORM      5      76     Year to date separation days
.PTYDYSTS FORM      5      81     Year to date statistical sep days
.PTYDYBED FORM      6      86     Year to date bed days
.
.PTMDMPAS FORM      4      92     MTD private acute separation days
.PTMDMPAB FORM      5      96     MTD private acute bed days
.
.PTMDMPNS FORM      4      101    MTD private NHT separation days
.PTMDMPNB FORM      5      105    MTD private NHT bed days
.
.PTMDMCOS FORM      4      110    MTD compensable acute separation days
.PTMDMCOB FORM      5      114    MTD compensable acute bed days
.
.PTMDMIES FORM      4      119    MTD ineligible acute separation days
.PTMDMIEB FORM      5      123    MTD ineligible acute bed days
.
.PTMDMHCS FORM      4      128    MTD public contract separation days
.PTMDMHCB FORM      5      132    MTD public contract bed days
.
.SP9      DIM       9      137    9 spaces
.PTMDMPSD FORM      4      146    MTD private sameday separations
.PTMDMCSD FORM      4      150    MTD compensbale sameday separations
.PTMDMISD FORM      4      154    MTD ineligible sameday separations
.PTMDMHCD FORM      4      158    MTD public contract sameday separatn
.SP79     DIM      79      162    79 spaces
.
.End of Record             241
.
.U2 Trailer file - Private hospital format
.-----------------------------------------
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
T4        INIT    "T4"      1     Transaction type - T4 (< 1/7/2000)
.
U2        INIT    "U2"      1     Transaction type - U2 (>= 1/7/2000)
.PTCNHCOD DIM       3       3     Hospital code
.
.PTYDYPAS FORM      5       6     YTD private acute separation days
.PTYDYPAB FORM      6      11     YTD private acute bed days
.PTYDYPAT FORM      6      17     YTD private acute total days
.
.PTYDYPNS FORM      5      23     YTD private NHT separation days
.PTYDYPNB FORM      6      28     YTD private NHT bed days
.PTYDYPNT FORM      6      34     YTD private NHT total days
.
.PTYDYCOS FORM      5      40     YTD compensable acute separation days
.PTYDYCOB FORM      6      45     YTD compensable acute bed days
.PTYDYCOT FORM      6      51     YTD compensable acute total days
.
.PTYDYIES FORM      5      57     YTD ineligible acute separation days
.PTYDYIEB FORM      6      62     YTD ineligible acute bed days
.PTYDYIET FORM      6      68     YTD ineligible acute total days
.
.PTYDYHCS FORM      5      74     YTD public contract separation days
.PTYDYHCB FORM      6      79     YTD public contract bed days
.PTYDYHCT FORM      6      85     YTD public contract total days
.
.SP17     DIM      17      91     17 spaces
.PTYDYPSD FORM      5      108    YTD private sameday separations
.PTYDYCSD FORM      5      113    YTD compensable sameday separations
.PTYDYISD FORM      5      118    YTD ineligible sameday separations
.PTYDYHCD FORM      5      123    YTD public contract sameday separatn
.SP113    DIM      113     128    113 spaces
.
.End of Record             241
.
.T2 Trailer file - Public hospital format
.----------------------------------------
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
.T3       INIT    "T3"      1     Transaction type - T3 (< 1/7/2000)
.
.T2       INIT    "T2"      1     Transaction type - T2 (>= 1/7/2000)
.PTCNHCOD DIM       3       3     Hospital code
.RECCNT   FORM      5       6     Record counter (max 9999)
.
.PEPINEW  FORM      4      11     New episode record counter
.PEPICOR  FORM      4      15     Corrections episode record counter
.PEPIDEL  FORM      4      19     Deletions episode record counter
.
.DIAGNEW  FORM      4      23     New diagnosis record counter
.DIAGCOR  FORM      4      27     Corrections diagnosis record counter
.DIAGDEL  FORM      4      31     Deletions diagnosis record counter
.
.DVANEW   FORM      4      35     New DVA record counter
.DVACOR   FORM      4      39     Corrections DVA record counter
.DVADEL   FORM      4      43     Deletions DVA record counter
.
SUBANEW   FORM      4      47     New sub acute record counter
SUBACOR   FORM      4      51     Corrections sub acute record counter
SUBADEL   FORM      4      55     Deletions sub acute record counter
.
.PTPDMADM FORM      4      59     Month to date admission days
.PTPDMSEP FORM      4      63     Month to date separation days
.PTPDMSTS FORM      4      67     Month to date statistical sep days
.PTPDMLVE FORM      3      71     Month to date on leave end date days
.PTPDMINH FORM      4      74     Month to date in hsp at end date days
.PTPDMBED FORM      5      78     Month to date bed days
.
.PTYDYADM FORM      5      83     Year to date admission days
.PTYDYSEP FORM      5      88     Year to date separation days
.PTYDYSTS FORM      5      93     Year to date statistical sep days
.PTYDYBED FORM      6      98     Year to date bed days
.
.PTPDMHAS FORM      4      104    MTD public acute separation days
.PTPDMHAB FORM      5      108    MTD public acute bed days
.
.PTPDMPAS FORM      4      113    MTD private acute separation days
.PTPDMPAB FORM      5      117    MTD private acute bed days
.
.PTPDMCOS FORM      4      122    MTD compensable acute separation days
.PTPDMCOB FORM      5      126    MTD compensable acute bed days
.
.PTPDMIES FORM      4      131    MTD ineligible acute separation days
.PTPDMIEB FORM      5      135    MTD ineligible acute bed days
.
.PTPDMH5S FORM      4      140    MTD public NHT NH5 separation days
.PTPDMH5B FORM      5      144    MTD public NHT NH5 bed days
.
.PTPDMHNS FORM      4      149    MTD public NHT separation days
.PTPDMHNB FORM      5      153    MTD public NHT bed days
.
.PTPDMP5S FORM      4      158    MTD private NHT NH5 separation days
.PTPDMP5B FORM      5      162    MTD private NHT NH5 bed days
.
.PTPDMPNS FORM      4      167    MTD private NHT separation days
.PTPDMPNB FORM      5      171    MTD private NHT bed days
.
.PTPDMCNS FORM      4      176    MTD compensable non acute sep days
.PTPDMCNB FORM      5      180    MTD compensable non acute bed days
.
.PTPDMINS FORM      4      185    MTD ineligible non acute sep days
.PTPDMINB FORM      5      189    MTD ineligible non acute bed days
.
.PTPDMHSD FORM      4      194    MTD public sameday separations
.PTPDMPSD FORM      4      198    MTD private sameday separations
.PTPDMCSD FORM      4      202    MTD compensbale sameday separations
.PTPDMISD FORM      4      206    MTD ineligible sameday separations
.
.PTPDMUEP FORM      3      210    MTD number of unqualified episodes
.PTPDMUBD FORM      4      213    MTD number of unqualified bed days
.SP24     DIM      24      217    24 spaces
.
.End of Record             241
.
.U2 Trailer file - Public hospital format
.----------------------------------------
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
.T4       INIT    "T4"      1     Transaction type - T4 (< 1/7/2000)
.
.U2       INIT    "U2"      1     Transaction type - U2 (>= 1/7/2000)
.PTCNHCOD DIM       3       3     Hospital code
.
.PTYDYHAS FORM      5       6     YTD public acute separation days
.PTYDYHAB FORM      6      11     YTD public acute bed days
.PTYDYHAT FORM      6      17     YTD public acute total days
.
.PTYDYPAS FORM      5      23     YTD private acute separation days
.PTYDYPAB FORM      6      28     YTD private acute bed days
.PTYDYPAT FORM      6      34     YTD private acute total days
.
.PTYDYCOS FORM      5      40     YTD compensable acute separation days
.PTYDYCOB FORM      6      45     YTD compensable acute bed days
.PTYDYCOT FORM      6      51     YTD compensable acute total days
.
.PTYDYIES FORM      5      57     YTD ineligible acute separation days
.PTYDYIEB FORM      6      62     YTD ineligible acute bed days
.PTYDYIET FORM      6      68     YTD ineligible acute total days
.
.PTYDYH5S FORM      5      74     YTD public NHT NH5 separation days
.PTYDYH5B FORM      6      79     YTD public NHT NH5 bed days
.PTYDYH5T FORM      6      85     YTD public NHT NH5 total days
.
.PTYDYHNS FORM      5      91     YTD public NHT separation days
.PTYDYHNB FORM      6      96     YTD public NHT bed days
.PTYDYHNT FORM      6      102    YTD public NHT total days
.
.PTYDYP5S FORM      5      108    YTD private NHT NH5 separation days
.PTYDYP5B FORM      6      113    YTD private NHT NH5 bed days
.PTYDYP5T FORM      6      119    YTD private NHT NH5 total days
.
.PTYDYPNS FORM      5      125    YTD private NHT separation days
.PTYDYPNB FORM      6      130    YTD private NHT bed days
.PTYDYPNT FORM      6      136    YTD private NHT total days
.
.PTYDYCNS FORM      5      142    YTD compensable non acute sep days
.PTYDYCNB FORM      6      147    YTD compensable non acute bed days
.PTYDYCNT FORM      6      153    YTD compensable non acute total days
.
.PTYDYINS FORM      5      159    YTD ineligible non acute sep days
.PTYDYINB FORM      6      164    YTD ineligible non acute bed days
.PTYDYINT FORM      6      170    YTD ineligible non acute total days
.
.PTYDYHSD FORM      5      176    YTD public sameday separations
.PTYDYPSD FORM      5      181    YTD private sameday separations
.PTYDYCSD FORM      5      186    YTD compensable sameday separations
.PTYDYISD FORM      5      191    YTD ineligible sameday separations
.
.PTYDYUEP FORM      4      196    YTD number of unqualified episodes
.PTYDYUBD FORM      5      200    YTD number of unqualified bed days
.SP36     DIM      36      205    36 spaces
.
.End of Record             241
.
.
. ----- Tempfile Definitions -----
.
ADMTEMP   IFILE     SQL, FIXED=9, KEY="U1-8"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DTMPADMN  DIM       8         8        1     Admission no
.
.End of Record                         9
.
TMPADMN   FORM      8
.
.
ROYTEMP   IFILE     SQL, FIXED=9, KEY="U1-8"
.
. Name    Type   Length   Physical   Start   Description
. ----    ----   ------   --------   -----   -----------
DROYADMN  DIM       8         8        1     Admission no
.
.End of Record                         9
.
ROYADMN   FORM      8
.
.
PRSTEMP1  IFILE     SQL, FIXED=19, KEY="U1-8,9-9,10-17,18-18"
.
. Name    Type   Length   Physical   Start   Description
. ----    ----   ------   --------   -----   -----------
DXADMN    DIM       8          8       1     Admission no
DXTYPE    DIM       1          1       9     Record type
.                                              1 = Current admission
.                                              2 = On-leave admission
.                                              3 = Discharged patient
XCHDATE   DIM       8          8      10     Date of change
.                                              Only for XTYPE = 4 or 5
XALT      DIM       1          1      18     Alteration type
.                                              Only for XTYPE 5
.End of Record                        19
.
XADMN     FORM      8
XTYPE     FORM      1
.
. ----- Program Variables -----
.
ABDYSALL  FORM      4        * P/E Rec Status Segment - work Actual Bed Days ALL
ABDYSPTD  FORM      3        * P/E Rec Status Segment - work Actual Bed Days PTD
ABDYSMTD  FORM      3        * P/E Rec Status Segment - work Actual Bed Days MTD
ABDYSYTD  FORM      3        * P/E Rec Status Segment - work Actual Bed Days YTD
ACCMTYPE  FORM      1        * Pri. Epi. Rec Status Segmt - temp Accomodatn Type
ACCSTAT1  DIM       5        * Account Status 1
ACCSTAT2  DIM       5        * Account Status 2
ACCTSTAT  DIM       3        * Pri. Epi. Rec Status Segmt - temp Account Status
ADMDTE    DIM       10
ADMDTFLG  FORM      1                       * Admin details flag
ADMTYPE   DIM       3        * Pri. Epi. Rec Status SEgmt - temp Admission Type
AVLBEDS   FORM      4        * no. of available beds - for header record
.
B10NUMB   FORM      10
BEDDAYS   FORM      5        * temp Bed Days
BJDAY     FORM      5
BRTHDTE   DIM       10
.
CALDAYS   FORM      4        * required by PRS2DAYS Include
CARECLSS  DIM       3        * Pr. Epi. Rec Status Segmt - temp Care Class
CAREDATE  DIM       8
CARETYPE  DIM       1        * Pr. Epi. Rec Status Segmt - temp Care Type
CATEGORY  DIM       2
CCHGDATE  DIM       8        *save Care Class change date for comparison purpose
CCHGFLAG  FORM      1        * Code Change flag (0=more records, 1=no more recs)
CCUDAYS   FORM      4
CDYSDAYS  FORM      6
CDYSFDTE  DIM       8
CDYSTDTE  DIM       8
CDYSYEAR  FORM      2
CHGCAR94  FORM      1        * flag for change of care type on 1/7/94
CHGFLAG   FORM      1        * Status segment change.  Used in SSEG0000
CJDAY     FORM      5
CMDLINE   DIM       50       * command line
CODCNT    FORM      2                       * Code counter
COR       FORM      1        * temp Corrections total
CURCTYPE  DIM       1        * return value for GCTY0000
CURDATE8  DIM       8        * current date (ccyymmdd)
CURRFORM  FORM      1        * Current Age
CURWRDBD  DIM       7
.
DACCMTYP  DIM       1        * Pri. Epi. Rec Status Segmt - temp Accomodatn Type
DAYCASE   FORM      1        * Daycase patient or not
DIM1A     DIM       1
DIM1B     DIM       1
DIM1C     DIM       1
DIM1D     DIM       1
DIM2A     DIM       2
DIM2B     DIM       2
DIMFUND   DIM       2        * Health fund HDP
DOCNAME   DIM       28
DSCDTE    DIM       10
DSPCNT    FORM      6
DUMMY     FORM      1
DYSPTD    FORM      3        * Temp var. for bed days PTD
DYSMTD    FORM      3        * Temp var. for bed days MTD
DYSYTD    FORM      3        * Temp var. for bed days YTD
DYSALL    FORM      4        * Temp var. for bed days total
.
EFINYEAR  DIM       6        * end of financial year
ENDCHCDT  DIM       8        * ending care type change date
ENDCHCTM  DIM       5        * ending care type change time
ENDDATE   DIM       8        * ending date input
ENDDAY    DIM       3        * end day - part of PATACCFD's key
EPIADATE  DIM       8        * Pri. Episode Rec - Admission Date
EPIBDAY1  DIM        9       * Store Bed Days PTD, YTD & Tot together
EPIBDAY2  DIM        9       * Store Bed Days PTD, YTD & Tot together
EPIBDAY3  DIM        9       * Store Bed Days PTD, YTD & Tot together
EPIBDAY4  DIM        9       * Store Bed Days PTD, YTD & Tot together
EPIBDAY5  DIM        9       * Store Bed Days PTD, YTD & Tot together
EPIBDAY6  DIM        9       * Store Bed Days PTD, YTD & Tot together
EPIBDAY7  DIM        9       * Store Bed Days PTD, YTD & Tot together
EPICLSPC  DIM       2
EPICOBTH  DIM       2
EPICTYP1  FORM      1        * Pri. Episode Rec - Type of Care 1
EPICTYP2  FORM      1        * Pri. Episode Rec - Type of Care 2
EPICTYP3  FORM      1        * Pri. Episode Rec - Type of Care 3
EPICTYP4  FORM      1        * Pri. Episode Rec - Type of Care 4
EPICTYP5  FORM      1        * Pri. Episode Rec - Type of Care 5
EPICTYP6  FORM      1        * Pri. Episode Rec - Type of Care 6
EPICTYP7  FORM      1        * Pri. Episode Rec - Type of Care 7
EPIHFUND  DIM       2
EPISODNO  FORM      2
EPLUS1    DIM       8        * end date of run plus one day
EPRSRVED  DIM       10
ERRFLG    FORM      1                       * error flag
.
FLAGAUDT  FORM      1        * doing the episodes with the audit file loop
FLAGFRST  FORM      1        * doing first run flag
FLAGSING  FORM      1        * processing a single admission flag
FNAMEA    DIM       8        * temp file that stores Adm Nos.
FNAMEC    DIM       8        * temp file that stores Adm Nos. rest of year calcs
FORM3     FORM      3
FORM5     FORM      5
FORM6     FORM      6        * work variable
FORM6P2   FORM      6.2      * work variable
FORM8     FORM      8        * work variable
FOUNDCHC  FORM      1
FROMDATE  DIM       8        * required by PRS2DAYS Include
.
HCSFLAG   FORM      1              * flag to search using the HCS Eq.of adm.type
IBCNMHOS  FORM      1
KEY30SAV  DIM       30       * Save Var for Tran Key 2
.
LASTEPIS  FORM      1
LDAYS     FORM      3        * days variable use in calculation-routine LDYS0000
LEFTALL   FORM      4        * Current Days Left
.
MEDIREFN  DIM       2                       * Medicare reference no
MEDIUM    FORM      1        * medium flag - 0 = Tape, 1 = Modem/Floppy
MTDCTLDY  FORM      2
.
NBRDAYS   FORM      6        * Required by PRS2DAYS Include
NEW       FORM      1        * temp New Records total
NEWBNUMB  DIM       6
NEWBORN   FORM      1        * patient is newborn (date at admission <=9 days)
NEWFLAG   FORM      1
NEXTCARE  DIM       3
NOSAMDAY  FORM      1                        * Not Same Day Patient
NOYTDSEP  FORM      1                        * Not Ytd Separation
NUMDAYS   FORM      3        * number of days in Julian form
.
OCCURCNT  FORM      1        * Status Segment occurrence count
OLDACCST  DIM       5        * Previous Pri. Epi. Rec Status Segmt Account 
ONLVFLAG  FORM      1        * On-leave flag (0=not on leave, 1=on leave)
OVRCDFLG  FORM      1        * OVRCD flag - used in 
.
PATNAME   DIM       31       * patient's name output
PATYPE    DIM       3                       * Patient type
PREEXIST  FORM      1                        * Previous YTD File Exists
PREVYEAR  DIM       8                        * Filename for previous YTD data
PRS2END   DIM       8                        * The earliest of Period & CHCDATE 
PRS2IACC  DIM       3
PRS2RACC  FORM      2
PRS2STRT  DIM       8                        * The lastest of Period & EPIADATE
PRTHDR    FORM      1                       * Print header flag
PRERRFLG  FORM      1                       * Print errors only flag
PTERRFLG  FORM      1                       * Patient error flag
.
QUALSTAT  DIM       1
.
REPPOS    FORM      1 
ROYFLAG   FORM      1        * Rest of year flag
.                                0 - Not doing rest of year calc
.                                1 - Doing rest of year calc
.                                2 - Printing change details
.                                3 - Prev year reconcil for admin with changes
RPYTDF    FORM      1                       * Run previous YTD file
.
SAVEADMN  FORM      4                        *MTD Admissions (inc statistics)
SAVECLSS  DIM       3
SAVECSED  DIM       8
SAVECSST  DIM       8
SAVEDTP1  DIM       8
SAVEFORM  FORM      1                        *Format of admission/episode pair
SAVEMADM  FORM      4                        *MTD Admissions (inc statistics)
SAVEMBED  FORM      5                        *MTD Bed Days   
SAVEMCNB  FORM      5                        *MTD Compensable Non-Acute Bed Days
SAVEMCNS  FORM      4                        *MTD Compensable Non-Acute Seps
SAVEMCNT  FORM      6                        *Comp. Non-Acute Bed Days-YTD Seps
SAVEMCOB  FORM      5                        *MTD Compensable Bed Days 
SAVEMCOS  FORM      4                        *MTD Compensable Separations
SAVEMCOT  FORM      6                        *Comp. Acute Bed Days-YTD Seps
SAVEMCSD  FORM      4                        *MTD Compensable Same Day
SAVEMH5B  FORM      5                        *MTD Public NHT/NH5 Bed Days
SAVEMH5S  FORM      4                        *MTD Public NHT/NH5 Separations
SAVEMH5T  FORM      6                        *Public NHT/NH5 Bed Days-YTD Seps
SAVEMHAB  FORM      5                        *MTD Public Acute Bed Days
SAVEMHAS  FORM      4                        *MTD Public Acute Separations
SAVEMHAT  FORM      6                        *Public Acute Bed Days-YTD Seps
SAVEMHCB  FORM      5                        *MTD Public Contract Bed Days
SAVEMHCD  FORM      4                        *MTD Public Contract Same Day
SAVEMHCS  FORM      4                        *MTD Public Contract Separations
SAVEMHCT  FORM      6                        *Public Contract Bed Days-YTD Seps
SAVEMHNB  FORM      5                        *MTD Public NHT Bed Days    
SAVEMHNS  FORM      4                        *MTD Public NHT Separations
SAVEMHNT  FORM      6                        *Public NHT Bed Days-YTD Seps
SAVEMHSD  FORM      4                        *MTD Public Same Day
SAVEMIEB  FORM      5                        *MTD Ineligible Bed Days   
SAVEMIES  FORM      4                        *MTD Ineligible Separations
SAVEMIET  FORM      6                        *Inelig. Acute Bed Days-YTD Seps
SAVEMINB  FORM      5                        *MTD Ineligible Non-Acute Bed Days
SAVEMINH  FORM      4                        *Remaining In at End of Month
SAVEMINS  FORM      4                        *MTD Ineligible Non-Acute Seps 
SAVEMINT  FORM      6                        *Inelig Non-Acute Bed Days-YTD Seps
SAVEMISD  FORM      4                        *MTD Ineligible Same Day      
SAVEMLVE  FORM      3                        *On-Leave at End of Month     
SAVEMP5B  FORM      5                        *MTD Private NHT/NH5 Bed Days
SAVEMP5S  FORM      4                        *MTD Private NHT/NH5 Separations
SAVEMP5T  FORM      6                        *Private NHT/NH5 Bed Days-YTD Seps
SAVEMPAB  FORM      5                        *MTD Private Acute Bed Days
SAVEMPAS  FORM      4                        *MTD Private Acute Separations
SAVEMPAT  FORM      6                        *Privat Acute Bed Days-YTD Seps
SAVEMPCB  FORM      5                        *MTD Private Contract Bed Days
SAVEMPCD  FORM      4                        *MTD Private Contract Same Day
SAVEMPCS  FORM      4                        *MTD Private Contract Separations
SAVEMPCT  FORM      6                        *Private Contract Bed Day-YTD Seps
SAVEMPNB  FORM      5                        *MTD Private NHT Bed Days 
SAVEMPNS  FORM      4                        *MTD Private NHT Separations
SAVEMPNT  FORM      6                        *Private NHT Bed Days-YTD Seps
SAVEMPSD  FORM      4                        *MTD Private Same Day 
SAVEMSEP  FORM      4                        *MTD Separations    
SAVEMSTS  FORM      4                        *MTD Statistical Separations 
SAVEMUBD  FORM      4                        *MTD Unqualified Episodes
SAVEMUEP  FORM      3                        *MTD Unqualified Episodes
SAVEYADM  FORM      5                        *YTD Admissions (inc statistics)
SAVEYBED  FORM      6                        *YTD Bed Days   
SAVEYCNB  FORM      6                        *YTD Compens. Non-Acute Bed Days
SAVEYCNS  FORM      5                        *YTD Compens. Non-Acute Separations
SAVEYCNT  FORM      6                        *Comp. Non-Acute Bed Days-YTD Seps
SAVEYCOB  FORM      6                        *YTD Compensable Bed Days
SAVEYCOS  FORM      5                        *YTD Compensable Separations
SAVEYCOT  FORM      6                        *Comp. Acute Bed Days-YTD Seps
SAVEYCSD  FORM      5                        *YTD Compensable Same Day
SAVEYH5B  FORM      6                        *YTD Public NHT/NH5 Bed Days
SAVEYH5S  FORM      5                        *YTD Public NHT/NH5 Separations
SAVEYH5T  FORM      6                        *Public NHT/NH5 Bed Days-YTD Seps
SAVEYHAB  FORM      6                        *YTD Public Acute Bed Days     
SAVEYHAS  FORM      5                        *YTD Public Acute Separations 
SAVEYHAT  FORM      6                        *Public Acute Bed Days-YTD Seps
SAVEYHCB  FORM      6                        *YTD Public Contract Bed Days
SAVEYHCD  FORM      5                        *YTD Public Contract Same Day
SAVEYHCS  FORM      5                        *YTD Public Contract Separations
SAVEYHCT  FORM      6                        *Public Contract Bed Days-YTD Seps
SAVEYHNB  FORM      6                        *YTD Public NHT Bed Days
SAVEYHNS  FORM      5                        *YTD Public NHT Separations
SAVEYHNT  FORM      6                        *Public NHT Bed Days-YTD Seps
SAVEYHSD  FORM      5                        *YTD Public Same Day
SAVEYIEB  FORM      6                        *YTD Ineligible Bed Days
SAVEYIES  FORM      5                        *YTD Ineligible Separations
SAVEYIET  FORM      6                        *Inelig. Acute Bed Days-YTD Seps
SAVEYINB  FORM      6                        *YTD Inelig. Non-Acute Bed Days
SAVEYINS  FORM      5                        *YTD Inelig. Non-Acute Separatiopns
SAVEYINT  FORM      6                        *Inelig Non-Acute Bed Days-YTD Seps
SAVEYISD  FORM      5                        *YTD Ineligible Same Day
SAVEYP5B  FORM      6                        *YTD Private NHT/NH5 Bed Days
SAVEYP5S  FORM      5                        *YTD Private NHT/NH5 Separations
SAVEYP5T  FORM      6                        *Private NHT/NH5 Bed Days-YTD Seps
SAVEYPAB  FORM      6                        *YTD Private Acute Bed Days 
SAVEYPAS  FORM      5                        *YTD Private Acute Separations
SAVEYPAT  FORM      6                        *Privat Acute Bed Days-YTD Seps
SAVEYPCB  FORM      6                        *YTD Private Contract Bed Days
SAVEYPCD  FORM      5                        *YTD Private Contract Same Day
SAVEYPCS  FORM      5                        *YTD Private Contract Separations
SAVEYPCT  FORM      6                        *Private Contract Bed Day-YTD Seps
SAVEYPNB  FORM      6                        *YTD Private NHT Bed Days
SAVEYPNS  FORM      5                        *YTD Private NHT Separations
SAVEYPNT  FORM      6                        *Private NHT Bed Days-YTD Seps
SAVEYPSD  FORM      5                        *YTD Private Same Day
SAVEYSEP  FORM      5                        *YTD Separations (inc statistics)
SAVEYSTS  FORM      5                        *YTD Statistical Separations 
SAVEYUBD  FORM      5                        *MTD Unqualified Episodes
SAVEYUEP  FORM      4                        *MTD Unqualified Episodes
SAVMHLS   DIM       1                       * Save the mental health legal stat
SAVPFS    DIM       1                       * Save the program funding source
SCHCSED   DIM       8        * Sector 14, Position 239 - End date
SEPISDAT  DIM       8
SEX       DIM       8        * output storage for patient's sex        *C-49016
SFINYEAR  DIM       8        * start of financial year
SITEID    DIM       1                       * Site id
SOFMONTH  DIM       8
SPTPEEDD  DIM       8        * Save variable for PTPEEDDT
SPTPESTD  DIM       8        * Save variable for PTPESTDT
SSGEDATE  DIM       8        * Priv. Episode Rec Status Segment end change date
SSGSDATE  DIM       8        * Priv Episode Rec Status Segment start change date
STRING    DIM       4
SUMBEDS   FORM      4        * use in calculation - sum of available beds
SVEDATE   DIM       8        * Last change date in PATTRNFD for patient
SVSGEDAT  DIM       8        * End Status End Date
.
TEMPDATE  DIM       8        * Temp. date
TEMPFILE  DIM       8
TMPCOLEN  FORM      2
TMPCOLST  FORM      2
TMPCOUNT  FORM      8.3
TMPFRAC   FORM      8.3
TMPRECS   FORM      8.3                      * Total ROY Records loaded
TMPSIZE   FORM      2
TODATE    DIM       8        * required by PRS2DAYS Include
TOTBEDHR  FORM      8        * Total bed hours
TOTCTLDY  FORM      2
TOTEPIS   FORM      3
TOTFRAC   FORM      8.3                      * Total ROY Records loaded
TOTNHT    FORM      3
TOTNONHT  FORM      3
TOTRECS   FORM      8                        * Total ROY Records loaded
TRANFNME  DIM      12        * transmission file name
.
UKEY10    DIM       10
VETFLAG   FORM      1                       * Veterian affairs flag
.
WDATE1    DIM       8        * required by PRS2DAYS Include
WDATE2    DIM       8        * required by PRS2DAYS Include
WORKALL   FORM      4        * Work Vars
WRNFLG    FORM      1                       * Warning flag
.
XCCTSTAT  DIM       3        * Pri. Epi. Rec Status Segmt - temp Account Status
.
YEARFILE  DIM       8                        * Filename for current YTD data
YTDCTLDY  FORM      2
.
. ----- Program Constants -----
.
BASEDGTS  INIT      "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
.
CATA1     INIT      "U1"
CATA2     INIT      "U2"
CATA3     INIT      "U3"
CATA4     INIT      "U4"
CATA5     INIT      "U5"
CATA6     INIT      "U6"
CATA7     INIT      "U7"
CATD1     INIT      "D1"
CATD2     INIT      "D2"
CATD3     INIT      "D3"
CATD4     INIT      "D4"
CATD5     INIT      "D5"
CATP1     INIT      "P1"
CATP2     INIT      "P2"
CATP3     INIT      "P3"
CATP4     INIT      "P4"
CATP5     INIT      "P5"
CATP6     INIT      "P6"
.
FNAHDR    INIT      "tmpadm"       * file name for temp file that store adm nos.
FNAME     INIT      "pms49a"
FNAROY    INIT      "tmproy"       * Rest of Year admissions file
.
MAXRECS   FORM      "99999"        * maximum no. of records permitted to be sent
.
NEWBASE   FORM      "36"
NORMYR    FORM      "365"          * normal year with 365 days
.
YEARNAME  INIT      "patytd"
+
.

