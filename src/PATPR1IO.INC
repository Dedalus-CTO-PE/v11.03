.
. PATIOPRA.INC
. ------------
. Related FD      : PATPR1FD.INC & PATPRXFD.INC
. Filenames       : patpramf       patpraxf
. Description     : Patient Management System 'Patient Pre-Admn Master File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY8    DIM    8        KEY FOR PATPR1A1 & PATPX1A1
.
. Modifications   : 01/06/89 K.Peak
.                   Change include heading
.                   Change U/R & Adm to 8 characters
.                   16/08/89 Graeme Williams 
.                   Added PHCNOTES, expanded PTMASPAR 
.                   14/10/89 S.Barcham 
.                   Added PDIET, PINITHOS, PTMASPAR to 38 
.                   06/08/90 Steve O'Gorman
.                   Added Extension File Details
.                   12/08/1991    Justin Coates  Mental Health System
.                   Added PTMXLS to PTMXNRS1
.                   16/09/1991    Graeme Williams   SRF 108797 (Quote 7027)
.                   Added PTMX3BEX - 3B certificate expiry date
.                   27/12/1991    Graeme Williams
.                   Added PTMXCARD, PTMXCEXP, PTMXCXMP, PTMXFMLY
.                   30/07/1992    Justin Coates - HONG KONG changes
.                   Added PTMXCHNM - chinese name
.                   29/10/1992    Steve O'Gorman - Dudley Changes
.                   Added New Master File Details
.                   Made Routines to Read/Write/Clear Extension Records
.                   25/11/92      Whirlpool  
.                   Added         PHKADUNI and dudley changes
.                   20/05/94      Matt SRF 601041
.                   Added routine FRMTPRA1 to format master file variables 
.                   when master file has not been opened.
.                   19/07/94      ROD              
.                   added RETURN before start formatting vars!
.                   18/10/2000    Dean Cramer      
.                   added variables after PTMXPOST in IO routines.
.
. -----------------------------------------
. ------- I/O routines for PATPR1A1 -------
. -----------------------------------------
.
. ------- read to see if record exists -------
.
RDAPRAM1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATPR1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          READ      PATPX1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
. ------- positional read -------
.
RDSPRAM1  RESET     KEY8
          READ      PATPR1A1,KEY8;;
          RETURN  
.
. ------- full read -------
.
RDPRAM1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATPR1A1,KEY8;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
                                  PLDAYS,PBDEBT,PSNAME,PGNAME,PPSNAME:
                                  PADD1,PADD2,PSUBRB,PADD4,PPOST:
                                  PTELEP,PTELEB,PSEX,PMSTAT,PBDATE:
                                  PSAGE,PCONT,PREG,PTYPE:
                                  POCCUP,PLDDATE,PMEDI,PPENNO,PPNDTE:
                                  PREPAT,PSMOK,PSTAT,PMICRO,PCEASE:
                                  PCASE,PAUTOPY,PHIGH1,PHIGH2,PHIGH3:
                                  PLOCDOC,PFUNDH,PFNDTB,PTMASPAR,PUSR1:
                                  PUSR2,PUSR3,PUSR4,PUSR5,PUSR6:
                                  PUYN1,PUYN2,PUYN3,PYRRES,PNKNAME:
                                  PNKADD1,PNKADD2,PNKSUBR,PNKADD4,PNKPOST:
                                  PNKTELP,PNKTELB,PNKRELP,PLSTINP,PLSTOUT:
                                  PNXRAY,PFNDYY,PFNDCG,PDECDTE,PHCNOTES:
                                  PDIET,PINITHOS,PHKADUNI,PTMAEMPC,PTMANOKO:
                                  PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
          PACK      PFNDMM,PTMASPAR
.
.         Read the Extension File
.
          CALL      RDPTPRX1
          GOTO      OVERCOND IF OVER
          RETURN  
.
. ------- next read -------
.
RDKPRAM1  MOVE      ZERO,OVRCD
          READKS    PATPR1A1;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
                             PLDAYS,PBDEBT,PSNAME,PGNAME,PPSNAME:
                             PADD1,PADD2,PSUBRB,PADD4,PPOST:
                             PTELEP,PTELEB,PSEX,PMSTAT,PBDATE:
                             PSAGE,PCONT,PREG,PTYPE:
                             POCCUP,PLDDATE,PMEDI,PPENNO,PPNDTE:
                             PREPAT,PSMOK,PSTAT,PMICRO,PCEASE:
                             PCASE,PAUTOPY,PHIGH1,PHIGH2,PHIGH3:
                             PLOCDOC,PFUNDH,PFNDTB,PTMASPAR,PUSR1:
                             PUSR2,PUSR3,PUSR4,PUSR5,PUSR6:
                             PUYN1,PUYN2,PUYN3,PYRRES,PNKNAME:
                             PNKADD1,PNKADD2,PNKSUBR,PNKADD4,PNKPOST:
                             PNKTELP,PNKTELB,PNKRELP,PLSTINP,PLSTOUT:
                             PNXRAY,PFNDYY,PFNDCG,PDECDTE,PHCNOTES:
                             PDIET,PINITHOS,PHKADUNI,PTMAEMPC,PTMANOKO:
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
          PACK      PFNDMM,PTMASPAR
.
.         Read the Extension File
.
          MOVE      PURNO,KEY8
          CALL      RDPTPRX1
          RETURN    IF NOT OVER
.
.         extension record doesn't exist so write one
.
          CALL      CLMXVARS                * Clear the Extension Variables
          CALL      WRPTPRX1                * Write the Extension Record
          CALL      RDPTPRX1                * Read the Extension Record
.
          RETURN  
.
. ------- previous read -------
.
RDPPRAM1  MOVE      ZERO,OVRCD
          READKP    PATPR1A1;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
                             PLDAYS,PBDEBT,PSNAME,PGNAME,PPSNAME:
                             PADD1,PADD2,PSUBRB,PADD4,PPOST:
                             PTELEP,PTELEB,PSEX,PMSTAT,PBDATE:
                             PSAGE,PCONT,PREG,PTYPE:
                             POCCUP,PLDDATE,PMEDI,PPENNO,PPNDTE:
                             PREPAT,PSMOK,PSTAT,PMICRO,PCEASE:
                             PCASE,PAUTOPY,PHIGH1,PHIGH2,PHIGH3:
                             PLOCDOC,PFUNDH,PFNDTB,PTMASPAR,PUSR1:
                             PUSR2,PUSR3,PUSR4,PUSR5,PUSR6:
                             PUYN1,PUYN2,PUYN3,PYRRES,PNKNAME:
                             PNKADD1,PNKADD2,PNKSUBR,PNKADD4,PNKPOST:
                             PNKTELP,PNKTELB,PNKRELP,PLSTINP,PLSTOUT:
                             PNXRAY,PFNDYY,PFNDCG,PDECDTE,PHCNOTES:
                             PDIET,PINITHOS,PHKADUNI,PTMAEMPC,PTMANOKO:
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
          PACK      PFNDMM,PTMASPAR
.
.         Read the Extension File
.
          CALL      RDPTPRX1
          RETURN    IF NOT OVER
.
.         extension record doesn't exist so write one
.
          CALL      CLMXVARS                * Clear the Extension Variables
          CALL      WRPTPRX1                * Write the Extension Record
          CALL      RDPTPRX1                * Read the Extension Record
.
. ------- write with locking -------
.
WRLPRAM1  MOVE      PORT,PPORT          ****** Write record with locking
          GOTO      WRPRAM1A
.
. ------- write without locking -------
.
WRPRAM1   MOVE      SP2,PPORT
.
WRPRAM1A  RESET     KEY8
          RESET     PHCNOTES,CHOSINDX
          MOVE      PCASE,ANS
          CMOVE     ANS,PHCNOTES
          PACK      PTMASPAR,PFNDMM
          WRITE     PATPR1A1,KEY8;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
                                  PLDAYS,PBDEBT,PSNAME,PGNAME,PPSNAME:
                                  PADD1,PADD2,PSUBRB,PADD4,PPOST:
                                  PTELEP,PTELEB,PSEX,PMSTAT,PBDATE:
                                  PSAGE,PCONT,PREG,PTYPE:
                                  POCCUP,PLDDATE,PMEDI,PPENNO,PPNDTE:
                                  PREPAT,PSMOK,PSTAT,PMICRO,PCEASE:
                                  PCASE,PAUTOPY,PHIGH1,PHIGH2,PHIGH3:
                                  PLOCDOC,PFUNDH,PFNDTB,PTMASPAR,PUSR1:
                                  PUSR2,PUSR3,PUSR4,PUSR5,PUSR6:
                                  PUYN1,PUYN2,PUYN3,PYRRES,PNKNAME:
                                  PNKADD1,PNKADD2,PNKSUBR,PNKADD4,PNKPOST:
                                  PNKTELP,PNKTELB,PNKRELP,PLSTINP,PLSTOUT:
                                  PNXRAY,PFNDYY,PFNDCG,PDECDTE,PHCNOTES:
                                  PDIET,PINITHOS,PHKADUNI,PTMAEMPC,PTMANOKO:
                                  PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD
.
.         Write to the Extension File
.
          CALL      WRPTPRX1
          RETURN  
.
. ------- update -------
.
UPPRAM1   MOVE      SP2,PPORT                *** Release record with update
.
UPLPRAM1  MOVE      ZERO,OVRCD                *** Keep record lock with update
.
          RESET     PHCNOTES,CHOSINDX
          MOVE      PCASE,ANS
          CMOVE     ANS,PHCNOTES
          PACK      PTMASPAR,PFNDMM
          UPDATE    PATPR1A1;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
                             PLDAYS,PBDEBT,PSNAME,PGNAME,PPSNAME:
                             PADD1,PADD2,PSUBRB,PADD4,PPOST:
                             PTELEP,PTELEB,PSEX,PMSTAT,PBDATE:
                             PSAGE,PCONT,PREG,PTYPE:
                             POCCUP,PLDDATE,PMEDI,PPENNO,PPNDTE:
                             PREPAT,PSMOK,PSTAT,PMICRO,PCEASE:
                             PCASE,PAUTOPY,PHIGH1,PHIGH2,PHIGH3:
                             PLOCDOC,PFUNDH,PFNDTB,PTMASPAR,PUSR1:
                             PUSR2,PUSR3,PUSR4,PUSR5,PUSR6:
                             PUYN1,PUYN2,PUYN3,PYRRES,PNKNAME:
                             PNKADD1,PNKADD2,PNKSUBR,PNKADD4,PNKPOST:
                             PNKTELP,PNKTELB,PNKRELP,PLSTINP,PLSTOUT:
                             PNXRAY,PFNDYY,PFNDCG,PDECDTE,PHCNOTES:
                             PDIET,PINITHOS,PHKADUNI,PTMAEMPC,PTMANOKO:
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD
.
.         Update the Extension File
.
          UPDATE    PATPX1A1;PURNO,PTMXRDAT,PTMXMEAL,PTMXLGA,PTMXLS:
                             PTMXLSDT,PTMXFHMD,PTMXMHU1,PTMXMHU2,PTMXMHU3:
                             PTMXECNM,PTMXECA1,PTMXECA2,PTMXECA3,PTMXECA4:
                             PTMXECPC,PTMXECPP,PTMXECBP,PTMXECRE:
                             PTMXNRNM,PTMXNRA1,PTMXNRA2,PTMXNRA3,PTMXNRA4:
                             PTMXNRPC,PTMXNRPP,PTMXNRBP,PTMXNRRE:
                             PTMX3BEX,PTMXCARD,PTMXCEXP,PTMXCXMP,PTMXFMLY:
                             PTMXCHNM,PTMXDOFR,PTMXREGP,PTMXGPPC,PTMXSPID:
                             PTMXGPPT,PTMXOSDT,PTMXOPER,PTMXUKDO,PTMXCELL:
                             PTMXADD1,PTMXADD2,PTMXADD3,PTMXADD4,PTMXPOST:
                             PTMXMCCD,PTMXSIN1,PTMXSIN2,PTMXSIN3,PTMXSIN4:
                             PTMXSIN5,PTMXCTIM,PTMXSPAR
          RETURN  
.
DEPRAM1   RESET     KEY8
          DELETE    PATPR1A1,KEY8
          DELETE    PATPX1A1,KEY8
          RETURN
.
. ------- positional read -------
.
RDSPRAM2  RESET     KEY8
          READ      PATPR1A2,KEY8;;
          RETURN
.
. ------- full read -------
.
RDPRAM2   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATPR1A2,KEY8;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
                                  PLDAYS,PBDEBT,PSNAME,PGNAME,PPSNAME:
                                  PADD1,PADD2,PSUBRB,PADD4,PPOST:
                                  PTELEP,PTELEB,PSEX,PMSTAT,PBDATE:
                                  PSAGE,PCONT,PREG,PTYPE:
                                  POCCUP,PLDDATE,PMEDI,PPENNO,PPNDTE:
                                  PREPAT,PSMOK,PSTAT,PMICRO,PCEASE:
                                  PCASE,PAUTOPY,PHIGH1,PHIGH2,PHIGH3:
                                  PLOCDOC,PFUNDH,PFNDTB,PTMASPAR,PUSR1:
                                  PUSR2,PUSR3,PUSR4,PUSR5,PUSR6:
                                  PUYN1,PUYN2,PUYN3,PYRRES,PNKNAME:
                                  PNKADD1,PNKADD2,PNKSUBR,PNKADD4,PNKPOST:
                                  PNKTELP,PNKTELB,PNKRELP,PLSTINP,PLSTOUT:
                                  PNXRAY,PFNDYY,PFNDCG,PDECDTE,PHCNOTES:
                                  PDIET,PINITHOS,PHKADUNI,PTMAEMPC,PTMANOKO:
                                  PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
          PACK      PFNDMM,PTMASPAR
.
.         Read the Extension File
.
          CALL      RDPTPRX1
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- next read -------
.
RDKPRAM2  MOVE      ZERO,OVRCD
          READKS    PATPR1A2;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
                             PLDAYS,PBDEBT,PSNAME,PGNAME,PPSNAME:
                             PADD1,PADD2,PSUBRB,PADD4,PPOST:
                             PTELEP,PTELEB,PSEX,PMSTAT,PBDATE:
                             PSAGE,PCONT,PREG,PTYPE:
                             POCCUP,PLDDATE,PMEDI,PPENNO,PPNDTE:
                             PREPAT,PSMOK,PSTAT,PMICRO,PCEASE:
                             PCASE,PAUTOPY,PHIGH1,PHIGH2,PHIGH3:
                             PLOCDOC,PFUNDH,PFNDTB,PTMASPAR,PUSR1:
                             PUSR2,PUSR3,PUSR4,PUSR5,PUSR6:
                             PUYN1,PUYN2,PUYN3,PYRRES,PNKNAME:
                             PNKADD1,PNKADD2,PNKSUBR,PNKADD4,PNKPOST:
                             PNKTELP,PNKTELB,PNKRELP,PLSTINP,PLSTOUT:
                             PNXRAY,PFNDYY,PFNDCG,PDECDTE,PHCNOTES:
                             PDIET,PINITHOS,PHKADUNI,PTMAEMPC,PTMANOKO:
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
          PACK      PFNDMM,PTMASPAR
.
.         Read the Extension File
.
          MOVE      PURNO,KEY8
          CALL      RDPTPRX1
          RETURN    IF NOT OVER
.
.         extension record doesn't exist so write one
.
          CALL      CLMXVARS                * Clear the Extension Variables
          CALL      WRPTPRX1                * Write the Extension Record
          CALL      RDPTPRX1                * Read the Extension Record
.
          RETURN 
.
. ------- previous read -------
.
RDPPRAM2  MOVE      ZERO,OVRCD
          READKP    PATPR1A2;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
                             PLDAYS,PBDEBT,PSNAME,PGNAME,PPSNAME:
                             PADD1,PADD2,PSUBRB,PADD4,PPOST:
                             PTELEP,PTELEB,PSEX,PMSTAT,PBDATE:
                             PSAGE,PCONT,PREG,PTYPE:
                             POCCUP,PLDDATE,PMEDI,PPENNO,PPNDTE:
                             PREPAT,PSMOK,PSTAT,PMICRO,PCEASE:
                             PCASE,PAUTOPY,PHIGH1,PHIGH2,PHIGH3:
                             PLOCDOC,PFUNDH,PFNDTB,PTMASPAR,PUSR1:
                             PUSR2,PUSR3,PUSR4,PUSR5,PUSR6:
                             PUYN1,PUYN2,PUYN3,PYRRES,PNKNAME:
                             PNKADD1,PNKADD2,PNKSUBR,PNKADD4,PNKPOST:
                             PNKTELP,PNKTELB,PNKRELP,PLSTINP,PLSTOUT:
                             PNXRAY,PFNDYY,PFNDCG,PDECDTE,PHCNOTES:
                             PDIET,PINITHOS,PHKADUNI,PTMAEMPC,PTMANOKO:
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
          PACK      PFNDMM,PTMASPAR
.
.         Read the Extension File
.
          CALL      RDPTPRX1
          IF        @OVER
.
.         extension record doesn't exist so write one
.
            CALL      CLMXVARS                * Clear the Extension Variables
            CALL      WRPTPRX1                * Write the Extension Record
            CALL      RDPTPRX1                * Read the Extension Record
          ENDIF
          RETURN
...............................................................................
.
. -----   Read the Master File Extension Record  -----
.
RDPTPRX1  READ      PATPX1A1,PURNO;PURNO,PTMXRDAT,PTMXMEAL,PTMXLGA,PTMXLS:
                             PTMXLSDT,PTMXFHMD,PTMXMHU1,PTMXMHU2,PTMXMHU3:
                             PTMXECNM,PTMXECA1,PTMXECA2,PTMXECA3,PTMXECA4:
                             PTMXECPC,PTMXECPP,PTMXECBP,PTMXECRE:
                             PTMXNRNM,PTMXNRA1,PTMXNRA2,PTMXNRA3,PTMXNRA4:
                             PTMXNRPC,PTMXNRPP,PTMXNRBP,PTMXNRRE:
                             PTMX3BEX,PTMXCARD,PTMXCEXP,PTMXCXMP,PTMXFMLY:
                             PTMXCHNM,PTMXDOFR,PTMXREGP,PTMXGPPC,PTMXSPID:
                             PTMXGPPT,PTMXOSDT,PTMXOPER,PTMXUKDO,PTMXCELL:
                             PTMXADD1,PTMXADD2,PTMXADD3,PTMXADD4,PTMXPOST:
                             PTMXMCCD,PTMXSIN1,PTMXSIN2,PTMXSIN3,PTMXSIN4:
                             PTMXSIN5,PTMXCTIM,PTMXSPAR
          RETURN
.
. -----   Write the Master File Extension Record  -----
.
WRPTPRX1  WRITE     PATPX1A1,KEY8;PURNO,PTMXRDAT,PTMXMEAL,PTMXLGA,PTMXLS:
                             PTMXLSDT,PTMXFHMD,PTMXMHU1,PTMXMHU2,PTMXMHU3:
                             PTMXECNM,PTMXECA1,PTMXECA2,PTMXECA3,PTMXECA4:
                             PTMXECPC,PTMXECPP,PTMXECBP,PTMXECRE:
                             PTMXNRNM,PTMXNRA1,PTMXNRA2,PTMXNRA3,PTMXNRA4:
                             PTMXNRPC,PTMXNRPP,PTMXNRBP,PTMXNRRE:
                             PTMX3BEX,PTMXCARD,PTMXCEXP,PTMXCXMP,PTMXFMLY:
                             PTMXCHNM,PTMXDOFR,PTMXREGP,PTMXGPPC,PTMXSPID:
                             PTMXGPPT,PTMXOSDT,PTMXOPER,PTMXUKDO,PTMXCELL:
                             PTMXADD1,PTMXADD2,PTMXADD3,PTMXADD4,PTMXPOST:
                             PTMXMCCD,PTMXSIN1,PTMXSIN2,PTMXSIN3,PTMXSIN4:
                             PTMXSIN5,PTMXCTIM,PTMXSPAR
          RETURN
+
.

