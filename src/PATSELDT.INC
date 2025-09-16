.
. PATSELDT.PBL
. ------------
.
.        This include contains the variables used specially for the
.        include PATSELFN.PBL
.
FEDSYS   FORM      1         * Ending system id
FSTSYS   FORM      1         * Starting system id
.
FEDDEPT  DIM       3         * Ending outpatient department code
FSTDEPT  DIM       3         * Starting outpatient department code
.
FEDSITE  DIM       6         * Ending outpatient site
FSTSITE  DIM       6         * Starting outpatient site
.
FUAAE    FORM      1         * A + E        system setting (0=off, 1=on)
FUBIL    FORM      1         * Pat. Billing system setting (0=off, 1=on)
FUINP    FORM      1         * Inpatients   system setting (0=off, 1=on)
FUMAM    FORM      1         * Mammography  system setting (0=off, 1=on)
FUOUT    FORM      1         * Gen. Outp.   system setting (0=off, 1=on)
FUOUTP   FORM      1         * Outpatients  system setting (0=off, 1=on)
FURAD    FORM      1         * Radiology    system setting (0=off, 1=on)
.
FMXOPT   FORM      1         * Maximum allowed option in GETFN000
FSLOPT   FORM      1         * Selected option in GETFN000
.
CODEO    INIT      "O "      * Outpatient Department category in codes file
