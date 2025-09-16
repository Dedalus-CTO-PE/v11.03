.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   ECLINTFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Datagate          *
.  *                        Eclipse PMI Interface Message                 *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   eclintaf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY17                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
ECLINTA1   IFILE SQL, FIXED=1628, KEY="U1-1,2-18"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ECINSTAT  DIM          1       1      1   Message Status
.                                            "T" = To Be Processsed
.                                            "R" = Rejected
ECINDTTM  DIM         17      17      2   Date/Time Stamp (ccyymmddhhmmssxxx)
ECINRTYP  DIM          3       3     19   Record Type ("UPD" or "REG")
.PURNO    DIM          8       8     22   U/R Number (right justified)
.                                                    ( blank filled)
ECINTITL  DIM          4       4     30   Patient Title
ECINHOSP  DIM          1       1     34   Previous Hospital Visit (0=No, 1=Yes)
ECINDAYS  DIM          3       3     35   Number of days last time in hospital
ECINDEBT  DIM          1       1     38   Bad Debt Flag (0=No, 1=Yes)
ECINSNAM  DIM         20      20     39   Patient surname
ECINGNAM  DIM         25      25     59   Patient given names
ECINPREV  DIM         19      19     84   Patient previous surname
ECINADD1  DIM         35      35    103   Patient address line 1
ECINADD2  DIM         35      35    138   Patient address line 2
ECINADD3  DIM         35      35    173   Patient address line 3
ECINADD4  DIM         35      35    208   Patient address line 4
ECINPOST  DIM          8       8    243   Patient postcode
ECINPTEL  DIM         20      20    251   Telephone - private
ECINBTEL  DIM         20      20    271   Telephone - business
ECINPSEX  DIM          1       1    291   Patient sex (M=Male, F=Female)
ECINMSTA  DIM          3       3    292   Patient Marital Status (Cat M)
ECINPDOB  DIM          8       8    295   Date of Birth (ccyymmdd)
ECINCONT  DIM          3       3    303   Country of birth (Cat C)
ECINPREG  DIM          3       3    306   Patient Religion (Cat R)
ECINPTYP  DIM          3       3    309   Patient Type (Cat T)
ECINOCCP  DIM         14      14    312   Patient occupation (free format)
ECINLDIS  DIM          8       8    326   Last discharge date (ccyymmdd)
ECINMEDI  DIM         10      10    334   Medicare Number
ECINPNUM  DIM         11      11    344   Pension Number
ECINPEXP  DIM          6       6    355   Pension No. Expiry date (ccyymm)
ECINRNUM  DIM         10      10    361   Repatriation Number
ECINSMOK  DIM          1       1    371   Patient Smoker (0=Unk, 1=Yes, 2=No)
ECINMICR  DIM         20      20    372   Microfilm address
ECINCEAS  DIM          1       1    392   Deceased Indicator (0=No, 1=Yes)
ECINCASE  DIM          1       1    393   Case notes indicator (0=No, 1=Yes)
ECINAUTO  DIM          1       1    394   Autopsy Indicator (0=No, 1=Yes)
ECINHIG1  DIM          3       3    395   Highlight Code 1 (Cat H1)
ECINHIG2  DIM          3       3    398   Highlight Code 2 (Cat H2)
ECINHIG3  DIM          3       3    401   Highlight Code 3 (Cat H3)
ECINLDOC  DIM         30      30    404   Local doctor (free format)
ECINHFND  DIM          6       6    434   Health Fund Code
ECINFTBL  DIM          4       4    440   Health Fund Table
ECINFMEM  DIM         10      10    444   Health Fund membership number
ECINUSR1  DIM          3       3    454   User Defined Field 1 (Cat P1)
ECINUSR2  DIM          3       3    457   User Defined Field 2 (Cat P2)
ECINUSR3  DIM          3       3    460   User Defined Field 3 (Cat P3)
ECINUSR4  DIM          3       3    463   User Defined Field 4 (Cat P4)
ECINUSR5  DIM          3       3    466   User Defined Field 5 (Cat P5)
ECINUSR6  DIM          3       3    469   User Defined Field 6 (Cat P6)
ECINUYN1  DIM          1       1    472   User defined Y/N field 1 (0=No, 1=Yes)
ECINUYN2  DIM          1       1    473   User defined Y/N field 2 (0=No, 1=Yes)
ECINUYN3  DIM          1       1    474   User defined Y/N field 3 (0=No, 1=Yes)
ECINYRES  DIM          2       2    475   No. of years resident in country
ECINNNAM  DIM         20      20    477   Next of kin 1 name
ECINNAD1  DIM         35      35    497   NOK 1 Address line 1
ECINNAD2  DIM         35      35    532   NOK 1 Address line 2
ECINNAD3  DIM         35      35    567   NOK 1 Address line 3
ECINNAD4  DIM         35      35    602   NOK 1 Address line 4
ECINNPOS  DIM          8       8    637   NOK 1 Postcode
ECINNPTL  DIM         20      20    645   NOK 1 private telephone
ECINNBTL  DIM         20      20    665   NOK 1 business telephone
ECINNREL  DIM         10      10    685   NOK 1 relationship
ECINYRSM  DIM          2       2    695   Yrs Fund Membership (right justified)
.                                                             (blank filled)
ECINFCHG  DIM          6       6    697   Last Health Fund cover change (ccyymm)
ECINDDAT  DIM          8       8    703   Date of Death (ccyymmdd)
.                                                       (blank if not deceased)
ECINDIET  DIM          3       3    711   Default diet code (Cat DC)
ECININIT  DIM          2       2    714   Database U/R initiated from
ECINHKID  DIM         10      10    716   Hong Kong Unique Address Id
ECINEMPC  DIM          6       6    726   Patient Employer code
ECINNOKO  DIM         14      14    732   NOK Occupation
ECINNOKE  DIM          6       6    746   NOK Employer code
ECINDCNO  DIM         10      10    752   Death Certificate Number
ECINRDAT  DIM          8       8    762   Registration Date (ccyymmdd)
ECINMEAL  DIM         30      30    770   Special Meal Requirements
ECINLGAC  DIM          4       4    800   LGA Code
ECINLSTA  DIM          3       3    804   Current Legal Status (Cat LS)
ECINLSDT  DIM          8       8    807   Date of Current Legal Status(ccyymmdd)
ECINFHMD  DIM          1       1    815   Familial MH disorder history
.                                                  (0=No, 1=Yes)
ECINMHU1  DIM          3       3    816   MH User Defined Field 1 (Cat V6)
ECINMHU2  DIM          3       3    819   MH User Defined Field 2 (Cat V7)
ECINMHU3  DIM          3       3    822   MH User Defined Field 3 (Cat V8)
ECINECNM  DIM         20      20    825   Emergency Contact Name
ECINECA1  DIM         35      35    845   Emergency Contact Address Line 1
ECINECA2  DIM         35      35    880   Emergency Contact Address Line 2
ECINECA3  DIM         35      35    915   Emergency Contact Address Line 3
ECINECA4  DIM         35      35    950   Emergency Contact Address Line 4
ECINECPC  DIM          8       8    985   Emergency Contact Postcode
ECINECPP  DIM         20      20    993   Emergency Contact Private Phone
ECINECBP  DIM         20      20   1013   Emergency Contact Business Phone
ECINECRE  DIM         10      10   1033   Emergency Contact Relationship
ECINNRNM  DIM         20      20   1043   Nearest Relative name
ECINNRA1  DIM         35      35   1063   Nearest Relative Address Line 1
ECINNRA2  DIM         35      35   1098   Nearest Relative Address Line 2
ECINNRA3  DIM         35      35   1133   Nearest Relative Address Line 3
ECINNRA4  DIM         35      35   1168   Nearest Relative Address Line 4
ECINNRPC  DIM          8       8   1203   Nearest Relative Postcode
ECINNRPP  DIM         20      20   1211   Nearest Relative Private Phone
ECINNRBP  DIM         20      20   1231   Nearest Relative Business Phone
ECINNRRE  DIM         10      10   1251   Nearest Relative Relationship
ECIN3BEX  DIM          8       8   1261   3B Certificate Expiry Date (ccyymmdd)
ECINCARD  DIM         20      20   1269   NZ Community Card Number
ECINCEXP  DIM          8       8   1289   NZ Comm. Card Expiry Date (ccyymmdd)
ECINCXMP  DIM          3       3   1297   NZ Comm. Card Exemption Type (Cat XM)
ECINFMLY  DIM         12      12   1300   Family Id
ECINCHNM  DIM         20      20   1312   Chinese Name
ECINDOFR  DIM          3       3   1332   District of Residence (Cat DA)
ECINREGP  DIM          8       8   1335   Registered GP code
ECINGPPC  DIM          6       6   1343   GP Practice Code
ECINSPID  DIM         20      20   1349   Supplementary Id
ECINGPPT  DIM          2       2   1369   GP Practice Count
ECINOSDT  DIM          8       8   1371   Date Arrived fromm Overseas (ccyymmdd)
ECINNMPI  DIM         20      20   1379   National Id (NHS Number)
.                                               (Right justified, Blank filled)
.KEEPOLAL FORM         1       2   1399   Alias status (0=don't save old name
.                                           as alias, 1=save old name as alias
.                                           if name changed - "UPD" only)
.EFFDATGP DIM          8       8   1401   Effective Date for Changes of Address
.                                         and/or GP's (ccyymmdd).  If this is
.                                         null or blank, then use current date
.                                         - "UPD" only)
ECINOPER  DIM          4       4   1409   Security Code of Operator creating
.                                         record
ECINUKDO  DIM          1       1   1413   Unknown Date Arrived from Overseas
.                                         (Y/N)
ECINCELL  DIM         20      20   1414   Cellular Phone Number
ECINPAD1  DIM         35      35   1434   Postal Address Line 1
ECINPAD2  DIM         35      35   1469   Postal Address Line 2
ECINPAD3  DIM         35      35   1504   Postal Address Line 3
ECINPAD4  DIM         35      35   1539   Postal Address Line 4
ECINPPOS  DIM          8       8   1574   Postal Address Postcode
ECINETH1  DIM          2       2   1582   Ethnicity 1 ("UPD" only)
ECINETH2  DIM          2       2   1584   Ethnicity 2 ("UPD" only)
ECINETH3  DIM          2       2   1586   Ethnicity 3 ("UPD" only)
ECINECID  DIM         10      10   1588   Eclipse Patient Unique Id
ECINSPAR  DIM         30      30   1598   Spare Variable
.
.End of record                    1628
