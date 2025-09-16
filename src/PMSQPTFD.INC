. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSQPTFD.INC                                  *
. *                                                                      *
. *  Function          :   Queuing Patient Details Message File          *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsqptaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY20                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *      V11.02.01 27/04/2022  Davin            TSK 0903453              *
. *                Added PMPXUCC1,PMPXUCC2,PMPXUCC3,PMPXUCC4,PMPXUCC5    *
. ************************************************************************
. *      V11.00.01 23/04/2020  Davin            TSK 0881876              *
. *                Added 15 fields from pmspx2af (PMPXSN16 to PMPXSN30)  *
. ************************************************************************
. *      V10.14.01 20/02/2019  Ebon Clements    TSK 0867703              *
. *                Changed NHMAETH, NHMAETH2 & NHMAETH3 to DIM5          *
. *                Added NHMAETH4, NHMAETH5 & NHMAETH6                   *
. ************************************************************************
. *      V10.13.01 08/10/2018  Steve Armstrong  TSK 0860679              *
. *                Added fields PMPXAUF1 to PMPXAUF5 from SPARE variable *
. *                into normal FD fields).                               *
. ************************************************************************
. *      V10.12.01 13/07/2018  Ebon Clements    TSK 0850366              *
. *                Save PMPXAUF1 to PMPXAUF5 in spare until V10.13       *
. ************************************************************************
. *      V10.08.02 08/04/2016  Steve Armstrong  TSK 0270181              *
. *                Added PTMAUUID, PTMAUTIM, PMPXUUID, PMPXUDAT &        *
. *                PMPXUTIM                                              *
. *      V10.08.01 01/04/2016  Steve Armstrong  TSK 0814716 & 0315393    *
. *                Added PMPXUPRF, PMPXRPER & PMPXRDAT                   *
. ************************************************************************
. *      V10.06.02 16/04/2015  Peter Vela       CAR 312723               *
. *                Changed description of PMPXUSR9                       *
. *      V10.06.01 12/03/2015  Steve Armstrong  CAR 314108               *
. *                Changed PTCGDATE, PTMXREGP, PTMXGPPC & PTMXGPPT to be *
. *                "No Longer in use".                                   *
. *                Also uncommented PTCGDATE as PATCGPFD no longer       *
. *                exists                                                *
. *                Added PMPXOSMS.                                       *
. ************************************************************************
. *      V10.04.02 27/02/2014  Patrick Adair    CAR 292935               *
. *                Added Consent Release of Info to HCP1-5               *
. *      V10.04.01 05/01/2014  Ania P           CAR 294471               *
. *                Moved PMPXPMCN & PMPXPMCR out of Spare                *
. ************************************************************************
. *      V10.03.01 30/06/2013  Davin            CAR 283202               *
. *                Added PMPXPMCN,PMPXPMCR to spare                      *
. ************************************************************************
. *      V10.02.02 20/06/2011  Ebon Clements    CAR 242416               *
. *                Added PMPXLUBH                                        *
. *      V10.02.01 17/06/2011  Steve Armstrong  CAR 236279               *
. *                Added PTMASNAM & PMPXIHOS                             *
. ************************************************************************
. *      V10.01.01 17/11/2010  Jill Parkinson CAR 233088                 *
. *                Moved and increased PFNDDD and added PTMADCDT         *
. *                V9.11.01 19/11/2008  Ebon Clements CAR 183976         *
. *                         Added PMPXFNAM and PMPXSNAM                  *
. *                V9.04.02 10/08/2005  Davin   CAR 64087                *
. *                         Added index 2                                *
. *                V9.04.01 09/05/2004  Davin   CAR 22680                *
. *                         Added PMPXRHC1, PMPXRH1G, PMPXR1GC           *
. *                V9.02.01 17/04/2002  Steve Armstrong                  *
. *                         Added PTMXMCCD                               *
. *                V9.02.00 01/10/2001  Steve Armstrong                  *
. *                         FD Created                                   *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSQPTA1   IFILE SQL, FIXED=4076, KEY="U1-20"
PMSQPTA2   IFILE SQL, FIXED=4076, KEY="U21-28,1-20"
.
.Name      Type    Length Physical Start   Description
.----      ----    ------ -------- -----   -----------
DPMQPMES   DIM     20        20        1   Message Id
.
.          PATMA1FD variables
.
.PURNO     DIM      8         8       21   PATIENT U.R NO.
PMQPOURN   DIM      8         8       29   Old U/R Number (for CMR message)
.CSALIAS   FORM     1         2       37   Alias Status
PTCGDATE   DIM      8         8       39   No Longer in use
.PTITL     DIM      4         4       47   PATIENT TITLE
.PHOSP     FORM     1         2       51   HOSPITAL LAST 12 MONTHS
.                                            1-YES,2-NO
.PLDAYS    FORM     3         3       53   NO DAYS LAST IN HOSPITAL
.PBDEBT    FORM     1         2       56   BAD DEBTOR INDICATOR 0-NO 1-YES
.PSNAME    DIM     20        20       58   PATIENT SURNAME
.PGNAME    DIM     25        25       78   PATIENTS GIVEN NAMES
.PPSNAME   DIM     19        19      103   PATIENTS PREVIOUS SURNAME /
.                                            New UR number for merged URs
.PADD1     DIM     35        35      122   PATIENT ADDRESS LINE 1
.PADD2     DIM     35        35      157   PATIENT ADDRESS LINE 2
.PSUBRB    DIM     35        35      192   PATIENT ADDRESS LINE 3
.PADD4     DIM     35        35      227   PATIENT ADDRESS LINE 4
.PPOST     DIM      8         8      262   PATIENT POSTCODE
.PTELEP    DIM     20        20      270   TELEPHONE PRIVATE
.PTELEB    DIM     20        20      290   TELEPHONE BUSINESS
.PSEX      DIM      1         1      310   PATIENTS SEX
.PMSTAT    DIM      3         3      311   PATIENTS MARTIAL STATUS (Cat M)
.PBDATE    DIM      8         8      314   date of birth (ccyymmdd)
.PSAGE     FORM     3         3      322   PATIENTS AGE
.PCONT     DIM      3         3      325   COUNTRY OF BIRTH (Cat C)
.PREG      DIM      3         3      328   PATIENTS RELIGION (Cat R)
.PTYPE     DIM      3         3      331   PATIENTS TYPE (Cat T)
.POCCUP    DIM     14        14      334   PATIENTS OCCUPATION
.PLDDATE   DIM      8         8      348   last discharge date (ccyymmdd)
.PMEDI     DIM     10        10      356   MEDICARE NUMBER
.PPENNO    DIM     15        15      366   PENSION NUMBER
.PPNDTE    DIM      6         6      381   pension no expiry date (ccyymm)
.PREPAT    DIM     10        10      387   REPATRIATION NUMBER
.PSMOK     FORM     1         2      397   PATIENT SMOKER
.PSTAT     FORM     1         2      399   PATIENT STATUS
.PMICRO    DIM     20        20      401   MICROFILM ADDRESS
.                                          1 -  6  U.R. NO.
.                                          7 - 10  ROLL NO.
.                                          11 - 14  POSITION NO.
.                                          15 - 16  YEAR
.PCEASE    FORM     1         2      421   DECEASED INDICATOR
.                                          0 = NO
.                                          1 = YES
.PCASE     FORM     1         2      423   CASE NOTES INDICATOR
.PAUTOPY   FORM     1         2      425   AUTOPSY INDICATOR
.                                          0 = NO
.                                          1 = YES
.PHIGH1    DIM      3         3      427   HIGHLIGHT CODE 1 (Cat H1)
.PHIGH2    DIM      3         3      430   HIGHLIGHT CODE 2 (Cat H2)
.PHIGH3    DIM      3         3      433   HIGHLIGHT CODE 3 (Cat H3)
.PLOCDOC   DIM     30        30      436   LOCAL DOCTOR
.PFUNDH    DIM      6         6      466   HEALTH FUND
.PFNDTB    DIM      8         8      472   HEALTH FUND TABLE
.PTMASPAR  DIM     10        10      480   Spare - was HF membership no
.PUSR1     DIM      3         3      490   USER DEFINED FIELD 1 (Cat P1)
.PUSR2     DIM      3         3      493   USER DEFINED FIELD 2 (Cat P2)
.PUSR3     DIM      3         3      496   USER DEFINED FIELD 3 (Cat P3)
.PUSR4     DIM      3         3      499   USER DEFINED FIELD 4 (Cat P4)
.PUSR5     DIM      3         3      502   USER DEFINED FIELD 5 (Cat P5)
.PUSR6     DIM      3         3      505   USER DEFINED FIELD 6 (Cat P6)
.PUYN1     FORM     1         2      508   USER DEFINED Y/N FIELD 1
.                                          (1=Y,0=N)
.PUYN2     FORM     1         2      510   USER DEFINED Y/N FIELD 2
.                                         (1=Y,0=N)
.PUYN3     FORM     1         2      512   USER DEFINED Y/N FIELD 3
.                                          (1=Y,0=N)
.PYRRES    FORM     2         2      514   NUMBER OF YEARS RESIDENT
.PNKNAME   DIM     20        20      516   NEXT OF KIN 1 NAME
.PNKADD1   DIM     35        35      536   N.O.K 1 ADDRESS LINE 1
.PNKADD2   DIM     35        35      571   N.O.K 1 ADDRESS LINE 2
.PNKSUBR   DIM     35        35      606   N.O.K 1 ADDRESS LINE 3
.PNKADD4   DIM     35        35      641   N.O.K 1 ADDRESS LINE 4
.PNKPOST   DIM      8         8      676   N.O.K 1 POSTCODE
.PNKTELP   DIM     20        20      684   N.O.K 1 PRIVATE TELEPHONE
.PNKTELB   DIM     20        20      704   N.O.K 1 BUSINESS TELEPHONE
.PNKRELP   DIM     10        10      724   N.O.K 1 RELATIONSHIP
.PLSTINP   FORM     8         5      734   LAST INPATIENT
.PLSTOUT   FORM     8         5      739   LAST OUTPATIENT VISIT NUMBER
.PNXRAY    FORM     3         3      744   NUMBER OF PREVIOUS X-RAYS
.PFNDYY    DIM      2         2      747   YRS OF FUND MEMBERSHIP (JR,DE)
.PFNDCG    DIM      6         6      749   fund cover change (ccyymm)
.PDECDTE   DIM      8         8      755   date of death (ccyymmdd)
.PHCNOTES  DIM     20        20      763   CASE NOTES INDICATORS
.PDIET     DIM      3         3      783   DEFAULT DIET CODE (Cat DC)
.PINITHOS  DIM      2         2      786   HOSPITAL U/R INITIATED FROM
.PHKADUNI  DIM     10        10      788   HONG KONG UNIQUE ADDRESS ID
.PTMAEMPC  DIM      6         6      798   PATIENT EMPLOYER CODE
.PTMANOKO  DIM     14        14      804   NEXT OF KIN OCCUPATION
.PTMANOKE  DIM      6         6      818   NEXT OF KIN EMPLOYER CODE
.PTMADCNO  DIM     10        10      824   DEATH CERTIFICATE NUMBER
.PTMAUKDB  DIM      1         1      834   Unknown Date of Birth (Y/N)
.PTMAUKDD  DIM      1         1      835   Unknown Date of Death (Y/N)
.PFNDMM    DIM     19        19      836   Health Fund Membership no.
.PTMADCDT  DIM      8         8      855   Demographics Conf Date CCYYMMDD
.PTMAHCP1  DIM     10        10      863   HCP 1 (pmshcpaf)
.PTMAHCL1  DIM     10        10      873   HCP 1 Practice (pmshclaf)
.PTMAHCG1  DIM      2         2      883   HCP 1 Grp Count (pmshcgaf
.PTMAHCP2  DIM     10        10      885   HCP 2 (pmshcpaf)
.PTMAHCL2  DIM     10        10      895   HCP 2 Practice (pmshclaf)
.PTMAHCG2  DIM      2         2      905   HCP 2 Grp Count (pmshcgaf
.PTMAHCP3  DIM     10        10      907   HCP 3 (pmshcpaf)
.PTMAHCL3  DIM     10        10      917   HCP 3 Practice (pmshclaf)
.PTMAHCG3  DIM      2         2      927   HCP 3 Grp Count (pmshcgaf
.PTMAHCP4  DIM     10        10      929   HCP 4 (pmshcpaf)
.PTMAHCL4  DIM     10        10      939   HCP 4 Practice (pmshclaf)
.PTMAHCG4  DIM      2         2      949   HCP 4 Grp Count (pmshcgaf
.PTMAHCP5  DIM     10        10      951   HCP 5 (pmshcpaf)
.PTMAHCL5  DIM     10        10      961   HCP 5 Practice (pmshclaf)
.PTMAHCG5  DIM      2         2      971   HCP 5 Grp Count (pmshcgaf
.PTMASNAM  DIM     40        40      973   Patient Surname
.PTMADCUD  DIM      8         8     1013   Demog. Conf Upd Date (CCYYMMDD)
.PTMADCUT  DIM      8         8     1021   Demog. Conf Upd Time (HH:MM:SS)
.PTMADCUU  DIM     10        10     1029   Demog. Conf Upd User (websecaf)
.PTMAUUID  DIM     10        10     1039   Web User Id who Last Updated
.                                          Record (websecaf)
.PTMAUTIM  DIM      8         8     1049   Time Record Last Updated
.                                          (hh:mm:ss)
.
.          PATMX1FD variables
.
.PTMXRDAT  DIM      8         8     1057   Registration Date
.PTMXMEAL  DIM     30        30     1065   Special Meal Requirements
.PTMXLGA   DIM      4         4     1095   LGA Code
.PTMXLS    DIM      3         3     1099   Current Legal status (Cat LS)
.PTMXLSDT  DIM      8         8     1102   Date of legal status (ccyymmdd)
.PTMXFHMD  DIM      1         1     1110   Familial history of mental disorder ?
.                                            1 = Yes ; 2 = No
.PTMXMHU1  DIM      3         3     1111   M.H. User defined field 1 (Cat V6)
.PTMXMHU2  DIM      3         3     1114   M.H. User defined field 2 (Cat V7)
.PTMXMHU3  DIM      3         3     1117   M.H. User defined field 3 (Cat V8)
.PTMXECNM  DIM     20        20     1120   Emergency contact name
.PTMXECA1  DIM     35        35     1140   Emergency contact address line 1
.PTMXECA2  DIM     35        35     1175   Emergency contact address line 2
.PTMXECA3  DIM     35        35     1210   Emergency contact address line 3
.PTMXECA4  DIM     35        35     1245   Emergency contact address line 4
.PTMXECPC  DIM      8         8     1280   Emergency contact postcode
.PTMXECPP  DIM     20        20     1288   Emergency contact private phone
.PTMXECBP  DIM     20        20     1308   Emergency contact business phone
.PTMXECRE  DIM     10        10     1328   Emergency contact relationship
.PTMXNRNM  DIM     20        20     1338   Nearest relative name
.PTMXNRA1  DIM     35        35     1358   Nearest relative address line 1
.PTMXNRA2  DIM     35        35     1393   Nearest relative address line 2
.PTMXNRA3  DIM     35        35     1428   Nearest relative address line 3
.PTMXNRA4  DIM     35        35     1463   Nearest relative address line 4
.PTMXNRPC  DIM      8         8     1498   Nearest relative postcode
.PTMXNRPP  DIM     20        20     1506   Nearest relative private phone
.PTMXNRBP  DIM     20        20     1526   Nearest relative business phone
.PTMXNRRE  DIM     10        10     1546   Nearest relative relationship
.PTMX3BEX  DIM      8         8     1556   3B certificate expiry date
.PTMXCARD  DIM     20        20     1564   Card number (NZ billing)
.PTMXCEXP  DIM      8         8     1584   Card expiry date (NZ billing)
.PTMXCXMP  DIM      3         3     1592   Card exemption type (Cat XM)
.PTMXFMLY  DIM     12        12     1595   Family id
.PTMXCHNM  DIM     20        20     1607   Chinese Name
.PTMXDOFR  DIM      3         3     1627   District of Residence (Cat DA)
.PTMXREGP  DIM      8         8     1630   No longer in use
.PTMXGPPC  DIM      6         6     1638   No longer in use
.PTMXSPID  DIM     20        20     1644   Supplementary Id
.PTMXGPPT  DIM      2         2     1664   No longer in use
.PTMXOSDT  DIM      8         8     1666   Date Arrived from Overseas (CCYYMMDD)
.PTMXOPER  DIM      4         4     1674   Sec. Code Operator who Created Record
.PTMXUKDO  DIM      1         1     1678   Unknown Date Arrived from O/S (Y/N)
.PTMXCELL  DIM     20        20     1679   Patient's Mobile Phone No.
.PTMXADD1  DIM     35        35     1699   Postal Address Line 1
.PTMXADD2  DIM     35        35     1734   Postal Address Line 2
.PTMXADD3  DIM     35        35     1769   Postal Address Line 3
.PTMXADD4  DIM     35        35     1804   Postal Address Line 4
.PTMXPOST  DIM      8         8     1839   Postal Address Post Code
.PTMXMCCD  DIM      2         2     1847   Medicare Code
.PTMXSIN1  DIM      1         1     1849   Status Ind 1 - Alerts present(1=yes)
.PTMXSIN2  DIM      1         1     1850   Status Ind 2 - Results present(1=yes)
.PTMXSIN3  DIM      1         1     1851   Status Ind 3 - Clinical notes present
.PTMXSIN4  DIM      1         1     1852   Status Ind 4 - Clinical Documentation
.PTMXSIN5  DIM      1         1     1853   Status Ind 5 - Legacy Visits (1=yes)
.PTMXCTIM  DIM     20        20     1854   Time/Date Change(ccyymmddhh:mm:ss:mmm)
.PTMXSLAC  DIM      8         8     1874   Year last Psych adm (was SLA Code)
.PTMXFILN  DIM      3         3     1882   Filing Required
.PTMXDEAF  DIM      3         3     1885   Deaf
.PTMXOSMS  DIM      1         1     1888   Opt Out of SMS
.                                            0 or Blank = No
.                                            1 = Yes
.PTMXUUID  DIM     10        10     1889   Web User ID who Updated Record
.                                            (websecaf)
.
.         PATNIDFD variables
.
.PTNINMPI  DIM     20        20     1899  National ID No. (right justified)
.
.         NHIMASFD variables
.
.NHMASURN  DIM     25        25     1919   Surname
.NHMAGIV1  DIM     20        20     1944   Given Name 1
.NHMAGIV2  DIM     20        20     1964   Given Name 2
.NHMAGIV3  DIM     20        20     1984   Given Name 3
.NHMAPREI  DIM      1         1     2004   Preferred Name Indicator (1-3)
.NHMAADD1  DIM     35        35     2005   Address Line 1
.NHMAADD2  DIM     30        30     2040   Address Line 2
.NHMAADD3  DIM     30        30     2070   Suburb
.NHMAADD4  DIM     30        30     2100   City/Town
.NHMAADD5  DIM     30        30     2130   Country
.NHMADOB   DIM      8         8     2160   Date of Birth
.NHMADDTH  DIM      8         8     2168   Date of Death
.NHMADOMC  DIM      4         4     2176   Domicile Code
.NHMARES   DIM      1         1     2180   Residence Status (Y/N)
.NHMAETH   DIM      5         5     2181   Ethnicity
.NHMASEX   DIM      1         1     2186   Gender
.NHMADAT   DIM      8         8     2187   Date Last Updated
.NHMATIM   DIM      8         8     2195   Time Last Updated
.NHMAETH2  DIM      5         5     2203   2nd Ethnicity
.NHMAETH3  DIM      5         5     2208   3rd Ethnicity
.NHMAETH4  DIM      5         5     2213   4th Ethnicity
.NHMAETH5  DIM      5         5     2218   5th Ethnicity
.NHMAETH6  DIM      5         5     2223   6th Ethnicity
.
.         PMSPX2FD variables        
.  
.PMPXRHC1  DIM     10        10     2228   Registered HCP 1 (pmshcpaf)
.PMPXRH1G  DIM     10        10     2238   Registered HCP 1 Group (pmshcgaf)
.PMPXR1GC  DIM      2         2     2248   Reg. HCP 1 Group Count (pmshclaf)
.PMPXINTR  DIM      1         1     2250   Interpreter Required?
.PMPXLNG1  DIM      3         3     2251   Preferred Language 1 (Cat LA)
.PMPXLNG2  DIM      3         3     2254   Preferred Language 2 (Cat LA)
.PMPXLNG3  DIM      3         3     2257   Preferred Language 3 (Cat LA)
.PMPXPEML  DIM     80        80     2260   Patient's Email Address
.PMPXEDOB  DIM      1         1     2340   Date of Birth Estimated? 0=NO,1=YES
.PMPXCMOB  DIM     20        20     2341   Emergency Contact Mobile Number
.PMPXCEML  DIM     80        80     2361   Emergency Contact Email Address
.PMPXCCRP  DIM      1         1     2441   Emer. Contact Corres. (0=NO,1=YES)
.PMPXKMOB  DIM     20        20     2442   NOK Mobile Number
.PMPXKEML  DIM     80        80     2462   NOK Email Address
.PMPXKCRP  DIM      1         1     2542   NOK Correspondence (0=NO,1=YES)
.PMPXRMOB  DIM     20        20     2543   Nearest Relative Mobile Number
.PMPXREML  DIM     80        80     2563   Nearest Relative Email Address
.PMPXRCRP  DIM      1         1     2643   Nearest Relative Corres. 0=NO,1=YES
.PMPXMEDC  DIM      8         8     2644   Medicare Card Valid to (CCYYMMDD)
.PMPXDETY  DIM      3         3     2652   Death Type (Cat DY)
.PMPXPRIS  DIM     15        15     2655   PRISM Number
.PMPXCSER  DIM     15        15     2670   Correctional Services Number
.PMPXPHEI  FORM     6         4     2685   Patient Height
.PMPXPWEI  FORM     6         4     2689   Patient Weight
.PMPXDREC  DIM      8         8     2693   Date Weight & Height Rec.(CCYYMMDD)
.PMPXMSNA  DIM     20        20     2701   Mother's Surname
.PMPXMGNA  DIM     25        25     2721   Mother's Given Name
.PMPXMTLE  DIM      4         4     2746   Mother's Title
.PMPXMAD1  DIM     35        35     2750   Mother's Address Line 1
.PMPXMAD2  DIM     35        35     2785   Mother's Address Line 2
.PMPXMAD3  DIM     35        35     2820   Mother's Address Line 3
.PMPXMAD4  DIM     35        35     2855   Mother's Address Line 4
.PMPXMPOS  DIM      8         8     2890   Mother's Address Post Code
.PMPXMPNO  DIM     20        20     2898   Mother's Private Number
.PMPXMBNO  DIM     20        20     2918   Mother's Business Number
.PMPXMMNO  DIM     20        20     2938   Mother's Mobile Number
.PMPXMEML  DIM     80        80     2958   Mother's Email Address
.PMPXMCNT  DIM      3         3     3038   Mother's Country of Birth (Cat C)
.PMPXMCRP  DIM      1         1     3041   Mother's Correspondence 0=NO,1=YES
.PMPXMLAB  DIM      1         1     3042   Mother's Name on Labels 0=NO,1=YES
.PMPXMREL  DIM     10        10     3043   Relationship to Patient
.PMPXFSNA  DIM     20        20     3053   Father's Surname
.PMPXFGNA  DIM     25        25     3073   Father's Given Name
.PMPXFTLE  DIM      4         4     3098   Father's Title
.PMPXFAD1  DIM     35        35     3102   Father's Address Line 1
.PMPXFAD2  DIM     35        35     3137   Father's Address Line 2
.PMPXFAD3  DIM     35        35     3172   Father's Address Line 3
.PMPXFAD4  DIM     35        35     3207   Father's Address Line 4
.PMPXFPOS  DIM      8         8     3242   Father's Address Post Code
.PMPXFPNO  DIM     20        20     3250   Father's Private Number
.PMPXFBNO  DIM     20        20     3270   Father's Business Number
.PMPXFMNO  DIM     20        20     3290   Father's Mobile Number
.PMPXFEML  DIM     80        80     3310   Father's Email Address
.PMPXFCNT  DIM      3         3     3390   Father's Country of Birth (Cat C)
.PMPXFCRP  DIM      1         1     3393   Father's Correspondence 0=NO,1=YES
.PMPXFLAB  DIM      1         1     3394   Father's Name on Labels 0=NO,1=YES
.PMPXFREL  DIM     10        10     3395   Relationship to Patient
.PMPXTDIG  DIM      2         2     3405   Terminal Digit (Last 2 chrs of U/R)
.PMPXWBID  DIM     10        10     3407   WEB User Id re. creator (websecaf)
.PMPXDVAC  DIM      3         3     3417   DVA Card Colour (Cat DX)
.PMPXPNSD  DIM      8         8     4320   Pension Start Date (CCYYMMDD)
.PMPXUYN4  DIM      1         1     3428   User Defined Y/N field 4 0=NO,1=YES
.PMPXUYN5  DIM      1         1     3429   User Defined Y/N field 5 0=NO,1=YES
.PMPXUYN6  DIM      1         1     3430   Not for Resusitation Y/N 0=NO,1=YES
.PMPXABRG  DIM      3         3     3431   Aboriginality (Cat VA)
.PMPXPRVI  DIM      3         3     3434   Privacy Indicator (Cat PV)
.PMPXCRIN  DIM      1         1     3437   Consent Release of Info? 0=NO,1=YES
.PMPXHOML  DIM      1         1     3438   Homeless? (0=NO,1=YES)
.PMPXUDC1  DIM     50        50     3439   User Defined Comments 1
.PMPXUDC2  DIM     50        50     3489   User Defined Comments 2
.PMPXUDC3  DIM     50        50     3539   User Defined Comments 3
.PMPXUSR7  DIM      3         3     3589   User Defined 7 (Category P7)
.PMPXUSR8  DIM      3         3     3592   User Defined 8 (Category P8)
.PMPXUSR9  DIM      3         3     3595   Advance Care Plan Flag(Category P9)
.PMPXMSNO  DIM     10        10     3598   Medicare Safety Net Number
.PMPXCONP  DIM      1         1     3608   Which contact for PRA
.PMPXFLDR  DIM      3         3     3609   Folder Selection (Category FS)
.PMPXIWI1  DIM      3         3     3612   Iwi 1 (Category iw)
.PMPXIWI2  DIM      3         3     3615   Iwi 2 (Category iw)
.PMPXIWI3  DIM      3         3     3618   Iwi 3 (Category iw)
.PMPXIHOS  DIM      3         3     3621   Hospital which initiated UR
.PMPXPFSN  DIM     20        20     3624   Preferred Surname
.PMPXPFGN  DIM     25        25     3644   Preferred Given Name
.PMPXSIN6  DIM      1         1     3669   Transport Required - 1=Yes
.PMPXSIN7  DIM      1         1     3670   Medical Alert (wahealth) - 1=Yes
.PMPXSIN8  DIM      1         1     3671   Micro Alert (wahealth) - 1=Yes
.PMPXSIN9  DIM      1         1     3672   Risk Alert (wahealth) - 1=Yes
.PMPXSN10  DIM      1         1     3673   Status Ind 10 - 1=Yes
.PMPXSN11  DIM      1         1     3674   Status Ind 11 - 1=Yes
.PMPXSN12  DIM      1         1     3675   Patient Debt Only - 1=Yes
.PMPXSN13  DIM      1         1     3676   Set Payment Plan - 1=Yes
.PMPXSN14  DIM      1         1     3677   Debt Collection Agency - 1=Yes
.PMPXSN15  DIM      1         1     3678   Outstanding Debt Ind. 1=Yes
.PMPXPFAX  DIM     20        20     3679   Patient Fax Number
.PMPXFNAM  DIM     40        40     3699   Patient First Name
.PMPXSNAM  DIM     40        40     3739   Patient Second Name
.PMPXHFGN  DIM     40        40     3779   Health Fund First Given Name Alias
.PMPXHFSN  DIM     40        40     3819   Health Fund Surname Alias
.PMPXFUPI  DIM      2         2     3859   Health Fund UPI
.PMPXVGPC  DIM     10        10     3861   Verified GP Code (pmshcpaf)
.PMPXVGPP  DIM     10        10     3871   Verified GP Practice (pmshcgaf)
.PMPXVGPG  DIM      2         2     3881   Verified GP Group Count (pmshclaf)
.PMPXASNO  DIM     15        15     3883   Ambulance Subscriber No.
.PMPXMAID  DIM     20        20     3898   Maiden Name
.PMPXETHN  DIM      3         3     3918   Ethnicity (Cat EN)
.PMPXHFCN  DIM     40        40     3921   Health Fund Contributor Name
.PMPXLUBH  DIM      3         3     3961   Last Updated By Hospital (pathspaf)
.PMPXPMCN  DIM      3         3     3964   Preferred Method of Contact (Cat Pn
.PMPXPMCR  DIM      3         3     3967   Preferred Method of Correspondence
.PMPXCRN1  DIM      1         1     3970   Consent of Release of Info to HCP1
.PMPXCRN2  DIM      1         1     3971   Consent of Release of Info to HCP2
.PMPXCRN3  DIM      1         1     3972   Consent of Release of Info to HCP3
.PMPXCRN4  DIM      1         1     3973   Consent of Release of Info to HCP4
.PMPXCRN5  DIM      1         1     3974   Consent of Release of Info to HCP5
.PMPXOSMS  DIM      1         1     3975   Opt out of SMS
.PMPXRPER  DIM      3         3     3976   Retention Period (Cat rt)
.PMPXRDAT  DIM      8         8     3979   Retention Date (ccyymmdd)
.PMPXUPRF  DIM      3         3     3987   Usual PRFA Coded (Cat tc)
.PMPXUUID  DIM     10        10     3990   User Id who Last Updated Record
.PMPXUDAT  DIM      8         8     4000   Date Record Last Updated (ccyymmdd)
.PMPXUTIM  DIM      8         8     4008   Time Record Last Updated (hh:mm:ss)
.
.PMPXAUF1  DIM      1         1     4016   Additional User Defined Field 1
.PMPXAUF2  DIM      1         1     4017   Additional User Defined Field 2
.PMPXAUF3  DIM      1         1     4018   Additional User Defined Field 3
.PMPXAUF4  DIM      1         1     4019   Additional User Defined Field 4
.PMPXAUF5  DIM      1         1     4020   Additional User Defined Field 5
.PMPXAUF6  DIM      1         1     4021   Additional User Defined Field 6
.PMPXAUF7  DIM      1         1     4022   Additional User Defined Field 7
.PMPXAUF8  DIM      1         1     4023   Additional User Defined Field 8
.PMPXAUF9  DIM      1         1     4024   Additional User Defined Field 9
.PMPXAU10  DIM      1         1     4025   Additional User Defined Field 10
.
.PMPXSN16  DIM      1         1     4026   MyHR Consent Flag
.PMPXSN17  DIM      1         1     4027   SMR - Scanned Medical Record Exists
.PMPXSN18  DIM      1         1     4028   Status Indicator 18
.PMPXSN19  DIM      1         1     4029   Verified Address
.PMPXSN20  DIM      1         1     4030   Status Indicator 20
.PMPXSN21  DIM      1         1     4031   Status Indicator 21
.PMPXSN22  DIM      1         1     4032   Status Indicator 22
.PMPXSN23  DIM      1         1     4033   Status Indicator 23
.PMPXSN24  DIM      1         1     4034   Status Indicator 24
.PMPXSN25  DIM      1         1     4035   Status Indicator 25
.PMPXSN26  DIM      1         1     4036   Status Indicator 26
.PMPXSN27  DIM      1         1     4037   Status Indicator 27
.PMPXSN28  DIM      1         1     4038   Status Indicator 28
.PMPXSN29  DIM      1         1     4039   Status Indicator 29
.PMPXSN30  DIM      1         1     4040   Status Indicator 30
.PMPXUCC1  DIM      3         3     4041  User Defined Category Code 1
.PMPXUCC2  DIM      3         3     4044  User Defined Category Code 2
.PMPXUCC3  DIM      3         3     4047  User Defined Category Code 3
.PMPXUCC4  DIM      3         3     4050  Identifying Gender (Cat Gi)
.PMPXUCC5  DIM      3         3     4053  Identifying Pronoun (Cat Gp)
.
PMQPSPAR   DIM      20       20     4056   Spare Variable
.
.End of Record                      4076
.
.
. Redefine FORM fields from key
. -----------------------------
PMQPMESI  FORM      20
