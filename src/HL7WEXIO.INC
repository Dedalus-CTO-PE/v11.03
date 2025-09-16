RSHLWEX1  RESET     KEY20
          READ      HL7WEXA1,KEY20;;
          RETURN
.
RAHLWEX1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      HL7WEXA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLWEX1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      HL7WEXA1,KEY20;DHLWXMSG,WMURNO,WMCODE,WMDESC:
                                  WMDATE1,WMDATE2,WMBOOK,WMDATE4,WMREMOVE:
                                  HLWXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHLWXMSG,HLWXMESG
          RETURN
.
RKHLWEX1  MOVE      ZERO,OVRCD
          READKS    HL7WEXA1;DHLWXMSG,WMURNO,WMCODE,WMDESC:
                                  WMDATE1,WMDATE2,WMBOOK,WMDATE4,WMREMOVE:
                                  HLWXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHLWXMSG,HLWXMESG
          RETURN
.
RPHLWEX1  MOVE      ZERO,OVRCD
          READKP    HL7WEXA1;DHLWXMSG,WMURNO,WMCODE,WMDESC:
                                  WMDATE1,WMDATE2,WMBOOK,WMDATE4,WMREMOVE:
                                  HLWXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHLWXMSG,HLWXMESG
          RETURN
.
UPHLWEX1  MOVE      HLWXMESG,DHLWXMSG
          UPDATE    HL7WEXA1;DHLWXMSG,WMURNO,WMCODE,WMDESC:
                                  WMDATE1,WMDATE2,WMBOOK,WMDATE4,WMREMOVE:
                                  HLWXSPAR
          RETURN
.
WRHLWEX1  RESET     KEY20
          MOVE      HLWXMESG,DHLWXMSG
          WRITE     HL7WEXA1,KEY20;DHLWXMSG,WMURNO,WMCODE,WMDESC:
                                  WMDATE1,WMDATE2,WMBOOK,WMDATE4,WMREMOVE:
                                  HLWXSPAR
          RETURN
.
DEHLWEX1  RESET     KEY20
          DELETE    HL7WEXA1,KEY20
          RETURN
.
