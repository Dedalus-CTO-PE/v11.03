.
.******************************************************************************
.*       V11.03.05 28/09/2023  J.Tan           TSK 0931613                    *
.*                 Mod for ABF Sub-Acute Palliative phase of care             *
.*       V11.03.04 13/06/2023  J.Tan           TSK 0923703                    *
.*                 Mod to use 6 decimal places for ABF calculations           *
.*       V11.03.03 28/04/2023  J.Tan           TSK 0930981                    *
.*                 Removed REFENCNT                                           *
.*       V11.03.02 27/04/2023  J.Tan           TSK 0930981                    *
.*                 Increased size of array for  ENCRNUMB,CONTFLDS             *
.*       V11.03.01 19/04/2023  J.Tan           TSK 0930981                    *
.*                 Increased size of array for  REFENCNT                      *
.*       V11.01.02 22/08/2022  J.Tan           TSK 0906597                    *
.*                 Added variables for ABF/NWAU calculation claim code Indc2=N*
.*       V11.01.01 31/08/2021  J.Tan           TSK 0905305                    *
.*                 Mod for AECC Class (2021/2022 changes)                     *
.******************************************************************************
ASPAFLAG   FORM      1
ANEPFLAG   FORM      1
ARESFLAG   FORM      1
ACCMFLAG   FORM      1
ATREFLAG   FORM      1
ANMCAMNT   FORM      10.4
ASPAAMNT   FORM      10.4
AINDAMNT   FORM      10.4
ARESAMNT   FORM      10.4
ARTAMNTS   FORM      10.4
ATAAMNTS   FORM      10.4
ADIAAMNT   FORM      10.4
AICUAMNT   FORM      10.4
AHACAMNT   FORM      10.4
AC19AMNT   FORM      10.4
AECAAMNT   FORM      10.4
APPSAMNT   FORM      10.4
AACCAMNT   FORM      10.4
.
ABFCHRGE   FORM      12.6
COVIDFLG   FORM      1
ABFFLAG    FORM      1           * set 1 for Printing ABF invoice
ABFDESC    DIM       20
PRINTABF   FORM      1
PRIVFLAG   FORM      1
UQUAFLAG   FORM      1
.DRGVER     DIM       3
.
.
ADJMDESC   DIM       80
.
FILENAMO   DIM       8
FORM104    FORM      10.4
FORM106    FORM      10.6

F106A      FORM      10.6
F106B      FORM      10.6
F106C      FORM      10.6
F106D      FORM      10.6

F4P3       FORM       4.3
F2P2       FORM       2.2
.
.
CNTRTYPE   FORM      1
.DMDCCODE   DIM       4
SKEY39     DIM       39
COMPLVAL   FORM      10.4[999]
CHLSCORE   FORM      3
PDRGCODE   DIM       4
DRGPTYPE   DIM       3
HACGROUP   DIM       3
ICUHOURS   FORM      10.4
LOSNDAYS   FORM      8
MDCNUMBR   DIM       4            * MDC Number
MEDSTAFF   FORM      1

NWAUAMNT   FORM      12.6
TUAAMNTS   FORM      10.4
NEPAMNTS   FORM      10.4
PWAMOUNT   FORM      10.4
PSYCBDAY   FORM      4
HACCOUNT   FORM      3
PCARETYP   DIM       2
PCAREFLG   FORM      1
.
CHGCCLSS   FORM      1
PRDEPSOD   DIM       2
PRDSDATE   DIM       8
PRDEDATE   DIM       8
PRDCCLSS   DIM       3           * Phase of care class for Palliative care
NSNAPFLG   FORM      1
.
BASELVAL   FORM      10.2        * Baseline
EMRADVAL   FORM      10.2        * Emergency Admission
ICUHRVAL   FORM      10.2        * ICU Hours
ADTRNVAL   FORM      10.2        * Admission transfer status
DRGTYVAL   FORM      10.2        * DRG Type
PTSEXVAL   FORM      10.2        * Patient Sex
CHSCOVAL   FORM      10.2        * Charlson scores
PTAGEVAL   FORM      10.2        * Age
MDCVALUE   FORM      10.2        * MDC
.
.
ADJTYVAL   FORM      3           * Adjustment type value
.
ENCOUNTR   DIM       8
MISCPRGM   FORM      2           * Program Type
MREFFLAG   FORM      1           * flag Calendar Month Referral
TIERCODE   DIM       3
RDEPCODE   DIM       5
ENCRNUMB   DIM       17[999]     * array of Visit no/Encounter
CONTFLDS   DIM       62[999]     * array of Contact fields
CONTNUMB   FORM      3
ECNTNUMB   FORM      3
.
EPISURNO   DIM       8           * Patient Idenfifier
EPISHOSP   DIM       3           * Organisation Identifier
EPISENCT   DIM       8           * Referral Identifier
EPISCAMP   DIM       6           * Episode Campus code
EPISIDCD   DIM       8           * Episode Identifier
EPISACLS   DIM       3           * Contact Account Class
EPISPRGM   DIM       3           * Episode Program/Stream
EPISCLIN   DIM       6           * Episode Clinic Identifier
EPISDATE   DIM       8           * Contact Date
EPISDMOD   DIM       3           * Contact Delivery mode
EPISDSET   DIM       3           * Contact Delivery setting
EPISINDI   DIM       1           * Contact Indigenaous status
EPISSESS   DIM       2           * Contact Session type
.
