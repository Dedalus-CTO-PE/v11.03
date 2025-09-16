.  **********************************************************************
.  *                                                                    *
.  *     Include Name : AAEPRIAF.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Accident Emergency  *
.  *                    A&E Priority                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : aaepriaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 22                                          *
.  *                                                                    *
.  *     Modifications: V5.00 22.03.89 J.Clark     (IBA)                *
.  *                          Change includes heading                   *
.  *                    V5.01 20.04.89 K.Peak      (IBA)                *
.  *                          Changes made to keys  SRF  (RENO)         *
.  *                    V5.02 09/12/93 ROD                              *
.  *                          Added 2nd index                           *
.  *                    V5.03 16/05/95 Paul Howells                     *
.  *                          changed ADPPRTY                           *
.  *                                                                    *
.  **********************************************************************
.
AAEPRIA1    IFILE  SQL, FIXED=32, KEY="U1-3,4-11,12-16,17-24"
AAEPRIA2    IFILE  SQL, FIXED=32, KEY="U4-11,12-16,1-3,17-24"
.
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
ADPPRTY      DIM        3         3      1      PRIORITY CODE (Cat AA) 
ADPDATE      DIM        8         8      4      ARRIVAL DATE
ADPTIME      DIM        5         5     12      ARRIVAL TIME
ADPNUMB      DIM        8         8     17      A & E NUMBER
.
ADPSPAR      DIM        7         7     25      SPARE
.
.End of Record                          32
