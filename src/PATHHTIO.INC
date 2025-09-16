.
.         INC       PATHHTIO.INC
.
.         FILE  I/O REQUESTS FOR HCS DOCTOR TRANSFER AUDIT FILE  
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL
.                  RDSAAAX  IS THE POSITIONAL READ CALL
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.
.         MODIFICATIONS: V5.00 02/06/89 K.Peak
.                              Change U/R & Admission to 8 characters
.
RDSAVHT MOVE       ZERO,OVRCD
        READ       SAVHCSHT,SEQ;DHHTUNIQ,HHTURNO,HHTDATE,HHTCODE:
                                HHTADMN,HHTSPAR
        GOTO       OVERCOND IF OVER
        MOVE       DHHTUNIQ,HHTUNIQ
        RETURN
.
RDHHT1  MOVE       ZERO,OVRCD
        RESET      KEY8
        READ       PATHCHT1,KEY8;DHHTUNIQ,HHTURNO,HHTDATE,HHTCODE:
                                HHTADMN,HHTSPAR
        GOTO       OVERCOND IF OVER
        MOVE       DHHTUNIQ,HHTUNIQ
        RETURN
.
RDSHHT1 RESET      KEY8
        READ       PATHCHT1,KEY8;;
        RETURN
.
RDKHHT1 MOVE       ZERO,OVRCD
        READKS     PATHCHT1;DHHTUNIQ,HHTURNO,HHTDATE,HHTCODE:
                                HHTADMN,HHTSPAR
        GOTO       OVERCOND IF OVER
        MOVE       DHHTUNIQ,HHTUNIQ
        RETURN
.
WRHHT1  RESET      KEY8
        WRITE      PATHCHT1,KEY8;KEY8,HHTURNO,HHTDATE,HHTCODE:
                                HHTADMN,HHTSPAR
        RETURN
