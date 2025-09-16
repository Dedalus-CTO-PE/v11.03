. V10.04.00 03/06/2014
.*------------------------------------------------------------
.*
.*  Include Name:   HL7RF1IO.INC
.*
.*------------------------------------------------------------
. ----	 read datagate file to see if record exists ----
.
RHL7RF1   MOVE      ZERO,OVRCD     
          READ      DGATEOUT;RF1001,RF1002,RF1003,RF1004,RF1005,RF1006:
                             RF1007,RF1008,RF1009,RF1010,RF1011;
          GOTO      OVERCOND IF OVER
.
          MOVE      RF1001,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF100101
          MOVE      HL7CMP[02],RF100102
          MOVE      HL7CMP[03],RF100103
.
          MOVE      RF1002,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF100201
          MOVE      HL7CMP[02],RF100202
          MOVE      HL7CMP[03],RF100203
.
          MOVE      RF1003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF100301
          MOVE      HL7CMP[02],RF100302
          MOVE      HL7CMP[03],RF100303
.
          MOVE      RF1004,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF100401
          MOVE      HL7CMP[02],RF100402
          MOVE      HL7CMP[03],RF100403
.
          MOVE      RF1006,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF100601
          MOVE      HL7CMP[02],RF100602
.
          MOVE      RF1010,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF101001
          MOVE      HL7CMP[02],RF101002
          MOVE      HL7CMP[03],RF101003
.
          RETURN
.
. ----  read hl7 file format to see if record exists ----
.
RHL7RF11  MOVE      ZERO,OVRCD
          READ      HL7FLFMT,SEQ;RF1001,RF1002,RF1003,RF1004,RF1005,RF1006:
                                 RF1007,RF1008,RF1009,RF1010,RF1011;
          GOTO      OVERCOND IF OVER
.
          MOVE      RF1001,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF100101
          MOVE      HL7CMP[02],RF100102
          MOVE      HL7CMP[03],RF100103
.
          MOVE      RF1002,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF100201
          MOVE      HL7CMP[02],RF100202
          MOVE      HL7CMP[03],RF100203
.
          MOVE      RF1003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF100301
          MOVE      HL7CMP[02],RF100302
          MOVE      HL7CMP[03],RF100303
.
          MOVE      RF1004,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF100401
          MOVE      HL7CMP[02],RF100402
          MOVE      HL7CMP[03],RF100403
.
          MOVE      RF1006,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF100601
          MOVE      HL7CMP[02],RF100602
.
          MOVE      RF1010,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],RF101001
          MOVE      HL7CMP[02],RF101002
          MOVE      HL7CMP[03],RF101003
.
          RETURN
