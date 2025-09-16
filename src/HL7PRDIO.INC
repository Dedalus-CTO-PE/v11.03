. V10.04.00 03/06/2014
.*------------------------------------------------------------
.*
.*  Include Name:   HL7PRDIO.INC
.*
.*------------------------------------------------------------
. ----	 read datagate file to see if record exists ----
.
RHL7PRD   MOVE      ZERO,OVRCD     
          READ      DGATEOUT;PRD001,PRD002,PRD003,PRD004,PRD005,PRD006:
                             PRD007,PRD008,PRD009;
          GOTO      OVERCOND IF OVER
.
          MOVE      PRD001,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PRD00101
          MOVE      HL7CMP[02],PRD00102
          MOVE      HL7CMP[03],PRD00103
.
          MOVE      PRD002,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PRD00201
          MOVE      HL7CMP[02],PRD00202
          MOVE      HL7CMP[03],PRD00203
          MOVE      HL7CMP[04],PRD00204
          MOVE      HL7CMP[05],PRD00205
.
          MOVE      PRD003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PRD00301
          MOVE      HL7CMP[02],PRD00302
          MOVE      HL7CMP[03],PRD00303
          MOVE      HL7CMP[04],PRD00304
          MOVE      HL7CMP[05],PRD00305
          MOVE      HL7CMP[05],PRD00306
.
          MOVE      PRD007,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PRD00701
          MOVE      HL7CMP[02],PRD00702
          MOVE      HL7CMP[03],PRD00703
.
          RETURN
.
. ----  read hl7 file format to see if record exists ----
.
RHL7PRD1  MOVE      ZERO,OVRCD
          READ      HL7FLFMT,SEQ;PRD001,PRD002,PRD003,PRD004,PRD005,PRD006:
                                 PRD007,PRD008,PRD009;
          GOTO      OVERCOND IF OVER
.
          MOVE      PRD001,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PRD00101
          MOVE      HL7CMP[02],PRD00102
          MOVE      HL7CMP[03],PRD00103
.
          MOVE      PRD002,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PRD00201
          MOVE      HL7CMP[02],PRD00202
          MOVE      HL7CMP[03],PRD00203
          MOVE      HL7CMP[04],PRD00204
          MOVE      HL7CMP[05],PRD00205
.
          MOVE      PRD003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PRD00301
          MOVE      HL7CMP[02],PRD00302
          MOVE      HL7CMP[03],PRD00303
          MOVE      HL7CMP[04],PRD00304
          MOVE      HL7CMP[05],PRD00305
          MOVE      HL7CMP[05],PRD00306
.
          MOVE      PRD007,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PRD00701
          MOVE      HL7CMP[02],PRD00702
          MOVE      HL7CMP[03],PRD00703
.
          RETURN
.
