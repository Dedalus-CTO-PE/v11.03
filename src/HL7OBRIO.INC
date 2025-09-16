. V10.03.01 11.12.2013 BA - CAR 275970 - Added Dummy OBR046 for Sonic trailing Field Separator
. V9.04.001 19/04/2005 ML CAR 43973 - Change OBR020 to Location
. V5.06.001 01/12/1998
.*------------------------------------------------------------
.*
.*  Include Name:   HL7OBRIO.INC
.*
.*------------------------------------------------------------
. ----	 read datagate file to see if record exists ----
.
RHL7OBR   MOVE      ZERO,OVRCD     
          READ      DGATEOUT;OBR001,OBR002,OBR003,OBR004,OBR005,OBR006:
                             OBR007,OBR008,OBR009,OBR010,OBR011,OBR012:
                             OBR013,OBR014,OBR015,OBR016,OBR017,OBR018:
                             OBR019,OBR020,OBR021,OBR022,OBR023,OBR024:
                             OBR025,OBR026,OBR027,OBR028,OBR029,OBR030:
                             OBR031,OBR032,OBR033,OBR034,OBR035,OBR036:
                             OBR037,OBR038,OBR039,OBR040,OBR041,OBR042:
                             OBR043,OBR044,OBR045,OBR046;
          GOTO      OVERCOND IF OVER
.
          MOVE      OBR002,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR00201
          MOVE      HL7CMP[02],OBR00202
.
          MOVE      OBR003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR00301
          MOVE      HL7CMP[02],OBR00302
.
          MOVE      OBR004,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR00401
          MOVE      HL7CMP[02],OBR00402
          MOVE      HL7CMP[03],OBR00403
.
          MOVE      OBR006,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR00601
          MOVE      HL7CMP[02],OBR00602
.
          MOVE      OBR007,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR00701
          MOVE      HL7CMP[02],OBR00702
.
          MOVE      OBR014,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR01401
          MOVE      HL7CMP[02],OBR01402
.
          MOVE      OBR016,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR01601
          MOVE      HL7CMP[02],OBR01602
          MOVE      HL7CMP[03],OBR01603
          MOVE      HL7CMP[04],OBR01604
          MOVE      HL7CMP[05],OBR01605
.
          MOVE      OBR020,HL7STR                                      *I-43973
          CALL      HL7BRK00                                           *I-43973
          MOVE      HL7CMP[01],OBR02001                                *I-43973
          MOVE      HL7CMP[02],OBR02002                                *I-43973
.
          MOVE      OBR022,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR02201
          MOVE      HL7CMP[02],OBR02202
.
          RETURN
.
. ----  read hl7 file format to see if record exists ----
.
RHL7OBR1  MOVE      ZERO,OVRCD
          READ      HL7FLFMT,SEQ;OBR001,OBR002,OBR003,OBR004,OBR005,OBR006:
                                 OBR007,OBR008,OBR009,OBR010,OBR011,OBR012:
                                 OBR013,OBR014,OBR015,OBR016,OBR017,OBR018:
                                 OBR019,OBR020,OBR021,OBR022,OBR023,OBR024:
                                 OBR025,OBR026,OBR027,OBR028,OBR029,OBR030:
                                 OBR031,OBR032,OBR033,OBR034,OBR035,OBR036:
                                 OBR037,OBR038,OBR039,OBR040,OBR041,OBR042:
                                 OBR043,OBR044,OBR045,OBR046;
          GOTO      OVERCOND IF OVER
.
          MOVE      OBR002,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR00201
          MOVE      HL7CMP[02],OBR00202
.
          MOVE      OBR003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR00301
          MOVE      HL7CMP[02],OBR00302
.                                                           
          MOVE      OBR004,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR00401
          MOVE      HL7CMP[02],OBR00402
          MOVE      HL7CMP[03],OBR00403
.
          UNPACK    OBR006,OBR00601,OBR00602
          UNPACK    OBR007,OBR00701,OBR00702
          UNPACK    OBR014,OBR01401,OBR01402
.
          MOVE      OBR016,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],OBR01601
          MOVE      HL7CMP[02],OBR01602
          MOVE      HL7CMP[03],OBR01603
          MOVE      HL7CMP[04],OBR01604
          MOVE      HL7CMP[05],OBR01605
.
          MOVE      OBR020,HL7STR                                      *I-43973
          CALL      HL7BRK00                                           *I-43973
          MOVE      HL7CMP[01],OBR02001                                *I-43973
          MOVE      HL7CMP[02],OBR02002                                *I-43973
.
          UNPACK    OBR022,OBR02201,OBR02202
.
          RETURN
