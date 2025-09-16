. V5.06.001 01/12/1998
.*------------------------------------------------------------
.*
.*  Include Name:   HL7ORCIO.INC
.*
.*  Modification  : 20.07.2012 B.G.Ackland
.*                             Extract Fields 3 and 4 into Components
.*
.*------------------------------------------------------------
. ----	 read datagate file to see if record exists ----
.
RHL7ORC   MOVE      ZERO,OVRCD     
          READ      DGATEOUT;ORC001,ORC002,ORC003,ORC004,ORC005,ORC006:
                             ORC007,ORC008,ORC009,ORC010,ORC011,ORC012:
                             ORC013,ORC014,ORC015,ORC016,ORC017,ORC018:
                             ORC019;
          GOTO      OVERCOND IF OVER
.
          MOVE      ORC002,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],ORC00201
          MOVE      HL7CMP[02],ORC00202
.
          MOVE      ORC003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],ORC00301
          MOVE      HL7CMP[02],ORC00302
.
          MOVE      ORC004,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],ORC00401
          MOVE      HL7CMP[02],ORC00402
.
          MOVE      ORC012,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],ORC01201
          MOVE      HL7CMP[02],ORC01202
          MOVE      HL7CMP[03],ORC01203
          MOVE      HL7CMP[04],ORC01204
          MOVE      HL7CMP[05],ORC01205
.
          RETURN
.
. ----  read HL7 file format to see if record exists ----
.
RHL7ORC1  MOVE      ZERO,OVRCD
          READ      HL7FLFMT,SEQ;ORC001,ORC002,ORC003,ORC004,ORC005,ORC006:
                                 ORC007,ORC008,ORC009,ORC010,ORC011,ORC012:
                                 ORC013,ORC014,ORC015,ORC016,ORC017,ORC018:
                                 ORC019,ORC020;
          GOTO      OVERCOND IF OVER
.
          MOVE      ORC002,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],ORC00201
          MOVE      HL7CMP[02],ORC00202
.
          MOVE      ORC003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],ORC00301
          MOVE      HL7CMP[02],ORC00302
.
          MOVE      ORC004,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],ORC00401
          MOVE      HL7CMP[02],ORC00402
.
          MOVE      ORC012,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],ORC01201
          MOVE      HL7CMP[02],ORC01202
          MOVE      HL7CMP[03],ORC01203
          MOVE      HL7CMP[04],ORC01204
          MOVE      HL7CMP[05],ORC01205
.
          RETURN
