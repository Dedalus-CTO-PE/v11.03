.******************************************************************************
.*                                                                            *
.* Include Name   : SETCONFD.INC                                              *
.*                                                                            *
.* Function       : File Definition include for                               *
.*                    Set up variables from control file                      *
.*                                                                            *
.* File Type      : ASCII                                                     *
.*                                                                            *
.* File Name      : controlf.txt                                              *
.*                                                                            *
.* Author         : 25/11/92   Whirlpool                                      *
.*                                                                            *
.* Modifications  :                                                           *
.*        C1.00.02  19/11/1997  Steve Armstrong                               *
.*                  Added STCNPEMR - No of EMR PMI screens                    *
.*        C1.00.01  20/08/1997  Greg Horvat                                   *
.*                  Added STCNPWAT - No of PP waiting room screens            *
.*                                                                            *
.*                  12/02/93   Whirlpool                                      *
.*                  Added STCNSECU                                            *
.*                  24/02/93   Lofty                                          *
.*                  Added STCNMTPA, STCNMTLD                                  *
.*                  09/03/93   ROD                                            *
.*                  Added STCNTVAR                                            *
.*                  23/06/93   Whirlpool                                      *
.*                  Added STCNOTRA                                            *
.*                  21/09/1993    LOFTY          (DUDLEY A&E changes)         *
.*                  Added STCNUAED                                            *
.*                  19/11/1993    Matt Surridge  Mt Alvernia Changes          *
.*                  Added STCNFUND                                            *
.*                  23/06/1994    Whirlpool                                   *
.*                  Added STCNDSNS and STCNDSSS                               *
.*                  27/06/1995    Lofty                                       *
.*                  removed stcntvar position 19                              *
.*                  23/10/1995    howellsy                                    *
.*                  Added STCNWAAT & STCNWAPM                                 *
.*                  09/11/1995    howellsy                                    *
.*                  Added STCNAHAT & STCNAHPM
.*                                                                            *
.******************************************************************************
.
.*******************************************************************************
.*        SETCONFD.INC : Sector 22 File Layout Indicators                      *
.*******************************************************************************
.
STCNMAST  FORM      1          1       Using the New Patient Master/Preadm. File
.                                         0 = No, 1 = Yes
STCNMISS  FORM      1          2       Using the New Admission File
.                                         0 = No, 1 = Yes
STCNWRDB  FORM      1          3       Using the New Ward/Bed File
.                                         0 = No, 1 = Yes
STCNDOCT  FORM      1          4       Using the New Doctors File
.                                         0 = No, 1 = Yes
STCNWLTR  FORM      1          5       Using the New Waiting List Treatment File
.                                         0 = No, 1 = Yes
STCNOUTB  FORM      1          6       Using the New Outpatient Bonkings File
.                                         0 = No, 1 = Yes
STCNAAED  FORM      1          7       Using the New A&E Details File
.                                         0 = No, 1 = Yes
STCNGOVT  FORM      1          8       Using the New Government File
.                                         0 = No, 1 = Yes
STCNINSU  FORM      1          9       Using the New Insurance File
.                                         0 = No, 1 = Yes
STCNMGAN  FORM      1         10       Using the New Man. Gen. Analysis File
.                                         0 = No, 1 = Yes
STCNLGAP  FORM      1         11       Using the New L.G.A. Post Code File
.                                         0 = No, 1 = Yes
STCNPOST  FORM      1         12       Using the New Post Code (PRS2) File
.                                         0 = No, 1 = Yes
STCNWCMP  FORM      1         13       Using the New Workers Comp. File
.                                         0 = No, 1 = Yes
STCNCTCH  FORM      1         14       Using the New Catchment File
.                                         0 = No, 1 = Yes
STCNOTRF  FORM      1         15       Using the New Outpatient Referral File
.                                         0 = No, 1 = Yes
STCNMHDC  FORM      1         16       Using  new Mental Health discharge files
.                                         0 = No, 1 = Yes
STCNMHVS  FORM      1         17       Using new Mental Health Visit files
.                                         0 = No, 1 = Yes
STCNBKRC  FORM      1         18       Using new Booking file
.                                         0 = No, 1 = Yes
STCNSPR1  FORM      1         19       Spare
STCNCLIM  FORM      1         20       Using new Clinic Master file
.                                         0 = No, 1 = Yes
STCNSPR2  FORM      1         21       Spare variable 1                    
STCNIPPM  FORM      1         30       Number of Inpatient PMI Screens
STCNIPAD  FORM      1         31       Number of Inpatient Admission Screens
STCNIPDS  FORM      1         32       Number of Inpatient Discharge Screens
STCNAEPM  FORM      1         33       Number of A&E PMI Screens
STCNAEAD  FORM      1         34       Number of A&E Admission Screens
STCNAEDS  FORM      1         35       Number of A&E Discharge Screens
STCNOTPM  FORM      1         36       Number of Outpatient PMI Screens
STCNOTAD  FORM      1         37       Number of Outpatient Admission Screens
STCNWLPM  FORM      1         38       Number of Waiting List PMI Screens
STCNWLAD  FORM      1         39       Number of Waiting List Admission Screens
STCNDOCS  FORM      1         40       Number of Doctors Screens
STCNMTPA  FORM      1         41       Number of Maternity pre-assesment screens
STCNMTLD  FORM      1         42       Number of Maternity labour/delivery scns
STCNOTRA  FORM      1         43       Number or Outpatient Reappointment scrns
STCNUAED  FORM      1         44       Using new A&E Discharge file
.                                         0 = No, 1 = Yes
STCNFUND  FORM      1         45       Using new health fund file
.                                         0 = No, 1 = Yes
STCNDSNS  FORM      1         46       Number of discharge summary non surgical
.                                      screens
STCNDSSS  FORM      1         47       Number of discharge summary surgical
.                                      screens
STCNWAAT  FORM      1         48       Number of Ward Attendee Attendance Scrns 
STCNWAPM  FORM      1         49       Number of Ward Attendee PMI Screens     
STCNAHAT  FORM      1         50       Number of Ad-Hoc Attendee ATT  Scrns 
STCNAHPM  FORM      1         51       Number of Ad-Hoc Attendee PMI Screens
STCNPWAT  FORM      1         52       Number of PP waiting room screens
STCNPEMR  FORM      1         53       Number of EMR PMI screens
STCNOTRE  FORM      1         54       No of Outpatient Referral Screens
STCNOTCA  FORM      1         55       No of Outpatient Cancellation Screens
.
.End of Record                56
+
.
