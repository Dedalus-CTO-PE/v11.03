
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCA1IO.INC                                    *
.  *                                                                    *
.  *     Function     : File I/O include for                            *
.  *                    PATIENT CURRENT ADDRESS FILE                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *  Modifications: V5.01.01 16/08/90 Steve O'Gorman                   *
.  *                          Include Created                           *
.  *                 V5.01.02 17/11/92 Whirlpool                        *
.  *                          Dudley Changes                            *
.  *                 V5.01.03 12/01/94 I.Rutt                           *
.  *                          Removed SFORMAT of address vars PATCA1FD  *
.  *                                                                    *
.  **********************************************************************
.
.
RDACADD1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      PATCA1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSCADD1  RESET     KEY8
          READ      PATCA1A1,KEY8;;
          RETURN  
.
RDCADD1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATCA1A1,KEY8;PTCAADMN,PTCAADD1,PTCAADD2,PTCASUB,PTCAADD4:
                                  PTCAPCOD,PTCALGA,PTCAHPH,PTCABPH,PTCASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDKCADD1  MOVE      ZERO,OVRCD
          READKS    PATCA1A1;PTCAADMN,PTCAADD1,PTCAADD2,PTCASUB,PTCAADD4:
                             PTCAPCOD,PTCALGA,PTCAHPH,PTCABPH,PTCASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDPCADD1  MOVE      ZERO,OVRCD
          READKP    PATCA1A1;PTCAADMN,PTCAADD1,PTCAADD2,PTCASUB,PTCAADD4:
                             PTCAPCOD,PTCALGA,PTCAHPH,PTCABPH,PTCASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
WRCADD1   RESET     KEY8
          MOVE      ZERO,OVRCD
          WRITE     PATCA1A1,KEY8;PTCAADMN,PTCAADD1,PTCAADD2,PTCASUB,PTCAADD4:
                                  PTCAPCOD,PTCALGA,PTCAHPH,PTCABPH,PTCASPAR
          RETURN  
.
UPCADD1   MOVE      ZERO,OVRCD
          UPDATE    PATCA1A1;PTCAADMN,PTCAADD1,PTCAADD2,PTCASUB,PTCAADD4:
                              PTCAPCOD,PTCALGA,PTCAHPH,PTCABPH,PTCASPAR
          RETURN
.
DECADD1   MOVE      ZERO,OVRCD
          RESET     KEY8
          DELETE    PATCA1A1,KEY8
          RETURN
+
.

