.
. **********************************************************
. *                                                        *
. *  Include Name :  PATDO1IO                              *
. *                                                        *
. *  Function     :  I/O for patdo1af file                 *
. *                                                        *
. *  Keys         :  KEY6  KEY26                           *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                  V5.01 18/11/92 Whirlpool              *
. *                        Dudley Changes                  *
. *                  V5.02 Matt Surridge                   *
. *                        Updated for new doctor file     *
. *                  V5.03 12/01/94 I.Rutt                 *
. *                        Removed SFORMAT of address vars * 
. *                        from PATDO1FD                   *
. *       V5.01.04  02/03/1994    Justin Coates            *
. *                 put setlptr check in format routine    * 
. *       V5.07.00  30/06/1999    Katie Nelson             *
. *                 Added last update date and time        * 
. *       V9.02.01  13/06/2002    Glenn Saunders           *
. *                 Add missing Read with Answer (index 1) * 
. *       V9.05.01  15/03/2006  Ebon Clements  CAR 78533   *
. *                 Added PTDOHOSS                         *
. *       V9.09.01  29/08/2007  Peter Vela     CAR 148637  *
. *                 Added PTDOEXML                         *
. *                 Exclude from mailing List              *
. *       V9.09.02  11/12/2007  Ebon Clements  CAR 143977  *
. *                 Added PTDODEAC                         *
. *                 Accred. Expiry Date                    *
. *       V10.01.01 10/02/2011  Ebon Clements  CAR 234598  *
. *                 Added PTDOAHC1 to PTDOAHC3             *
. **********************************************************
.
RDSDOCT1 RESET     KEY6
         READ      PATDO1A1,KEY6;;
         RETURN  
.
RDADOCT1 RESET     KEY6
         MOVE      ZERO,OVRCD
         READ      PATDO1A1,KEY6;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDDOCT1  MOVE      ZERO,OVRCD
         RESET     KEY6
         READ      PATDO1A1,KEY6;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RLDOCT1  MOVE      ZERO,OVRCD
         RESET     KEY6
         READL     PATDO1A1,KEY6;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         GOTO      OVERLOCK IF LOCKED
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKDOCT1 MOVE      ZERO,OVRCD
         READKS    PATDO1A1;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDPDOCT1 MOVE      ZERO,OVRCD
         READKP    PATDO1A1;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
WRDOCT1  MOVE      ZERO,OVRCD
         RESET     KEY6
         TRAP      OVERLOCK IF IO
         WRITE    PATDO1A1,KEY6;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         TRAPCLR    IO
         RETURN  
.
UNDOCT1  UNLOCK    PATDO1A1
         RETURN  
.
UPDOCT1  UPDATE    PATDO1A1;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         RETURN  
.
DEDOCT1  RESET     KEY6
         DELETE    PATDO1A1,KEY6
         RETURN
.
RDSDOCT2 RESET     KEY26
         READ      PATDO1A2,KEY26;;
         RETURN  
.
RDDOCT2  MOVE      ZERO,OVRCD
         READ      PATDO1A2,KEY26;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKDOCT2 MOVE      ZERO,OVRCD
         READKS    PATDO1A2;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDPDOCT2 MOVE      ZERO,OVRCD
         READKP    PATDO1A2;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
.        3rd Index
.
RDSDOCT3 RESET     KEY29
         READ      PATDO1A3,KEY29;;
         RETURN  
.
RDDOCT3  MOVE      ZERO,OVRCD
         READ      PATDO1A3,KEY29;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDKDOCT3 MOVE      ZERO,OVRCD
         READKS    PATDO1A3;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDPDOCT3 MOVE      ZERO,OVRCD
         READKP    PATDO1A3;DCODE,DTITL,DGNAME,DSNAME,DRTYPE:
                             DRNAME,DSADD1,DSADD2,DSADD3,DSADD4,DSPOST:
                             PTDOSEML,DTELES,DTELEP,DPAGER,DASSOC1,DASSOC2:
                             DASSOC3,DASSOC4,DASSOC5,DPROV,DTELEH,DHADD1:
                             DHADD2,DHADD3,DHADD4,DHPOST,PTDOHEML:
                             DAFIRST,DALAST,DAYEARS,DACCRED,DRTYPE2:
                             DRTYPE3,DRTYPE4,DRTYPE5,DFSPARE,DBIRTH:           
                             DHCSCOD,DALEVEL,DRSTAT,PTDOFAXN,PTDOHFAX:
                             PTDOMOBL,PTDOGLCC,PTDOWHDP,PTDOMREG,PTDONHSN:
                             DLUPDDTE,DLUPDTME,PTDOUDF1,PTDOUDF2,PTDOUDF3:
                             PTDOUDF4,PTDOUDF5,PTDOINSC,PTDOINSN,PTDOINSF:
                             PTDOINST,PTDOREGN,PTDOREGF,PTDOREGT,PTDOVISA:
                             PTDOCOMT,PTDOPREF,PTDOABNN,PTDODINA,PTDODACT:
                             PTDODACO,PTDOPRO2,PTDOPRO3,PTDOPRO4,PTDOPRO5:
                             PTDOSDAT,PTDOEDAT,PTDOAUPD,PTDOHOSS,PTDOEXML:
                             PTDODEAC,PTDOAHC1,PTDOAHC2,PTDOAHC3,DASPARE
         GOTO      OVERCOND IF OVER
         RETURN  
+
