.  ****************************************************************************
.  *                                                                          *
.  *  Include Name      :   ALLQUEFD.INC                                      *
.  *                                                                          *
.  *  Function          :   Queuing Allied Health Message File                *
.  *                                                                          *
.  *  File Type         :   SQL                                               *
.  *                                                                          *
.  *  File Name         :   allqueaf.dat                                      * 
.  *                                                                          * 
.  *  Keys              :   KEY20                                             *
.  *                                                                          *
.  *  Modifications     :                                                     *
.  *                V10.13.01 08/10/2018   Steve Armstrong TSK 0864811        *
.  *                          Added ALRETRGD to ALREBKBA.                     *
.  ****************************************************************************
.  *                V10.10.01 18/04/2017   Steve Armstrong TSK 0833052        *
.  *                          Added ALRETRGS.                                 *
.  ****************************************************************************
.  *                V10.06.01 18/03/2015   Ebon Clements  CAR 303890          *
.  *                          Renamed ALREHCPC - Referring HCP State          *
.  *                          Renamed ALREHCPS - Referring HCP Post Code      *
.  *                          and changed from DIM 6 to DIM 8                 *
.  ****************************************************************************
.  *                V10.04.01 07/01/2014   Don Nguyen     CAR 294467          *
.  *                          Increased record size for new spare variable.   *
.  *                          Moved ALRECDAT,ALRECTIM,ALREUDAT out of spare.  *
.  *                                                                          *
.  *                          Added ALENRHOS,ALENCART,ALENSTRA,ALENOUTC,      *
.  *                          ALENSRVD,ALENSDEP,ALREYN10,ALREYN11,ALREYN12,   *
.  *                          ALREUDT7,ALREUTM7,ALREUDT8,ALREUTM8,ALREUDT9,   *
.  *                          ALREUTM9,ALREEIOD,ALREACDD,ALREUD10,ALRENVIN.   *
.  ****************************************************************************
.  *                V10.03.02 30/06/2013  Davin           CAR 279183          *
.  *                          Added alrecdat,alrectim,alreudat to spare       *
.  *                V10.03.01 15/08/2012  Ebon Clements   CAR 261277          *
.  *                          Assigned new cat code to ALREUC32               *
.  *                V10.00.01 31/01/2009  Steve Armstrong CAR 205453          *
.  *                          Changed ALENVISN to ALREVISN.                   *
.  *                          Also added new referral and encounter           *
.  *                          fields.                                         *
.  ****************************************************************************
.  *                V9.05.B01 19/12/2005 Ebon Clements    CAR 76341           *
.  *                         Changed ALENENCT to DIM 8                        *
.  ****************************************************************************
.  *                V9.03.02 09/02/2004  Ebon Clements    CAR 47349           *
.  *                         Changed ALERNDIM to ALERNDIG                     *
.  *                V9.03.01 21/08/2003  Steve Armstrong  CAR 37356           *
.  *                         Added ALLERCFD & ALLAEFFD variables              *
.  ****************************************************************************
.  *                V9.02.01 17/02/2003  Davin  CAR 19525                     *
.  *                         Added ALLREFFD variables                         *
.  *                V9.02.00 05/10/2001  Steve Armstrong                      *
.  *                         FD Created                                       *
.  *                                                                          *
.  ****************************************************************************
.
.Data File Definition
.--------------------
ALLQUEA1   IFILE SQL, FIXED=2508, KEY="U1-20"
.
.Name      Type   Length Physical Start Description
.----      ----   ------ -------- ----- -----------
DALQUMES   DIM     20      20        1   Message Id
.ALREVISN  DIM      8       8       21   Referral/Visit Number
.
.          ALLENCFD variables
.
.ALENENCT  DIM      8       8       29   Encounter Number
.ALENCLIN  DIM      6       6       37   Clinic Type
.ALENHCP   DIM     10      10       43   Service Provider (pmshcpaf)
.ALENSDAT  DIM      8       8       53   Service Date (CCYYMMDD)
.ALENSTIM  DIM      8       8       61   Service Time (HH:MM:SS)
.ALENLOCA  DIM      3       3       69   Location of Service (Category LD)
.ALENLINK  DIM      8       8       72   Linked Visit Number
.ALENTYPE  DIM      3       3       80   Patient Type (Category GI)
.ALENSERV  DIM      6       6       83   Service Type (allseraf)
.ALENDIUN  FORM     6       4       89   Direct Units
.ALENDBUN  FORM     6       4       93   Direct Billable Units
.ALENINUN  FORM     6       4       97   Indirect Units
.ALENIBUN  FORM     6       4      101   Indirect Billable Units
.ALENBULK  DIM      3       3      105   Bulk Billing Code (Category GB)
.ALENRSTA  DIM      1       1      108   Record Status (0=Active,1=Cancel)
.ALENUDT1  DIM      8       8      109   User Defined Date 1 (CCYYMMDD)
.ALENUTM1  DIM      8       8      117   User Defined Time 1 (HH:MM:SS)
.ALENUDT2  DIM      8       8      125   User Defined Date 2 (CCYYMMDD)
.ALENUTM2  DIM      8       8      133   User Defined Time 2 (HH:MM:SS)
.ALENUDT3  DIM      8       8      141   User Defined Date 3 (CCYYMMDD)
.ALENUTM3  DIM      8       8      149   User Defined Time 3 (HH:MM:SS)
.ALENUDT4  DIM      8       8      157   User Defined Date 4 (CCYYMMDD)
.ALENUTM4  DIM      8       8      165   User Defined Time 4 (HH:MM:SS)
.ALENUHC1  DIM     10      10      173   User Defined Doctor 1 (pmshcpaf)
.ALENUHC2  DIM     10      10      183   User Defined Doctor 2 (pmshcpaf)
.ALENUHC3  DIM     10      10      193   User Defined Doctor 3 (pmshcpaf)
.ALENUHC4  DIM     10      10      203   User Defined Doctor 4 (pmshcpaf)
.ALENUDI1  DIM      9       9      213   User Defined Diagnosis 1 (alldiaaf)
.ALENUDI2  DIM      9       9      222   User Defined Diagnosis 2 (alldiaaf)
.ALENUDI3  DIM      9       9      231   User Defined Diagnosis 3 (alldiaaf)
.ALENUDI4  DIM     60      60      240   Free Format Diagnosis 1
.ALENUDI5  DIM     60      60      300   Free Format Diagnosis 2
.ALENUDI6  DIM     60      60      360   Free Format Diagnosis 3
.ALENUYN1  DIM      1       1      420   User Defined Y/N 1 (0=No,1=Yes)
.ALENUYN2  DIM      1       1      421   User Defined Y/N 2 (0=No,1=Yes)
.ALENUYN3  DIM      1       1      422   User Defined Y/N 3 (0=No,1=Yes)
.ALENUYN4  DIM      1       1      423   User Defined Y/N 4 (0=No,1=Yes)
.ALENUYN5  DIM      1       1      424   User Defined Y/N 5 (0=No,1=Yes)
.ALENUYN6  DIM      1       1      425   User Defined Y/N 6 (0=No,1=Yes)
.ALENUYN7  DIM      1       1      426   User Defined Y/N 7 (0=No,1=Yes)
.ALENUYN8  DIM      1       1      427   User Defined Y/N 8 (0=No,1=Yes)
.ALENUYN9  DIM      1       1      428   User Defined Y/N 9 (0=No,1=Yes)
.ALENUFF1  DIM     60      60      429   User Defined Free Format
.ALENUFF2  DIM     60      60      489   User Defined Free Format
.ALENUFF3  DIM     60      60      549   User Defined Free Format
.ALENUC01  DIM      3       3      609   User Defined Code 1 (Category za)
.ALENUC02  DIM      3       3      612   User Defined Code 2 (Category zb)
.ALENUC03  DIM      3       3      615   User Defined Code 3 (Category zc)
.ALENUC04  DIM      3       3      618   User Defined Code 4 (Category zd)
.ALENUC05  DIM      3       3      621   User Defined Code 5 (Category ze)
.ALENUC06  DIM      3       3      624   User Defined Code 6 (Category zf)
.ALENUC07  DIM      3       3      627   User Defined Code 7 (Category zg)
.ALENUC08  DIM      3       3      630   User Defined Code 8 (Category zh)
.ALENUC09  DIM      3       3      633   User Defined Code 9 (Category zi)
.ALENUC10  DIM      3       3      636   User Defined Code 10 (Category zj)
.ALENUC11  DIM      3       3      639   User Defined Code 11 (Category zk)
.ALENUC12  DIM      3       3      642   User Defined Code 12 (Category zl)
.ALENUC13  DIM      3       3      645   User Defined Code 13 (Category zm)
.ALENUC14  DIM      3       3      648   User Defined Code 14 (Category zn)
.ALENUC15  DIM      3       3      651   User Defined Code 15 (Category zo)
.ALENUC16  DIM      3       3      654   User Defined Code 16 (Category zp)
.ALENUC17  DIM      3       3      657   User Defined Code 17 (Category zq)
.ALENUC18  DIM      3       3      660   User Defined Code 18 (Category zr)
.ALENUC19  DIM      3       3      663   User Defined Code 19 (Category zs)
.ALENUC20  DIM      3       3      666   User Defined Code 20 (Category zt)
.ALENUC21  DIM      3       3      669   User Defined Code 21 (Category zu)
.ALENUC22  DIM      3       3      672   User Defined Code 22 (Category zv)
.ALENUC23  DIM      3       3      675   User Defined Code 23 (Category zw)
.ALENUC24  DIM      3       3      678   User Defined Code 24 (Category zx)
.ALENUC25  DIM      3       3      681   User Defined Code 25 (Category zy)
.ALENUC26  DIM      3       3      684   User Defined Code 26 (Category zz)
.ALENUC27  DIM      3       3      687   User Defined Code 27 (Category zA)
.ALENUC28  DIM      3       3      690   User Defined Code 28 (Category zB)
.ALENUC29  DIM      3       3      693   User Defined Code 29 (Category zC)
.ALENUC30  DIM      3       3      696   User Defined Code 30 (Category zD)
.ALENUC31  DIM      3       3      699   User Defined Code 31 (Category zE)
.ALENUC32  DIM      3       3      702   User Defined Code 32 (Category zF)
.ALENUC33  DIM      3       3      705   Event Program        (Category zG)
.ALENUC34  DIM      3       3      708   User Defined Code 34 (Category zH)
.ALENUC35  DIM      3       3      711   User Defined Code 35 (Category zI)
.ALENUC36  DIM      3       3      714   User Defined Code 36 (Category zJ)
.ALENUC37  DIM      3       3      717   User Defined Code 37 (Category zK)
.ALENUC38  DIM      3       3      720   User Defined Code 38 (Category zL)
.ALENUC39  DIM      3       3      723   User Defined Code 39 (Category zM)
.ALENUC40  DIM      3       3      726   User Defined Code 40 (Category zN)
.ALENUF01  FORM    12.2     8      729   User Defined Form Field 1
.ALENUF02  FORM    12.2     8      737   User Defined Form Field 2
.ALENUF03  FORM    12.2     8      745   User Defined Form Field 3
.ALENUF04  FORM    12.2     8      753   User Defined Form Field 4
.ALENUF05  FORM    12.2     8      761   User Defined Form Field 5
.ALENUF06  FORM    12.2     8      769   User Defined Form Field 6
.ALENUF07  FORM    12.2     8      777   User Defined Form Field 7
.ALENUF08  FORM    12.2     8      785   User Defined Form Field 8
.ALENUF09  FORM    12.2     8      793   User Defined Form Field 9
.ALENUF10  FORM    12.2     8      801   User Defined Form Field 10
.ALENUF11  FORM     8       5      809   User Defined Form Field 11
.ALENUF12  FORM     8       5      814   User Defined Form Field 12
.ALENUF13  FORM     8       5      819   User Defined Form Field 13
.ALENUF14  FORM     8       5      824   User Defined Form Field 14
.ALENUF15  FORM     8       5      829   User Defined Form Field 15
.ALENUF16  FORM     8       5      834   User Defined Form Field 16
.ALENUF17  FORM     8       5      839   User Defined Form Field 17
.ALENUF18  FORM     8       5      844   User Defined Form Field 18
.ALENUF19  FORM     8       5      849   User Defined Form Field 19
.ALENUF20  FORM     8       5      854   User Defined Form Field 20
.ALENCMT1  DIM     80      80      859   Comments 1
.ALENCMT2  DIM     80      80      939   Comments 2
.ALENCOMP  DIM      3       3     1019   Compensation Code (Category CL)
.ALENUNIQ  DIM      8       8     1022   Private Practice Unique Identifier
.ALENSSAC  DIM      1       1     1030   Separate SACS Episode 0=No 1=Yes
.ALENREVD  DIM      8       8     1031   Case Review Date (CCYYMMDD)
.ALENCREF  DIM     20      20     1039   Case Referral
.ALENPURC  DIM      3       3     1059   Purchaser (Cat HP)
.ALENCONT  DIM      3       3     1062   Contract (Cat gb)
.ALENMOHR  DIM      1       1     1065   MOH Indicator Record sent to MHINC
.ALENRHOS  DIM      5       5     1066   Referred to Hospital (patvadaf)
.ALENCART  DIM      3       3     1071   Care Type (cat CC)
.ALENSTRA  DIM      3       3     1074   Transport Source of Ref. (cat SI)
.ALENOUTC  DIM      3       3     1077   Outcome (Cat OZ)
.ALENSRVD  DIM      3       3     1080   Service Delivery Mode (Cat sd)
.ALENSDEP  DIM      3       3     1083   Service Department (Cat CG)
.
.          ALLREFFD variables
.
.ALREURNO  DIM      8       8     1086   U/R Number
.ALRESTAT  DIM      1       1     1094   Status
.ALREDACT  DIM      8       8     1095   Date Active (CCYYMMDD)
.ALRELINK  DIM      8       8     1103   Linked Visit Number
.ALRERCLO  DIM      3       3     1111   Reason for Closure (Category LL)
.ALREDCLO  DIM      8       8     1114   Date Closed (CCYYMMDD)
.ALRETCLO  DIM      8       8     1122   Time Closed (HH:MM:SS)
.ALREUCLO  DIM     10      10     1130   WEB User ID Closed (websecaf)
.ALRERCAN  DIM      3       3     1140   Reason Cancelled (Category LN)
.ALREDCAN  DIM      8       8     1143   Date Cancelled (CCYYMMDD)
.ALRETCAN  DIM      8       8     1151   Time Cancelled (HH:MM:SS)
.ALREUCAN  DIM     10      10     1159   WEB User ID Cancelled (websecaf)
.ALRERINA  DIM      3       3     1169   Reason Inactive (Category LI)
.ALREDINA  DIM      8       8     1172   Date Inactive (CCYYMMDD)
.ALRETINA  DIM      8       8     1180   Time Inactive (HH:MM:SS)
.ALREDINU  DIM      8       8     1188   Date Inactive Until (CCYYMMDD)
.ALREUINA  DIM     10      10     1196   WEB User ID Inactive (websecaf)
.ALRERDAT  DIM      8       8     1206   Date of Referral (CCYYMMDD)
.ALRERDEP  DIM      3       3     1214   Referred to Department (alldepaf)
.ALRERDOC  DIM     10      10     1217   Referred by Doctor (DO NOT USE)
.ALRERHCP  DIM     10      10     1227   Referring HCP (pmshcpaf)
.ALRERHCR  DIM     10      10     1237   Referring Practice (pmshclaf)
.ALRERHCT  DIM      2       2     1247   Referring Group Count (pmshcgaf)
.ALREDEPT  DIM      3       3     1249   Department Code (alldepaf)
.ALREUNIT  DIM      3       3     1252   Unit/Specialty (Category AC)
.ALREPRTY  DIM      3       3     1255   Priority (Category PR)
.ALREPRO1  DIM      9       9     1258   Problem Code 1 (allprraf)
.ALREPRO2  DIM      9       9     1267   Problem Code 2 (allprraf)
.ALREPRO3  DIM      9       9     1276   Problem Code 3 (allprraf)
.ALREDIA1  DIM      9       9     1285   Diagnosis Code 1 (alldiaaf)
.ALREDIA2  DIM      9       9     1294   Diagnosis Code 2 (alldiaaf)
.ALREDIA3  DIM      9       9     1303   Diagnosis Code 3 (alldiaaf)
.ALRESRCE  DIM      3       3     1312   Source of Referral (ostcatg.outsitaf)
.ALRECOMP  DIM      3       3     1315   Compensation Code (Category CL)
.ALREBULK  DIM      1       1     1318   Bulk Bill (0=No,1=Yes)
.ALREDREV  DIM      8       8     1319   Date of Next Review (CCYYMMDD)
.ALREHCP   DIM     10      10     1327   Responsible HCP (pmshcpaf)
.ALREDREC  DIM      8       8     1337   Date Referral Received (CCYYMMDD)
.ALREUC01  DIM      3       3     1345   User Defined Code 1 (Category la)
.ALREUC02  DIM      3       3     1348   User Defined Code 2 (Category lb)
.ALREUC03  DIM      3       3     1351   User Defined Code 3 (Category lc)
.ALREUC04  DIM      3       3     1354   User Defined Code 4 (Category ld)
.ALREUC05  DIM      3       3     1357   User Defined Code 5 (Category le)
.ALREUC06  DIM      3       3     1360   User Defined Code 6 (Category lf)
.ALREUC07  DIM      3       3     1363   User Defined Code 7 (Category lg)
.ALREUC08  DIM      3       3     1366   User Defined Code 8 (Category lh)
.ALREUC09  DIM      3       3     1369   User Defined Code 9 (Category li)
.ALREUC10  DIM      3       3     1372   User Defined Code 10 (Category lj)
.ALREUC11  DIM      3       3     1375   User Defined Code 11 (Category lk)
.ALREUC12  DIM      3       3     1378   User Defined Code 12 (Category ll)
.ALREUC13  DIM      3       3     1381   User Defined Code 13 (Category lm)
.ALREUC14  DIM      3       3     1384   User Defined Code 14 (Category ln)
.ALREUC15  DIM      3       3     1387   User Defined Code 15 (Category lo)
.ALREUC16  DIM      3       3     1390   User Defined Code 16 (Category lp)
.ALREUC17  DIM      3       3     1393   User Defined Code 17 (Category lq)
.ALREUC18  DIM      3       3     1396   User Defined Code 18 (Category lr)
.ALREUC19  DIM      3       3     1399   User Defined Code 19 (Category ls)
.ALREUC20  DIM      3       3     1402   User Defined Code 20 (Category lt)
.ALREUC21  DIM      3       3     1405   User Defined Code 21 (Category lu)
.ALREUC22  DIM      3       3     1408   User Defined Code 22 (Category lv)
.ALREUC23  DIM      3       3     1411   User Defined Code 23 (Category lw)
.ALREUC24  DIM      3       3     1414   User Defined Code 24 (Category lx)
.ALREUC25  DIM      3       3     1417   User Defined Code 25 (Category ly)
.ALREUC26  DIM      3       3     1420   User Defined Code 26 (Category lz)
.ALREUC27  DIM      3       3     1423   User Defined Code 27 (Category lA)
.ALREUC28  DIM      3       3     1426   User Defined Code 28 (Category lB)
.ALREUC29  DIM      3       3     1429   User Defined Code 29 (Category lC)
.ALREUC30  DIM      3       3     1432   User Defined Code 30 (Category lD)
.ALREUC31  DIM      3       3     1435   User Defined Code 31 (Category lE)
.ALREUC32  DIM      3       3     1438   User Defined Code 32 (Category lO)
.ALREUC33  DIM      3       3     1441   User Defined Code 33 (Category lG)
.ALREUC34  DIM      3       3     1444   User Defined Code 34 (Category lH)
.ALREUC35  DIM      3       3     1447   User Defined Code 35 (Category lI)
.ALREUC36  DIM      3       3     1450   User Defined Code 36 (Category lJ)
.ALREUC37  DIM      3       3     1453   User Defined Code 37 (Category lK)
.ALREUC38  DIM      3       3     1456   User Defined Code 38 (Category lL)
.ALREUC39  DIM      3       3     1459   User Defined Code 39 (Category lM)
.ALREUC40  DIM      3       3     1462   User Defined Code 40 (Category lN)
.ALREUYN1  DIM      1       1     1465   User Defined Y/N 1 (0=No,1=Yes)
.ALREUYN2  DIM      1       1     1466   User Defined Y/N 2 (0=No,1=Yes)
.ALREUYN3  DIM      1       1     1467   User Defined Y/N 3 (0=No,1=Yes)
.ALREUYN4  DIM      1       1     1468   User Defined Y/N 4 (0=No,1=Yes)
.ALREUHC1  DIM     10      10     1469   User Defined HCP 1 (pmshcpaf)
.ALREUHC2  DIM     10      10     1479   User Defined HCP 2 (pmshcpaf)
.ALREUHC3  DIM     10      10     1489   User Defined HCP 3 (pmshcpaf)
.ALREUHC4  DIM     10      10     1499   User Defined HCP 4 (pmshcpaf)
.ALREUFR1  DIM     60      60     1509   User Defined Free Format 1
.ALREUFR2  DIM     60      60     1569   User Defined Free Format 2
.ALREUDT1  DIM      8       8     1629   User Defined Date 1 (CCYYMMDD)
.ALREUTM1  DIM      8       8     1637   User Defined Time 1 (HH:MM:SS)
.ALREUDT2  DIM      8       8     1645   User Defined Date 2 (CCYYMMDD)
.ALREUTM2  DIM      8       8     1653   User Defined Time 2 (HH:MM:SS)
.ALREUDT3  DIM      8       8     1661   User Defined Date 3 (CCYYMMDD)
.ALREUTM3  DIM      8       8     1669   User Defined Time 3 (HH:MM:SS)
.ALREUDT4  DIM      8       8     1677   User Defined Date 4 (CCYYMMDD)
.ALREUTM4  DIM      8       8     1685   User Defined Time 4 (HH:MM:SS)
.ALREUNO1  FORM    12.2     8     1693   User Defined Numeric 1
.ALREUNO2  FORM    12.2     8     1701   Job Number (Orthotics)
.ALRECTYP  DIM      6       6     1709   Clinic Type                  
.ALREHOSN  DIM      3       3     1715   Hospital/Unit Number         
.ALREFHCP  DIM     60      60     1718   Referring HCP (Free Format)  
.ALREHCP1  DIM     60      60     1778   Referring HCP Addr 1 (Free Format)
.ALREHCP2  DIM     60      60     1838   Referring HCP Addr 2 (Free Format)
.ALREHCP3  DIM     60      60     1898   Referring HCP Addr 3 (Free Format)
.ALREHCPC  DIM      8       8     1958   Referring HCP State (Free Format))
.ALREHCPS  DIM      8       8     1966   Referring HCP Post Code (Free Frm)
.ALREHCPB  DIM     20      20     1974   Referring HCP Bus. Phone (Free Frm)
.ALREHCPF  DIM     20      20     1994   Referring HCP Bus. Fax (Free Frm)
.ALREHCPP  DIM     10      10     2014   Referring HCP Prov.Numb. (Free Frm)
.ALRESTYP  DIM      3       3     2024   Slot Type (Category CV)
.ALREPRCM  DIM     50      50     2027   Presenting Complaint (Free Format)
.ALREPSIT  DIM      6       6     2077   Preferred Site
.ALRECLID  DIM      6       6     2083   Clinic ID
.ALRECSTA  DIM      3       3     2089   Claim Status (Category sc)
.ALRERREJ  DIM      3       3     2092   HIC Reason for Rejection (Cat hr)
.ALRECCOM  DIM     50      50     2095   Claim Comments (Free Format)
.ALRERTYP  DIM      3       3     2145   Type of Referral (Category RI)
.ALREREXP  DIM      8       8     2148   Referral Expiry Date (ccyymmdd)
.ALREMDAT  DIM      8       8     2156   Must Be Seen By Date (ccyymmdd)
.ALREPRDT  DIM      8       8     2164   Priority Date (CCYYMMDD)
.ALRESREJ  DIM      3       3     2172   SACS Reason for Rejection (Cat rr)
.ALRESRDT  DIM      8       8     2175   SACS Date Rejected (CCYYMMDD)
.ALRESRTM  DIM      8       8     2183   SACS Time Rejected (hh:mm:ss)
.ALRESRUI  DIM     10      10     2191   SACS WEB User Rejected (websecaf)
.ALREUDT5  DIM      8       8     2201   User Defined Date 5 (CCYYMMDD)
.ALREUTM5  DIM      8       8     2209   User Defined Time 5 (HH:MM:SS)
.ALREUYN5  DIM      1       1     2217   User Defined Y/N 5 (0=No,1=Yes)
.ALREUDID  DIM     10      10     2218   User Defined User ID 1 (websecaf)
.ALREUDT6  DIM      8       8     2228   User Defined Date 6 (CCYYMMDD)
.ALREUTM6  DIM      8       8     2236   User Defined Time 6 (HH:MM:SS)
.ALREUYN6  DIM      1       1     2244   User Defined Y/N 6 (0=No,1=Yes)
.ALREREVD  DIM      8       8     2245   Case Review Date (CCYYMMDD)
.ALREPURC  DIM      3       3     2253   Purchaser (Cat HP)
.ALREOUTP  DIM      3       3     2256   Outcome of Priority (CAT AO)
.ALRECONT  DIM      3       3     2259   Contract (Cat gb)
.ALRESCOR  DIM      6       6     2262   Score
.ALREMOHR  DIM      1       1     2268   MOH Indicator Record sent to MHINC
.ALREEVPR  DIM      3       3     2269   Event Program (Cat zG)
.ALREDIAT  DIM     50      50     2272   Diagnosis Code Free Text      
.ALREUYN7  DIM      1       1     2322   User Defined Y/N 7 (0=No,1=Yes)
.ALREUYN8  DIM      1       1     2323   User Defined Y/N 8 (0=No,1=Yes)
.ALREUYN9  DIM      1       1     2324   User Defined Y/N 9 (0=No,1=Yes)
.ALREUCD1  DIM      1       1     2325   User Defined Code 1 (0 to 9)  
.ALREUCD2  DIM      1       1     2326   User Defined Code 2 (0 to 9)
.ALREUCD3  DIM      1       1     2327   User Defined Code 3 (0 to 9)
.ALREORIG  DIM     30      30     2328   Originating Referral
.ALREYN10  DIM      1       1     2358   User Defined Y/N 10 (0=No,1=Yes)
.ALREYN11  DIM      1       1     2359   User Defined Y/N 11 (0=No,1=Yes)
.ALREYN12  DIM      1       1     2360   User Defined Y/N 12 (0=No,1=Yes)
.ALREUDT7  DIM      8       8     2361   User Defined Date 7 (CCYYMMDD)
.ALREUTM7  DIM      8       8     2369   User Defined Time 7 (HH:MM:SS)
.ALREUDT8  DIM      8       8     2377   User Defined Date 8 (CCYYMMDD)
.ALREUTM8  DIM      8       8     2385   User Defined Time 8 (HH:MM:SS)
.ALREUDT9  DIM      8       8     2393   User Defined Date 9 (CCYYMMDD)
.ALREUTM9  DIM      8       8     2401   User Defined Time 9 (HH:MM:SS)
.ALREEIOD  DIM      8       8     2409   Impairment Onset Date (CCYYMMDD)
.ALREACDD  DIM      8       8     2417   Adv. Care Plan Doc. Date (CCYYMMDD)
.ALREUD10  DIM      8       8     2425   User Defined Date 10 (CCYYMMDD)
.ALRENVIN  DIM      1       1     2433   Is a Non-VINAH Referral?
.                                          0 = No
.                                          1 = Yes
.ALRECDAT  DIM      8       8     2434   Date Record Created (CCYYMMDD)
.ALRECTIM  DIM      8       8     2442   Time Record Created (HH:MM:SS)
.ALREUDAT  DIM      8       8     2450   Update Date (CCYYMMDD)
.ALRETRGS  DIM      3       3     2458   Current Triage Status (Cat ts)
.ALRETRGD  DIM      8       8     2461   Current Triage Date (CCYYMMDD
.ALREBKOV  DIM      3       3     2469   Referral Override (Cat ro)
.ALREBKPR  DIM      3       3     2472   Referral Period (Cat RF)
.ALREBKPM  DIM      2       2     2475   Referral Period Months (1-98)
.ALREBKBA  DIM      1       1     2477   Benefit Assignment Authorised
.                                          0 or Blank - No
.                                          1 - Yes
ALQUSPAR  DIM      30      30     2478   Spare Variable
.
. End of Record                   2508
.
. Redefine FORM fields from key
. -----------------------------
ALQUMESI   FORM    20
