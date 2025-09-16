. *****************************************************************************
.*                                                                            *
.*   Include Name :  PATCRGIO                                                 *
.*                                                                            *
.*   Function     :  I/O for patmi1af file                                    *
.*   Keys         :  KEY8  KEY16                                              *
.*                                                                            *
.*   Modifications:  V5.03.01  08/06/1995    Matt                             *
.*                   Changed field name.                                      *
.******************************************************************************
.
.
RAPTCRG1 RESET     KEY8
         MOVE      ZERO,OVRCD
         READ      PATCRGA1,KEY8;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RSPTCRG1 RESET     KEY8
         READ      PATCRGA1,KEY8;;
         RETURN  
.
RDPTCRG1 MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATCRGA1,KEY8;DPTCRADN,PTCRURNO,PTCRMULT,PTCRSTAY,PTCRVERT:
                                 PTCRPRIM,PTCRHIST,PTCRSPAR 
.
         GOTO      OVERCOND IF OVER
         MOVE      DPTCRADN,PTCRADNO
         RETURN  
.
RKPTCRG1 MOVE      ZERO,OVRCD
         READKS    PATCRGA1;DPTCRADN,PTCRURNO,PTCRMULT,PTCRSTAY,PTCRVERT:
                            PTCRPRIM,PTCRHIST,PTCRSPAR 
         GOTO      OVERCOND IF OVER
         MOVE      DPTCRADN,PTCRADNO
         RETURN
.
RPPTCRG1 MOVE      ZERO,OVRCD
         READKP    PATCRGA1;DPTCRADN,PTCRURNO,PTCRMULT,PTCRSTAY,PTCRVERT:
                            PTCRPRIM,PTCRHIST,PTCRSPAR 
         GOTO      OVERCOND IF OVER
         MOVE      DPTCRADN,PTCRADNO
         RETURN
.
WRPTCRG1 RESET     KEY8
         MOVE      ZERO,OVRCD
.
         MOVE      PTCRADNO,DPTCRADN
         WRITE     PATCRGA1,KEY8;KEY8,PTCRURNO,PTCRMULT,PTCRSTAY,PTCRVERT:
                                      PTCRPRIM,PTCRHIST,PTCRSPAR 
.
         RETURN  
.
.
UPPTCRG1 MOVE      ZERO,OVRCD
.
         UPDATE    PATCRGA1;DPTCRADN,PTCRURNO,PTCRMULT,PTCRSTAY,PTCRVERT:
                            PTCRPRIM,PTCRHIST,PTCRSPAR 
.
         RETURN
.
DEPTCRG1 MOVE      ZERO,OVRCD
         RESET     KEY8
         DELETE    PATCRGA1,KEY8
.
         RETURN
.
.
RAPTCRG2 RESET     KEY16
         MOVE      ZERO,OVRCD
         READ      PATCRGA2,KEY16;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RSPTCRG2 RESET     KEY16
         READ      PATCRGA2,KEY16;;
         RETURN  
.
RDPTCRG2 MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATCRGA2,KEY16;DPTCRADN,PTCRURNO,PTCRMULT,PTCRSTAY,PTCRVERT:
                                  PTCRPRIM,PTCRHIST,PTCRSPAR 
         GOTO      OVERCOND IF OVER
         MOVE      DPTCRADN,PTCRADNO
         RETURN  
.
RKPTCRG2 MOVE      ZERO,OVRCD
         READKS    PATCRGA2;DPTCRADN,PTCRURNO,PTCRMULT,PTCRSTAY,PTCRVERT:
                            PTCRPRIM,PTCRHIST,PTCRSPAR 
         GOTO      OVERCOND IF OVER
         MOVE      DPTCRADN,PTCRADNO
         RETURN
.
RPPTCRG2 MOVE      ZERO,OVRCD
         READKP    PATCRGA2;DPTCRADN,PTCRURNO,PTCRMULT,PTCRSTAY,PTCRVERT:
                            PTCRPRIM,PTCRHIST,PTCRSPAR 
         GOTO      OVERCOND IF OVER
         MOVE      DPTCRADN,PTCRADNO
         RETURN
.
.
UPPTCRG2 MOVE      ZERO,OVRCD
.
         MOVE      PTCRADNO,DPTCRADN
         UPDATE    PATCRGA2;DPTCRADN,PTCRURNO,PTCRMULT,PTCRSTAY,PTCRVERT:
                            PTCRPRIM,PTCRHIST,PTCRSPAR 
.
