.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   ALLHDTFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Allied Health History Detail File             *
.  *                        (VINAH extraction data)                       *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   allhdtaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY42, KEY49, KEY62                           *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  ************************************************************************
.  *      V11.01.01 06/09/2021 Ebon Clements     TSK 0907466              *
.  *                Added VALP to program type - ALHDPRGM                  *
.  ************************************************************************
.  *      V11.00.01 04/03/2020 Ebon Clements     TSK 0888624              *
.  *                Added HBD to program type - ALHDPRGM                  *
.  *                Added ALHDDCAN to ALHDDCLO and increased file length  *
.  ************************************************************************
.  *      V10.15.01 08/10/2019 Ebon Clements     TSK 0323579              *
.  *                Added ALHDRSTA and reduced length of ALHDSPAR         *
.  ************************************************************************
.  *      V10.14.01 10/04/2019 Steve Armstrong   TSK 0868837              *
.  *                Added ALHDUDT2, ALHDCEDT and ALHDCETM and increased   *
.  *                the length of ALHDSPAR.                               *
.  ************************************************************************
.  *      V10.13.01 18/10/2018 Steve Armstrong   TSK 0831988              *
.  *                Added ALHDSDEP and reduced the length of ALHDSPAR.    *
.  *                04/06/2018 Steve Armstrong   TSK 0851816              *
.  *                2017/2018 Statutory Health Department changes.        *
.  *                - Added two new program types (HEN & TPN) to ALHDPRGM *
.  ************************************************************************
.  *      V10.11.01 25/07/2017  Steve Armstrong  TSK 0842736              *
.  *                Removed ALHDTRGS & ALHDTRGD from the SPARE variable   *
.  *                and added them into the File Definition.              *
.  ************************************************************************
.  *      V10.10.01 02/05/2017  Steve Armstrong  TSK 0833052              *
.  *                Added ALHDTRGS & ALHDTRGD to be stored in the SPARE   *
.  *                variable (ALHDSPAR).                                  *
.  ************************************************************************
.  *      V10.07.01 08/03/2016  Steve Armstrong  TSK 0321541              *
.  *                Added Index 7                                         *
.  ************************************************************************
.  *      V10.05.03 19/11/2014  Steve Armstrong  CAR 308788               *
.  *                Added "99" value to ALHDSTAT                          *
.  *      V10.05.02 17/11/2014  Ebon Clements    CAR 308563               *
.  *                Updated description of ALHDSRCE                       *
.  *      V10.05.01 07/08/2014  Steve Armstrong  CAR 304664               *
.  *                Moved ALHDCLID out of SPARE and into FD               *
.  ************************************************************************
.  *      V10.04.02 13/05/2014  Steve Armstrong  CAR 285465               *
.  *                Added ALHDCLID as part of spare                       *
.  *      V10.04.01 03/01/2014  Don Nguyen       CAR 295314               *
.  *                Moved ALHDPSIT and ALHDUDT1 out of spare variable     *
.  ************************************************************************
.  *      V10.03.03 03/09/2013  Steve Armstrong  CAR 287852               *
.  *                Added ALHDUDT1 as part of spare                       *
.  *      V10.03.02 12/06/2013  Ebon Clements    CAR 286297               *
.  *                Added ALHDPSIT as part of spare                       *
.  *      V10.03.01 03/09/2012  Steve Armstrong  CAR 272756               *
.  *                Major changes to cater for VINAH8.                    *
.  ************************************************************************
.  *      V10.00.02 28/05/2010  Steve Armstrong  CAR 220289               *
.  *                Added ALHDCTDT                                        *
.  *      V10.00.01 20/04/2010  Steve Armstrong  CAR 220289               *
.  *                Added ALHDRADT, ALHDRDCD, ALHDWUSR, ALHDRDCT,         *
.  *                ALHDRSTA, ALHDEFCF, ALHDMREL, ALHDEIOD, ALHDACDD,     *
.  *                ALHDRIOR, ALHDMFLG & ALHDCPOC.                        *
.  *                Removed ALHDDACT, ALHDSRCE, ALHDPRGM, ALHDEPGM,       *
.  *                ALHDUC33, ALHDUC35, ALHDUC36, ALHDUC38, ALHDUC39,     *
.  *                ALHDUC40, ALHDDIA1, ALHDUYN5, ALHDFALL, ALHDRFND &    *
.  *                ALHDMHCO.                                             *
.  *                Also changed ALHDPSIT to ALHDPGST and reduced length  *
.  *                from DIM 6 to DIM 3.                                  *
.  *                Also renamed ALHDSACS to ALHDRFLG to reflect all      *
.  *                VINAH programs, not just SACS.                        *
.  *                Also updated field descriptions to reflect VINAH      *
.  *                terminology.                                          *
.  ************************************************************************
.  *      V9.12.02  30/11/2009  Steve Armstrong  CAR 211325               *
.  *                Changed description for ALHDPSIT to "Program Stream". *
.  *                Changed description for ALHDEPGM to "No longer used". *
.  *                Changed description for ALHDETYP to "Main Purpose".   *
.  *      V9.12.01  22/10/2009  Steve Armstrong  CAR 207550               *
.  *                Changed description for ALHDPSIT & ALHDEPGM           *
.  *      V9.09.01  14/08/2007  Ebon Clements    CAR 147094               *
.  *                Changed record source description to SACSEXTR         *
.  *      V9.08.01  09/07/2007  Steve Armstrong  CAR 144772               *
.  *                Added ALHDRFND                                        *
.  ************************************************************************
.
.Data File Definition
.--------------------
ALLHDTA1   IFILE SQL, FIXED=601, KEY="U1-2,3-10,25-32,33-40,11-24,81-81,82-82"
ALLHDTA2   IFILE SQL, FIXED=601, KEY="U41-60,1-2,3-10,25-32,33-40,11-24,81-81,82-82"
ALLHDTA3   IFILE SQL, FIXED=601, KEY="U3-10,1-2,25-32,33-40,11-24,81-81,82-82"
ALLHDTA4   IFILE SQL, FIXED=601, KEY="U1-2,11-24,3-10,25-32,33-40,81-81,82-82"
ALLHDTA5   IFILE SQL, FIXED=601, KEY="U3-10,1-2,25-32,33-40,84-90,11-24,81-81,82-82"
ALLHDTA6   IFILE SQL, FIXED=601, KEY="U3-10,1-2,25-32,33-40,11-24,84-90,81-81,82-82"
ALLHDTA7   IFILE SQL, FIXED=601, KEY="U1-2,25-32,33-40,11-24,81-81,82-82,3-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALHDSTAT  DIM       2         2       1   Record Status
.                                            0 = Waiting
.                                            1 = Error on extract validation
.                                            2 = Ignore (non VINAH record)
.                                            3 = Ignore (not required)
.                                            4 = Ignore (later message exists)
.                                            5 = Ignore (associated deletion)
.                                            6 = Extracted
.                                            7 = Submitted 
.                                            8 = Rejected
.                                            9 = Resubmitted
.                                           10 = Accepted
.                                           99 = Removed
ALHDURNO  DIM       8         8       3   Patient Identifier (alreurno)
ALHDDTTM  DIM       14       14      11   Date/Time Created (ccyymmddhhmmss)
ALHDVISN  DIM       8         8      25   Episode Identifier (alrevisn/alenvisn)
ALHDCONT  DIM       8         8      33   Contact Identifier (alenenct)
ALHDBNUM  DIM       20       20      41   Batch Number
ALHDMESI  DIM       20       20      61   Message Id (from MSH-10)
ALHDRTYP  DIM       1         1      81   Record Type
.                                                  0 = Referral-In
.                                                  1 = Episode
.                                                  2 = Encounter
.                                                  3 = Merge
.                                                  4 = PMI
.                                                  5 = Referral-Out
ALHDACTN  DIM       1         1      82   Action Type
.                                                  A = Addition
.                                                  C = Change
.                                                  D = Deletion
ALHDVFLG  DIM       1         1      83   VINAH Referral Flag 
.                                            (alreuyn4)
.                                                  0 = Internal Referral
.                                                  1 = Referral-In
ALHDMTYP  DIM       7         7      84   Message Type (eg ADT-A04)
ALHDSRCE  FORM      1         2      91   Record Source
.                                                  0 = LDALLHDT
.                                                  1 = VINAHEXT
.                                                      VINAH009          
.                                                      VINAH010          
ALHDDEPT  DIM       3         3      93   Department (alldepaf.alredept)
ALHDPRGM  FORM      2         2      96   Program Type
.                                             1 = HARP
.                                             2 = HBPCCT
.                                             3 = Medi-Hotel
.                                             4 = Palliative Care
.                                             5 = Post Acute Care
.                                             6 = RIR
.                                             7 = SACS
.                                             8 = Specialist O/P Clinic
.                                             9 = TCP
.                                            10 = HEN
.                                            11 = TPN
.                                            12 = HBD
.                                            13 = VALP
ALHDWEBU  DIM      10        10      98   Web User Id (alrecuid)
.
.
.                                         Patient Related Fields
.                                         ----------------------
ALHDCRST  DIM       3         3     108   Patient Carer Residency Status 
.                                            (alreuc35 - Cat lI)
ALHDCAVL  DIM       3         3     111   Patient Carer Availability
.                                            (alreuc36 - Cat lJ)
ALHDLARR  DIM       3         3     114   Patient Living Arrangement
.                                            (alreuc38 - Cat lL)
ALHDUACC  DIM       3         3     117   Patient Usual Accommodation Type
.                                            (alreuc39 - Cat lM)
ALHDMREL  DIM       3         3     120   Patient Main Carer's Relationship
.                                         to Patient (alreuc31 - Cat lE)
ALHDDTHP  DIM       3         3     123   Patient Death Place
.                                            (alreuc10 - Cat lj)
ALHDOURN  DIM       8         8     126   Old U/R No. (A40 only)
.
.                                         Referral-In Related Fields
.                                         --------------------------
ALHDRDAT  DIM       8         8     134   Referral-In Received Date
.                                            (alredrec - ccyymmdd)
ALHDOTRR  DIM       3         3     142   Referral-In Outcome Rejection Reason
.                                            (alresrej - Cat rr)
ALHDOTRC  DIM       3         3     145   Referral-In Outcome Cancellation
.                                         Reason (alrercan - Cat LN)
ALHDOUTC  DIM       1         1     148   Referral-In Outcome (alrestat)
.                                                  0 = On Waiting List
.                                                  1 = Active
.                                                  2 = Closed
.                                                  3 = Inactive
.                                                  4 = Cancelled
.                                                  5 = Rejected
ALHDCLUC  DIM       3         3     149   Referral-In Clinical Urgency Code
.                                            (alreprty - Cat PR)
ALHDCRDT  DIM       8         8     152   Referral-In Clinical Referral Date
.                                            (alreudt3 - ccyymmdd)
ALHDRADT  DIM       8         8     160   Referral-In Receipt Acknowledgement
.                                         Date (alreudt5 - ccyymmdd)
ALHDLINK  DIM       8         8     168   Linked Referral Visit No.
.
.
.                                         Episode Related Fields
.                                         ----------------------
ALHDSDAT  DIM       8         8     176   Episode Start Date
.                                            (alredact - ccyymmdd)
ALHDEDAT  DIM       8         8     184   Episode End Date
.                                            (alredclo - ccyymmdd)
ALHDFCFL  DIM       1         1     192   Episode First Consultancy Flag
.                                            (alreuyn5 - 0=No,1=Yes)
ALHDCPPT  DIM       3         3     193   Episode Completion of Proposed
.                                         Program of Treatment
.                                            (alreuc33 - Cat lG)
ALHDIODT  DIM       8         8     196   Episode Impairment Onset Date
.                                            (alreeiod - ccyymmdd)
ALHDACDD  DIM       8         8     204   Episode Advanced Care Plan Documented
.                                         Date (alreacdd - ccyymmdd)
ALHDCPDD  DIM       8         8     212   Episode Care Plan Documented Date
.                                            (alreudt4 - ccyymmdd)
ALHDFABD  DIM       8         8     220   Episode First Appointment Booked Date
.                                            (alreudt8 - ccyymmdd)
ALHDHDDT  DIM       8         8     228   Episode Hospital Discharge Date
.                                            (alreud10 - ccyymmdd)
ALHDFNAD  DIM       8         8     236   Episode Patient First Notified of
.                                         Appointment Date (alreudt9 - ccyymmdd)
ALHDENDR  DIM       3         3     244   Episode End Reason
.                                            (alrerclo - Cat LL)
ALHDMFLG  DIM       1         1     247   Episode Malignancy Flag
.                                            (alreyn10 - 0=No, 1=Yes)
ALHDCTYP  DIM       6         6     248   Episode Clinic Type (alrectyp)
ALHDEEPR  DIM       3         3     254   Episode Event Program
.                                            (alreevpr - Cat zG)
.
.
.                                         Contact Related Fields
.                                         ----------------------
ALHDCOMP  DIM       3         3     257   Contact Account Class
.                                            (alencomp - Cat CL)
ALHDPGRP  DIM       10       10     260   Contact Prof. Group 0 (alenhcp)
ALHDPGR1  DIM       10       10     270   Contact Prof. Group 1 (alenuhc1)
ALHDPGR2  DIM       10       10     280   Contact Prof. Group 2 (alenuhc2)
ALHDPGR3  DIM       10       10     290   Contact Prof. Group 3 (alenuhc3)
ALHDPGR4  DIM       10       10     300   Contact Prof. Group 4 (alenuhc4)
ALHDDATE  DIM       8         8     310   Contact Date  (alensdat - ccyymmdd)
ALHDTIME  DIM       8         8     318   Contact Time  (alenstim - hh:mm:ss)
ALHDPURP  DIM       3         3     326   Contact Main Purpose
.                                            (alenuc34 - Cat zH)
ALHDSTYP  DIM       3         3     329   Contact Session Type
.                                            (alenuc35 - Cat zI)
ALHDPRES  DIM       3         3     332   Contact Client Present Status
.                                            (alenuc37 - Cat zK)
ALHDDMOD  DIM       3         3     335   Contact Delivery Mode
.                                            (alenuc38 - Cat zL)
ALHDDSET  DIM       3         3     338   Contact Delivery Setting
.                                            (alenuc40 - Cat zN)
ALHDPOFC  DIM       3         3     341   Contact Phase of Care
.                                            (alenuc31 - Cat zE)
ALHDPDPL  DIM       3         3     344   Contact Preferred Death Place
.                                            (alenuc08 - Cat zh)
ALHDCMOD  DIM       3         3     347   Contact Care Model
.                                            (alenuc06 - Cat zf)
ALHDIFLG  DIM       8         8     350   Contact Inpatient Flag
.                                            (alenlink)
ALHDSPCP  DIM      10        10     358   Contact Specialist Palliative Care
.                                         Provider (alenuhc1)
ALHDCSET  DIM       3         3     368   Contact Preferred Care Setting
.                                            (alenuc07 - Cat zg)
ALHDCEPR  DIM       3         3     371   Contact Event Program
.                                            (alenuc33 - Cat zG)
.
.                                         Referral-Out Related Fields
.                                         ---------------------------
ALHDRODT  DIM       8         8     374   Referral-Out Date (allrhlaf.alrhdate)
ALHDSERT  DIM       9         9     382   Referral-Out Service Type
.                                            (alrhcode - Cat zU)
ALHDPLAC  DIM       9         9     391   Referral-Out Place
.                                            (alrhcod2 - Cat zV)
ALHDRCNT  DIM       3         3     400   Referral-Out Record Count
.
.                                         Additional Fields
.                                         -----------------
ALHDPSIT  DIM       6         6     403   Preferred Site - Episode Referral
ALHDUDT1  DIM       8         8     409   User Defined Date 1 (CCYYMMDD)
ALHDCLID  DIM       6         6     417   Clinic ID - Episode Referral
ALHDTRGS  DIM       3         3     423   Referral-In Triage Status (Cat ts)
.                                            (alretrgs)
ALHDTRGD  DIM       8         8     426   Episode Triage Date (ccyymmdd)
.                                            (alretrgd)
ALHDSDEP  DIM       3         3     434   Encounter Service Department (Cat CG)
ALHDUDT2  DIM       8         8     437   Episode Patient Ready for Care Date
.                                            (ccyymmdd - alreudt2)
ALHDCEDT  DIM       8         8     445   Contact End Date (ccyymmdd)
ALHDCETM  DIM       8         8     453   Contact End Time (hh:mm:ss)
ALHDRSTA  DIM       1         1     461   Contact Record Status (alenrsta)
.                                            0 = Active
.                                            1 = Cancel
.
.                                         New VINAH 16 Fields
.                                         -----------------
ALHDDCAN  DIM       8         8     462   Referral-In Cancellation Date 
.                                         alredcan (CCYYMMDD)
ALHDRIRD  DIM       3         3     470   Referral-In Reason Department (Cat CG)
ALHDRIRS  DIM       9         9     473   Referral-In Reason (alrepro1)
ALHDRITS  DIM       3         3     482   Referral-In First Triage Score
.                                         (alreftsc)
ALHDSRDT  DIM       8         8     485   Referral-In Rejected Date  (CCYYMMDD)
.                                         (alresrdt)
ALHDDCLO  DIM       8         8     493   Referral-In Closed Date  (CCYYMMDD)
.                                         (alredclo)
ALHDSPAR  DIM       100       100   501   Spare Variable
.
.End of Record                      601
+
