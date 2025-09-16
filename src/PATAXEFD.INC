. V5.07.001 30/08/1998 Glenn 507 Changes
. *****************************************************************************
. * Include Name  : PATAXEFD.INC                                              * 
. *                                                                           *
. * Function      : File Definition Include for the Patient                   *
. *                 Admission Extension File - SCS Interface File             *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : pataxeaf.dat                                              *
. *                                                                           *
. * Keys          : KEY8, KEY16                                               *
. *                                                                           *
. * Modifications :                                                           *
. *                 V9.04.01 03/08/05 J.Tan    CAR 62750                      *
. *                          Removed redefined amount variables               *
. *                 V5.01.00 10.11.93 S.Barcham                               *
. *                          New File Created for Mt Alvernia                 *
. *                 V5.01.01 7/1/93   I.Rutt                                  *
. *                          Changed PTAXDAMI to DPTAXDAM                     *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATAXEA1  IFILE     SQL, FIXED=1450, KEY="U1-8"
PATAXEA2  IFILE     SQL, FIXED=1450, KEY="U624-631,1-8"
PATAXEA3  IFILE     SQL, FIXED=1450, KEY="D615-616,624-631"
.
. NAME    TYPE    LENGTH   PHYSICAL   START LOC.  DESCRIPTION
. ----    ----    ------   --------   ----------  -----------
DPTAXADM  DIM       8         8           1       Admission Number
PTAXNRIC  DIM      20        20           9       NRIC Number
PTAXGUTY  FORM      1         2          29       Guarantor Type
.                                                   0 - Not Applicable
.                                                   1 - Employer
.                                                   2 - Insurance
.                                                   3 - Next of Kin
.                                                   4 - Other
PTAXGUIN  DIM      20        20          31       Guarantor I/C Number
PTAXGUIT  DIM       3         3          51       Guarantor I/C Type (Cat P3)
PTAXGUNM  DIM      45        45          54       Guarantor Name
PTAXGUA1  DIM      35        35          99       Guarantor Address Line 1
PTAXGUA2  DIM      35        35         134       Guarantor Address Line 2
PTAXGUA3  DIM      35        35         169       Guarantor Address Line 3
PTAXGUA4  DIM      35        35         204       Guarantor Address Line 4
PTAXGUPC  DIM       8         8         239       Guarantor Post Code
PTAXGUPH  DIM      20        20         247       Guarantor Telephone
PTAXGUOC  DIM      14        14         267       Guarantor Occupation
PTAXGUEC  DIM       6         6         281       Guarantor Employer Code
PTAXGURL  DIM      10        10         287       Guarantor Relationship
.                                                 Doctor's Fees
PTAXDFPC  DIM       6         6         297       Principal Doctor Code
PTAXDFPI  FORM   12.2         8         303       Principal I/P Charge
PTAXDFPT  FORM   12.2         8         311       Principal Theatre Charge
PTAXDFPF  FORM   12.2         8         319       Principal Other Fees 
PTAXDFPO  DIM       1         1         327       Principal Collect Ind.
PTAXDFPS  DIM      10        10         328       Principal SMC Number
.                                                 Doctor's Fees
PTAXDFOC  DIM       6         6         338       Other (1) Doctor Code
PTAXDFOI  FORM   12.2         8         344       Other (1) I/P Charge
PTAXDFOT  FORM   12.2         8         352       Other (1) Theatre Charge
PTAXDFOF  FORM   12.2         8         360       Other (1) Other Fees 
PTAXDFOO  DIM       1         1         368       Other (1) Collect Ind.
PTAXDFOS  DIM      10        10         369       Other (1) SMC Number
.                                                 Doctor's Fees
PTAXDFDC  DIM       6         6         379       Other (2) Doctor Code
PTAXDFDI  FORM   12.2         8         385       Other (2) I/P Charge
PTAXDFDT  FORM   12.2         8         393       Other (2) Theatre Charge
PTAXDFDF  FORM   12.2         8         401       Other (2) Other Fees 
PTAXDFDO  DIM       1         1         409       Other (2) Collect Ind.
PTAXDFDS  DIM      10        10         410       Other (2) SMC Number
.                                                 Doctor's Fees
PTAXDFBC  DIM       6         6         420       Paediatrician Doctor Code
PTAXDFBI  FORM   12.2         8         426       Paediatrician I/P Charge
PTAXDFBT  FORM   12.2         8         434       Paediatrician Theatre Charge
PTAXDFBF  FORM   12.2         8         442       Paediatrician Other Fees 
PTAXDFBO  DIM       1         1         450       Paediatrician Collect Ind.
PTAXDFBS  DIM      10        10         451       Paediatrician SMC Number
.                                                 Doctor's Fees
PTAXDFAC  DIM       6         6         461       Anaesthetist Doctor Code
PTAXDFAI  FORM   12.2         8         467       Anaesthetist I/P Charge
PTAXDFAT  FORM   12.2         8         475       Anaesthetist Theatre Charge
PTAXDFAF  FORM   12.2         8         483       Anaesthetist Other Fees 
PTAXDFAO  DIM       1         1         491       Anaesthetist Collect Ind.
PTAXDFAS  DIM      10        10         492       Anaesthetist SMC Number
.
PTAXDCFR  DIM       1         1         502       Foreign Doctor (Y/N)
PTAXSDPM  DIM       8         8         503       Start Date Pat Mgt (CCYYMMDD)
PTAXENPM  DIM       8         8         511       End   Date Pat Mgt (CCYYMMDD)
.                                                 Claimable Payments
PTAXCPPI  FORM   12.2         8         519       Principal I/P Charge
PTAXCPPT  FORM   12.2         8         527       Principal Theatre Charge
.                                                 Claimable Payments
PTAXCPOI  FORM   12.2         8         535       Other Doctor(1) I/P Charge
PTAXCPOT  FORM   12.2         8         543       Other Doctor(1) Theatre Charge
.                                                 Claimable Payments
PTAXCPDI  FORM   12.2         8         551       Other Doctor(2) I/P Charge
PTAXCPDT  FORM   12.2         8         559       Other Doctor(2) Theatre Charge
.                                                 Claimable Payments
PTAXCPBI  FORM   12.2         8         567       Paediatrician I/P Charge
PTAXCPBT  FORM   12.2         8         575       Paediatrician Theatre Charge
.                                                 Claimable Payments
PTAXCPAI  FORM   12.2         8         583       Anaesthetist I/P Charge
PTAXCPAT  FORM   12.2         8         591       Anaesthetist Theatre Charge
.                                                 Claimable Payments
PTAXCPMI  FORM   12.2         8         599       Max. Claim I/P Charge
PTAXCPMT  FORM   12.2         8         607       Max. Claim Theatre Charge
.
DPTAXDAM  DIM       2         2         615       Approved by Medisave
.                                                   0 = Not Processed
.                                        (IBA)      2 = Discharge
.                                        (IBA)      3 = Letter of Certification
.                                        (SCS)      7 = Approved in Principle
.                                        (SCS)      8 = Rejected by MediNet
.                                        (SCS)      9 = Approved by MediNet
.                                        (SCS)     10 = Selected Bills
.                                        (SCS)     11 = Created onto txt
.                                        (SCS)     12 = Submitted to MediNet
.                                        (SCS)     13 = Received from MediNet
.
.                                                 Amendment Indicators
PTAXAI1C  DIM       2         2         617
.                                        (IBA)     21 = Bills Amendment
.                                        (IBA)     26 = Cancellation
PTAXAI2C  DIM       2         2         619
.                                        (SCS)     23 = Additional Payers - H
.                                        (SCS)     25 = Additional Payers - P
PTAXAI3C  DIM       2         2         621
.                                        (SCS)     22 = Payers Amendment - H
.                                        (SCS)     24 = Payers Amendment - P
.
PTAXMSAI  DIM       1         1         623       Medishield Amendment Indicator
.                                                 Blank - No Amendment Required
.                                                 Y or N - 
. Note: The Invoice program and Letter of Certification programs will check
.       this indicator and update AUSR4 (PATMI1FD) with the value of this 
.       field and then move space 1 to PTAXMSAI.
.                                                 will
PTAXAPDT  DIM       8         8         624       Date Approved by Medisave
.                                                     (CCYYMMDD)
PTAXTBAM  FORM   12.2         8         632       Total Bill Amount
PTAXFNDI  DIM       9         9         640       Final Diagnosis
PTAXOTD1  DIM       9         9         649       Other Diagnosis 1
PTAXOTD2  DIM       9         9         658       Other Diagnosis 2
PTAXCAIJ  DIM       9         9         667       Cause of Injury
PTAXDTLS  DIM       8         8         676       Date Last Submitted
.                                                     (CCYYMMDD)
PTAXND01  FORM      6         4         684       Number of Days (1)
PTAXRT01  DIM       6         6         688       Room Type (1)
PTAXBT01  DIM       6         6         694       Bill Type (1)
PTAXBA01  FORM    12.2        8         700       Bill Amount
.
PTAXND02  FORM      6         4         708       Number of Days (2)
PTAXRT02  DIM       6         6         712       Room Type (2)
PTAXBT02  DIM       6         6         718       Bill Type (2)
PTAXBA02  FORM    12.2        8         724       Bill Amount (2)
.
PTAXND03  FORM      6         4         732       Number of Days (3)
PTAXRT03  DIM       6         6         736       Room Type (3)
PTAXBT03  DIM       6         6         742       Bill Type (3)
PTAXBA03  FORM    12.2        8         748       Bill Amount (3)
.
PTAXND04  FORM      6         4         756       Number of Days (4)
PTAXRT04  DIM       6         6         760       Room Type (4)
PTAXBT04  DIM       6         6         766       Bill Type (4)
PTAXBA04  FORM    12.2        8         772       Bill Amount (4)
.
PTAXND05  FORM      6         4         780       Number of Days (5)
PTAXRT05  DIM       6         6         784       Room Type (5)
PTAXBT05  DIM       6         6         790       Bill Type (5)
PTAXBA05  FORM    12.2        8         796       Bill Amount (5)
.
PTAXND06  FORM      6         4         804       Number of Days (6)
PTAXRT06  DIM       6         6         808       Room Type (6)
PTAXBT06  DIM       6         6         814       Bill Type (6)
PTAXBA06  FORM    12.2        8         820       Bill Amount (6)
.
PTAXND07  FORM      6         4         828       Number of Days (7)
PTAXRT07  DIM       6         6         832       Room Type (7)
PTAXBT07  DIM       6         6         838       Bill Type (7)
PTAXBA07  FORM    12.2        8         844       Bill Amount (7)
.
PTAXND08  FORM      6         4         852       Number of Days (8)
PTAXRT08  DIM       6         6         856       Room Type (8)
PTAXBT08  DIM       6         6         862       Bill Type (8)
PTAXBA08  FORM    12.2        8         868       Bill Amount (8)
.
PTAXND09  FORM      6         4         876       Number of Days (9)
PTAXRT09  DIM       6         6         880       Room Type (9)
PTAXBT09  DIM       6         6         886       Bill Type (9)
PTAXBA09  FORM    12.2        8         892       Bill Amount (9)
.
PTAXND10  FORM      6         4         900       Number of Days (10)
PTAXRT10  DIM       6         6         904       Room Type (10)
PTAXBT10  DIM       6         6         910       Bill Type (10)
PTAXBA10  FORM    12.2        8         916       Bill Amount (10)
.
PTAXND11  FORM      6         4         924       Number of Days (11)
PTAXRT11  DIM       6         6         928       Room Type (11)
PTAXBT11  DIM       6         6         934       Bill Type (11)
PTAXBA11  FORM    12.2        8         940       Bill Amount (11)
.
PTAXND12  FORM      6         4         948       Number of Days (12)
PTAXRT12  DIM       6         6         952       Room Type (12)
PTAXBT12  DIM       6         6         958       Bill Type (12)
PTAXBA12  FORM    12.2        8         964       Bill Amount (12)
.
PTAXND13  FORM      6         4         972       Number of Days (13)
PTAXRT13  DIM       6         6         976       Room Type (13)
PTAXBT13  DIM       6         6         982       Bill Type (13)
PTAXBA13  FORM    12.2        8         988       Bill Amount (13)
.
PTAXND14  FORM      6         4         996       Number of Days (14)
PTAXRT14  DIM       6         6        1000       Room Type (14)
PTAXBT14  DIM       6         6        1006       Bill Type (14)
PTAXBA14  FORM    12.2        8        1012       Bill Amount (14)
.
PTAXND15  FORM      6         4        1020       Number of Days (15)
PTAXRT15  DIM       6         6        1024       Room Type (15)
PTAXBT15  DIM       6         6        1030       Bill Type (15)
PTAXBA15  FORM    12.2        8        1036       Bill Amount (15)
.
PTAXB101  DIM       6         6        1044       Bill Type (1)
PTAXA101  FORM    12.2        8        1050       Bill Amount (1)
.
PTAXB102  DIM       6         6        1058       Bill Type (2)
PTAXA102  FORM    12.2        8        1064       Bill Amount (2)
.
PTAXB103  DIM       6         6        1072       Bill Type (3)
PTAXA103  FORM    12.2        8        1078       Bill Amount (3)
.
PTAXB104  DIM       6         6        1086       Bill Type (4)
PTAXA104  FORM    12.2        8        1092       Bill Amount (4)
.
PTAXB105  DIM       6         6        1100       Bill Type (5)
PTAXA105  FORM    12.2        8        1106       Bill Amount (5)
.
PTAXB106  DIM       6         6        1114       Bill Type (6)
PTAXA106  FORM    12.2        8        1120       Bill Amount (6)
.
PTAXB107  DIM       6         6        1128       Bill Type (7)
PTAXA107  FORM    12.2        8        1134       Bill Amount (7)
.
PTAXB108  DIM       6         6        1142       Bill Type (8)
PTAXA108  FORM    12.2        8        1148       Bill Amount (8)
.
PTAXB109  DIM       6         6        1156       Bill Type (9)
PTAXA109  FORM    12.2        8        1162       Bill Amount (9)
.
PTAXB110  DIM       6         6        1170       Bill Type (10)
PTAXA110  FORM    12.2        8        1176       Bill Amount (10)
.
PTAXB111  DIM       6         6        1184       Bill Type (11)
PTAXA111  FORM    12.2        8        1190       Bill Amount (11)
.
PTAXB112  DIM       6         6        1198       Bill Type (12)
PTAXA112  FORM    12.2        8        1204       Bill Amount (12)
.
PTAXB113  DIM       6         6        1212       Bill Type (13)
PTAXA113  FORM    12.2        8        1218       Bill Amount (13)
.
PTAXB114  DIM       6         6        1226       Bill Type (14)
PTAXA114  FORM    12.2        8        1232       Bill Amount (14)
.
PTAXB115  DIM       6         6        1240       Bill Type (15)
PTAXA115  FORM    12.2        8        1246       Bill Amount (15)
.
PTAXB116  DIM       6         6        1254       Bill Type (16)
PTAXA116  FORM    12.2        8        1260       Bill Amount (16)
.
PTAXB117  DIM       6         6        1268       Bill Type (17)
PTAXA117  FORM    12.2        8        1274       Bill Amount (17)
.
PTAXB118  DIM       6         6        1282       Bill Type (18)
PTAXA118  FORM    12.2        8        1288       Bill Amount (18)
.
PTAXB119  DIM       6         6        1296       Bill Type (19)
PTAXA119  FORM    12.2        8        1302       Bill Amount (19)
.
PTAXB120  DIM       6         6        1310       Bill Type (20)
PTAXA120  FORM    12.2        8        1316       Bill Amount (20)
.
PTAXOPC1  DIM       9         9        1324       Operation Code (1)
PTAXDOP1  DIM       8         8        1333       Date of Operation (1)
.
PTAXOPC2  DIM       9         9        1341       Operation Code (2)
PTAXDOP2  DIM       8         8        1350       Date of Operation (2)
.
PTAXOPC3  DIM       9         9        1358       Operation Code (3)
PTAXDOP3  DIM       8         8        1367       Date of Operation (3)
.
PTAXOPC4  DIM       9         9        1375       Operation Code (4)
PTAXDOP4  DIM       8         8        1384       Date of Operation (4)
.
PTAXOPC5  DIM       9         9        1392       Operation Code (5)
PTAXDOP5  DIM       8         8        1401       Date of Operation (5)
.
PTAXOPC6  DIM       9         9        1409       Operation Code (6)
PTAXDOP6  DIM       8         8        1418       Date of Operation (6)
.
PTAXMBAL  FORM   12.2         8        1426       Medisave balance account
PTAXMBFL  FORM      1         2        1434       Medisave balance flag
.                                                 0 = IBA reset
.                                                 1 = Valid SCS response
.
PTAXSPAR  DIM      14        14        1436       Spare Variable
.
.End of Record                         1450
.
.  redefine form fields for key
.  ----------------------------
PTAXADMN  DIM           8         
PTAXDAMI  FORM          2        
.
