.
. OPRCSCIO.INC
. ------------
. Filename       :  oprcscaf.dat
. Description    :  clinic session cancellation i/o
. Variables      :  OVRCD     FORM      1
.                   KEY20     DIM       20
.
RAOPCSC1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      OPRCSCA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPCSC1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      OPRCSCA1,KEY20;;
          RETURN  
.
RDOPCSC1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      OPRCSCA1,KEY20;OPCCDATE,OPCCDOCT,OPCCTYPE,OPCCTIME,DOPCCCTY:
                                   OPCCCODE,OPCCNUMB,OPCCDURA,OPCCBRKT,OPCCSPAR
                                   
          GOTO      OVERCOND IF OVER
          MOVE      DOPCCCTY,OPCCCTYP
          RETURN  
.
RKOPCSC1  MOVE      ZERO,OVRCD
          READKS    OPRCSCA1;OPCCDATE,OPCCDOCT,OPCCTYPE,OPCCTIME,DOPCCCTY:
                             OPCCCODE,OPCCNUMB,OPCCDURA,OPCCBRKT,OPCCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCCCTY,OPCCCTYP
          RETURN  
.
RPOPCSC1  MOVE      ZERO,OVRCD
          READKP    OPRCSCA1;OPCCDATE,OPCCDOCT,OPCCTYPE,OPCCTIME,DOPCCCTY:
                             OPCCCODE,OPCCNUMB,OPCCDURA,OPCCBRKT,OPCCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPCCCTY,OPCCCTYP
          RETURN  
.
UPOPCSC1  MOVE      OPCCCTYP,DOPCCCTY
          UPDATE    OPRCSCA1;OPCCDATE,OPCCDOCT,OPCCTYPE,OPCCTIME,DOPCCCTY:
                             OPCCCODE,OPCCNUMB,OPCCDURA,OPCCBRKT,OPCCSPAR
          RETURN
.
WROPCSC1  MOVE      OPCCCTYP,DOPCCCTY
          RESET     KEY20
          WRITE     OPRCSCA1,KEY20;KEY20,OPCCNUMB,OPCCDURA,OPCCBRKT,OPCCSPAR
          RETURN  
.
DEOPCSC1  RESET     KEY20
          DELETE    OPRCSCA1,KEY20
          RETURN
...............................................................................
