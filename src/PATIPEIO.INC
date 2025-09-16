.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOIPE                              *
. *                                                        *
. *  Function     :  I/O for patipenf file                 *
. *                                                        *
. *  Keys         :  KEY8                                  *
. *                                                        *
. *  Modifications:                                        *
. *  V10.01.01  24/11/2010 Ebon Clements  CAR 233198       *
. *             Added reason for hold and record status    *
. *                  V9.02.00 08/04/03 J.Tan               *
. *                        Added rdp routine               *
. *                  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                        Change Admiss to 8 characters   *
. *                                                        *
. **********************************************************
.
WRIPEN1  RESET     KEY8
         WRITE     PATIPEN1,KEY8;KEY8,IPSYSTM,IPSITE,PTIPRHLD:
                            PTIPRDES,PTIPRSTA,PTIPSVAR
         GOTO      OVERCOND IF OVER
         RETURN
.
RDIPEN1  MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATIPEN1,KEY8;DIPADMNO,IPSYSTM,IPSITE,PTIPRHLD:
                                 PTIPRDES,PTIPRSTA,PTIPSVAR
         GOTO      OVERCOND IF OVER
         MOVE      DIPADMNO,IPADMNO
         RETURN
.
RDKIPEN1 MOVE      ZERO,OVRCD
         READKS    PATIPEN1;DIPADMNO,IPSYSTM,IPSITE,PTIPRHLD:
                            PTIPRDES,PTIPRSTA,PTIPSVAR
         GOTO      OVERCOND IF OVER
         MOVE      DIPADMNO,IPADMNO
         RETURN
.
RDPIPEN1 MOVE      ZERO,OVRCD
         READKP    PATIPEN1;DIPADMNO,IPSYSTM,IPSITE,PTIPRHLD:
                            PTIPRDES,PTIPRSTA,PTIPSVAR
         GOTO      OVERCOND IF OVER
         MOVE      DIPADMNO,IPADMNO
         RETURN
.
RDSIPEN1 MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATIPEN1,KEY8;;
         GOTO      OVERCOND IF OVER
         RETURN
.
DEIPEN1  RESET     KEY8
         DELETE    PATIPEN1,KEY8
         RETURN
.
UPIPEN1  MOVE      IPADMNO,DIPADMNO
         UPDATE    PATIPEN1;DIPADMNO,IPSYSTM,IPSITE,PTIPRHLD:
                            PTIPRDES,PTIPRSTA,PTIPSVAR
         RETURN
.
RAIPEN1  MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATIPEN1,KEY8;ANS
         GOTO      OVERCOND IF OVER
         RETURN    
. 
