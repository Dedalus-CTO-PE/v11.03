.
.******************************************************************************
.*        Mods:                                                               *
.*        V5.08.04  16/08/2000  Caleb Sharman                                 *
.*                  Changed Health Fund variables to be 8 chars               *
.*                                                                            *
.******************************************************************************
.         INC       PATAM1IO.INC
.
.         FILE  I/O REQUESTS FOR ALL PATIENT MASTER AUDIT FILES
.
.         MODS:
.              V5.07.02   20/09/1999  Andrew Peel
.                         Changed CRMAUD from a PREP to an OPEN
.              V5.07.B01  20/11/1998  Nicole Harrington
.                         Changed for 5.07
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.
.         NOTE:-
.                  UPAAAX  IS THE WRITE CALL
.                  RDAAAX  IS THE READ CALL
.                  RDSAAAX  IS THE READ SECTOR 0 CALL
.                  WRSAAAX  IS THE WRITE ONE TO SECTOR 0 CALL
.
RDSMAUD   READ       PATAM1A1,ZERO;SECTOR
          RETURN
.
CRMAUD    
          CLOSE      PATAM1A1
          OPEN       PATAM1A1,"patam1af"
          WRITE      PATAM1A1,ZERO;SEC1
          WEOF       PATAM1A1,SEC1
          RETURN
.
RDMAUD    READ       PATAM1A1,SECTOR;ADD,AMM,ACC,AYY,TIMEIS,ACTION,OPERCODE:
                              SPURNO,SPPORT,SPCHGDTE,SPTITL,SPHOSP,SPLDAYS:
                              SPBDEBT,SPSNAME,SPGNAME,SPPSNAME,SPADD1,SPADD2:
                              SPSUBRB,SPADD4
          ADD        ONE,SECTOR
          READ       PATAM1A1,SECTOR;SPPOST,SPTELEP,SPTELEB,SPSEX:
                             SPMSTAT,SPBDATE,SPSAGE,SPCONT,SPREG,SPTYPE:
                             SPOCCUP,SPLDDATE,SPMEDI,SPPENNO,SPPNDTE:
                             SPREPAT,SPSMOK,SPSTAT:
                             SPMICRO,SPCEASE,SPCASE,SPAUTOPY,SPHIGH1:
                             SPHIGH2,SPHIGH3,SPLOCDOC:
                             SPFUNDH,SPFNDTB,SPFNDMM,SPUSR1:
                             SPUSR2,SPUSR3,SPUSR4,SPUSR5,SPUSR6,SPUYN1:
                             SPUYN2,SPUYN3,SPYRRES
          ADD        ONE,SECTOR
          READ       PATAM1A1,SECTOR;SPNKNAME,SPNKADD1,SPNKADD2:
                             SPNKSUBR,SPNKADD4,SPNKPOST,SPNKTELP,SPNKTELB:
                             SPNKRELP,SPLSTINP,SPLSTOUT,SPNXRAY,SPFNDCG:
                             SPDECDTE
          ADD        ONE,SECTOR
          READ       PATAM1A1,SECTOR;SPHCNOTE,SPDIET,SPINITHO,SPDOR,SPREGP:
                             SPGPPC,SPGPPT,SPCARD,SPCEXP,SPCXMP,SPFMLY,SPCELL:
                             SPOSMS
          RETURN
.
WRMAUD    CLOCK      TIME,TIMEIS
          READ       PATAM1A1,ZERO;SECTOR
.
          WRITE      PATAM1A1,SECTOR;CDD,CMM,CCC,CYY,TIMEIS,ACTION,PASSCODE:
                              SPURNO,SPPORT,SPCHGDTE,SPTITL,SPHOSP,SPLDAYS:
                              SPBDEBT,SPSNAME,SPGNAME,SPPSNAME,SPADD1,SPADD2:
                              SPSUBRB,SPADD4
          ADD        ONE,SECTOR
          WRITE      PATAM1A1,SECTOR;SPPOST,SPTELEP,SPTELEB,SPSEX:
                             SPMSTAT,SPBDATE,SPSAGE,SPCONT,SPREG,SPTYPE:
                             SPOCCUP,SPLDDATE,SPMEDI,SPPENNO,SPPNDTE:
                             SPREPAT,SPSMOK,SPSTAT:
                             SPMICRO,SPCEASE,SPCASE,SPAUTOPY,SPHIGH1:
                             SPHIGH2,SPHIGH3,SPLOCDOC:
                             SPFUNDH,SPFNDTB,SPFNDMM,SPUSR1:
                             SPUSR2,SPUSR3,SPUSR4,SPUSR5,SPUSR6,SPUYN1:
                             SPUYN2,SPUYN3,SPYRRES
          ADD        ONE,SECTOR
          WRITE      PATAM1A1,SECTOR;SPNKNAME,SPNKADD1,SPNKADD2:
                              SPNKSUBR,SPNKADD4,SPNKPOST,SPNKTELP,SPNKTELB:
                              SPNKRELP,SPLSTINP,SPLSTOUT,SPNXRAY,SPFNDCG:
                              SPDECDTE
          ADD        ONE,SECTOR
          WRITE      PATAM1A1,SECTOR;SPHCNOTE,SPDIET,SPINITHO,SPDOR,SPREGP:
                              SPGPPC,SPGPPT,SPCARD,SPCEXP,SPCXMP,SPFMLY,SPCELL:
                              SPOSMS
          ADD        ONE,SECTOR
          WEOF       PATAM1A1,SECTOR
          WRITE      PATAM1A1,ZERO;SECTOR
          RETURN
+
.

