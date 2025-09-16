.  **********************************************************************
.  *                                                                    *
.  *     Include Name : AAEDE1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition Include for Accident & Emergency*
.  *                    A&E Master/Detail                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : aaede1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY8 , KEY16 , KEY21 , KEY27                    *
.  *                                                                    *
.  *     Modifications: V5.00 22.03.89 J.Clark     (IBA)                *
.  *                          Change includes heading                   *
.  *                    V5.01 20.04.89 K.Peak      (IBA)                *
.  *                          Changes to keys  SRF  (RENO)              * 
.  *                    V5.02 16.05.89 K.Peak      (IBA)                *
.  *                          Changed ADAPREV to dim3 from a dim 1      * 
.  *                          SRF  100530                               *
.  *                    V5.03 27/12/1991 Graeme Williams                *
.  *                          Added AEDAFUND, AEDATBLE, AEDAPVIS        *
.  *                    V5.04 12/01/94 I.Rutt                           *
.  *                          Changed address fields to original length *  
.  *                    V5.05 12/04/94 Rob Leonard  Taranaki Mod (3.5.1)*
.  *                          Added AEDAPRTM                            *
.  *                    V5.06 01/09/1994 Max White SRF 600791           *
.  *                                               Quote 8041           *
.  *                          Added AEDARDOC                            *
.  *                    V5.03 16/05/95 Paul Howells                     *
.  *                          changed ADAPRTY                           *
. *                 13/10/1995   Howellsy         suht  
. *                 added aedaoper  
.  *                                                                    *
.  *  NOTE: DAEDAPVI is a DIM 2, not a DIM 3 as all the other           *
.  *        variables of this type are, as there was not enough room in *
.  *        file to fit a DIM 3.                                        *
.  *                                                                    *
.  **********************************************************************
.
AAEDE1A1  IFILE     SQL, FIXED=509, KEY="U1-8"
AAEDE1A2  IFILE     SQL, FIXED=509, KEY="U22-29,1-8"
AAEDE1A3  IFILE     SQL, FIXED=509, KEY="U9-16,17-21,1-8"
AAEDE1A4  IFILE     SQL, FIXED=509, KEY="U49-54,9-16,17-21,1-8"
.
.NAME     TYPE   LENGTH   PHYSICAL  START   DESCRIPTION
.----     ----   ------   --------  -----   ----------------------------------
DADANUMB  DIM       8         8      1      A & E NUMBER
ADADATE   DIM       8         8      9      DATE OF VISIT (CCYYMMDD)
ADATIME   DIM       5         5     17      TIME OF VISIT (HH:MM)
ADAURNO   DIM       8         8     22      U/R NUMBER
ADACOMP   DIM       3         3     30      COMPENSATION CODE (CL)
ADACLASS  DIM       3         3     33      PATIENT CLASSIFICATION (A )
ADAINSUR  DIM       3         3     36      INSURANCE STATUS (U1)
ADASRC    DIM       3         3     39      SOURCE OF REFERRAL (S )
ADASIT    DIM       3         3     42      SITUATION (ES)
ADAMODE   DIM       3         3     45      MODE OF ARRIVAL (EA)
ADAFILL   DIM       1         1     48      ** NO LONGER USED ** 
ADADOCT   DIM       6         6     49      DOCTOR ALLOCATED
ADASEEN   DIM       5         5     55      TIME ACTUALLY SEEN (HH:MM)
ADAADMIT  FORM      1         2     60      ADMITTED TO HOSPITAL 
ADALOCK   DIM       2         2     62      LOCKING
ADADURN   FORM      4         3     64      DURATION OF WAITING (MINUTES)
ADAEMPL   DIM       20       20     67      School/Work Accident Name
ADAADD1   DIM       35       35     87      School/Work Acc. Address 1
ADAADD2   DIM       35       35    122      School/Work Acc. Address 2
ADASUBR   DIM       35       35    157      School/Work Acc. Address 3
ADAADD4   DIM       35       35    192      School/Work Acc. Address 4
ADAPOST   DIM        8        8    227      School/Work Acc. post code
ADATELE   DIM       20       20    235      School/Work Acc. Phone
ADACONT   DIM       20       20    255      School/Work Accident Contact
.
ADAUSR1   DIM       3         3    275      USER DEFINED FIELD 1 (A1)
ADAUSR2   DIM       3         3    278      USER DEFINED FIELD 2 (A2)
ADAUSR3   DIM       3         3    281      USER DEFINED FIELD 3 (A3)
ADAUSR4   DIM       3         3    284      USER DEFINED FIELD 4 (A4)
ADAUSR5   DIM       3         3    287      USER DEFINED FIELD 5 (A5)
ADADIAG   DIM       60        60   290      DIAGNOSIS
.
. the following field is not used any more it was ADAPRTY
.
ADAFIL2   FORM      1         2    350      PRIORITY CODE   1 = Urgent
.                                                           2 = Moderate
.                                                           3 = Non Urgent
.                                                           4 = go to GP
. NOTE: descriptions for priorities are now system parameters !!!!!
.
ADAWAIT   DIM       3         3    352      COMPLETION WAIT CODE (EW)
ADASDTE   DIM       8         8    355      DATE SEEN (CCYYMMDD)
ADAPREV   DIM       3         3    363      PREV.A&E ATTEND (EP)
AEDAFUND  DIM       6         6    366      Health fund
AEDATBLE  DIM       8         8    372      Health fund table
DAEDAPVI  DIM       2         2    380      No. of prev. visits charged
AEDARFGP  DIM       8         8    382      Referring GP
AEDAGPPC  DIM       6         6    390      GP Practice Code
DAEDANPN  DIM       3         3    396      No. of prev new attend./Episode No
AEDATIAS  DIM       5         5    399      Time of Initial Assesment
AEDADTAT  DIM       5         5    404      Decision to Admit Time
AEDATESI  DIM       3         3    409      Time elapsed since accident (AE)
AEDAEMPL  DIM       6         6    412      Work/School code (aaesawfd)
AEDARTAS  DIM       3         3    418      RTA Seatbelt Details (AR)
AEDAINIT  DIM       3         3    421      Initiator (AI)
AEDAPLIN  DIM       3         3    424      Place of Incident (AP)
AEDADIAS  DIM       8         8    427      Date of Initial Assesment
AEDARNEN  DIM       8         8    435      Related New Att. event number
AEDACONS  DIM       6         6    443      Consultant on Take
AEDAGPPT  DIM       2         2    449      GP Practice count
AEDAPRTM  DIM       5         5    451      Triage/Priority Time
AEDARDOC  DIM       6         6    456      Referred Doctor Code
ADAPRTY   DIM       3         3    462      Priority Code (Cat AA)
AEDAOPER  DIM       4         4    465      Operator who attended A&E patient
AEDASPAR  DIM       40        40   469      Spare Variable
.End of Record                     509
.
.    THE FOLLOWING ARE FOR KEYS IN AAEIODEA
.
SADANUMB  FORM      8         1      A & E NUMBER
SADADATE  DIM       8         9      DATE OF VISIT (CCYYMMDD)
SADATIME  DIM       5        17      TIME OF VISIT (HH:MM)
SADAURNO  DIM       8        22      U/R NUMBER
SADADOCT  DIM       6        49      DOCTOR ALLOCATED
SADAPRTY  DIM       3       462      PRIORITY CODE(AAEIOPRI)
.
.  redefine form fields from key
.  -----------------------------
.NAME     TYPE     LENGTH     DESCRIPTION
.----     ----     ------     -----------
ADANUMB   FORM      8         A & E NUMBER
QAEDAPVI  FORM      2         No. of prev. visits charged
AEDAPVIS  FORM      3         No. of prev. visits charged
AEDANPNA  FORM      3         Number of previous new attendances/Episode number
.
.
