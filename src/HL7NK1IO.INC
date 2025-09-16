. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7NK1IO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7nk1af file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7NK11  RESET     KEY22
          READ      HL7NK101,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7NK11  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7NK101,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7NK11  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7NK101,KEY22;DNK1IN01,DNK1IN02,NK1001:
                                  NK1002,NK1003,NK1004,NK1005,NK1006:
                                  NK1007,NK1008,NK1009,NK1010,NK1011:
                                  NK1012,NK1013,NK1014,NK1015,NK1016:
                                  NK1017,NK1018,NK1019,NK1020,NK1021:
                                  NK1022,NK1023,NK1024,NK1025,NK1026:
                                  NK1027,NK1028,NK1029,NK1030,NK1031:
                                  NK1032,NK1033,NK1034,NK1035,NK1036:
                                  NK1037,NK1038
          GOTO      OVERCOND IF OVER
          MOVE      DNK1IN01,NK1IN01
          MOVE      DNK1IN02,NK1IN02
          RETURN
.
.         next read
.
RKH7NK11  MOVE      ZERO,OVRCD
          READKS    HL7NK101;DNK1IN01,DNK1IN02,NK1001:
                                  NK1002,NK1003,NK1004,NK1005,NK1006:
                                  NK1007,NK1008,NK1009,NK1010,NK1011:
                                  NK1012,NK1013,NK1014,NK1015,NK1016:
                                  NK1017,NK1018,NK1019,NK1020,NK1021:
                                  NK1022,NK1023,NK1024,NK1025,NK1026:
                                  NK1027,NK1028,NK1029,NK1030,NK1031:
                                  NK1032,NK1033,NK1034,NK1035,NK1036:
                                  NK1037,NK1038
          GOTO      OVERCOND IF OVER
          MOVE      DNK1IN01,NK1IN01
          MOVE      DNK1IN02,NK1IN02
          RETURN
.
.         previous read
.
RPH7NK11  MOVE      ZERO,OVRCD
          READKP    HL7NK101;DNK1IN01,DNK1IN02,NK1001:
                                  NK1002,NK1003,NK1004,NK1005,NK1006:
                                  NK1007,NK1008,NK1009,NK1010,NK1011:
                                  NK1012,NK1013,NK1014,NK1015,NK1016:
                                  NK1017,NK1018,NK1019,NK1020,NK1021:
                                  NK1022,NK1023,NK1024,NK1025,NK1026:
                                  NK1027,NK1028,NK1029,NK1030,NK1031:
                                  NK1032,NK1033,NK1034,NK1035,NK1036:
                                  NK1037,NK1038
          GOTO      OVERCOND IF OVER
          MOVE      DNK1IN01,NK1IN01
          MOVE      DNK1IN02,NK1IN02
          RETURN
.
.         update
.
UPH7NK11  MOVE      NK1IN01,DNK1IN01
          MOVE      NK1IN02,DNK1IN02
          UPDATE    HL7NK101;DNK1IN01,DNK1IN02,NK1001:
                                  NK1002,NK1003,NK1004,NK1005,NK1006:
                                  NK1007,NK1008,NK1009,NK1010,NK1011:
                                  NK1012,NK1013,NK1014,NK1015,NK1016:
                                  NK1017,NK1018,NK1019,NK1020,NK1021:
                                  NK1022,NK1023,NK1024,NK1025,NK1026:
                                  NK1027,NK1028,NK1029,NK1030,NK1031:
                                  NK1032,NK1033,NK1034,NK1035,NK1036:
                                  NK1037,NK1038
          RETURN
.
.         write
.
WRH7NK11  RESET     KEY22
          MOVE      NK1IN01,DNK1IN01
          MOVE      NK1IN02,DNK1IN02
          WRITE     HL7NK101,KEY22;DNK1IN01,DNK1IN02,NK1001:
                                  NK1002,NK1003,NK1004,NK1005,NK1006:
                                  NK1007,NK1008,NK1009,NK1010,NK1011:
                                  NK1012,NK1013,NK1014,NK1015,NK1016:
                                  NK1017,NK1018,NK1019,NK1020,NK1021:
                                  NK1022,NK1023,NK1024,NK1025,NK1026:
                                  NK1027,NK1028,NK1029,NK1030,NK1031:
                                  NK1032,NK1033,NK1034,NK1035,NK1036:
                                  NK1037,NK1038
          RETURN
.
.         delete a record
.
DEH7NK11  RESET     KEY22
          DELETE    HL7NK101,KEY22
          RETURN
.
