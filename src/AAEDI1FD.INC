. *****************************************************************************
. *                                                                           *
. * Include Name  : AAEDI1FD.INC                                              *
. *                                                                           *
. * Function      : File Definition Include for Accident & Emergency          *
. *                 NEW A&E Discharge                                         *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : aaedi1af.dat                                              *
. *                                                                           *
. * Keys          : KEY 8  KEY 16                                             *
. *                                                                           *
. * Modifications : 22.03.89 J.Clark     (IBA)                                *
. *                 Change includes heading                                   *
. *                 24.04.89 K.Peak      (IBA)                                *
. *                 Added Disc. status & Diag. code                           *
. *                 15/01/90 DIG                                              *
. *                 Added second key                                          *
. *                 21/09/1993    LOFTY                                       *
. *                 created from AAEDI1FD                                     *
. *                 20/09/1994    Max White     Taranaki Contract Mods        *
. *                 Added user defined coded fields AEDSUSR6 (Category A6)    *
. *                                                 AEDSUSR7 (Category A7)    *
. *                                                 AEDSUSR8 (Category A8)    *
. *                 13/10/1995   Howellsy         suht  
. *                 added wtwmoper  
. *****************************************************************************
.
AAEDI1A1  IFILE     SQL, FIXED=200, KEY="U1-8"
AAEDI1A2  IFILE     SQL, FIXED=200, KEY="U9-16,1-8"
.
. Name    Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  -----------
ADSNUMB   DIM       8         8      1    A & E NUMBER
ADSDATE   DIM       8         8      9    DISCHARGE DATE (CCYYMMDD)
ADSTIME   DIM       5         5     17    DISCHARGE TIME (HH:MM)
ADSSSES   DIM       60       60     22    ASSESSMENT DETAILS
ADSDISC   DIM       3         3     82    DISCHARGE STATUS  (Cat ED)
ADSDIAG   DIM       7         7     85    DIAGNOSIS CODE    
.
AEDSDCFT  DIM       8         8     92    Called for Treatment Date
AEDSTCFT  DIM       5         5    100    Called for Treatment Time
AEDSDDTA  DIM       8         8    105    Decision to Admit    Date
AEDSDCON  DIM       8         8    113    Conclusion           Date
AEDSTCON  DIM       5         5    121    Conclusion           Time
AEDSDADM  DIM       8         8    126    Admission            Date
AEDSTADM  DIM       5         5    134    Admission            Time
AEDSUSR6  DIM       3         3    139    User Defined Coded Field (A6)
AEDSUSR7  DIM       3         3    142    User Defined Coded Field (A7)
AEDSUSR8  DIM       3         3    145    User Defined Coded Field (A8)
AEDSOPER  DIM       4         4    148    Operator who discharged A&E patient
AEDSSPAR  DIM       48       48    152    Spare Variable
.End of Record                     200
.
