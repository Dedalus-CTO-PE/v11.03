.  **********************************************************************
.  *                                                                    *
.  *     Include Name : DEPCPHFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient Dependency  *
.  *                    Patient Care Profile History                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : depcphaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 27                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *          V9.02.00  05/05/2003 Tonii  CAR 38344                     *
.  *                    Port program from r5.10                         *
.  **********************************************************************
.  *                    06/06/1991 Justin Coates  Quote 6882 SRF 107875 *
.  *                    Added DPPCAT31-60 for multiple actions / factor *
.  *                    19/12/1995 Whirlpool    CHC Mods                *
.  *                    Added DPPCTOTL - total time or points calculated*
.  **********************************************************************
.
DEPCPHA1  IFILE     SQL, FIXED=231, KEY="U1-8,9-11,12-16,17-19,20-27"
DEPCPHA2  IFILE     SQL, FIXED=231, KEY="U20-27,1-8,12-16,17-19,9-11"
.
. NAME    TYPE   LENGTH   PHYSICAL  START LOC.    DESCRIPTION
. ----    ----   ------   --------  ----------    -----------
DPPCDATE  DIM       8         8           1       Date (CCYYMMDD)
DPPCWARD  DIM       3         3           9       Ward
DPPCTIME  DIM       5         5          12       Shift Start Time (HH:MM)
DPPCSHFT  DIM       3         3          17       Shift "DS"
DDPPCADM  DIM       8         8          20       Admission Number
DPPCCATG  DIM       3         3          28       Category (Calculated)
DPPCAT01  DIM       3         3          31       Nursing Action 1
DPPCAT02  DIM       3         3          34       Nursing Action 2
DPPCAT03  DIM       3         3          37       Nursing Action 3
DPPCAT04  DIM       3         3          40       Nursing Action 4
DPPCAT05  DIM       3         3          43       Nursing Action 5
DPPCAT06  DIM       3         3          46       Nursing Action 6
DPPCAT07  DIM       3         3          49       Nursing Action 7
DPPCAT08  DIM       3         3          52       Nursing Action 8
DPPCAT09  DIM       3         3          55       Nursing Action 9
DPPCAT10  DIM       3         3          58       Nursing Action 10
DPPCAT11  DIM       3         3          61       Nursing Action 11
DPPCAT12  DIM       3         3          64       Nursing Action 12
DPPCAT13  DIM       3         3          67       Nursing Action 13
DPPCAT14  DIM       3         3          70       Nursing Action 14
DPPCAT15  DIM       3         3          73       Nursing Action 15
DPPCAT16  DIM       3         3          76       Nursing Action 16
DPPCAT17  DIM       3         3          79       Nursing Action 17
DPPCAT18  DIM       3         3          82       Nursing Action 18
DPPCAT19  DIM       3         3          85       Nursing Action 19
DPPCAT20  DIM       3         3          88       Nursing Action 20
DPPCAT21  DIM       3         3          91       Nursing Action 21
DPPCAT22  DIM       3         3          94       Nursing Action 22
DPPCAT23  DIM       3         3          97       Nursing Action 23
DPPCAT24  DIM       3         3         100       Nursing Action 24
DPPCAT25  DIM       3         3         103       Nursing Action 25
DPPCAT26  DIM       3         3         106       Nursing Action 26
DPPCAT27  DIM       3         3         109       Nursing Action 27
DPPCAT28  DIM       3         3         112       Nursing Action 28
DPPCAT29  DIM       3         3         115       Nursing Action 29
DPPCAT30  DIM       3         3         118       Nursing Action 30
DPPCAT31  DIM       3         3         121       Nursing Action 31
DPPCAT32  DIM       3         3         124       Nursing Action 32
DPPCAT33  DIM       3         3         127       Nursing Action 33
DPPCAT34  DIM       3         3         130       Nursing Action 34
DPPCAT35  DIM       3         3         133       Nursing Action 35
DPPCAT36  DIM       3         3         136       Nursing Action 36
DPPCAT37  DIM       3         3         139       Nursing Action 37
DPPCAT38  DIM       3         3         142       Nursing Action 38
DPPCAT39  DIM       3         3         145       Nursing Action 39
DPPCAT40  DIM       3         3         148       Nursing Action 40
DPPCAT41  DIM       3         3         151       Nursing Action 41
DPPCAT42  DIM       3         3         154       Nursing Action 42
DPPCAT43  DIM       3         3         157       Nursing Action 43
DPPCAT44  DIM       3         3         160       Nursing Action 44
DPPCAT45  DIM       3         3         163       Nursing Action 45
DPPCAT46  DIM       3         3         166       Nursing Action 46
DPPCAT47  DIM       3         3         169       Nursing Action 47
DPPCAT48  DIM       3         3         172       Nursing Action 48
DPPCAT49  DIM       3         3         175       Nursing Action 49
DPPCAT50  DIM       3         3         178       Nursing Action 50
DPPCAT51  DIM       3         3         181       Nursing Action 51
DPPCAT52  DIM       3         3         184       Nursing Action 52
DPPCAT53  DIM       3         3         187       Nursing Action 53
DPPCAT54  DIM       3         3         190       Nursing Action 54
DPPCAT55  DIM       3         3         193       Nursing Action 55
DPPCAT56  DIM       3         3         196       Nursing Action 56
DPPCAT57  DIM       3         3         199       Nursing Action 57
DPPCAT58  DIM       3         3         202       Nursing Action 58
DPPCAT59  DIM       3         3         205       Nursing Action 59
DPPCAT60  DIM       3         3         208       Nursing Action 60
DDPPCTOT  DIM       4         4         211       Total time/point calculated
DPPCSPRE  DIM       16        16        215       Spare
.
.End of Record                          231
.
. redefine form fields from key
. -----------------------------
. NAME    TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----    ----   ------   --------  ----------   -----------
DPPCADM   FORM      8         5                   Admission Number
DPPCTOTL  FORM      4         3                   Total dependency time/points
.
