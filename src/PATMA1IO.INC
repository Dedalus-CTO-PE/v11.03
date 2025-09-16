.
. PATIOMAS.INC
. ------------
. Related FD      : PATMA1FD.INC       PATMX1FD.INC
. Filenames       : patma1af       patmx1af
. Description     : Patient Management System 'Patient Master File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY8    DIM    8        KEY FOR PATMA1A1 & PATMSXA1
.
. Modifications   : 
.
. V10.10.01 15/03/2017  Steve Armstrong  CAR 0833052
.           Added PTMXESPF
. V10.08.01 05/04/2016  Steve Armstrong  CAR 0279181
.           Added PTMAUUID, PTMAUTIM & PTMXUUID
. V10.07.01 06/11/2015  Steve Armstrong  CAR 294154
.           Added PTMXOSMS
. V10.02.01 16/06/2011 Ebon Clements  CAR 239530 
.           Added PTMADCUD, PTMADCUT and PTMADCUU       
. V10.00.01 16/11/2010 Jill Parkinson CAR 231795             
.           Moved PFNDMM and added PTMADCDT                
. V5.09.00 18/01/2001  Pat Dirito                            
.          Added PTMXFILN to IO for PATMX1FD.              
. V5.08.03 26/09/2000  Dean Cramer                           
.          Added PTMXSLAC to IO for PATMX1FD.              
. V5.08.02 15/08/2000  Caleb Sharman                         
.          Changed Health Fund variables to be 8 chars      
. V5.08.01  05/05/2000 Tonii   -  Merged PTMXDATE with PTMXCTIM              
. V5.08.B02 27/04/2000 Tonii   -  Clock date added, PTMXDATE field also added
. V5.08.B01 24/02/2000 Tonii   -  Clock time added, PTMXCTIM field also added
. V5.07.002 23/06/1999 Andrew Peel - Added previous read to second index
. V5.07.001 01/09/1998 Glenn  507 Changes
.******************************************************************************
.                   01/06/89 K.Peak
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
.                   28/10/1993    Justin Coates  (GP Practice changes)
.                   added BKREGPPT
.                   10/12/1993    Ian Rutt  Mt Alvernia
.                   added PTMAEMPC, PTMANOKO, PTMANOKE, PTMADCNO
.                   12/01/94 S. O'Gorman
.                   Modified for new SFORMAT compile
.                   05/10/1995    Howellsy     suht
.                   Added PTMXOSDT & PTMXOPER
.                   24/10/1995    Justin Coates  (SUHT mods)
.                   Added PTMAUKDB, PTMAUKDD, PTMXUKDO
.                   make OPPTMAS1 call OPPTMSX1
. *                 14/02/1997    Howellsy     WHT                            *
. *                 Added Cellular Phone Number & Postal Address              *
. *                 18/02/1998  Steve Armstrong                               *
. *                 Removed SUHT routines for unknown dates.                  *
.
. ------- read to see if record exists -------
.
RDAMAST1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATMA1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          READ      PATMX1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
. ------- positional read -------
.
RDSMAST1  RESET     KEY8
          READ      PATMA1A1,KEY8;;
          RETURN  
.
. ------- full read -------
.
RDMAST1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATMA1A1,KEY8;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                                  PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                                  PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                                  PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                                  PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                                  PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                                  PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
.
.         Read the Extension File
.
          CALL      RDPTMSX1
          GOTO      OVERCOND IF OVER
          RETURN  
.
.
.
UUPTMAS1  UNLOCK    PATMA1A1
          RETURN  
.
. ------- full read -------
.
RLPTMAS1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READL     PATMA1A1,KEY8;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                                  PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                                  PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                                  PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                                  PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                                  PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                                  PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
.
.         Read the Extension File
.
          CALL      RDPTMSX1
          GOTO      OVERCOND IF OVER
          RETURN  
.
. ------- next read -------
.
RDKMAST1  MOVE      ZERO,OVRCD
          READKS    PATMA1A1;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                                  PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                                  PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                                  PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                                  PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                                  PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                                  PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
.
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
.
.         Read the Extension File
.
          MOVE      PURNO,KEY8
          CALL      RDPTMSX1
          IF        @OVER 
.
.           extension record doesn't exist so write one
.
            CALL      CLMXVARS                * Clear the Extension Variables
            CALL      WRPTMSX1                * Write the Extension Record
            CALL      RDPTMSX1                * Read the Extension Record
          ENDIF
          RETURN  
.
. ------- previous read -------
.
RDPMAST1  MOVE      ZERO,OVRCD
          READKP    PATMA1A1;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                             PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                             PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                             PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                             PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                             PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2

          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
.
.         Read the Extension File
.
          MOVE      PURNO,KEY8
          CALL      RDPTMSX1
          IF        @OVER
.
.           extension record doesn't exist so write one
.
            CALL      CLMXVARS                * Clear the Extension Variables
            CALL      WRPTMSX1                * Write the Extension Record
            CALL      RDPTMSX1                * Read the Extension Record
          ENDIF
          RETURN
.
. ------- write with locking -------
.
WRLMAST1  MOVE      PORT,PPORT          ****** Write record with locking
          GOTO      WRMAST1A
.
. ------- write without locking -------
.
WRMAST1   MOVE      SP2,PPORT
.
WRMAST1A  RESET     KEY8
          RESET     PHCNOTES,CHOSINDX
          MOVE      PCASE,ANS
          CMOVE     ANS,PHCNOTES
          WRITE     PATMA1A1,KEY8;KEY8,PPORT,PCHGDTE,PTITL,PHOSP:
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
                                  PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                                  PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                                  PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                                  PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                                  PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                                  PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
.
.         Write to the Extension File
.
          CALL      WRPTMSX1
          RETURN  
.
. ------- update -------
.
UPMAST1   MOVE      SP2,PPORT                *** Release record with update
.
UPLMAST1  MOVE      ZERO,OVRCD                *** Keep record lock with update
.
          RESET     PHCNOTES,CHOSINDX
          MOVE      PCASE,ANS
          CMOVE     ANS,PHCNOTES
          UPDATE    PATMA1A1;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                             PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                             PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                             PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                             PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                             PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
.
.         Update the Extension File
.
          CLOCK     FULLDATE,CPDATE 
          UNPACK    CPDATE,CMON,CDAY,CCENT,CYEAR
          PACK      CPDATE,CCENT,CYEAR,CMON,CDAY
          REP       " 0",CPDATE
          CLOCK     TIME,KEY12
          REP       " 0",KEY12   
          PACK      PTMXCTIM,CPDATE,KEY12
          UPDATE    PATMX1A1;PURNO,PTMXRDAT,PTMXMEAL,PTMXLGA,PTMXLS:
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
                             PTMXSIN5,PTMXCTIM,PTMXSLAC,PTMXFILN,PTMXDEAF:
                             PTMXOSMS,PTMXUUID,PTMXESPF,PTMXSPAR
          RETURN  
.
DEMAST1   RESET     KEY8
          DELETE    PATMA1A1,KEY8
          DELETE    PATMX1A1,KEY8
          RETURN
.
.
. -----   Read the Master File Extension Record  -----
.
RDPTMSX1  READ      PATMX1A1,KEY8;PURNO,PTMXRDAT,PTMXMEAL,PTMXLGA,PTMXLS:
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
                             PTMXSIN5,PTMXCTIM,PTMXSLAC,PTMXFILN,PTMXDEAF:
                             PTMXOSMS,PTMXUUID,PTMXESPF,PTMXSPAR
          RETURN
.
. -----   Write the Master File Extension Record  -----
.
WRPTMSX1  MOVE      PASSCODE,PTMXOPER
          CLOCK     FULLDATE,CPDATE 
          UNPACK    CPDATE,CMON,CDAY,CCENT,CYEAR
          PACK      CPDATE,CCENT,CYEAR,CMON,CDAY
          REP       " 0",CPDATE
          CLOCK     TIME,KEY12
          REP       " 0",KEY12   
          PACK      PTMXCTIM,CPDATE,KEY12
          WRITE     PATMX1A1,KEY8;PURNO,PTMXRDAT,PTMXMEAL,PTMXLGA,PTMXLS:
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
                             PTMXSIN5,PTMXCTIM,PTMXSLAC,PTMXFILN,PTMXDEAF:
                             PTMXOSMS,PTMXUUID,PTMXESPF,PTMXSPAR
          RETURN
.
. ------- positional read -------
.
RSPTMAS2  RESET     KEY8
          READ      PATMA1A2,KEY8;;
          RETURN  
.
. ------- next read -------
.
RKPTMAS2  MOVE      ZERO,OVRCD
          READKS    PATMA1A2;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                             PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                             PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                             PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                             PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                             PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
.
.         Read the Extension File
.
          MOVE      PURNO,KEY8
          CALL      RDPTMSX1
          IF        @OVER 
.
.         extension record doesn't exist so write one
.
            CALL      CLMXVARS                * Clear the Extension Variables
            CALL      WRPTMSX1                * Write the Extension Record
            CALL      RDPTMSX1                * Read the Extension Record
          ENDIF
          RETURN  
.
. ------- previous read -------
.
RPPTMAS2  MOVE      ZERO,OVRCD
          READKP    PATMA1A2;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                             PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                             PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                             PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                             PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                             PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
.
.         Read the Extension File
.
          MOVE      PURNO,KEY8
          CALL      RDPTMSX1
          IF        @OVER
.
.         extension record doesn't exist so write one
.
            CALL      CLMXVARS                * Clear the Extension Variables
            CALL      WRPTMSX1                * Write the Extension Record
            CALL      RDPTMSX1                * Read the Extension Record
          ENDIF
          RETURN  
.
CLMXVARS  UNPACK    SP30,PTMXRDAT,PTMXLGA
          MOVE      SP30,PTMXMEAL
          UNPACK    SP30,PTMXLS,PTMXLSDT,PTMXFHMD,PTMXMHU1,PTMXMHU2,PTMXMHU3
          PACK      PTMXECA1,SP30,SP30
          PACK      PTMXECA2,SP30,SP30
          PACK      PTMXECA3,SP30,SP30
          PACK      PTMXECA4,SP30,SP30
          UNPACK    SP30,PTMXECPC
          UNPACK    SP30,PTMXECPP,PTMXECBP
          MOVE      SP10,PTMXECRE
          MOVE      SP30,PTMXNRNM
          PACK      PTMXNRA1,SP30,SP30
          PACK      PTMXNRA2,SP30,SP30
          PACK      PTMXNRA3,SP30,SP30
          PACK      PTMXNRA4,SP30,SP30
          UNPACK    SP30,PTMXNRPC,PTMX3BEX
          UNPACK    SP30,PTMXNRPP,PTMXNRBP
          MOVE      SP10,PTMXNRRE
          UNPACK    SP30,PTMXCARD,PTMXCEXP
          UNPACK    SP30,PTMXCXMP,PTMXFMLY
          UNPACK    SP10,PTMXSIN1,PTMXSIN2,PTMXSIN3
          UNPACK    SP10,PTMXSIN4,PTMXSIN5
          PACK      PTMXCHNM,SP30
          UNPACK    SP30,PTMXDOFR,PTMXREGP,PTMXGPPC
          PACK      PTMXSPID,SP30
          PACK      PTMXDEAF,SP30
          MOVE      ZERO,PTMXOSMS
          MOVE      SP10,PTMXUUID
          MOVE      SP2,PTMXESPF
          PACK      PTMXSPAR,SP30,SP30
          MOVE      " 1",PTMXGPPT
          MOVE      SP10,PTMXOSDT
          MOVE      SP1,PTMXUKDO
          MOVE      SP20,PTMXCELL
          PACK      PTMXADD1,SP20,SP20
          PACK      PTMXADD2,SP20,SP20
          PACK      PTMXADD3,SP20,SP20
          PACK      PTMXADD4,SP20,SP20
          MOVE      SP20,PTMXPOST
          MOVE      " 0",PTMXMCCD
          MOVE      SP70,PTMXSIN1
          MOVE      SP70,PTMXSIN2
          MOVE      SP70,PTMXSIN3
          MOVE      SP70,PTMXSIN4
          MOVE      SP70,PTMXSIN5
          MOVE      SP70,PTMXCTIM
          MOVE      SP70,PTMXSLAC
          MOVE      SP70,PTMXFILN
          MOVE      SP70,PTMXOSMS
          MOVE      SP70,PTMXUUID
          MOVE      SP70,PTMXESPF
          RETURN
.
. ------- full read -------
.
RDPTMAS2  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATMA1A2,KEY8;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                                  PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                                  PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                                  PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                                  PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                                  PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                                  PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
          RETURN  
.
. ------- positional read -------
.
RDSMAST3  RESET     KEY18
          READ      PATMA1A3,KEY18;;
          RETURN  
.
. ------- next read -------
.
RDKMAST3  MOVE      ZERO,OVRCD
          READKS    PATMA1A3;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                             PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                             PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                             PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                             PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                             PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
          RETURN  
.
. ------- previous read -------
.
RDPMAST3  MOVE      ZERO,OVRCD
          READKP    PATMA1A3;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                             PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                             PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                             PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                             PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                             PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2

          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
          RETURN
.
. ------- positional read -------
.
RDSMAST4  RESET     KEY27
          READ      PATMA1A4,KEY27;;
          RETURN
.
. ------- next read -------
.
RDKMAST4  MOVE      ZERO,OVRCD
          READKS    PATMA1A4;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                             PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                             PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                             PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                             PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                             PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
.
.         Read the Extension File
.         
          MOVE      PURNO,KEY8
          CALL      RDPTMSX1
          IF        @OVER
.
.           extension record doesn't exist so write one
.
            CALL      CLMXVARS                * Clear the Extension Variables
            CALL      WRPTMSX1                * Write the Extension Record
            CALL      RDPTMSX1                * Read the Extension Record
          ENDIF
          RETURN
.
. ------- previous read -------
.
RDPMAST4  MOVE      ZERO,OVRCD
          READKP    PATMA1A4;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
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
                             PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                             PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                             PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                             PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                             PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                             PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
.
.         Read the Extension File
.
          MOVE      PURNO,KEY8
          CALL      RDPTMSX1
          IF        @OVER
.
.           extension record doesn't exist so write one
.
            CALL      CLMXVARS                * Clear the Extension Variables
            CALL      WRPTMSX1                * Write the Extension Record
            CALL      RDPTMSX1                * Read the Extension Record
          ENDIF
          RETURN
.
. ------- full read -------
.
RDMAST4   MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      PATMA1A1,KEY27;PURNO,PPORT,PCHGDTE,PTITL,PHOSP:
                                  PLDAYS,PBDEBT,PSNAME,PGNAME,PPSNAME:
                                  PADD1,PADD2,PSUBRB,PADD4,PPOST:
                                  PTELEP,PTELEB,PSEX,PMSTAT,PBDATE:
                                  PSAGE,PCONT,PREG,PTYPE:
                                  POCCUP,PLDDATE,PMEDI,PPENNO,PPNDTE:
                                  PREPAT,PSMOK,PSTAT,PMICRO,PCEASE:
                                  PCASE,PAUTOPY,PHIGH1,PHIGH2,PHIGH3:
                                  PLOCDOC,PFNDTB,PTMASPAR,PUSR1:
                                  PUSR2,PUSR3,PUSR4,PUSR5,PUSR6:
                                  PUYN1,PUYN2,PUYN3,PYRRES,PNKNAME:
                                  PNKADD1,PNKADD2,PNKSUBR,PNKADD4,PNKPOST:
                                  PNKTELP,PNKTELB,PNKRELP,PLSTINP,PLSTOUT:
                                  PNXRAY,PFNDYY,PFNDCG,PDECDTE,PHCNOTES:
                                  PDIET,PINITHOS,PHKADUNI,PTMAEMPC,PTMANOKO:
                                  PTMANOKE,PTMADCNO,PTMAUKDB,PTMAUKDD:
                                  PFNDMM,PTMADCDT,PTMAHCP1,PTMAHCL1,PTMAHCG1:
                                  PTMAHCP2,PTMAHCL2,PTMAHCG2,PTMAHCP3,PTMAHCL3:
                                  PTMAHCG3,PTMAHCP4,PTMAHCL4,PTMAHCG4,PTMAHCP5:
                                  PTMAHCL5,PTMAHCG5,PTMASNAM,PTMADCUD,PTMADCUT:
                                  PTMADCUU,PTMAUUID,PTMAUTIM,PTMASPA2
          GOTO      OVERCOND IF OVER
          RESET     PHCNOTES,CHOSINDX
          MOVE      PHCNOTES,ANS
          MOVE      ANS,PCASE
.
.         Read the Extension File
.
          PACK      KEY8,PURNO,SP70
          CALL      RDPTMSX1
          GOTO      OVERCOND IF OVER
          RETURN
.
