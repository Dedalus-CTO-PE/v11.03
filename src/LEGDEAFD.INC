.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGDEAFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Def'n Include for Accident & Emergency     *
.  *                    A & E Master/Detail                             *
.  *                    Legacy Visits                                   *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legdetaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY8 , KEY16 , KEY21 , KEY27                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V9.03.00  03/05/2004  Ebon Clements     CAR 49209             *
.  *                Ported from 6.11                                    *
.  *                                                                    *
.  **********************************************************************
.
.
LEGDETA1    IFILE  SQL, FIXED=340, KEY="U1-8"
LEGDETA2    IFILE  SQL, FIXED=340, KEY="U22-29,1-8"
LEGDETA3    IFILE  SQL, FIXED=340, KEY="U9-16,17-21,1-8"
LEGDETA4    IFILE  SQL, FIXED=340, KEY="U49-54,9-16,17-21,1-8"
.
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
DLADANUM    DIM        8         8      1      A & E NUMBER
.
LADADATE    DIM        8         8      9      DATE OF VISIT (CCYYMMDD)
LADATIME    DIM        5         5     17      TIME OF VISIT (HH:MM)
DLADAURN    DIM        8         8     22      U/R NUMBER
.
LADACOMP    DIM        3         3     30      COMPENSATION CODE (CL)
LADACLAS    DIM        3         3     33      PATIENT CLASSIFICATION (A )
LADAINSU    DIM        3         3     36      INSURANCE STATUS (U1)
LADASRC     DIM        3         3     39      SOURCE OF REFERRAL (S )
LADASIT     DIM        3         3     42      SITUATION (ES)
LADAMODE    DIM        3         3     45      MODE OF ARRIVAL (EA)
LADAFILL    DIM        1         1     48      ** NO LONGER USED ** 
LADADOCT    DIM        6         6     49      DOCTOR ALLOCATED
LADASEEN    DIM        5         5     55      TIME ACTUALLY SEEN (HH:MM)
.
LADAADMI    FORM       1         2     60      ADMITTED TO HOSPITAL 
.                                          
LADALOCK    DIM        2         2     62      LOCKING
.
LADADURN    FORM       4         3     64      DURATION OF WAITING (MINUTES)
.
LADAEMPL    DIM       20        20     67      EMPLOYER DESCRIPTION
LADAADD1    DIM       25        25     87      PATIENT ADDRESS LINE 1
LADAADD2    DIM       25        25    112      PATIENT ADDRESS LINE 2
LADASUBR    DIM       20        20    137      PATIENT SUBURB
LADAPOST    DIM        4         4    157      PATIENT POSTCODE
LADATELE    DIM       12        12    161      TELEPHONE PRIVATE
LADACONT    DIM       20        20    173      CONTACT
.
LADAUSR1    DIM        3         3    193      USER DEFINED FIELD 1
LADAUSR2    DIM        3         3    196      USER DEFINED FIELD 2
LADAUSR3    DIM        3         3    199      USER DEFINED FIELD 3
LADAUSR4    DIM        3         3    202      USER DEFINED FIELD 4
LADAUSR5    DIM        3         3    205      USER DEFINED FIELD 5
LADADIAG    DIM       60        60    208      DIAGNOSIS
.
LADAWAIT    DIM        3         3    268      COMPLETION WAIT CODE (EW)
LADASDTE    DIM        8         8    271      DATE SEEN (CCYYMMDD)
LADAPREV    DIM        3         3    279      PREV.A&E ATTEND (EP)
LADADIGC    DIM        3         3    282      DIAGNOSIS CODE  (DG)
LAEDAPRT    DIM        3         3    285      Priority Code (AA)
LAEDARDO    DIM        6         6    288      Referring doctor
LAEDAUDD    DIM        8         8    294      User defined date (CCYYMMDD)
LAEDAUDT    DIM        8         8    302      User defined time (HH:MM:SS)
LADASPAR    DIM       30        30    310      ****  SPARE  ****
.
.End of Record                         340
.
.    THE FOLLOWING ARE FOR KEYS IN AAEIODEA
.
LSADANUM    FORM         8         1      A & E NUMBER
LSADADAT    DIM          8         9      DATE OF VISIT (CCYYMMDD)
LSADATIM    DIM          5        17      TIME OF VISIT (HH:MM)
LSADAURN    FORM         8        22      U/R NUMBER
LSADADOC    DIM          6        49      DOCTOR ALLOCATED
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
LADANUMB    FORM         8         1      A & E NUMBER
LADAURNO    FORM         8        22      U/R NUMBER
