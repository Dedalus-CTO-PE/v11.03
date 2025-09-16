. *****************************************************************************
. *                                                                           *
. *       Include Name : PATPTDFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for PRS/2 Trailer Records -  *
. *                      Period to date for the current period running        *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : patptdaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY8                                                 *
. *                                                                           *
. *       Modifications:                                                      *
. *                  30/12/13 Patrick Adair CAR 294449                        *
. *                           Moved PTPDMOPS,PTPDMOPB,PTPDYOPT out of spare   *
. *                   5/06/12 Davin         CAR 260600                        *
. *                           Added PTPDMOPS,PTPDMOPB,PTPDYOPT to spare       *
. *                   8/4/06  Jill Habasque CAR 99867                         *
. *                           Added PTPDHOSP                                  *
. *                   1/8/95  Whirlpool                                       *
. *                           Added PTPDMUEP and PTPDMUBD                     *
. *                                                                           *
. *****************************************************************************
.
PATPTDA1  IFILE     SQL, FIXED=250, KEY="U1-8"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
DPTPDADM  DIM       8        8        1       Admission Number        
.
. ----- Totals for the current month for this period -----
.
PTPDMADM  FORM      4        3        9       PTD Admissions (inc statistics)
PTPDMSEP  FORM      4        3       12       PTD Separations    
PTPDMSTS  FORM      4        3       15       PTD Statistical Separations 
PTPDMLVE  FORM      3        3       18       On-Leave at End of Month     
PTPDMINH  FORM      4        3       21       Remaining In at End of Month
PTPDMBED  FORM      5        4       24       PTD Bed Days   
.
. ----- PTD bed days & separations for the current period -----
.
PTPDMHAS  FORM      4        3       28       PTD Public Acute Separations
PTPDMHAB  FORM      5        4       31       PTD Public Acute Bed Days
PTPDMPAS  FORM      4        3       35       PTD Private Acute Separations
PTPDMPAB  FORM      5        4       38       PTD Private Acute Bed Days
PTPDMHNS  FORM      4        3       42       PTD Public NHT Separations
PTPDMHNB  FORM      5        4       45       PTD Public NHT Bed Days    
PTPDMPNS  FORM      4        3       49       PTD Private NHT Separations
PTPDMPNB  FORM      5        4       52       PTD Private NHT Bed Days 
PTPDMH5S  FORM      4        3       56       PTD Public NHT/NH5 Separations
PTPDMH5B  FORM      5        4       59       PTD Public NHT/NH5 Bed Days
PTPDMP5S  FORM      4        3       63       PTD Private NHT/NH5 Separations
PTPDMP5B  FORM      5        4       66       PTD Private NHT/NH5 Bed Days
PTPDMCOS  FORM      4        3       70       PTD Compensable Separations
PTPDMCOB  FORM      5        4       73       PTD Compensable Bed Days 
PTPDMCNS  FORM      4        3       77       PTD Compensable Non-Acute Seps
PTPDMCNB  FORM      5        4       80       PTD Compensable Non-Acute Bed Days
PTPDMIES  FORM      4        3       84       PTD Ineligible Separations
PTPDMIEB  FORM      5        4       87       PTD Ineligible Bed Days   
PTPDMINS  FORM      4        3       91       PTD Ineligible Non-Acute Seps 
PTPDMINB  FORM      5        4       94       PTD Ineligible Non-Acute Bed Days
PTPDMHCS  FORM      4        3       98       PTD Public Contract Separations
PTPDMHCB  FORM      5        4      101       PTD Public Contract Bed Days
PTPDMPCS  FORM      4        3      105       PTD Private Contract Separations
PTPDMPCB  FORM      5        4      108       PTD Private Contract Bed Days
.
. ----- YTD separations for the current period -----
.
PTPDYHAT  FORM      6        4      112       Public Acute Bed Days-YTD Seps
PTPDYPAT  FORM      6        4      116       Privat Acute Bed Days-YTD Seps
PTPDYCOT  FORM      6        4      120       Comp. Acute Bed Days-YTD Seps
PTPDYIET  FORM      6        4      124       Inelig. Acute Bed Days-YTD Seps
PTPDYHNT  FORM      6        4      128       Public NHT Bed Days-YTD Seps
PTPDYPNT  FORM      6        4      132       Private NHT Bed Days-YTD Seps
PTPDYH5T  FORM      6        4      136       Public NHT/NH5 Bed Days-YTD Seps
PTPDYP5T  FORM      6        4      140       Private NHT/NH5 Bed Days-YTD Seps
PTPDYHCT  FORM      6        4      144       Public Contract Bed Days-YTD Seps
PTPDYPCT  FORM      6        4      148       Private Contract Bed Day-YTD Seps
PTPDYCNT  FORM      6        4      152       Comp. Non-Acute Bed Days-YTD Seps
PTPDYINT  FORM      6        4      156       Inelig Non-Acute Bed Days-YTD Seps
.
. ----- Same day patients for the current period -----
.
PTPDMHSD  FORM      4        3      160       PTD Public Same Day
PTPDMPSD  FORM      4        3      163       PTD Private Same Day 
PTPDMCSD  FORM      4        3      166       PTD Compensable Same Day
PTPDMISD  FORM      4        3      169       PTD Ineligible Same Day      
PTPDMHCD  FORM      4        3      172       PTD Public Contract Same Day
PTPDMPCD  FORM      4        3      175       PTD Private Contract Same Day
.
PTPDFORM  FORM      1        2      178       Unique Key Format for PRS/2
.                                         1 = Base 36
.                                         2 = Episode & Admission number type 1
.                                         3 = Episode & Admission number type 2
.
PTPDMUEP  FORM      3        3      180       Number of entirely unqualified
.                                             episodes
PTPDMUBD  FORM      4        3      183       Number of unqualified bed days
PTPDHOSP  DIM       3        3      186       Hospital Code (pathspaf)
.
PTPDMOPS FORM       2        2      189       PTD Posthumous Organ Procure sepns
PTPDMOPB FORM       3        3      191       PTD Posthumous Organ Proc bed days
PTPDYOPT FORM       5        4      194       Post Org Procure Bed Days-YTD Seps
PTPDSPAR  DIM      52       52      198       Spare Variable
.
.End of Record                      250
.
.
PTPDADMN  FORM      8
+
.

