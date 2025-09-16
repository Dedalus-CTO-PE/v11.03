.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   WATQUEFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Queuing Waiting List Details Message File     *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   watqueaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY20                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *               V10.14.01 28/02/2019  Steve Armstrong   TSK 0871173    *
.  *                         Moved DWMSTAT from the SPARE variable into   *
.  *                         the File Definition and reduced the length   *
.  *                         of the SPARE variable.                       *
.  ************************************************************************
.  *               V10.11.01 25/07/2017  Steve Armstrong   TSK 0837617    *
.  *                         Added new fields WTWMRSFL to WTTXUD13 and    *
.  *                         extended WTQUSPAR.                           *
.  ************************************************************************
.  *               V10.04.03 03/08/2015  Steve Armstrong   CAR 320247     *
.  *                         Updated valid values for WTTXMAUT            *
.  *               V10.04.02 02/03/2014  Steve Armstrong   CAR 294167     *
.  *                         Increased WMREASON from DIM 40 to DIM 80     *
.  *               V10.04.01 08/02/2014  Ania P            CAR 294376     *
.  *                         Added WTWMPDSC. Increased SPARE              *
.  ************************************************************************
.  *               V10.03.01 15/02/2012  Davin             CAR 256006     *
.  *                         Added fields WTTXDPRC to SAVTXWRD            *
.  *               V10.02.01 21/09/2011  Steve Armstrong   CAR 251515     *
.  *                         Increased WMDESC from DIM 50 to DIM 80 to    *
.  *                         match WATTR1FD.                              *
.  *                V9.02.00 03/10/2001  Steve Armstrong                  *
.  *                         FD Created                                   *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
WATQUEA1   IFILE SQL, FIXED=840, KEY="U1-20"
.
.Name      Type  Length Physical Start Description
.----      ----  ------ -------- ----- -----------
DWTQUMES   DIM     20      20        1   Message Id
.
.          WATTR1FD variables
.
.WMURNO    DIM      8       8       21   U/R Number
.WMCODE    DIM      9       9       29   Procedure Code
.WMTIME    FORM     5       4       38   Procedure Time (Minutes)
.WMDESC    DIM     80      80       42   Procedure Description
.WMREASON  DIM     80      80      122   Reason/Diagnosis for Procedure
.WMDATE1   DIM      8       8      202   Date on List (ccyymmdd)
.WMDATE2   DIM      8       8      210   Date of Last Review (ccyymmdd) /
.                                         Final Outcome of Offer
.WMDATE3   DIM      8       8      218   Scheduled Admit. Date (ccyymmdd)
.WMDATE4   DIM      8       8      226   Removal Date (ccyymmdd)
.WMREMOVE  DIM      3       3      234   Removal Reason (Category WR/BC)
.WMUNIT    DIM      3       3      237   Unit/Clinic (Category WU)
.WMDOCTOR  DIM      6       6      240   Attending Doctor
.WMSTAY    FORM     5       4      246   Estimated Stay (Days)
.WMPTY     DIM      3       3      250   Priority (Category TP)
.WMNOTICE  DIM      3       3      253   Short Notice (Category WS)
.WMPTYPE   DIM      3       3      256   Resident Status (Category T)
.WMPCAT    DIM      3       3      259   Admission Type (Cat A)
.WMUDEF1   DIM      3       3      262   User Defined 1 (Category W1)
.WMUDEF2   DIM      3       3      265   User Defined 2 (Category W2)
.WMUDEF3   DIM      3       3      268   User Defined 3 (Category W3)
.WMUDEF4   DIM      3       3      271   User Defined 4 (Category W4)
.WMBOOK    FORM     8       5      274   Booking Number
.WMKEYDT   DIM      8       8      279   Keyin Date For Procedure
.                                                 (ccyymmdd)
.WTWMREAD  DIM      8       8      287   Re-Assessment Date (ccyymmdd)
.WTWMDEDA  DIM      8       8      295   Deferred or Staged Adm Date
.                                               (ccyymmdd)
.WTWMCLSS  DIM      3       3      303   Patient Cat/Adm Class (Cat P)
.WTWMDTAD  DIM      8       8      306   Decision to Admit Date
.WTWMACAT  DIM      3       3      314   Administrative Category  "CL"
.WTWMGADD  DIM      8       8      317   Guaranteed Admission Date
.WTWMDABD  DIM      8       8      325   Do Not Admit Before Date
.WTWMEATY  DIM      3       3      333   Elective Admission Type  "CC"
.WTWMADMC  DIM      3       3      336   Admission Category   "WA"
.WTWMECRA  DIM     20      20      339   ECR Approval Number
.WTWMGPFA  DIM     20      20      359   GPFH Approval Number
.WTWMRFGP  DIM      8       8      379   Referring GP
.WTWMGPPC  DIM      6       6      387   GP Practice code
.WTWMNAFR  DIM      8       8      393   Not available from date
.WTWMNATO  DIM      8       8      401   Not available to date
.WTWMGPPT  DIM      2       2      409   GP Practice count
.WTWMDOFR  DIM      3       3      411   District of Residence (Cat DA)
.WTWMIHSP  DIM      3       3      414   Intended Hospital (pathspaf)
.WTWMVLSF  DIM      1       1      417   Validation Letter Sent Flag (Y/N)
.WTWMPRO2  DIM      9       9      418   Procedure Code 2
.WTWMPRO3  DIM      9       9      427   Procedure Code 3
.WTWMTRPA  DIM      8       8      436   Prev Dec. to Admit Date (Tert. Ref)
.WMUDEF5   DIM      3       3      444   User Defined 5 (Category X5)
.WMUDEF6   DIM      3       3      447   User Defined 6 (Category X6)
.WMUDEF7   DIM      3       3      450   User Defined 7 (Category X7)
.WMUDEF8   DIM      3       3      453   User Defined 8 (Category X8)
.WTWMRANK  DIM      6       6      456   Patient Rank
.WTWMSRCR  DIM      3       3      462   Source of Referral (S)
.WTWMDRSA  DIM      8       8      465   Date of ref for 1st spec. assessment
.WTWMDOSA  DIM      8       8      473   Date of 1st specialised assessment
.WTWMPHSP  DIM      3       3      481   Principal Health serv Purchaser Cat HP
.WTWMBSCD  DIM      2       2      484   Booking Status Code
.
.         WATTX1FD variables
.
.WTTXPLST  DIM      3       3      486    Patient List. Status (PRS/2) Cat VL
.WTTXPOWD  DIM      3       3      489    Post-Op Ward (patwr1af)
.WTTXADMW  DIM      3       3      492    Admitting Ward (patwr1af)
.WTTXPSTY  DIM      1       1      495    Parent Staying (0=NO,1=YES)
.WTTXIDYC  DIM      3       3      496    Intended Day Case (Cat XB)
.WTTXADMF  DIM      3       3      499    Admission Forms (Cat XA)
.WTTXEQR1  DIM      3       3      502    Equipment Required 1 (Cat XE)
.WTTXEQR2  DIM      3       3      505    Equipment Required 2 (Cat XE)
.WTTXPAST  DIM      3       3      508    Pre-Admission Status (Cat XG)
.WTTXCNSN  DIM      1       1      511    Consent? (0=NO,1=YES)
.WTTXNTGP  DIM      1       1      512    Notify Registered GP (0=NO,1=YES)
.WTTXPATM  DIM      8       8      513    Proposed Admission Time (hh:mm:ss)
.WTTXLEQR  DIM      3       3      521    Loan Equipment Required (Cat XO)
.WTTXDPRC  DIM      9       9      524    Duplicate Procedure Code (watproaf)
.WTTXDPCN  DIM      2       2      533    Duplicate Count
.WTTXCTYP  DIM      3       3      535    Claim Type (Cat CL)
.WTTXEQR3  DIM      3       3      538    Equipment Required 3 (Cat XE)
.WTTXPTIM  DIM      8       8      541    Proposed Pre Admiss Time (hh:mm:ss)
.WTTXPOTM  DIM      8       8      549    Proposed Operation Time (hh:mm:ss)
.WTTXPANS  DIM      3       3      557    Pre-Anaesthetic Status (Cat XH)
.WTTXPANT  DIM      8       8      560    Pre-Anaesthetic Time (hh:mm:ss)
.WTTX23HR  DIM      1       1      568    Planned 23 hour stay (0=No 1=Yes)
.WTTXANAE  DIM      3       3      569    Anaesthetic Type (Cat OA)
.WTTXBOTY  DIM      3       3      572    Booking Type (Cat BK)
.WTTXTEAM  DIM      5       5      575    Team
.WTTXFUND  DIM      3       3      580    Funding Source (Cat cx)
.WTTXWARD  DIM      3       3      583    Ward (patwr1af)
.WTTXPREF  DIM      3       3      586    Preferred Accommodation (Cat BP)
.WTTXNWHC  DIM      3       3      589    No WA Hospital Contact (Cat cw)
.WTTXINTD  DIM      3       3      592    Intended Stay (Cat VI)
.WTTXMAUT  DIM      1       1      595    Medical Authorisation Approved
.                                         Blank = Blank
.                                         0 = No
.                                         1 = Yes
.WTTXEXPD  DIM      8       8      596    Expected Delivery Date (ccyymmdd)
.WTTXTCRS  DIM      3       3      604    Tertiary Care Reason (Cat WH)
.WTTXDISC  DIM      9       9      607    Disaster Code (dismasaf)
.WTTXRTIM  DIM      8       8      616    Removal Time (hh:mm:ss)
.WTTXRCLI  DIM     10      10      624    Referring Clinician
.WTTXRCLP  DIM     10      10      634    Referring Clinician Practice
.SAVTXWRD  DIM      3       3      644    Prior Ward (patwr1af)
.WTWMPDSC  DIM     80      80      647    Procedure Description Comments
.WTWMRSFL  DIM      1       1      727    Record sent flag (Y or N)
.WTWMECNT  DIM      9       9      728    ESIS unique count eg. CCYY?????
.WTWMCSST  DIM      1       1      737    Consent Obtained (N=NO,Y=YES)
.WTWMCSDT  DIM      8       8      738    Consent Changed Date (ccyymmdd)
.WTWMASSR  DIM     10      10      746    Assessor Code (pmshcpaf)
.WTWMACPR  DIM      8       8      756    Actual Procedure Event Number
.WTTXPSAH  DIM      1       1      764    Pt. Suitable For Another Hospital
.                                          " " or 0 = No, 1=Yes, and 2=Unknown
.WTTXPHOS  DIM      3       3      765    Preferred Hospital (pathspaf)
.WTTXPRPB  DIM      3       3      768    Procedure can be perf. by (CAT yh)
.                                         01 - First Available Surgeon
.                                         02 - Named Surgeon (Complexity)
.                                         03 - Named Surgeon (Private)
.                                         04 - Nurse Practitioner
.                                         05 - Registrar List
.WTTXAASC  DIM      4       4      771    Airway Assessment Score (ASA)
.                                         A single number entry from 1-4
.WTTXUD09  DIM      3       3      775    User Defined 9 (Category X9)
.                                         NZ NPF Clinician Defined Susp. of Can
.                                         cer
.WTTXUD10  DIM      3       3      778    User Defined 10 (Category x1)
.WTTXUD11  DIM      3       3      781    User Defined 11 (Category x2)
.WTTXUD12  DIM      3       3      784    User Defined 12 (Category x3)
.WTTXUD13  DIM      3       3      787    User Defined 13 (Category x4)
.DWMSTAT   DIM      1       1      790    Procedure Status
.                                            1 - Unscheduled
.                                            2 - Scheduled
.                                            3 - Pre-Admitted
.                                            4 - Admitted
.                                            5 - Discharged
.                                            6 - Removed from Waiting List
.                                            7 - Performed (No longer used)
.                                            8 - Not Performed (No longer used)
.                                            9 - Cancelled Admission
WTQUSPAR   DIM     49      49      791    Spare Variable
.
.End of Record                     840
.
. Redefine form fields from key
. -----------------------------
WTQUMESI   FORM    20
.
. In spare
. -----------------------------
.DWMSTAT   DIM     1
