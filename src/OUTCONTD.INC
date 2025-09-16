.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : OUTCONTD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for                           *
.  *                    Outpatient Control File cgi variables                 *
.  *                                                                          *
.  *     Sector used  : 31,32                                                 *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *--------------------------------------------------------------------------*
.  *      V11.03.02 06/10/2023  Nikitha B           0903933                   *
.  *                Added OUTCN044-  Send A11 when Supervisor Attended to     *
.  *                Did Not Attend                                            *
.  *      V11.03.01 11/08/2023  PJ Le Febour         0857539                  *
.  *                Added OUTCN043 - Display Contact Times on Clinic Lists    *
.  *      V11.02.01 03/08/2022  Peter Vela           0887868                  *
.  *                Added OUTCN041 - Using Outpatient Kiosk                   *
.  *                Added OUTCN042 - Switch on Outaptient Kiosk Auto sync     * 
.  *      V11.01.01 23/06/2021  Sunny            TSK 0893817                  *
.  *                Added OUTCN040 - Outpat. Letter GP & Practice Source Order*
.  *--------------------------------------------------------------------------*
.  *      V11.00.01 29/06/2020  Thanh T.         TSK 0870618                  *
.  *                Added OUTCN038 - Display Today button on Clinic Lists     *
.  *--------------------------------------------------------------------------*
.  *      V10.15.01 02/12/2019  Ebon Clements    TSK 0881012                  *
.  *                Added OUTCN037 - Follow Up Appointment Date Edit          *
.  *--------------------------------------------------------------------------*
.  *      V10.14.01 04/03/2019  Thanh T.         TSK 0869558                  *
.  *                Added OUTCN036 - Check for Appointment Requests when      *
.  *                making OP Appointments                                    *
.  *--------------------------------------------------------------------------*
.  *      V10.13.01 24/07/2018  Peter Vela        TSK 0833256                 *
.  *                Added OUTCN035 - Display Colour Coding on Clinic Lists    *
.  *      V10.12.01 14/05/2018  Ania P            TSK 0845045                 *
.  *                Added OTCNDLAS/OUTCN034                                   *
.  *      V10.08.01 14/06/2016  Ebon Clements     TSK 0318672                 *
.  *                Added OUTCN033 - Count OP Program Visits By Ass. Number   *
.  *      V10.07.01 16/10/2015  Peter Vela        CAR 322765                  *
.  *                Added OUTCN032 - Default code for Revisits                *
.  *      V10.06.01 18/08/2015  Peter Vela        CAR 316627                  *
.  *                Added OUTCN031 - Display Suspended Sessions in Clinic     *
.  *                Lists                                                     *
.  *      V10.05.01 22/07/2014  Ebon Clements     CAR 303362                  *
.  *                Added OUTCN030 - Using Hospital Security Access in Multi  *
.  *                                 Hospital Outpatients                     *
.  *      V10.03.03 05/12/2012  Ebon Clements     CAR 267173                  *
.  *                Added OUTCN028 - Sending HL7 A03 O/P Discharge            *
.  *                Added OUTCN029 - Sending HL7 A13 Cancel O/P Discharge     *
.  *      V10.03.02 24/01/2012  Mike Laming       CAR 200172                  *
.  *                Added OUTCN027 - Remove DNA Warning on Booking (OTCNRDWB) *
.  *      V10.03.01 18/01/2012  Davin             CAR 252936                  *
.  *                Added OUTCN026 - send HL7 M01 after clinic maintenance    *
.  *      V10.02.03 30/05/2011  Ebon Clements     CAR 239552                  *
.  *                Added OUTCN025 - Keeping a letter history Audit           *
.  *      V10.02.02 17/05/2011  Ebon Clements     CAR 240720                  *
.  *                Added OUTCN024 (OTCNUREQ) - Using Request O/P Appointments*
.  *      V10.02.01 04/05/2011  Mike Laming       CAR 240720                  *
.  *                Add OUTCN023 (OTCNNODY) - Request purge after "No.of Days"*
.  *      V10.00.01 09/06/2010  Mike Laming       CAR 215594                  *
.  *                Add OUTCN022 (OTCNDACI) - Display Diag. & Complaint Ind.  *
.  *      V9.12.02  21/01/2010  Ebon Clements     CAR 214121                  *
.  *                Added OUTCN021 - Using visit based interpreter required   *
.  *      V9.12.01  03/07/2009  Peter Vela        CAR 202829                  *
.  *                Added OUTCN019 OUTCN020                                   *
.  *      V9.11.02  02/03/2009  Ebon Clements     CAR 177234                  *
.  *                Added OUTCN017 and OUTCN018                               *
.  *      V9.11.01  14/11/2008  Peter Vela     CAR 181690                     *
.  *                Add cgi var. OUTCON15 - Multi Therapist First Display Time*
.  *                Add cgi var. OUTCON16 - Multi THerapist End Display Time  *
.  *      V9.09.01  11/07/2007  Mike Laming    CAR 140395                     *
.  *                Add cgi var. OUTCN013 - Outpat.Invoice Header Code        *
.  *                Add cgi var. OUTCN014 - Outpat.Invoice Tail Code          *
.  *      V9.04.06  24/11/2005  Davin          CAR 64087                      *
.  *                Add cgi variable OUTCN009 (for OTCNA04M)                  *
.  *                Add cgi variable OUTCN010 (for OTCNA08M)                  *
.  *                Add cgi variable OUTCN011 (for OTCNA11M)                  *
.  *                Add cgi variable OUTCN012 (for OTCNA38M)                  *
.  *      V9.04.05  21/10/2005  Davin          CAR 64087                      *
.  *                Add cgi variable OUTCN007 (for OTCNA05M)                  *
.  *                Add cgi variable OUTCN008 (for OTCNA44M)                  *
.  *      V9.04.04  06/06/2005  Ebon Clements  CAR 61334                      *
.  *                Add cgi variable OUTCN006 (for OTCNCFMT)                  *
.  *      V9.04.03  29/03/2005  Mike Laming    CAR 58922                      *
.  *                Add cgi variable OUTCN005 (for OTCNRSST)                  *
.  *      V9.04.02  14/01/2005  Ebon Clements  CAR 53290                      *
.  *                Added OUTCN004                                            *
.  *      V9.04.01  28/09/2004  Peter Vela     CAR 53573                      *
.  *                Added OUTCN003                                            *
.  *      V9.03.01  27/09/2004  Ebon Clements  CAR 19975                      *
.  *                Added OUTCN002                                            *
.  *      V9.03.00  26/05/2004  Ebon Clements  CAR 50186                      *
.  *                Created include                                           *
.  ****************************************************************************
.
.  ****************************************************************************
.  Sector 31
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
OUTCN003  DIM    1        250     Always send clinic ID in O/P messages *I-53573
OUTCN032  DIM    3        95      Default code for Revisits
.                                 0=No 1=Yes
.
.  ****************************************************************************
.  Sector 32
.  ****************************************************************************
.
.Name     Type   Length   Start   Description
.----     ----   ------   -----   -----------
OUTCN001  DIM    1        109     Use clinic summary for appointment search
OUTCN002  DIM    1        111     Auto update w/list outpatient review date
OUTCN004  DIM    3        112     Canc. code for referral when die (Cat RQ)
OUTCN005  DIM    1        115     Reschedule booking to original Slot Type
OUTCN006  DIM    1        116     Clinic selection list format
OUTCN007  DIM    1        110     PAS-HL7 Sending A05 (New O/P Booking)
.                                 0=No 1=Yes
OUTCN008  DIM    1        117     PAS-HL7 Sending A44 (change U/R for O/P visit)
.                                 0=No 1=Yes
OUTCN009  DIM    1        118     PAS-HL7 Sending A04 (O/P attendance)
.                                 0=No 1=Yes
OUTCN010  DIM    1        119     PAS-HL7 Sending A08 (O/P update visit)
.                                 0=No 1=Yes
OUTCN011  DIM    1        120     PAS-HL7 Sending A11 (O/P unattend)
.                                 0=No 1=Yes
OUTCN012  DIM    1        121     PAS-HL7 Sending A38 (O/P cancel booking)
.                                 0=No 1=Yes
OUTCN013  DIM    6         57     Outpatient Invoice Header Code (User Defined)       
OUTCN014  DIM    6         63     Outpatient Invoice Tail Code (User Defined)       
OUTCN015  DIM    2        122     Multi Therapist View First Display Time
.
OUTCN016  DIM    2        124     Mutli Therapist View End Display Time
.
OUTCN017  DIM    1        126     Sending A05 (O/P Referral)
OUTCN018  DIM    1        127     Sending A08 (O/P Referral Update)
OUTCN019  DIM    1        108     Change Cancelled/Rescheduled slots to Reviews
OUTCN020  DIM    3        128     Review Slot Code when OTCNCREV is set to Yes
OUTCN021  DIM    1        131     Using visit based interpreter required
OUTCN022  DIM    1        132     Display Diagnosis & Complaint Ind.
OUTCN023  DIM    3        133     Appointment Request purge after "No.of Days"
OUTCN024  DIM    1        136     Using Request O/P Appointment Functionality
OUTCN025  DIM    1        218     Keeping a letter history Audit (dudley)
OUTCN026  DIM    1                PAS-HL7 Sending M01 (O/P clinic maintenance)
OUTCN027  DIM    1        138     Remove DNA Warning on Booking               
OUTCN028  DIM    1        139     Sending HL7 A03 (O/P Discharge Message)
OUTCN029  DIM    1        140     Sending HL7 A13 (O/P Cancel Discharge Message)
OUTCN030  DIM    1        141     Using Hospital Security Access in Multi
.                                 Hospital Outpatients
OUTCN031  DIM    1        142     Display Suspended Sessions in Clinic Lists
OUTCN033  DIM    1        143     Count OP Program Visits By Associated Number
OUTCN034  DIM    1        144     Display Location (Cat CT) on Appointment Searches
OUTCN035  DIM    1        145     Display Colour Coding on Clinic Lists
OUTCN036  DIM    1        146     Check for Appointment Reqs when making OP Appt
OUTCN037  DIM    1        127     Follow Up Appointment Date Edit
OUTCN038  DIM    1        128     Display Today button on Clinic Lists 
OUTCN039  DIM    1        149     Ledger and Cost Centre fields display on 
.                                 OP Clinic Master
OUTCN040  DIM    1        150     Outpatient Letter GP & Practice source order
OUTCN041  DIM    1        151     Using Outpatient Kiosk
OUTCN042  DIM    1        152     Switch on Outpatient Kiosk Auto sync
OUTCN043  DIM    1        153     Display Contact Times on Clinic Lists
OUTCN044  DIM    1        154     Send A11-Supervisor Attended to Did Not Attend
.
.
