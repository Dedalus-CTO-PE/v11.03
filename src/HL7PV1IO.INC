. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7PV1IO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7pv1af file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7PV11  RESET     KEY22
          READ      HL7PV101,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7PV11  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7PV101,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7PV11  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7PV101,KEY22;DPV1IN01,DPV1IN02,PV1001,PV1002:
                                  PV1003,PV1004,PV1005,PV1006,PV1007:
                                  PV1008,PV1009,PV1010,PV1011,PV1012:
                                  PV1013,PV1014,PV1015,PV1016,PV1017:
                                  PV1018,PV1019,PV1020,PV1021,PV1022:
                                  PV1023,PV1024,PV1025,PV1026,PV1027:
                                  PV1028,PV1029,PV1030,PV1031,PV1032:
                                  PV1033,PV1034,PV1035,PV1036,PV1037:
                                  PV1038,PV1039,PV1040,PV1041,PV1042:
                                  PV1043,PV1044,PV1045,PV1046,PV1047:
                                  PV1048,PV1049,PV1050,PV1051,PV1052,PV1053
          GOTO      OVERCOND IF OVER
          MOVE      DPV1IN01,PV1IN01
          MOVE      DPV1IN02,PV1IN02
          CALL      BRKPV100
          RETURN
.
.         next read
.
RKH7PV11  MOVE      ZERO,OVRCD
          READKS    HL7PV101;DPV1IN01,DPV1IN02,PV1001,PV1002:
                                  PV1003,PV1004,PV1005,PV1006,PV1007:
                                  PV1008,PV1009,PV1010,PV1011,PV1012:
                                  PV1013,PV1014,PV1015,PV1016,PV1017:
                                  PV1018,PV1019,PV1020,PV1021,PV1022:
                                  PV1023,PV1024,PV1025,PV1026,PV1027:
                                  PV1028,PV1029,PV1030,PV1031,PV1032:
                                  PV1033,PV1034,PV1035,PV1036,PV1037:
                                  PV1038,PV1039,PV1040,PV1041,PV1042:
                                  PV1043,PV1044,PV1045,PV1046,PV1047:
                                  PV1048,PV1049,PV1050,PV1051,PV1052,PV1053
          GOTO      OVERCOND IF OVER
          MOVE      DPV1IN01,PV1IN01
          MOVE      DPV1IN02,PV1IN02
          CALL      BRKPV100
          RETURN
.
.         previous read
.
RPH7PV11  MOVE      ZERO,OVRCD
          READKP    HL7PV101;DPV1IN01,DPV1IN02,PV1001,PV1002:
                                  PV1003,PV1004,PV1005,PV1006,PV1007:
                                  PV1008,PV1009,PV1010,PV1011,PV1012:
                                  PV1013,PV1014,PV1015,PV1016,PV1017:
                                  PV1018,PV1019,PV1020,PV1021,PV1022:
                                  PV1023,PV1024,PV1025,PV1026,PV1027:
                                  PV1028,PV1029,PV1030,PV1031,PV1032:
                                  PV1033,PV1034,PV1035,PV1036,PV1037:
                                  PV1038,PV1039,PV1040,PV1041,PV1042:
                                  PV1043,PV1044,PV1045,PV1046,PV1047:
                                  PV1048,PV1049,PV1050,PV1051,PV1052,PV1053
          GOTO      OVERCOND IF OVER
          MOVE      DPV1IN01,PV1IN01
          MOVE      DPV1IN02,PV1IN02
          CALL      BRKPV100
          RETURN
.
.         update
.
UPH7PV11  MOVE      PV1IN01,DPV1IN01
          MOVE      PV1IN02,DPV1IN02
          UPDATE    HL7PV101;DPV1IN01,DPV1IN02,PV1001,PV1002:
                                  PV1003,PV1004,PV1005,PV1006,PV1007:
                                  PV1008,PV1009,PV1010,PV1011,PV1012:
                                  PV1013,PV1014,PV1015,PV1016,PV1017:
                                  PV1018,PV1019,PV1020,PV1021,PV1022:
                                  PV1023,PV1024,PV1025,PV1026,PV1027:
                                  PV1028,PV1029,PV1030,PV1031,PV1032:
                                  PV1033,PV1034,PV1035,PV1036,PV1037:
                                  PV1038,PV1039,PV1040,PV1041,PV1042:
                                  PV1043,PV1044,PV1045,PV1046,PV1047:
                                  PV1048,PV1049,PV1050,PV1051,PV1052,PV1053
          RETURN
.
.         write
.
WRH7PV11  RESET     KEY22
          MOVE      PV1IN01,DPV1IN01
          MOVE      PV1IN02,DPV1IN02
          WRITE     HL7PV101,KEY22;DPV1IN01,DPV1IN02,PV1001,PV1002:
                                  PV1003,PV1004,PV1005,PV1006,PV1007:
                                  PV1008,PV1009,PV1010,PV1011,PV1012:
                                  PV1013,PV1014,PV1015,PV1016,PV1017:
                                  PV1018,PV1019,PV1020,PV1021,PV1022:
                                  PV1023,PV1024,PV1025,PV1026,PV1027:
                                  PV1028,PV1029,PV1030,PV1031,PV1032:
                                  PV1033,PV1034,PV1035,PV1036,PV1037:
                                  PV1038,PV1039,PV1040,PV1041,PV1042:
                                  PV1043,PV1044,PV1045,PV1046,PV1047:
                                  PV1048,PV1049,PV1050,PV1051,PV1052,PV1053
          RETURN
.
.         delete a record
.
DEH7PV11  RESET     KEY22
          DELETE    HL7PV101,KEY22
          RETURN
.
.
RHL7PV1   MOVE      ZERO,OVRCD
          READ      DGATEOUT;PV1001,PV1002,PV1003,PV1004,PV1005,PV1006:
                             PV1007,PV1008,PV1009,PV1010,PV1011,PV1012:
                             PV1013,PV1014,PV1015,PV1016,PV1017,PV1018:
                             PV1019,PV1020,PV1021,PV1022,PV1023,PV1024:
                             PV1025,PV1026,PV1027,PV1028,PV1029,PV1030:
                             PV1031,PV1032,PV1033,PV1034,PV1035,PV1036:
                             PV1037,PV1038,PV1039,PV1040,PV1041,PV1042:
                             PV1043,PV1044,PV1045,PV1046,PV1047,PV1048:
                             PV1049,PV1050,PV1051,PV1052
          GOTO      OVERCOND IF OVER
          CALL      BRKPV100
          RETURN
.
WHL7PV1   MOVE      ZERO,OVRCD
          CLEAR     NEXTSEG
          APPEND    CRFORM,NEXTSEG
          APPEND    "PV1",NEXTSEG
          RESET     NEXTSEG
.
          PACK      PV1003,PV100301,CARET,PV100302,CARET,PV100303
          PACK      PV1006,PV100601,CARET,PV100602,CARET,PV100603
          PACK      PV1007,PV100701,CARET,PV100702,CARET,PV100703,CARET:
                           PV100704,CARET,PV100705,CARET,PV100706
          PACK      PV1008,PV100801,CARET,PV100802,CARET,PV100803,CARET:
                           PV100804,CARET,PV100805,CARET,PV100806
          PACK      PV1009,PV100901,CARET,PV100902,CARET,PV100903,CARET:
                           PV100904,CARET,PV100905,CARET,PV100906
.
          WRITE     DGATEOUT;NEXTSEG,PV1001,PV1002,PV1003,PV1004,PV1005,PV1006:
                             PV1007,PV1008,PV1009,PV1010,PV1011,PV1012:
                             PV1013,PV1014,PV1015,PV1016,PV1017,PV1018:
                             PV1019,PV1020,PV1021,PV1022,PV1023,PV1024:
                             PV1025,PV1026,PV1027,PV1028,PV1029,PV1030:
                             PV1031,PV1032,PV1033,PV1034,PV1035,PV1036:
                             PV1037,PV1038,PV1039,PV1040,PV1041,PV1042:
                             PV1043,PV1044,PV1045,PV1046,PV1047,PV1048:
                             PV1049,PV1050,PV1051,PV1052
          GOTO      OVERCOND IF OVER
          RETURN
.
.         break certain variables into sub-variables
.
BRKPV100  MOVE      PV1003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PV100301
          MOVE      HL7CMP[02],PV100302
          MOVE      HL7CMP[03],PV100303
.
          MOVE      PV1006,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PV100601
          MOVE      HL7CMP[02],PV100602
          MOVE      HL7CMP[03],PV100603
.
          MOVE      PV1007,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PV100701
          MOVE      HL7CMP[02],PV100702
          MOVE      HL7CMP[03],PV100703
          MOVE      HL7CMP[04],PV100704
          MOVE      HL7CMP[05],PV100705
          MOVE      HL7CMP[06],PV100706
.
          MOVE      PV1008,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PV100801
          MOVE      HL7CMP[02],PV100802
          MOVE      HL7CMP[03],PV100803
          MOVE      HL7CMP[04],PV100804
          MOVE      HL7CMP[05],PV100805
          MOVE      HL7CMP[06],PV100806
.
          MOVE      PV1009,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],PV100901
          MOVE      HL7CMP[02],PV100902
          MOVE      HL7CMP[03],PV100903
          MOVE      HL7CMP[04],PV100904
          MOVE      HL7CMP[05],PV100905
          MOVE      HL7CMP[06],PV100906
BRKPV199  RETURN

