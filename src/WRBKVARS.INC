.*******************************************************************************
.*                      WRBKVARS.INC                                           *
.*        Variables for WRITBOOK used by HL7RECVR                              *
.*                                                                             *
.*    Mods:                                                                    *
.*        V11.00.02 13/11/2020  Davin            TSK 0890602                   *
.*                  Added variables used for add slot routines                 *
.*        V11.00.01 19/10/2020  Davin            TSK 0890602                   *
.*                  Added common update booking variables                      *
.*        V11.00.00 01/09/2020  Davin            TSK 0890602                   *
.*                  Created for hl7recvr from outweb02 variables               *
.*******************************************************************************
ADDNEWPG  FORM      1
AUTCDFLG  FORM      1
BBREFLIN  FORM      1
BOOKDATE  DIM       8
BOOKFLAG  FORM      1
CASEKEYS  DIM       28
CFILEPRE  DIM       3
CMBSFLAG  FORM      1
CNTSLOTS  FORM      3
CODTYP    FORM      3
COMFILAF  FILE      ASCII, FIXED=128
COMFILBF  FILE      ASCII, FIXED=128
COMFILNB  DIM       8
COMFILNM  DIM       8
COMM127   DIM       127
COMVISAF  FILE      ASCII, FIXED=127
COMVISNM  DIM       8
COUNT     FORM      3
CURRDATX  DIM       8
DATACHNG  FORM      1
DIACODES  DIM       6[10]
DIAGOVR   FORM      1
DIM17     DIM       17
DISPNAME  DIM       60
DISPT001  DIM       9
DISPT002  DIM       20
DOCTCODE  DIM       6
DOWNCASE  INIT      "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"
DSCOD     DIM       9
DSCODNO   FORM      2
DISCODNO  FORM      2
DSCODPFX  DIM       1
ECODECNT  FORM      2
ERRFLAG   FORM      1
EXPRDATE  DATE      8
F3B       FORM      3
FMTSNAME  DIM       35
FMTGNAME  DIM       35
FMTTITLE  DIM       10
FOUNDFLG  FORM      1
KSECONDS  INIT      ":00"
LOCKCNT   FORM      2
LINKOUTN  DIM       8
NAME35    DIM       35
NEWSLOTK  DIM       28
NEWSLOTS  FORM      3
NEWVTYP   DIM       3
NOPROGRM  FORM      1
NOTENUMB  FORM      6
OLDSLOTS  FORM      3
OLDVTYP   DIM       3
OPCOD     DIM       9
OTXFLAG   FORM      1
OTXFLA2   FORM      1
OTXWEND   FORM      2
OTXWEN2   FORM      2
.
OUTBB001  DIM       3        Source of Referral (S)
OUTBB002  DIM       3        Compensation Eligibility (CL)
OUTBB003  DIM       3        Patient Classification (A )
OUTBB004  DIM       3        Insurance Status (U1)
OUTBB005  DIM       3        Attendance Code (CA)
OUTBB006  DIM       6        Doctor's Code
OUTBB007  DIM       25       Comments
OUTBB008  DIM       6        Health fund code
OUTBB009  DIM       8        Health fund table
OUTBB010  DIM       3        No. of prev. visits charged
OUTBB011  DIM       8        Date (CCYYMMDD)
OUTBB012  DIM       3        Patient Category (P )
OUTBB013  DIM       3        Priority Code (PR)
OUTBB014  DIM       3        Reason for Reschedule (RR)
OUTBB015  DIM       1        Non-booked attendee flag
OUTBB016  DIM       6        Clinic type for tracking NBA.s
OUTBB017  DIM       3        User Defined Field 1 (O1)
OUTBB018  DIM       3        User Defined Field 2 (O2)
OUTBB019  DIM       3        User Defined Field 3 (O3)
OUTBB020  DIM       3        User Defined Field 4 (O4)
OUTBB021  DIM       8        Linked Outpatient Visit Number
OUTBB022  DIM       3        Department code (Cat AC)
OUTBB023  DIM       3        Transport Allocation (Cat OB)
OUTBB024  DIM       3        Language of Interpreter (Cat OL)
OUTBB025  DIM       8        Time First Seen
OUTBB026  DIM       8        Time Booked Out
OUTBB027  DIM       20       GPFH Approval Number
OUTBB028  DIM       20       ECR Approval Number
OUTBB029  DIM       10       Referring GP
OUTBB030  DIM       10       GP Practice Code
OUTBB031  DIM       10       Actual Doctor Seen
OUTBB032  DIM       5        Check In Time
OUTBB033  DIM       5        Time Actually Seen
OUTBB034  DIM       5        Time of Departure
OUTBB035  DIM       3        Outcome    (CAT OZ)
OUTBB036  DIM       1        Send Letter (Notify GP) (Y/N)
OUTBB037  DIM       2        GP Practice count
OUTBB038  DIM       3        District of Residence (Cat DA)
OUTBB039  DIM       4        Operator who made O/P Book/Re-app
OUTBB040  DIM       3        User Defined Field 5 (O5)
OUTBB041  DIM       3        User Defined Field 6 (O6)
OUTBB042  DIM       3        User Defined Field 7 (O7)
OUTBB043  DIM       3        User Defined Field 8 (O8)
OUTBB044  DIM       6        Patient Rank
OUTBB045  DIM       9        Diagnosis code (MBS or ICD9)
OUTBB046  DIM       50       Diagnosis description
OUTBB047  DIM       3        VISIT TYE (N,R,S)(CV)
OUTBB048  DIM       1        X-Ray Pulling List Indicator
OUTBB049  DIM       3        SESSION STATUS CODE (CS)
OUTBB050  DIM       3        DISCHARGE STATUS (Cat DO)
OUTBB051  DIM       2        Number of days to reserve for
OUTBB052  DIM       8        Referral Date (outbocaf.otbcrdat)
OUTBB053  DIM       3        Cancellation Reason
.
.                                           *** HPS Code Starts Here ***
OUTBB054  DIM       3        Special Arrangements Code
OUTBB055  DIM       9        Diagnosis code2 (MBS or ICD9)
OUTBB056  DIM       50       Diagnosis description2
OUTBB057  DIM       9        Diagnosis code3 (MBS or ICD9)
OUTBB058  DIM       50       Diagnosis description3
OUTBB059  DIM       9        Diagnosis code4 (MBS or ICD9)
OUTBB060  DIM       50       Diagnosis description4
OUTBB061  DIM       9        Diagnosis code5 (MBS or ICD9)
OUTBB062  DIM       50       Diagnosis description5
OUTBB063  DIM       3        Clinic Indicator
OUTBB064  DIM       1        Supervisor flag to reset the followup made flag
OUTBB065  DIM       1        Send Correspondence to Carer
OUTBB066  DIM       8        Generate Letter Date
OUTBB067  DIM       1        Send Generate Letter (Y/N)
OUTBB068  DIM       3        NMDS Code (Category NM)
OUTBB069  DIM       3        Care Type (Category CC)
OUTBB070  DIM       3        Service Delivery Mode(Cat sd)
OUTBB071  DIM       1        Clinical High Risk
OUTBB072  DIM       3        Tier 2 Code (category NC)
OUTBB073  DIM       3        Health Purchaser (Cat HP)
OUTBB074  DIM       3        Contract Code (Cat gb)
OUTBB075  DIM       3        Referral Override (Cat ro)
OUTBB076  DIM       3        Referral Period (Cat RF)
OUTBB077  DIM       2        Referral Period Months (1-98)
OUTBB078  DIM       1        Benefit Assignment Authorised
OUTBB079  DIM       8        Date of Referral
OUTBB080  DIM       10       Additional HCP1
OUTBB081  DIM       10       Additional HCP2
OUTBB082  DIM       10       Additional HCP3
OUTBB083  DIM       10       Additional HCP4
.
OUTPFLAG  FORM      1
PARNSLOT  FORM      3
PROCODES  DIM       6[10]
RECALFLG  FORM      1
REFRLVIS  DIM       8
REPORTNO  FORM      2        * Report No
REQUESTK  DIM       32
REVWFLAG  FORM      1
SAVEADMN  DIM       8
SAVPRGID  DIM       8
SAVREPTN  FORM      2
SAVSKEYS  DIM       25
SDSCNCD   DIM       9
SDSDGCD   DIM       9
SELPRINT  DIM       6
SESSKEYS  DIM       25
SEXASSCD  FORM      1
SWAPFLG   FORM      1
UPDATETY  FORM      2
VSCMTFLG  FORM      1
VSCMTLIN  FORM      3
VSTXUNIQ  FORM      3
WAITFLAG  FORM      1
WAITLKEY  DIM       19
WARNCNT   FORM      2
WEBERR    DIM       65
WEBWRN    DIM       120[99]
.
PRNTTYPE  FORM      1
LETNUMBR  DIM       3 
LETPRNTR  DIM       6 
LETTNCOD  FORM      3
SCHDCOPY  FORM      3 
SCHDPRNT  DIM       6 
SUBSYSKY  DIM       50
FREETXT1  DIM       40
FREETXT2  DIM       40
FREETXT3  DIM       40
FREETXT4  DIM       40
FREETXT5  DIM       40
FREETXT6  DIM       40
FREETXT7  DIM       40
.
LETPRT01  DIM       1       * Print Indicator - Pat Reappointment Letter
LETPRT02  DIM       1       * Print Indicator - GP Discharge Letter
LETPRT03  DIM       1       * Print Indicator - Pat Discharge Letter
LETPRT04  DIM       1       * Print Indicator - Std Booking Letter
LETPRT05  DIM       1       * Print Indicator - Std Reappointment Letter
LETPRT06  DIM       1       * Print Indicator - Std Re-Schedule Letter
LETPRT07  DIM       1       * Print Indicator - Pat Cancellation Letter
LETPRT08  DIM       1       * Print Indicator - Hos Re-Schedule Letter
LETPRT09  DIM       1       * Print Indicator - Series booking letter
LETPRT10  DIM       1       * Print Indicator - Non Attendance Letter
LETPRT11  DIM       1       * Print Indicator - Extra Letter
.
LETTYP11  DIM       3       * Print Letter Number - Extra Letter
.
FRMTYP03  DIM       6       * Outpatient form selection
.
LETPSL01  DIM       6       * Printer Selected - Pat Reapp Letter
LETPSL02  DIM       6       * Printer Selected - GP Discharge Letter
LETPSL03  DIM       6       * Printer Selected - Pat Discharge Letter
LETPSL04  DIM       6       * Printer Selected - Std Booking Letter
LETPSL05  DIM       6       * Printer Selected - Std Re-Appt Letter
LETPSL06  DIM       6       * Printer Selected - Std Re-Schd Letter
LETPSL07  DIM       6       * Printer Selected - Pat Cancel Letter
LETPSL08  DIM       6       * Printer Selected - Hos Re-Schd Letter
LETPSL09  DIM       6       * Printer Selected - Series booking letter
LETPSL10  DIM       6       * Printer Selected - Non Attendance Letter
LETPSL11  DIM       6       * Printer Selected - Extra Letter
.
LABPRT01  DIM       1       * Print Indicator - Booking Label
LABPRT02  DIM       1       * Print Indicator - Appt Mailing Label
LABPRT03  DIM       1       * Print Indicator - PMI Mailing Label
LABPRT04  DIM       1       * Print Indicator - GP Mailing Label
LABPRT05  DIM       1       * Print Indicator - MR Barcode Label
.
LABPNO01  DIM       3       * Number of Labels for Booking Label
LABPNO02  DIM       3       * Number of Labels for Appt Mailing Label
LABPNO03  DIM       3       * Number of Labels for PMI Mailing Label
LABPNO04  DIM       3       * Number of Labels for GP Mailing Label
LABPNO05  DIM       3       * Number of Labels for MR Barcode Label
.
LABPSL01  DIM       6       * Printer Selected - Booking Label
LABPSL02  DIM       6       * Printer Selected - Appt Mailing Label
LABPSL03  DIM       6       * Printer Selected - PMI Mailing Label
LABPSL04  DIM       6       * Printer Selected - GP Mailing Label
LABPSL05  DIM       6       * Printer Selected - MR Barcode Label
.
FRMPRT01  DIM       1       * Print Indicator  - Standard MR3 Form
FRMPSL01  DIM       6       * Printer Selected - Standard MR3 Form
FRMPRT02  DIM       1       * Print Indicator  - Standard Invoice Form
FRMPSL02  DIM       6       * Printer Selected - Standard Invoice Form
FRMPRT03  DIM       1       * Print Indicator  - Outpatient Forms
FRMPSL03  DIM       6       * Printer Selected - Outpatient Forms
.
LABELTYP  DIM       10      * Type of Label To Print Coded Field
STATNCOD  DIM       6       * Stationary Code Coded Field
NOLABELS  DIM       3       * Number of Labels to Print
.
CLAIMPRT  DIM       1       * Print Indicator - Medicare Claim
CLAIMPSL  DIM       6       * Printer Selected - Medicare Claim
.
OUTCLAIM  INIT      "OUTCLAIM"
OUTLABEL  INIT      "OUTLABEL"              * used for default printer prgid
LABELOUT  INIT      "LABELOUT"
LETTROUT  INIT      "LETTROUT"
FORMSOUT  INIT      "FORMSOUT"
.
SETDFPRG  DIM       8
SETDFRPT  FORM      2
.
OTBIT001  DIM       2
OTBIT002  DIM       9
OTBIT003  DIM       3
OTBIT004  DIM       2
OTBIT005  DIM       9
OTBIT006  DIM       3
OTBIT007  DIM       2
OTBIT008  DIM       9
OTBIT009  DIM       3
OTBIT010  DIM       2
OTBIT011  DIM       9
OTBIT012  DIM       3
OTBIT013  DIM       2
OTBIT014  DIM       9
OTBIT015  DIM       3
OTBIT016  DIM       20                      * Item 1 provider usage
OTBIT017  DIM       20                      * Item 2 provider usage
OTBIT018  DIM       20                      * Item 3 provider usage
OTBIT019  DIM       20                      * Item 4 provider usage
OTBIT020  DIM       20                      * Item 5 provider usage
.
PTMAS001  DIM       4                   
PTMAS002  FORM      1                                      
PTMAS003  FORM      3
PTMAS004  FORM      1
PTMAS005  DIM       20                                         
PTMAS006  DIM       25                                      
PTMAS007  DIM       19                                        
PTMAS008  DIM       35                                 
PTMAS009  DIM       35                                         
PTMAS010  DIM       35                            
PTMAS011  DIM       35                            
PTMAS012  DIM       8                       
PTMAS013  DIM       20                       
PTMAS014  DIM       20                        
PTMAS015  DIM       1
PTMAS016  DIM       3                  
PTMAS017  DIM       8
PTMAS018  FORM      3
PTMAS019  DIM       3             
PTMAS020  DIM       3                                  
PTMAS021  DIM       3             
PTMAS022  DIM       14        
PTMAS023  DIM       10        
PTMAS024  DIM       15        
PTMAS025  DIM       6       
PTMAS026  DIM       10        
PTMAS027  FORM      1        
PTMAS028  DIM       20        
PTMAS029  FORM      1        
PTMAS030  FORM      1        
PTMAS031  FORM      1        
PTMAS032  DIM       3        
PTMAS033  DIM       3        
PTMAS034  DIM       3        
PTMAS035  DIM       30
PTMAS036  DIM       6        
PTMAS037  DIM       8        
PTMAS038  DIM       19        
PTMAS039  DIM       3        
PTMAS040  DIM       3        
PTMAS041  DIM       3        
PTMAS042  DIM       3        
PTMAS043  DIM       3        
PTMAS044  DIM       3        
PTMAS045  FORM      1        
PTMAS046  FORM      1        
PTMAS047  FORM      1        
PTMAS048  FORM      2        
PTMAS049  DIM       20        
PTMAS050  DIM       35        
PTMAS051  DIM       35        
PTMAS052  DIM       35        
PTMAS053  DIM       35        
PTMAS054  DIM       8        
PTMAS055  DIM       20        
PTMAS056  DIM       20        
PTMAS057  DIM       10        
PTMAS058  FORM      3        
PTMAS059  DIM       2        
PTMAS060  DIM       6        
PTMAS061  DIM       8        
PTMAS062  DIM       3        
PTMAS063  DIM       2        
PTMAS064  DIM       6        
PTMAS065  DIM       14       
PTMAS066  DIM       6 
.**********************************************************
.* Variables used for update booking routines             *
.**********************************************************
ATNDFLAG  FORM      1
BILLFLAG  FORM      1
BOOKSTAT  FORM      1
BULKBILL  DIM       1
CANAFLAG  FORM      1
CCCNSVHM  FORM      1
CHWCURNO  DIM       8
CHWCADMN  DIM       8
CATTZ     INIT      "Tz"
CODEA     INIT      "A "
COMMURNO  DIM       8
COMMADAT  DIM       8
COMMATIM  DIM       8
COMFILNO  DIM       8
COMFILOF  FILE      ASCII, FIXED=128
COPYDNAC  DIM       1
DISCFLAG  FORM      1
DNASAVGD  DIM       8
DNASAVSL  DIM       1
FLGOTBOK  FORM      1
LETTRREF  INIT      "LETTRREF"
LINKREFR  DIM       1
MBSAMNT1  FORM      12.2
MBSAMNT2  FORM      12.2
MBSAMNT3  FORM      12.2
MBSAMNT4  FORM      12.2
MBSAMNT5  FORM      12.2
MBSDESC1  DIM       30
MBSDESC2  DIM       30
MBSDESC3  DIM       30
MBSDESC4  DIM       30
MBSDESC5  DIM       30
ODEPTTIM  DIM       5
OLDADCS   DIM       10
OPDFLAG   FORM      1
OPDWEND   FORM      2
OTRFL017  DIM       8
OTRFL018  DIM       3
OVERBOOK  FORM      1
REQUESTA  DIM       1
RESETCAP  DIM       1
RETREFTW  FORM      1
SAVADMNO  FORM      8
SAVBCOMP  DIM       3
SAVBDEPT  DIM       3
SAVCASEK  DIM       28
SAVCLIN   DIM       6
SAVCOMP   DIM       3
SAVDISKY  DIM       17
SAVDOCT   DIM       6
SAVEDPTM  DIM       5
SAVOUTNO  FORM      8
SAVRFDAT  DIM       8
SAVRFGP   DIM       8
SAVRFOUT  DIM       8
SAVSLOTK  DIM       28
SAVSRCR   DIM       3
SAVURNO   DIM       8
SCANNEDM  DIM       1
SLOTOPT   DIM       3
SLOTSTAT  FORM      1
TRNSFSRC  DIM       5
UPBOOKRD  FORM      1
UPDCONIN  DIM       1
VSLOT     DIM       3
WAHDISCH  FORM      1
.**********************************************************
.* Variables used for add slot routines                   *
.**********************************************************
BEFSLOT   FORM      3
NEWSLTIM  DIM       5        New Slot Time
NEWSLTYP  DIM       3        New Slot Type
SLOTBTYP  DIM       1
SLTEXFLG  FORM      1   * "Slots Exist" Flag. If ZERO then session is empty.
VCTYP     DIM       6
VSESST    DIM       3
WDAY      FORM      3
