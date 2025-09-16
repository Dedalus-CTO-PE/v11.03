. V5.07.001 27/08/1998 Glenn 507 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTAUXFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Audit for Attendance, Booking, Clinic Master    *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     File Name    : outauann.txt, outaubnn.txt, outaucnn.txt        *
.  *                                                                    *
.  *     Modifications: V5.00 03.05.89 H.Donnard   (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  *                    V5.01 02.10.89 L.P.        (IBA)                *
.  *                          Change audit file from OUTAU to outau.    *
.  *                          SRF102514                                 *
.  *                                                                    *
.  **********************************************************************
.    OUTAUXFD.INC
.    ------------
.
.    FILE NAME       :
.                       OUTAUAnn     -   ATTENDANCE            AAUDIT=A
.                       OUTAUBnn     -   BOOKING               AAUDIT=B
.                       OUTAUCnn     -   CLINIC MASTER         AAUDIT=C
.
.                                    where 'nn' is OUT port number
.
. 
.    RECORD LENGTH   :  256  (INC EOR)
.    FILE ACCESS     :  RANDOM
.
.    IO INC       OUTAUXIO.INC
.
.    SECTOR : zero
.
OUTAUDXX    FILE     ASCII, FIXED=256
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
AUNEXT       FORM         6         1      NEXT AVAILABLE SECTOR
AUFLAG       FORM         1         7      0 = NOT IN USE
.                                          1 = IN USE
.                                          2 = BEING PRINTED
.
.End of record                 250
.
.    SECTOR :
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
AUDATE       DIM          8         1      DATE (CCYYMMDD)
AUTIME       DIM          8         9      TIME
AUPASSCD     DIM          4        17      SECURITY CODE
AUITEM       DIM         20        21      ITEM
.                                           (Admission Number/Plurity or
.                                            ............... )
AUMODE       DIM          1        41      MODE
.                                            I = ADD
.                                            C = CHANGE
.                                            D = DELETE
AUDESC       DIM         20        42      DESCRIPTION OF FIELD THAT WAS CHANGED
.
AUCONBEF     DIM         50        62      CONTENTS OF FIELD BEFORE
AUCONAFT     DIM         50       112      CONTENTS OF FIELD AFTER (CHANGE ONLY)
. END OF RECORD                  162
.
.        EXTRA VARIABLES
.
AUORIG       FORM         6         1      ORIGINAL NEXT SECTOR
.                                          SET BY RDSAUX..
.                                          IF CANCEL CHANGE CALL DEAUDX
.
AUFILE       DIM          8                 ACTUAL FILE NAME OUTAUxnn
.
AUOUTAU      INIT         "outau"
AUPORT       DIM          2
.
AUTYPE       DIM          1                CODE USED BY IO (SET AT START PROG)
.  EG    OUTAUAnn                               AAUDIT=A
.
.
