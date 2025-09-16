. *****************************************************************************
. *                                                                           *
. *       Include Name : PATMTDFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for PRS/2 Trailer Records -  *
. *                      Month to date for the current month running          *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : patmtdaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY8                                                 *
. *                                                                           *
. *       Modifications:                                                      *
. *          V10.04.01  09/01/2014  Don Nguyen     CAR 294446                 *
. *                     Moved PTMDMOPS, PTMDMOPB, PTMDYOPT out of spare       *
. *          V10.01.01  05/06/2012  Davin          CAR 260600                 *
. *                     Added PTMDMOPS,PTMDMOPB,PTMDYOPT to spare             *
. *          V9.05.01   08/04/2006  Jill Habasque  CAR 99867                  *
. *                     Added hospital code                                   *
. *****************************************************************************
.
PATMTDA1  IFILE     SQL, FIXED=250, KEY="U1-8"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
DPTMDADM  DIM       8        8        1       Admission Number        
.
. ----- Totals for the current month for this month -----
.
PTMDMADM  FORM      4        3        9       MTD Admissions (inc statistics)
PTMDMSEP  FORM      4        3       12       MTD Separations    
PTMDMSTS  FORM      4        3       15       MTD Statistical Separations 
PTMDMLVE  FORM      3        3       18       On-Leave at End of Month     
PTMDMINH  FORM      4        3       21       Remaining In at End of Month
PTMDMBED  FORM      5        4       24       MTD Bed Days   
.
. ----- MTD bed days & separations for the current month -----
.
PTMDMHAS  FORM      4        3       28       MTD Public Acute Separations
PTMDMHAB  FORM      5        4       31       MTD Public Acute Bed Days
PTMDMPAS  FORM      4        3       35       MTD Private Acute Separations
PTMDMPAB  FORM      5        4       38       MTD Private Acute Bed Days
PTMDMHNS  FORM      4        3       42       MTD Public NHT Separations
PTMDMHNB  FORM      5        4       45       MTD Public NHT Bed Days    
PTMDMPNS  FORM      4        3       49       MTD Private NHT Separations
PTMDMPNB  FORM      5        4       52       MTD Private NHT Bed Days 
PTMDMH5S  FORM      4        3       56       MTD Public NHT/NH5 Separations
PTMDMH5B  FORM      5        4       59       MTD Public NHT/NH5 Bed Days
PTMDMP5S  FORM      4        3       63       MTD Private NHT/NH5 Separations
PTMDMP5B  FORM      5        4       66       MTD Private NHT/NH5 Bed Days
PTMDMCOS  FORM      4        3       70       MTD Compensable Separations
PTMDMCOB  FORM      5        4       73       MTD Compensable Bed Days 
PTMDMCNS  FORM      4        3       77       MTD Compensable Non-Acute Seps
PTMDMCNB  FORM      5        4       80       MTD Compensable Non-Acute Bed Days
PTMDMIES  FORM      4        3       84       MTD Ineligible Separations
PTMDMIEB  FORM      5        4       87       MTD Ineligible Bed Days   
PTMDMINS  FORM      4        3       91       MTD Ineligible Non-Acute Seps 
PTMDMINB  FORM      5        4       94       MTD Ineligible Non-Acute Bed Days
PTMDMHCS  FORM      4        3       98       MTD Public Contract Separations
PTMDMHCB  FORM      5        4      101       MTD Public Contract Bed Days
PTMDMPCS  FORM      4        3      105       MTD Private Contract Separations
PTMDMPCB  FORM      5        4      108       MTD Private Contract Bed Days
.
. ------ YTD separations for the current month -----
.
PTMDYHAT  FORM      6        4      112       Public Acute Bed Days-YTD Seps
PTMDYPAT  FORM      6        4      116       Privat Acute Bed Days-YTD Seps
PTMDYCOT  FORM      6        4      120       Comp. Acute Bed Days-YTD Seps
PTMDYIET  FORM      6        4      124       Inelig. Acute Bed Days-YTD Seps
PTMDYHNT  FORM      6        4      128       Public NHT Bed Days-YTD Seps
PTMDYPNT  FORM      6        4      132       Private NHT Bed Days-YTD Seps
PTMDYH5T  FORM      6        4      136       Public NHT/NH5 Bed Days-YTD Seps
PTMDYP5T  FORM      6        4      140       Private NHT/NH5 Bed Days-YTD Seps
PTMDYHCT  FORM      6        4      144       Public Contract Bed Days-YTD Seps
PTMDYPCT  FORM      6        4      148       Private Contract Bed Day-YTD Seps
PTMDYCNT  FORM      6        4      152       Comp. Non-Acute Bed Days-YTD Seps
PTMDYINT  FORM      6        4      156       Inelig Non-Acute Bed Days-YTD Seps
.
. ----- Same day patients for the current month -----
.
PTMDMHSD  FORM      4        3      160       MTD Public Same Day
PTMDMPSD  FORM      4        3      163       MTD Private Same Day 
PTMDMCSD  FORM      4        3      166       MTD Compensable Same Day
PTMDMISD  FORM      4        3      169       MTD Ineligible Same Day      
PTMDMHCD  FORM      4        3      172       MTD Public Contract Same Day
PTMDMPCD  FORM      4        3      175       MTD Private Contract Same Day
.
PTMDFORM  FORM      1        2      178       Unique Key Format for PRS/2
.                                         1 = Base 36
.                                         2 = Episode & Admission number type 1
.                                         3 = Episode & Admission number type 2
.
PTMDMUEP  FORM      3        3      180       Number of entirely unqualified
.                                             episodes
PTMDMUBD  FORM      4        3      183       Number of unqualified bed days
PTMDHOSP  DIM       3        3      186       Hospital code (pathspaf)
PTMDMOPS  FORM      2        2      189    MTD Posthumous Organ Procure sepns
PTMDMOPB  FORM      3        3      191    MTD Posthumous Organ Procure bed days
PTMDYOPT  FORM      5        4      194       Post Org Procure Bed Days-YTD Seps
PTMDSPAR  DIM      52       52      198       Spare Variable
.
.End of Record                      250
.
. The following fields are stored in the spare variable:
.
.
. Extras
. ------
PTMDADMN  FORM      8
+
.

