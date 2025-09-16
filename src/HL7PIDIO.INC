. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7PIDIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7pidaf file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7PID1  RESET     KEY22
          READ      HL7PID01,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7PID1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7PID01,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7PID1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7PID01,KEY22;DPIDIN01,DPIDIN02,PID001,PID002:
                                  PID003,PID004,PID005,PID006,PID007:
                                  PID008,PID009,PID010,PID011,PID012:
                                  PID013,PID014,PID015,PID016,PID017:
                                  PID018,PID019,PID020,PID021,PID022:
                                  PID023,PID024,PID025,PID026,PID027:
                                  PID028,PID029,PID030,PID031
          GOTO      OVERCOND IF OVER
          MOVE      DPIDIN01,PIDIN01
          MOVE      DPIDIN02,PIDIN02
          CALL      BRKPID00
          RETURN
.
.         next read
.
RKH7PID1  MOVE      ZERO,OVRCD
          READKS    HL7PID01;DPIDIN01,DPIDIN02,PID001,PID002:
                                  PID003,PID004,PID005,PID006,PID007:
                                  PID008,PID009,PID010,PID011,PID012:
                                  PID013,PID014,PID015,PID016,PID017:
                                  PID018,PID019,PID020,PID021,PID022:
                                  PID023,PID024,PID025,PID026,PID027:
                                  PID028,PID029,PID030,PID031
          GOTO      OVERCOND IF OVER
          MOVE      DPIDIN01,PIDIN01
          MOVE      DPIDIN02,PIDIN02
          CALL      BRKPID00
          RETURN
.
.         previous read
.
RPH7PID1  MOVE      ZERO,OVRCD
          READKP    HL7PID01;DPIDIN01,DPIDIN02,PID001,PID002:
                                  PID003,PID004,PID005,PID006,PID007:
                                  PID008,PID009,PID010,PID011,PID012:
                                  PID013,PID014,PID015,PID016,PID017:
                                  PID018,PID019,PID020,PID021,PID022:
                                  PID023,PID024,PID025,PID026,PID027:
                                  PID028,PID029,PID030,PID031
          GOTO      OVERCOND IF OVER
          MOVE      DPIDIN01,PIDIN01
          MOVE      DPIDIN02,PIDIN02
          CALL      BRKPID00
          RETURN
.
.         update
.
UPH7PID1  MOVE      PIDIN01,DPIDIN01
          MOVE      PIDIN02,DPIDIN02
          UPDATE    HL7PID01;DPIDIN01,DPIDIN02,PID001,PID002:
                                  PID003,PID004,PID005,PID006,PID007:
                                  PID008,PID009,PID010,PID011,PID012:
                                  PID013,PID014,PID015,PID016,PID017:
                                  PID018,PID019,PID020,PID021,PID022:
                                  PID023,PID024,PID025,PID026,PID027:
                                  PID028,PID029,PID030,PID031
          RETURN
.
.         write
.
WRH7PID1  RESET     KEY22
          MOVE      PIDIN01,DPIDIN01
          MOVE      PIDIN02,DPIDIN02
          WRITE     HL7PID01,KEY22;DPIDIN01,DPIDIN02,PID001,PID002:
                                  PID003,PID004,PID005,PID006,PID007:
                                  PID008,PID009,PID010,PID011,PID012:
                                  PID013,PID014,PID015,PID016,PID017:
                                  PID018,PID019,PID020,PID021,PID022:
                                  PID023,PID024,PID025,PID026,PID027:
                                  PID028,PID029,PID030,PID031
          RETURN
.
.         delete a record
.
DEH7PID1  RESET     KEY22
          DELETE    HL7PID01,KEY22
          RETURN
.
.
RHL7PID   MOVE      ZERO,OVRCD
          READ      DGATEOUT;PID001,PID002,PID003,PID004,PID005,PID006:
                             PID007,PID008,PID009,PID010,PID011,PID012:
                             PID013,PID014,PID015,PID016,PID017,PID018:
                             PID019,PID020,PID021,PID022,PID023,PID024:
                             PID025,PID026,PID027,PID028,PID029,PID030:
                             PID031;
          GOTO      OVERCOND IF OVER
          CALL      BRKPID00
          RETURN
.
WHL7PID   MOVE      ZERO,OVRCD
          CLEAR     NEXTSEG
          APPEND    CRFORM,NEXTSEG
          APPEND    "PID",NEXTSEG
          RESET     NEXTSEG
.
          PACK      PID002,PID00201
          PACK      PID003,PID00301
          PACK      PID004,PID00401
          PACK      PID005,PID00501,CARET,PID00502,CARET,PID00503,CARET:
                           PID00504,CARET,PID00505
          PACK      PID011,PID01101,CARET,PID01102,CARET,PID01103,CARET:
                           PID01104,CARET,PID01105
.
          WRITE     DGATEOUT;NEXTSEG,PID001,PID002,PID003,PID004,PID005,PID006:
                             PID007,PID008,PID009,PID010,PID011,PID012:
                             PID013,PID014,PID015,PID016,PID017,PID018:
                             PID019,PID020,PID021,PID022,PID023,PID024:
                             PID025,PID026,PID027,PID028,PID029,PID030:
                             PID031;
          GOTO      OVERCOND IF OVER
          RETURN
.
.
RHL7PID1  MOVE      ZERO,OVRCD
          READ      HL7FLFMT,SEQ;PID001,PID002,PID003,PID004,PID005,PID006:
                                 PID007,PID008,PID009,PID010,PID011,PID012:
                                 PID013,PID014,PID015,PID016,PID017,PID018:
                                 PID019,PID020,PID021,PID022,PID023,PID024:
                                 PID025,PID026,PID027,PID028,PID029,PID030:
                                 PID031;
          GOTO      OVERCOND IF OVER
          CALL      BRKPID00
          RETURN
.
.         break certain variables into sub-variables
.
BRKPID00  MOVE      PID002,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PID00201
.
          MOVE      PID003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PID00301
.
          MOVE      PID004,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PID00401
.
          MOVE      PID005,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PID00501
          MOVE      HL7CMP[02],PID00502
          MOVE      HL7CMP[03],PID00503
          MOVE      HL7CMP[04],PID00504
          MOVE      HL7CMP[05],PID00505
.
          MOVE      PID007,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PID00701
.
          MOVE      PID011,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PID01101
          MOVE      HL7CMP[02],PID01102
          MOVE      HL7CMP[03],PID01103
          MOVE      HL7CMP[04],PID01104
          MOVE      HL7CMP[05],PID01105
.
BRKPID99  RETURN
