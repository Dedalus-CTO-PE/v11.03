.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOLOC                              *
. *                                                        *
. *  Function     :  I/O for patlocaf file                 *
. *                                                        *
. *  Keys         :  KEY88                                 *
. *                                                        *
. *  Modifications:                                        *
. *       V10.02.01  25/06/2011   Steve Armstrong          *
. *                  Add new field PTLCGNM2                *
. *       V9.02.00   17.11.2001   Glenn Saunders           *
. *                  Add new field LPCONAM (ambulatory)    *
. *       V5.02      23/11/89     S.Barcham                *
. *                  Fix Write IO                          *
. *       V5.01      03/08/89     Graeme Williams          *
. *                  Added LPCDATE, LPCTIME                *
. *       V5.00      01/06/89     K.Peak                   *
. *                  Change include heading                *
. *                  Change U/R & Adm to 8 characters      *
. *                                                        *
. **********************************************************
.
RDALOCA1 MOVE      ZERO,OVRCD
         RESET     KEY88
         READ      PATLOCA1,KEY88;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSLOCA1 RESET     KEY88
         READ      PATLOCA1,KEY88;;
         RETURN  
.
RDLOCA1  MOVE      ZERO,OVRCD
         RESET     KEY88
         READ      PATLOCA1,KEY88;LSNAME,LGNAME,DLADMNO,LURNO,LPCONDC,LPCONDD:
                                  LPCDATE,LPCTIME,LPCONAM,PTLCGNM2,LOCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DLADMNO,LADMNO
         MOVE      LSNAME,SLSNAME
         MOVE      LGNAME,SLGNAME
         RETURN  
.
RDKLOCA1 MOVE      ZERO,OVRCD
         READKS    PATLOCA1;LSNAME,LGNAME,DLADMNO,LURNO,LPCONDC,LPCONDD:
                                  LPCDATE,LPCTIME,LPCONAM,PTLCGNM2,LOCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DLADMNO,LADMNO
         MOVE      LSNAME,SLSNAME
         MOVE      LGNAME,SLGNAME
         RETURN  
.
RDPLOCA1 MOVE      ZERO,OVRCD
         READKP    PATLOCA1;LSNAME,LGNAME,DLADMNO,LURNO,LPCONDC,LPCONDD:
                                  LPCDATE,LPCTIME,LPCONAM,PTLCGNM2,LOCSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DLADMNO,LADMNO
         MOVE      LSNAME,SLSNAME
         MOVE      LGNAME,SLGNAME
         RETURN  
.
WRLOCA1  RESET     KEY88 
         WRITE     PATLOCA1,KEY88;KEY88,LURNO,LPCONDC,LPCONDD:
                                  LPCDATE,LPCTIME,LPCONAM,PTLCGNM2,LOCSPAR
         RETURN  
.
UPLOCA1  MOVE      LADMNO,DLADMNO
         MOVE      ZERO,OVRCD
         UPDATE    PATLOCA1;LSNAME,LGNAME,DLADMNO,LURNO,LPCONDC,LPCONDD:
                                  LPCDATE,LPCTIME,LPCONAM,PTLCGNM2,LOCSPAR
.
         RETURN
.
DELOCA1  MOVE      ZERO,OVRCD
         RESET     KEY88
         DELETE    PATLOCA1,KEY88
         RETURN
