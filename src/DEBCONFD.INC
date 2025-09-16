. V9.05.001 03/03/2006 ML  Add CFDBNFMT (replaces CFDBPMAS)
. VF.01.003 05/03/2001 SB  Added standard 132 layout
. VF.01.002 15/06/2000 CH  Added BHS layout
. VF.01.001 22/08/2000 CH  Add Statement Number  Quote 9840
. VF.01.000 05/04/2000 CH  Add Stationeries Header & Tail Code
. VF.00.001 30/10/1998 SB  Extend Reference to 12
. *----------------------------------------------------------------------
. * Include Name  :   DEBCONFD.INC
. *
. * Function      :   Accounts Receivable Table
. *                   Accounts Receivable Control File                
. *
. * File Type     :   ASCII
. *
. * File Name     :   controlf.txt
. *
. *----------------------------------------------------------------------
.
. Sector  81
. Standard Abbreviations Used CF - Control File
.                             DB - Debtors
.
.Name     Type      Length     Start  Description
.----     ----      ------     -----  -----------
CFDBPASS  DIM           8          1  Password for IBADEB98
CFDBAUDA  FORM          1          9  Audit A 1=Yes
CFDBAUDB  FORM          1         10  Audit B 1=Yes
CFDBAUDC  FORM          1         11  Audit C 1=Yes
CFDBAUDD  FORM          1         12  Audit D 1=Yes
CFDBAUDE  FORM          1         13  Audit E 1=Yes
CFDBAUDF  FORM          1         14  Audit F 1=Yes
CFDBAUDG  FORM          1         15  Audit G 1=Yes
CFDBAUDH  FORM          1         16  Audit H 1=Yes
CFDBAUDI  FORM          1         17  Audit I 1=Yes
CFDBAUDJ  FORM          1         18  Audit J 1=Yes
.CFDBPMAS FORM          1         19  NO LONGER NEEDED
.                                     Patient Masterfile in Use 
.                                     1 = Version 6.xx Rec Len 540
.                                     2 = Version 5.xx Rec Len 600
.                                     3 = Version 5.xx Rec Len 800
.                                     4 = Version 6.05 Rec Len 800
.                                     5 = Version 5.07 Rec Len 608
.                                     6 = Version 5.07 Rec Len 808
.
CFDBNFMT  FORM          1         19  PMI Patient Name format
.                                       1 = Title, GivenName, Surname
.                                       2 = Surname, Title, GivenName
.
CFDBIFL   FORM          1         20  Invoice Generation in Progress 0=No 1=Yes
.         FORM          10        21  Used to be CFDBINV move to Sec 87 pos 26
.         FORM          10        31  Used to be CFDBCRN move to Sec 87 pos 38 
.         FORM          1         41  Used to be CFDBILAY moved to 243
.         FORM          1         42  Used to be CFDBSLAY moved to 245
CFDBBLIN  FORM          2         43  No. blank lines on laser print invoices
CFDBBLST  FORM          2         45  No. blank lines on laser print statements.
CFDBETEL  DIM           15        47  Enquiries Telephone Number
CFDBECON  DIM           15        62  Enquiries Contact Name
CFDBSQLA  DIM           20        77  Enquiries SQL Form A
CFDBSQLB  DIM           20        97  Enquiries SQL Form B
CFDBFDAT  DIM           8         117 Valid Processing Date Range From
CFDBTDAT  DIM           8         125 Valid Processing Date Range To
CFDBSTYR  DIM           8         133 Start of Year Date (Report Default DEB63)
CFDBCNAM  DIM           30        141 Company Name    (Statement Layout 3)
CFDBCAD1  DIM           24        171 Address Line 1  (Statement Layout 3)
CFDBCAD2  DIM           24        195 Address Line 2  (Statement Layout 3)
CFDBCPOS  DIM           4         219 Post Code       (Statement Layout 3)
.         FORM          10        223 Used to be CFDBREC move to Sec 87 pos 50 
CFDBNDB   FORM          8         233 Next Auto Debtor Number
CFDBSDB   FORM          1         241 Sec. Level for Add Debtor in DEB21 & 25
CFDBMAN   FORM          1         242 Manual Take On In Progress 0=No
CFDBILAY  FORM          2         243 Layout of invoices
.                                        1 = Standard
.                                        2 = Epworth
.                                        3 = Modbury
.                                        4 = Southland
.                                        5 = West Gippsland
.                                        6 = Coast Health Care
.                                        7 = Hawkes Bay
.                                        8 = Holy Spirit
.                                        9 = West Wimmera
.                                       10 = Hutt Valley Health
.                                       11 = Ballarat Health
.                                       12 = Standard 132 Columns
CFDBSLAY  FORM          2         245 Layout of Statements
.                                        1 = Standard
.                                        2 = Epworth
.                                        3 = Modbury
.                                        4 = Southland
.                                        5 = Coast Health Care
.                                        6 = Hawkes Bay
.                                        7 = Holy Spirit
.                                        8 = West Gippsland
.                                        9 = West Wimmera
.                                       10 = Hutt Valley Health
.                                       11 = Ballarat Health
.                                       12 = Standard 132 Columns
.
.End of Sector                    247
.
.
. Sector  87
. Standard Abbreviations Used CF - Control File
.                             DB - Debtors
.
.Name     Type      Length     Start  Description
.----     ----      ------     -----  -----------
CFDBLOCS  DIM           8          1  Sales Item for Local Calls
CFDBSTDS  DIM           8          9  Sales Item for STD Calls
CFDBIDDS  DIM           8         17  Sales Item for IDD Calls
CFDBSOPT  DIM           1         25  Inv Search Opt for DEB25 + 40
CFDBINV   FORM         12         26  Next Invoice Number
CFDBCRN   FORM         12         38  Next Credit Note Number
CFDBREC   FORM         12         50  Next Receipt Number
CFDBIVHD  DIM           6         62  Tax Invoice Header Code
CFDBIVTL  DIM           6         68  Tax Invoice Tail Code
CFDBCRHD  DIM           6         74  Tax Credit Note Header Code
CFDBCRTL  DIM           6         80  Tax Credit Note Tail Code
CFDBSTHD  DIM           6         86  Tax Statement Header Code
CFDBSTTL  DIM           6         92  Tax Statement Tail Code
.
CFDBSTAN  FORM         10         98  Next Statement Number
.
.End of Sector                   108 
.
