. **********************************************************
. *                                                        *
. *  Include Name :  PATIOVIS                              *
. *                                                        *
. *  Function     :  I/O for patvisaf file                 *
. *                                                        *
. *  Keys         :  KEY8  KEY24  KEY22                    *
. *                                                        *
. *  Modifications:                                        *
. *              V10.03.01 11/04/2013  Steve Armstrong     *
. *                        Fixed positional read on        *
. *                        index 3 to use PATVISA3 instead *
. *                        of PATVISA1.                    *
. *               V5.06.00 18/09/1998 Katie Nelson         *
. *                        Added Index PATVISA3            *
. *                                                        *
. *                  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                        Change U/R to 8 characters      *
. *                  V5.01 27/07/89 K.Peak                 *
. *                        Added PVIRESI - Resident Status *
. *                                                        *
. **********************************************************
RAPTVIS1
RDAVISA1 MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATVISA1,KEY8;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RSPTVIS1
RDSVISA1 RESET     KEY8
         READ      PATVISA1,KEY8;;
         RETURN  
.
RDPTVIS1
RDVISA1  MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATVISA1,KEY8;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                                 PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                                 PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         MOVE      PVIURNO,SPVIURNO
         MOVE      PVIBILL,SPVIBILL
         MOVE      PVIDATE,SPVIDATE
         RETURN  
.
RLPTVIS1 MOVE      ZERO,OVRCD
         RESET     KEY8
         READL     PATVISA1,KEY8;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                                 PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                                 PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         MOVE      DPVIBILL,PVIBILL
         MOVE      PVIURNO,SPVIURNO
         MOVE      PVIBILL,SPVIBILL
         MOVE      PVIDATE,SPVIDATE
         RETURN  
.
UUPTVIS1 UNLOCK    PATVISA1
         RETURN 
.
RKPTVIS1
RDKVISA1 MOVE      ZERO,OVRCD
         READKS    PATVISA1;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                            PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                            PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         MOVE      PVIURNO,SPVIURNO
         MOVE      PVIBILL,SPVIBILL
         MOVE      PVIDATE,SPVIDATE
         RETURN  
.
RPPTVIS1
RDPVISA1 MOVE      ZERO,OVRCD
         READKP    PATVISA1;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                            PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                            PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         MOVE      PVIURNO,SPVIURNO
         MOVE      PVIBILL,SPVIBILL
         MOVE      PVIDATE,SPVIDATE
         RETURN  
.
.        Write a new record
.
WRPTVIS1
WRVISA1  MOVE      ZERO,OVRCD
         CALL      STTYPE00
         RESET     KEY8
         MOVE      PVIBILL,DPVIBILL
         WRITE     PATVISA1,KEY8;PVIURNO,PVIDATE,KEY8,PVITYPE,PVIDOCT:
                                 PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                                 PVIUNQE,PVISYST,PTVITYPE,PVISPAR
.
         RETURN  
.
.        Update the record
.
UPPTVIS1
UPVISA1  MOVE      ZERO,OVRCD
         CALL      STTYPE00
         MOVE      SP2,PVILOCK
         MOVE      PVIBILL,DPVIBILL
         UPDATE    PATVISA1;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                            PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                            PVIUNQE,PVISYST,PTVITYPE,PVISPAR
.
         RETURN  
.
.        Delete a record
.
DEPTVIS1
DEVISA1  MOVE      ZERO,OVRCD
         RESET     KEY8
         DELETE    PATVISA1,KEY8
.
         RETURN
.
.        Get the next transaction number
.
TRVISA1  CALL      RLPTVIS1
         BRANCH    OVRCD,TRVISA1A,TRVISA1B
.
         ADD       ONE,PVITRAN
         CALL      UPVISA1
         CALL      UUPTVIS1
.
         SUB       ONE,PVITRAN
         RETURN
.
TRVISA1A DISPLAY   *P1:24,*EL,*P20:24,*V2LON:
                   "** ",KEY8," missing from Visit file.":
                   " Contact IBA **",*W4;*P1:24,*EL;
         RETURN
.
TRVISA1B DISPLAY   *P1:24,*EL,*P20:24,*V2LON:
                   "** ",PVIBILL," locked on port ",PVILOCK:
                   ". Please wait **",*W;*P1:24,*EL;
         GOTO      TRVISA1
.
.       SECOND SESSIONS   I/O
.
RAPTVIS2
RDAVISA2 MOVE      ZERO,OVRCD
         RESET     KEY24
         READ      PATVISA2,KEY24;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTVIS2
RDSVISA2 RESET     KEY24
         READ      PATVISA2,KEY24;;
         RETURN  
.
RDPTVIS2
RDVISA2  MOVE      ZERO,OVRCD
         RESET     KEY24
         READ      PATVISA2,KEY24;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                                  PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                                  PVIUNQE,PVISYST,PTVITYPE,PVISPAR
.
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         RETURN  
.
RKPTVIS2
RDKVISA2 MOVE      ZERO,OVRCD
         READKS    PATVISA2;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                            PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                            PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         RETURN  
.
RPPTVIS2
RDPVISA2 MOVE      ZERO,OVRCD
         READKP    PATVISA2;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                            PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                            PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         RETURN  

RAPTVIS3
RDAVISA3 MOVE      ZERO,OVRCD                               
         RESET     KEY22                                     
         READ      PATVISA3,KEY22;ANS
         GOTO      OVERCOND IF OVER
         RETURN 
.
RSPTVIS3
RDSVISA3 RESET     KEY22
         READ      PATVISA3,KEY22;;
         RETURN 
.
RDPTVIS3
RDVISA3  MOVE      ZERO,OVRCD
         RESET     KEY22
         READ      PATVISA3,KEY22;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                                  PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                                  PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         MOVE      PVIURNO,SPVIURNO
         MOVE      PVIBILL,SPVIBILL
         MOVE      PVIDATE,SPVIDATE
         RETURN 
.
RLPTVIS3 MOVE      ZERO,OVRCD
         RESET     KEY22
         READL     PATVISA3,KEY22;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                                  PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                                  PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         MOVE      DPVIBILL,PVIBILL
         MOVE      PVIURNO,SPVIURNO
         MOVE      PVIBILL,SPVIBILL
         MOVE      PVIDATE,SPVIDATE
         RETURN 
.
UUPTVIS3 UNLOCK    PATVISA3
         RETURN 
.
RKPTVIS3
RDKVISA3 MOVE      ZERO,OVRCD
         READKS    PATVISA3;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                            PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                            PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         MOVE      PVIURNO,SPVIURNO
         MOVE      PVIBILL,SPVIBILL
         MOVE      PVIDATE,SPVIDATE
         RETURN 
.
RPPTVIS3
RDPVISA3 MOVE      ZERO,OVRCD
         READKP    PATVISA3;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                            PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                            PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         MOVE      PVIURNO,SPVIURNO
         MOVE      PVIBILL,SPVIBILL
         MOVE      PVIDATE,SPVIDATE
         RETURN 
.
.       FOURTH SESSIONS   I/O
.
RAPTVIS4
RDAVISA4 MOVE      ZERO,OVRCD
         RESET     KEY26
         READ      PATVISA4,KEY26;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSPTVIS4
RDSVISA4 RESET     KEY26
         READ      PATVISA4,KEY26;;
         RETURN
.
RDPTVIS4
RDVISA4  MOVE      ZERO,OVRCD
         RESET     KEY26
         READ      PATVISA4,KEY26;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                                  PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                                  PVIUNQE,PVISYST,PTVITYPE,PVISPAR
.
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         RETURN
.
RKPTVIS4
RDKVISA4 MOVE      ZERO,OVRCD
         READKS    PATVISA4;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                            PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                            PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         RETURN
.
RPPTVIS4
RDPVISA4 MOVE      ZERO,OVRCD
         READKP    PATVISA4;PVIURNO,PVIDATE,DPVIBILL,PVITYPE,PVIDOCT:
                            PVISTAT,PVITRAN,PVILOCK,PVISITE,PVIRESI:
                            PVIUNQE,PVISYST,PTVITYPE,PVISPAR
         GOTO      OVERCOND IF OVER
         MOVE      DPVIBILL,PVIBILL
         RETURN
.------------------------------------------------------------------------------
. STTYPE00 - Populate PTVITYPE according to the visit type PVITYPE and PVISYST
.------------------------------------------------------------------------------
STTYPE00  MOVE       SP70,PTVITYPE
.
          IF        PVITYPE >= ONE & PVITYPE <= EIGHT
            PACK     PTVITYPE,SP1,PVITYPE,SP70
          ENDIF
.
          IF        PVITYPE=9
            MATCH     " 1",PVISYST
            IF        @EQUAL
              MOVE     " 9",PTVITYPE
            ENDIF
            MATCH     " 2",PVISYST
            IF        @EQUAL
              MOVE     TEN,PTVITYPE
            ENDIF
          ENDIF
.
STTYPE99 RETURN
