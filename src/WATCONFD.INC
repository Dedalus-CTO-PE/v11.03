.******************************************************************************
.*                                                                            *
.* Include Name   : WATCONFD.INC                                              *
.*                                                                            *
.* Function       : File Definition include for                               *
.*                  THE CONTROL FILE                                          *
.*                                                                            *
.* File Type      : ASCII                                                     *
.*                                                                            *
.* File Name      : controlf.txt                                              *
.*                                                                            *
.* Modifications  :                                                           *
.*        V10.11.01 16/08/2017  Davin            TSK 0837617                  *
.*                  Added HL7 Triggers WTCNI12M,WTCNI13M,WTCNI14M (S.111/P.32)*
.*        V10.06.01 04/06/2015  Steve Armstrong  CAR 313849                   *
.*                  Added "0" value to WTCNBRSR                               *
.*        V10.04.01 20/03/2014  Ebon Clements    CAR 298036                   *
.*                  Changed WTCNTPRO description to obsolete                  *
.*        V10.03.01 26/07/2012  Jill Parkinson   CAR 267938                   *
.*                  Added WTCNNRTS - Number of records to show before next    *
.*                  button appears                                            *
.*        V10.02.01 05/10/2011  Mike Laming      CAR 246036                   *
.*                  Added HL7 Triggers WTCNA05M, WTCNA08M and WTCNA38M        *
.*        V10.00.01 11/10/2010  Ebon Clements    CAR 169450                   *
.*                  Added WTCNPACC and WTCNPACS                               *
.*        V9.10.01  05/11/2008  Steve Armstrong  CAR 182703                   *
.*                  Added ICD10-V6 option 13 to WTCNTPRO.                     *
.******************************************************************************
.*        V9.09.01  27/02/2008  Jill Habasque    CAR 142726                   *
.*                  Added WTCNERFC - ESIS RFC calculation                     *
.******************************************************************************
.*        V9.04.02  27/12/2005  Ebon Clements    CAR 75351                    *
.*                  Added WTCNPCOD - Report procedure code or procedure       *
.*                  code HCP is NBRS extract                                  *
.*        V9.04.01  09/12/2004  Jill Habasque    CAR 54731                    *
.*                  Added sector 111                                          *
.******************************************************************************
.*        V9.03.01  01/07/2004  Henry Son        CAR 49707                    *
.*                  Added WTCNACOM - Allow edit of comments                   *
.******************************************************************************
.*        V9.02.05  23/03/2004  Guomin Fu    CAR 40756                        *
.*                  Added WTCNTIMN - Time to run RFC update                   *
.*        V9.02.04  01/11/2002  Lina Vo                                       *
.*                  Added WTCNCSID - CPAC Scoring ID as per Tonii's changes   *
.*                  in V5.09.01.                                              *
.*        V9.02.03  18/07/2002  Jill Habasque                                 *
.*                  Added WTCNRJUR - right justify UR in WAT62                *
.*        V9.02.02  14/05/2002  Jill Habasque                                 *
.*                  Added WTCNUSXB - using cat XB in WAT62                    *
.*        V9.02.01  09/01/2002  Ebon Clements                                 *
.*                  Added WTCNUSBC - using cat BC for booking cancellations   *
.*        V9.00.01  05/07/2001  Mike Laming                                   *
.*                  Added WTCNDGWA Write Patient on Waiting-List to Datagate  *
.*                  Added WTCNDGWC Write Cancel Waiting-List to Datagate      *
.*        V5.08.01  07/06/2000  Jill Habasque                                 *
.*                  Added WTCNBRSR & WTCNTPRO                                 *
.*        V5.07.01  28/10/1999  Jill Habasque                                 *
.*                  Added WTCNRQDF & WTCNECSR                                 *
.*        V5.04.01  19/05/1997  Steve Armstrong    WHL                        *
.*                  Added WTCNWELT.                                           *
.******************************************************************************
.*        V5.03.02  22/02/1996  Matt                                          *
.*                  Added WTCNLABL - Default Number of Waiting List Labels.   *
.*        V5.03.01  05/01/1996  Greg Horvat                                   *
.*                  Commented out the menu program, security key, IBA screen  *
.*                  password & data directory variables                       *
.*                                                                            *
.******************************************************************************
.*                                                                            *
.*                  02/08/1990 Justin Coates                                  *
.*                  Added   WTCNTPUC  description in uppercase                *
.*                  06/08/1990 Bill Dew                                       *
.*                  Add WTCNSEMI and WTCNROUT which are the                   *
.*                  waiting list priority codes for IBAWAT93                  *
.*                  10/07/1991    Justin Coates  Vic Health Dept Changes      *
.*                  Added WTCNUCLS & WTCNMCLS for pat cat/adm class           *
.*                  04/06/92    ROD                                           *
.*                  Added WTCNSQW1                                            *
.*                  17/12/92    ROD                                           *
.*                  Added WTCNWLSC                                            *
.*                  16/02/1993    Justin Coates  (DUDLEY 3.4)                 *
.*                  Added WTCNUSOP,WTCNWCOW                                   *
.*                  10.03.93 Neeriem "I Hate Support" Dye (I.B.A.)            *
.*                  Added WTCN20CM                                            *
.*                  20/04/93  Steve O'Gorman                                  *
.*                  Added WTCNKRPD for Lofty the POM                          *
.*                  13/05/93  ROD                                             *
.*                  Added WTCNRPWL                                            *
.*                  23/07/93  WHIRLPOOL                                       *
.*                  Added WTCNAHUD - user defined category for ad-hoc screen  *
.*                  22/7/1994 bez                wgh                          *
.*                  Added WTCNDPWD                                            *
.*                  27/10/1995    Justin Coates  (SUHT mods)                  *
.*                  Added HWAUDC, WTCNDWHI                                    *
.******************************************************************************
.
.         S E C T O R  3 7
.         ----------------
.
.NAME     TYPE   LENGTH  START     DESCRIPTION
.----     ----   ------  -----     -----------
.....HMENUWAT  DIM       8       1      Main Menu Name
.....HSECUWAT  DIM       6       9      Company Security Code
.....HDATAWAT  DIM       20     15      *** SPARE ***
.....HSECRWAT  DIM       8      35      Password IBAWAT98
.
. ----- Note in the audits  0 = In Use       
.                           1 = Not In Use       
.
HWAUDA    FORM      1      43      Procedure File Audit
HWAUDB    FORM      1      44      Patient Procedure File Audit
HWAUDC    FORM      1      45      Consultant/Procedure Time file Audit
HWAUDD    FORM      1      46      AUDIT D (Not Currently in Use)
HWAUDE    FORM      1      47      AUDIT E (Not Currently in Use)
HWAUDF    FORM      1      48      AUDIT F (Not Currently in Use)
HWAUDG    FORM      1      49      AUDIT G (Not Currently in Use)
HWAUDH    FORM      1      50      AUDIT H (Not Currently in Use)
HWAUDI    FORM      1      51      AUDIT I (Not Currently in Use)
.
HUSR1     FORM      1      52      Using User Defined Field 1
.                                              0 = No
.                                              1 = Yes
HUSRDS1   DIM       15     53      Description for User Def Field 1
HUSMAN1   FORM      1      68      User Defined Field Mandatory
.                                              0 = No
.                                              1 = Yes
HUSR2     FORM      1      69      Using User Defined Field 2
.                                              0 = No
.                                              1 = Yes
HUSRDS2   DIM       15     70      Description for User Def Field 2
HUSMAN2   FORM      1      85      User Defined Field Mandatory
.                                              0 = No
.                                              1 = Yes
HUSR3     FORM      1      86      Using User Defined Field 3
.                                              0 = No
.                                              1 = Yes
HUSRDS3   DIM       15     87      Description for User Def Field 3
HUSMAN3   FORM      1     102      User Defined Field Mandatory
.                                              0 = No
.                                              1 = Yes
HUSR4     FORM      1     103      Using User Defined Field 4
.                                              0 = No
.                                              1 = Yes
HUSRDS4   DIM       15    104      Description for User Def Field 4
HUSMAN4   FORM      1     119      User Defined Field Mandatory
.                                              0 = No
.                                              1 = Yes
XXXXXXXX  FORM      1     120      This is a spare field 24/09/90 Bill Dew
.                                  Bill Dew is a total spastic
.
HREVPRIO  FORM      1     121      Reverse Priority in IBAWAT24
.                                              0= No
.                                              1= Yes
WTCNTPUC  DIM       9     122      Description "TREATMENT" or "PROCEDURE"
WTCNACOM  FORM      1     131      Allow the editing of comments in IBAWAT10
.
.  *** 5 SPARE CHARACTERS ***
.
HGUART    FORM      1     136      Are you using Guarantor
.                                              0= No
.                                              1= Yes
HWDSOUR   DIM       3     137      Default Source of Referral when
.                                              admitting.
.
WTCNTRG1  FORM      3     140      1st number of days for time analysis file
WTCNTRG2  FORM      3     143      2nd number of days for time analysis file
WTCNTRG3  FORM      3     146      3rd number of days for time analysis file
WTCNTRG4  FORM      3     149      4th number of days for time analysis file
WTCNTRG5  FORM      3     152      5th number of days for time analysis file
WTCNTRG6  FORM      3     155      5th number of days for time analysis file
.
WTCNMRG1  FORM      3     158      1st number of days for unit summary file
WTCNMRG2  FORM      3     161      2nd number of days for unit summary file
WTCNMRG3  FORM      3     164      3rd number of days for unit summary file
WTCNMRG4  FORM      3     167      4th number of days for unit summary file
WTCNMRG5  FORM      3     170      5th number of days for unit summary file
.
WTCNURDY  FORM      4     173      Maximum Days on Waiting List Urgent Cases
WTCNSUDY  FORM      4     177      Maximum Days on Waiting List Semi-Urgent
WTCNRODY  FORM      4     181      Maximum Days on Waiting List Routine Cases
WTCNTPDS  DIM       9     185      Description "Treatment" or "Procedure"
WTCNHCT   FORM      1     194      Which Health Commission Transmission
.                                              0 = Not Used
.                                              1 = SAHC        
WTCNHCTU  FORM      5     195      Next HCT Unique Identifier
WTCNREAS  FORM      1     200      Using re-assessment date  1=yes  0=no
WTCNSEMI  DIM       3     201      Priority code down from Urgent IBAWAT93
WTCNROUT  DIM       3     204      Priority code down from Semi-Urgent IBAWAT93
WTCNUCLS  FORM      1     207      Using Patient Cat/Adm Class ??
.                                    0 = No , 1 = Yes
WTCNMCLS  FORM      1     208      Patient Cat/Adm Class Mandatory ??
.                                    0 = No , 1 = Yes
WTCNDDEP  FORM      1     209      Department (BKREDEPT) defaulting to WMUNIT ??
.                                    0 = No , 1 = Yes
WTCNSQW1  FORM      1     210      Supress "?" on User Def. field "W1" ?
.                                    0 = No , 1 = Yes
WTCNWLSC  FORM      1     211      Using Security for Consultant / Att. Doctor
.                                    0 = No , 1 = Yes
WTCNWLVW  FORM      1     212      Using Validation of Consultant / Att. Doctor
.                                    0 = No , 1 = Yes
WTCNULHI  FORM      1     213      Using Letter History file ?
.                                    0 = No , 1 = Yes
WTCNUSOP  FORM      1     214      Using suspensions ?
.                                    0 = No , 1 = Yes
WTCNWCOW  FORM      1     215      When classed as coming off W/L
.                                    0 = Booked, 1 = Performed/Not Performed
WTCNDRNP  DIM       3     216      Code for removal reason when not performed
.                                    0 = Booked, 1 = Performed/Not Performed
WTCN20CM  DIM       1     219      Print comments instead of address in WAT20
.                                    0 = No , 1 = Yes
WTCNKRPD  FORM      1     220      Korner Report Using Purchaser/District
.                                    0 = Purchaser, 1 = District
WTCNCINW  FORM      1     221      Give Current Inpatient Warning in OPR40?
.                                    0 = No , 1 = Yes
WTCNRPWL  FORM      1     222      Remove patient from W/L when Cancel Booking?
.                                    0 = No , 1 = Yes
WTCNAHUD  DIM       2     223      Catgory for user defined field on ad-hoc
.                                  screen ? W1 W2 W3 or W4
WTCNDPWD  DIM       3     225      Day Procedure Ward? (IBAWAT79)
WTCNDWHI  FORM      1     228      Display Waiting list History in Insert(WAT01)
.                                    0 = No , 1 = Yes
WTCNLABL  FORM      2     229      Default Number of waiting list labels
.                                    0 = Not Using Waiting List Labels.
WTCNWELT  FORM      1     231      Using Eltron Printer for WAT labels
.                                    0 = No
.                                    1 = Yes
WTCNRQDF  DIM       3     232      Default code for cat RQ in EOC01
WTCNECSR  FORM      1     235      Which user defined field for Source of Ref
.                                  in EOC01
.                                  1=WMUDEF1,2=WMUDEF2,3=WMUDEF3,4=WMUDEF4
WTCNBRSR  FORM      1     236      Which UDF for Booking Ref Source?
.                                  0=S,1=W1,2=W2,3=W3,4=W4,5=X5,6=X6,7=X7,8=X8
.WTCNTPRO  DIM       2     237      Type of Procedure codes used in W/L
.                                   Obsolete - No longer used 
WTCNDGWA  FORM      1     239      Write Patient on Waiting-List to Datagate
WTCNDGWC  FORM      1     240      Write Cancel Waiting-List to Datagate
WTCNUSBC  FORM      1     241      Using Cat BC for booking cancellations 
WTCNUSXB  FORM      1     242      Using Cat XB for WL extract 0=No 1=Yes 
WTCNRJUR  FORM      1     243      Right Justify UR in WAT62 0=No 1=Yes 
WTCNCSID  FORM      1     244      CPAC Scoring ID destination
.                                  1 = Waiting List Procedure Code
.                                  2 = Health Specialty Code (Cat. A)
.                                  3 = Waiting List Unit Code (Cat. WU)
WTCNTIMN  DIM       5     245      Time to run RFC update (hh:mm)
.
.End of Record            250
.
.         S E C T O R  111
.         ----------------
.
.NAME     TYPE   LENGTH  START     DESCRIPTION
.----     ----   ------  -----     -----------
WTCNECNT  FORM        9      1     Unique counter (to replace WTCNHCTU)
WTCNPCOD  DIM         1      10    Procedure code/HDP for NBRS extract 
.                                  0 = Procedure Code 
.                                  1 = Procedure Code HDP - watproaf.wtwphdpe
.
WTCNERFC  DIM         1      11    Using ESIS RFC calculation (uses WMKEYDT) 
.                                  1=Yes
WTCNPACC  DIM         6      12    Default OP Clinic type for PAC Appointments
WTCNPASC  DIM         6      18    Default OP Clinic type for PAS Appointments
.
WTCNA05M  FORM        1      24   Sending A05 (after W/L booking)
.                                  0 = No
.                                  1 = Yes
WTCNA08M  FORM        1      25   Sending A08 (after W/L booking update)
.                                  0 = No
.                                  1 = Yes
WTCNA38M  FORM        1      26   Sending A38 (after W/L booking cancellation)
.                                  0 = No
.                                  1 = Yes
WTCNNRTS  DIM         5      27   Number of records to show before next button
WTCNI12M  DIM         1      32   Send I12 for Add Waiting List
.                                  0 = No
.                                  1 = Yes
WTCNI13M  DIM         1      33   Send I13 for Update Waiting List
.                                  0 = No
.                                  1 = Yes
WTCNI14M  DIM         1      34   Send I14 for Remove Waiting List
.                                  0 = No
.                                  1 = Yes
.
.End of Record              250
................................................................................
