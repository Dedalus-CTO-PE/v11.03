.  **********************************************************************
.  *                                                                    *
.  *     Include Name : CIACONTD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Casemix Generation  *
.  *                    Control File CGI variables & CIACONTM vars      *
.  *                                                                    *
.  *     Sectors      : 64,83 & 100                                     *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  *      V9.03.00  18.11.2003 Pat Dirito    CAR 00000                  *
.  *                Created include                                     *
.  **********************************************************************
.  ****************************************************************************
.  *** Vars ***
.
.
.  ****************************************************************************
.  Sector 64 
.
CIACN001  DIM       4      * Current Year                       
CIACN002  DIM       2      * Current Period                     
CIACN003  DIM       30     * Directory
CIACN004  DIM       1      * Audit File Indicator 1 (ccsepsaf)
CIACN005  DIM       1      * Audit File Indicator 2 (ccsiadaf)
CIACN006  DIM       1      * Audit File Indicator 3 (ceapscaf)
CIACN007  DIM       1      * Audit File Indicator 4 (ceatrnaf)
CIACN008  DIM       1      * Audit File Indicator 5
CIACN009  DIM       1      * Audit File Indicator 6
CIACN010  DIM       1      * Audit File Indicator 7
CIACN011  DIM       1      * Audit File Indicator 8
CIACN012  DIM       1      * Audit File Indicator 9
CIACN013  DIM       1      * Audit File Indicator 10
CIACN014  DIM       4      * Last Archive Restored
CIACN015  DIM       8      * Password             
CIACN016  DIM       10     * Cost Component Description 1
CIACN017  DIM       10     * Cost Component Description 2
CIACN018  DIM       10     * Cost Component Description 3
CIACN019  DIM       10     * Cost Component Description 4
CIACN020  DIM       10     * Cost Component Description 5
CIACN021  DIM       10     * Acc Income Component Description 1
CIACN022  DIM       10     * Acc Income Component Description 2
CIACN023  DIM       10     * Acc Income Component Description 3
CIACN024  DIM       10     * Misc Income Component Description 1
CIACN025  DIM       10     * Misc Income Component Description 2
CIACN026  DIM       10     * Misc Income Component Description 3
CIACN027  DIM       7      * Min. Hrs. for Valid Transfer Record 
CIACN028  DIM       1      * Calc Days Mapped as HRS/24 0=No 1=Yes
CIACN029  DIM       1      * Theatre MBS File 0=Billing (patdtraf)
CIACN030  DIM       1      * Cost Component 1 Fixed=0 Vari=1
CIACN031  DIM       1      * Cost Component 2 Fixed=0 Vari=1
CIACN032  DIM       1      * Cost Component 3 Fixed=0 Vari=1
CIACN033  DIM       1      * Cost Component 4 Fixed=0 Vari=1
CIACN034  DIM       1      * Cost Component 5 Fixed=0 Vari=1
CIACN035  DIM       10     * Theatre Analysis Time 1 Name
CIACN036  DIM       10     * Theatre Analysis Time 2 Name
CIACN037  DIM       10     * Theatre Analysis Time 3 Name
CIACN038  DIM       10     * Theatre Analysis Time 4 Name
CIACN039  DIM       2      * Theatre Analysis Time 1 From Time
CIACN040  DIM       2      * Theatre Analysis Time 2 From Time
CIACN041  DIM       2      * Theatre Analysis Time 3 From Time
CIACN042  DIM       2      * Theatre Analysis Time 4 From Time
CIACN043  DIM       2      * Theatre Analysis Time 1 To Time
CIACN044  DIM       2      * Theatre Analysis Time 2 To Time
CIACN045  DIM       2      * Theatre Analysis Time 3 To Time
CIACN046  DIM       2      * Theatre Analysis Time 4 To Time
.
. Sector 83
. 
CIACN101  DIM       9      * Vic. Casemix Fix Grant per WIES
CIACN102  DIM       9      * Vic. Casemix Variable Grant per WIES
CIACN103  DIM       9      * Vic. Casemix Pub. Medical per WIES
CIACN104  DIM       9      * Vic. Casemix Rural per WIES
CIACN105  DIM       1      * Vic. Casemix Fix Grant Inc. Comp.
CIACN106  DIM       1      * Vic. Casemix Variable Grant Inc. Comp.
CIACN107  DIM       1      * Vic. Casemix Pub. Medical Inc. Comp.
CIACN108  DIM       1      * Vic. Casemix Rural Inc. Comp.
CIACN109  DIM       3      * Vic. Casemix Code Discharge Deceased
CIACN110  DIM       3      * Vic. Casemix Code Discharge Transfer
CIACN111  DIM       3      * Vic. Casemix Code Admission Emergency
CIACN112  DIM       9      * Vic. Casemix Renal Dialysis per Day
CIACN113  DIM       9      * Vic. Casemix Nursing Home per Day
CIACN114  DIM       1      * Vic. Casemix Renal Dialys Inc. Comp.
CIACN115  DIM       1      * Vic. Casemix Nursing Home Inc. Comp.
.
. WIES4 Parameters
.
CIACN116  DIM       9      * Vic. Casemix Fix Grant per WIES4
CIACN117  DIM       9      * Vic. Casemix Variable Grant per WIES4
CIACN118  DIM       9      * Vic. Casemix Rural per WIES4
CIACN119  DIM       1      * Vic. Casemix Fix Grant Inc. Comp.
CIACN120  DIM       1      * Vic. Casemix Variable Grant Inc. Comp.
CIACN121  DIM       1      * Vic. Casemix Rural Inc. Comp.
CIACN122  DIM       9      * Vic. Casemix Renal Dialysis per Day
CIACN123  DIM       9      * Vic. Casemix Nursing Home per Day
CIACN124  DIM       1      * Vic. Casemix Renal Dialys Inc. Comp.
CIACN125  DIM       1      * Vic. Casemix Nursing Home Inc. Comp.
CIACN126  DIM       9      * Vic. Casemix Pub. Medical per WIES4
CIACN127  DIM       1      * Vic. Casemix Pub. Medical Inc. Comp.
.
. WIES5 Parameters
.
CIACN128  DIM       9      * Vic. Casemix Fix Grant per WIES4
CIACN129  DIM       9      * Vic. Casemix Variable Grant per WIES4
CIACN130  DIM       9      * Vic. Casemix Rural per WIES4
CIACN131  DIM       1      * Vic. Casemix Fix Grant Inc. Comp.
CIACN132  DIM       1      * Vic. Casemix Variable Grant Inc. Comp.
CIACN133  DIM       1      * Vic. Casemix Rural Inc. Comp.
CIACN134  DIM       9      * Vic. Casemix Renal Dialysis per Day
CIACN135  DIM       9      * Vic. Casemix Nursing Home per Day
CIACN136  DIM       1      * Vic. Casemix Renal Dialys Inc. Comp.
CIACN137  DIM       1      * Vic. Casemix Nursing Home Inc. Comp.
CIACN138  DIM       9      * Vic. Casemix Pub. Medical per WIES4
CIACN139  DIM       1      * Vic. Casemix Pub. Medical Inc. Comp.
.
. WIES6 Parameters
.
CIACN140  DIM       9      * Vic. Casemix Fix Grant per WIES6
CIACN141  DIM       9      * Vic. Casemix Variable Grant per WIES6
CIACN142  DIM       9      * Vic. Casemix Rural per WIES6
CIACN143  DIM       1      * Vic. Casemix Fix Grant Inc. Comp.
CIACN144  DIM       1      * Vic. Casemix Variable Grant Inc. Comp.
CIACN145  DIM       1      * Vic. Casemix Rural Inc. Comp.
CIACN146  DIM       9      * Vic. Casemix Renal Dialysis per Day
CIACN147  DIM       9      * Vic. Casemix Nursing Home per Day
CIACN148  DIM       1      * Vic. Casemix Renal Dialys Inc. Comp.
CIACN149  DIM       1      * Vic. Casemix Nursing Home Inc. Comp.
CIACN150  DIM       9      * Vic. Casemix Pub. Medical per WIES6
CIACN151  DIM       1      * Vic. Casemix Pub. Medical Inc. Comp.
.
. Sector 100
. 
CIACN201  DIM       9      * Vic. Casemix Fix Grant per WIES7
CIACN202  DIM       9      * Vic. Casemix Variable Grant per WIES7
CIACN203  DIM       9      * Vic. Casemix Rural per WIES7
CIACN204  DIM       1      * Vic. Casemix Fix Grant Inc. Comp.
CIACN205  DIM       1      * Vic. Casemix Variable Grant Inc. Comp.
CIACN206  DIM       1      * Vic. Casemix Rural Inc. Comp.
CIACN207  DIM       9      * Vic. Casemix Renal Dialysis per Day
CIACN208  DIM       9      * Vic. Casemix Nursing Home per Day
CIACN209  DIM       1      * Vic. Casemix Renal Dialys Inc. Comp.
CIACN210  DIM       1      * Vic. Casemix Nursing Home Inc. Comp.
CIACN211  DIM       9      * Vic. Casemix Pub. Medical per WIES7
CIACN212  DIM       1      * Vic. Casemix Pub. Medical Inc. Comp.
CIACN213  DIM       13     * A & E Price (Southland)
.
