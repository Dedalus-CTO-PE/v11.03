.
. OPRDECIO.INC
. ------------
. Filename       :  oprdetcf.dat
. Description    :  Operation Usage Detail - File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY11     DIM      11
.
. Modifications  :  04/06/1992    Justin Coates
.                   made write use file variables and not KEY11
.
RAOPDEC1  MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      OPRDETC1,KEY11;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPDEC1  MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      OPRDETC1,KEY11;;
          RETURN  
.
RDOPDEC1  MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      OPRDETC1,KEY11;OPDCUNIQ,OPDCTEAM,OPDCOTM1,OPDCOTM2,OPDCOTM3:
                                   OPDCOTM4,OPDCICD1,OPDCICD2,OPDCICD3,OPDCICD4:
                                   OPDCICD5,OPDCICD6,OPDCCONT,OPDCDURA,OPDCNOOP:
                                   OPDCIMC1,OPDCIMC2,OPDCIMC3,OPDCIMC4,OPDCIMC5:
                                   OPDCIMC6,OPDCIMC7,OPDCIMC8,OPDCIMC9,OPDCIM10:
                                   OPDCIMQ1,OPDCIMQ2,OPDCIMQ3,OPDCIMQ4,OPDCIMQ5:
                                   OPDCIMQ6,OPDCIMQ7,OPDCIMQ8,OPDCIMQ9,OPDCIQ10:
                                   OPDCUSR1,OPDCUSR2,OPDCUSR3,OPDCUSR4,OPDCUSR5:
                                   OPDCUSR6,OPDCUSR7,OPDCUSR8,OPDCSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPDEC1  MOVE      ZERO,OVRCD
          READKS    OPRDETC1;OPDCUNIQ,OPDCTEAM,OPDCOTM1,OPDCOTM2,OPDCOTM3:
                             OPDCOTM4,OPDCICD1,OPDCICD2,OPDCICD3,OPDCICD4:
                             OPDCICD5,OPDCICD6,OPDCCONT,OPDCDURA,OPDCNOOP:
                             OPDCIMC1,OPDCIMC2,OPDCIMC3,OPDCIMC4,OPDCIMC5:
                             OPDCIMC6,OPDCIMC7,OPDCIMC8,OPDCIMC9,OPDCIM10:
                             OPDCIMQ1,OPDCIMQ2,OPDCIMQ3,OPDCIMQ4,OPDCIMQ5:
                             OPDCIMQ6,OPDCIMQ7,OPDCIMQ8,OPDCIMQ9,OPDCIQ10:
                             OPDCUSR1,OPDCUSR2,OPDCUSR3,OPDCUSR4,OPDCUSR5:
                             OPDCUSR6,OPDCUSR7,OPDCUSR8,OPDCSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPDEC1  MOVE      ZERO,OVRCD
          READKP    OPRDETC1;OPDCUNIQ,OPDCTEAM,OPDCOTM1,OPDCOTM2,OPDCOTM3:
                             OPDCOTM4,OPDCICD1,OPDCICD2,OPDCICD3,OPDCICD4:
                             OPDCICD5,OPDCICD6,OPDCCONT,OPDCDURA,OPDCNOOP:
                             OPDCIMC1,OPDCIMC2,OPDCIMC3,OPDCIMC4,OPDCIMC5:
                             OPDCIMC6,OPDCIMC7,OPDCIMC8,OPDCIMC9,OPDCIM10:
                             OPDCIMQ1,OPDCIMQ2,OPDCIMQ3,OPDCIMQ4,OPDCIMQ5:
                             OPDCIMQ6,OPDCIMQ7,OPDCIMQ8,OPDCIMQ9,OPDCIQ10:
                             OPDCUSR1,OPDCUSR2,OPDCUSR3,OPDCUSR4,OPDCUSR5:
                             OPDCUSR6,OPDCUSR7,OPDCUSR8,OPDCSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPDEC1  UPDATE    OPRDETC1;OPDCUNIQ,OPDCTEAM,OPDCOTM1,OPDCOTM2,OPDCOTM3:
                             OPDCOTM4,OPDCICD1,OPDCICD2,OPDCICD3,OPDCICD4:
                             OPDCICD5,OPDCICD6,OPDCCONT,OPDCDURA,OPDCNOOP:
                             OPDCIMC1,OPDCIMC2,OPDCIMC3,OPDCIMC4,OPDCIMC5:
                             OPDCIMC6,OPDCIMC7,OPDCIMC8,OPDCIMC9,OPDCIM10:
                             OPDCIMQ1,OPDCIMQ2,OPDCIMQ3,OPDCIMQ4,OPDCIMQ5:
                             OPDCIMQ6,OPDCIMQ7,OPDCIMQ8,OPDCIMQ9,OPDCIQ10:
                             OPDCUSR1,OPDCUSR2,OPDCUSR3,OPDCUSR4,OPDCUSR5:
                             OPDCUSR6,OPDCUSR7,OPDCUSR8,OPDCSPAR
          RETURN
.
WROPDEC1  RESET     KEY11
          WRITE     OPRDETC1,KEY11;OPDCUNIQ,OPDCTEAM,OPDCOTM1,OPDCOTM2,OPDCOTM3:
                                   OPDCOTM4,OPDCICD1,OPDCICD2,OPDCICD3,OPDCICD4:
                                   OPDCICD5,OPDCICD6,OPDCCONT,OPDCDURA,OPDCNOOP:
                                   OPDCIMC1,OPDCIMC2,OPDCIMC3,OPDCIMC4,OPDCIMC5:
                                   OPDCIMC6,OPDCIMC7,OPDCIMC8,OPDCIMC9,OPDCIM10:
                                   OPDCIMQ1,OPDCIMQ2,OPDCIMQ3,OPDCIMQ4,OPDCIMQ5:
                                   OPDCIMQ6,OPDCIMQ7,OPDCIMQ8,OPDCIMQ9,OPDCIQ10:
                                   OPDCUSR1,OPDCUSR2,OPDCUSR3,OPDCUSR4,OPDCUSR5:
                                   OPDCUSR6,OPDCUSR7,OPDCUSR8,OPDCSPAR
          RETURN  
.
DEOPDEC1  RESET     KEY11
          DELETE    OPRDETC1,KEY11
          RETURN
.
.      Audits
.
ASOPDEC   MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRAUDDC,KEY19;;
          RETURN  
.
AKOPDEC   MOVE      ZERO,OVRCD
          READKS    OPRAUDDC;OPDCAUDD,OPDCAUDT,OPDCAUDP,OPDCAUDR,OPDCAUDS:
                             OPDCAUDO,OPDCUNIQ,OPDCTEAM:
                                  OPDCOTM1,OPDCOTM2,OPDCOTM3,OPDCOTM4:
                                  OPDCICD1,OPDCICD2,OPDCICD3,OPDCICD4:
                                  OPDCICD5,OPDCICD6,OPDCCONT,OPDCDURA:
                                  OPDCNOOP:
                                  OPDCIMC1,OPDCIMC2,OPDCIMC3,OPDCIMC4,OPDCIMC5:
                                  OPDCIMC6,OPDCIMC7,OPDCIMC8,OPDCIMC9,OPDCIM10:
                                  OPDCIMQ1,OPDCIMQ2,OPDCIMQ3,OPDCIMQ4,OPDCIMQ5:
                                  OPDCIMQ6,OPDCIMQ7,OPDCIMQ8,OPDCIMQ9,OPDCIQ10:
                                  OPDCUSR1,OPDCUSR2,OPDCUSR3,OPDCUSR4,OPDCUSR5:
                                   OPDCUSR6,OPDCUSR7,OPDCUSR8,OPDCSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
AWOPDEC   RESET     KEY19
          WRITE     OPRAUDDC,KEY19;KEY19,OPDCAUDS,OPDCAUDO:
                                   OPDCUNIQ,OPDCTEAM,OPDCOTM1,OPDCOTM2:
                                   OPDCOTM3,OPDCOTM4,OPDCICD1,OPDCICD2:
                                   OPDCICD3,OPDCICD4,OPDCICD5,OPDCICD6:
                                   OPDCCONT,OPDCDURA,OPDCNOOP:
                                  OPDCIMC1,OPDCIMC2,OPDCIMC3,OPDCIMC4,OPDCIMC5:
                                  OPDCIMC6,OPDCIMC7,OPDCIMC8,OPDCIMC9,OPDCIM10:
                                  OPDCIMQ1,OPDCIMQ2,OPDCIMQ3,OPDCIMQ4,OPDCIMQ5:
                                  OPDCIMQ6,OPDCIMQ7,OPDCIMQ8,OPDCIMQ9,OPDCIQ10:
                                   OPDCUSR1,OPDCUSR2,OPDCUSR3:
                                   OPDCUSR4,OPDCUSR5,OPDCUSR6,OPDCUSR7:
                                   OPDCUSR8,OPDCSPAR
          RETURN  
.
AUOPDEC   UPDATE    OPRAUDDC;OPDCAUDD,OPDCAUDT,OPDCAUDP,OPDCAUDR,OPDCAUDS:
                             OPDCAUDO:
                                   OPDCUNIQ,OPDCTEAM,OPDCOTM1,OPDCOTM2:
                                   OPDCOTM3,OPDCOTM4,OPDCICD1,OPDCICD2:
                                   OPDCICD3,OPDCICD4,OPDCICD5,OPDCICD6:
                                   OPDCCONT,OPDCDURA,OPDCNOOP:
                                   OPDCIMC1,OPDCIMC2,OPDCIMC3,OPDCIMC4,OPDCIMC5:
                                  OPDCIMC6,OPDCIMC7,OPDCIMC8,OPDCIMC9,OPDCIM10:
                                  OPDCIMQ1,OPDCIMQ2,OPDCIMQ3,OPDCIMQ4,OPDCIMQ5:
                                  OPDCIMQ6,OPDCIMQ7,OPDCIMQ8,OPDCIMQ9,OPDCIQ10:
                                   OPDCUSR4,OPDCUSR5,OPDCUSR6,OPDCUSR7:
                                   OPDCUSR8,OPDCSPAR
          RETURN  
.
ADOPDEC   RESET     KEY19
          DELETE    OPRAUDDC,KEY19
          RETURN
...............................................................................
