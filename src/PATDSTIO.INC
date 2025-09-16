.
. **********************************************************
. *                                                        *
. *  Include Name :  PATDSTIO                              *
. *                                                        *
. *  Function     :  I/O for patdstat file                 *
. *                                                        *
. *  Keys         :  KEY13                                 *
. *                                                        *
. *  Modifications:                                        *
. *                 V9.02.01  B.G.Ackland                  *
. *                           Added Record Lock Routines   *
. *                 V5.09.B01 Ebon Clements                *
. *                           509 Doctors mods for periods *
. *                 V5.00 01/06/89 K.Peak                  *
. *                           Change include heading       *
. *                                                        *
. **********************************************************
RADSTA1  MOVE      ZERO,OVRCD
         RESET     KEY13
         READ      PATDSTA1,KEY13;ANS;
         GOTO      OVERCOND IF OVER
         RETURN
.
RDDSTA1  MOVE      ZERO,OVRCD
         RESET     KEY13
         READ      PATDSTA1,KEY13;PTDSYEAR,PTDSPERD,PTDSTYPE,PTDSCODE:
                   PTDSADMS,PTDSBEDD,PTDSOPRS,PTDSMBSC:
                   PTDSBADM,PTDSBBED,PTDSBOPR,PTDSBMBS,PTDSSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
RLDSTA1  MOVE      ZERO,OVRCD
         RESET     KEY13
         READL     PATDSTA1,KEY13;PTDSYEAR,PTDSPERD,PTDSTYPE,PTDSCODE:
                   PTDSADMS,PTDSBEDD,PTDSOPRS,PTDSMBSC:
                   PTDSBADM,PTDSBBED,PTDSBOPR,PTDSBMBS,PTDSSPAR
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         RETURN  
.
RDKDSTA1
         MOVE      ZERO,OVRCD
         READKS    PATDSTA1;PTDSYEAR,PTDSPERD,PTDSTYPE,PTDSCODE:
                   PTDSADMS,PTDSBEDD,PTDSOPRS,PTDSMBSC:
                   PTDSBADM,PTDSBBED,PTDSBOPR,PTDSBMBS,PTDSSPAR
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRDSTA1
         RESET     KEY13
         WRITE     PATDSTA1,KEY13;KEY13:
                   PTDSADMS,PTDSBEDD,PTDSOPRS,PTDSMBSC:
                   PTDSBADM,PTDSBBED,PTDSBOPR,PTDSBMBS,PTDSSPAR
         RETURN  
.
UPDSTA1
         UPDATE    PATDSTA1;PTDSYEAR,PTDSPERD,PTDSTYPE,PTDSCODE:
                   PTDSADMS,PTDSBEDD,PTDSOPRS,PTDSMBSC:
                   PTDSBADM,PTDSBBED,PTDSBOPR,PTDSBMBS,PTDSSPAR
         RETURN  
.
DEDSTA1
         RESET     KEY13
         DELETE    PATDSTA1,KEY13
         RETURN  
.
RDSDSTA1
         MOVE      ZERO,OVRCD
         RESET     KEY13
         READ      PATDSTA1,KEY13;;
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDDSTA2  MOVE      ZERO,OVRCD
         RESET     KEY13
         READ      PATDSTA2,KEY13;PTDSYEAR,PTDSPERD,PTDSTYPE,PTDSCODE:
                   PTDSADMS,PTDSBEDD,PTDSOPRS,PTDSMBSC:
                   PTDSBADM,PTDSBBED,PTDSBOPR,PTDSBMBS,PTDSSPAR
         GOTO      OVERCOND IF OVER
         RETURN
.
RLDSTA2  MOVE      ZERO,OVRCD
         RESET     KEY13
         READL     PATDSTA2,KEY13;PTDSYEAR,PTDSPERD,PTDSTYPE,PTDSCODE:
                   PTDSADMS,PTDSBEDD,PTDSOPRS,PTDSMBSC:
                   PTDSBADM,PTDSBBED,PTDSBOPR,PTDSBMBS,PTDSSPAR
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         RETURN
.
RDKDSTA2
         MOVE      ZERO,OVRCD
         READKS    PATDSTA2;PTDSYEAR,PTDSPERD,PTDSTYPE,PTDSCODE:
                   PTDSADMS,PTDSBEDD,PTDSOPRS,PTDSMBSC:
                   PTDSBADM,PTDSBBED,PTDSBOPR,PTDSBMBS,PTDSSPAR
         GOTO      OVERCOND IF OVER
         RETURN
.
WRDSTA2
         RESET     KEY13
         WRITE     PATDSTA2,KEY13;PTDSYEAR,PTDSPERD,PTDSTYPE,PTDSCODE:
                   PTDSADMS,PTDSBEDD,PTDSOPRS,PTDSMBSC:
                   PTDSBADM,PTDSBBED,PTDSBOPR,PTDSBMBS,PTDSSPAR
         RETURN
.
UPDSTA2
         UPDATE    PATDSTA2;PTDSYEAR,PTDSPERD,PTDSTYPE,PTDSCODE:
                   PTDSADMS,PTDSBEDD,PTDSOPRS,PTDSMBSC:
                   PTDSBADM,PTDSBBED,PTDSBOPR,PTDSBMBS,PTDSSPAR
         RETURN
.
DEDSTA2
         RESET     KEY13
         DELETE    PATDSTA2,KEY13
         RETURN
.
RDSDSTA2
         MOVE      ZERO,OVRCD
         RESET     KEY13
         READ      PATDSTA2,KEY13;;
         GOTO      OVERCOND IF OVER
         RETURN
.
UUDSTA1  RESET     KEY13  
         UNLOCK    PATDSTA1
         RETURN
.
UUDSTA2  RESET     KEY13  
         UNLOCK    PATDSTA2
         RETURN
