. V5.07.001 27/08/1998 Glenn  507 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : AAEAUXFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition Include for Audit Files         *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     File Name    : aaeauann.txt (nn = Port Number)                 *
.  *                  : aaeauwnn.txt                                    *
.  *                                                                    *
.  *     Modifications: V5.00 22.03.89 J.Clark     (IBA)                *
.  *                          Change includes heading                   *
.  *                                                                    *
.  **********************************************************************
. 
AAEAUDXX    FILE   ASCII, FIXED=256
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
AUNEXT       FORM         6         1      NEXT AVAILABLE SECTOR
AUFLAG       FORM         1         7      0 = NOT IN USE
.                                          1 = IN USE
.                                          2 = BEING PRINTED
.
.End of Record                 250
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
.End of Record                  162
.
.        EXTRA VARIABLES
.
AUORIG       FORM         6         1      ORIGINAL NEXT SECTOR
.                                          SET BY RDSAUX..
.                                          IF CANCEL CHANGE CALL DEAUDX
.
AUFILE       DIM          8                 AUCTUAL FILE NAME AAEAUxnn
.
AUAAEAU      INIT         "aaeau"
AUPORT       DIM          2
.
AUTYPE       DIM          1                CODE USED BY IO (SET AT START PROG)
.  EG    AAEAUAnn                               AAUDIT=A
.
.
