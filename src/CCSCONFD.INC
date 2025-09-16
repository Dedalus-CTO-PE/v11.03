. *----------------------------------------------------------------------
. * Include Name  :   CCSCONFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Control Sector                     
. *
. * File Type     :   ASCII Sector 64
. *
. * File Name     :   controlf.txt
. *
. * Change History
. *   V9.04.01        16/08/2004    Lina Vo         CAR 52596        
. *                   Added available options comments for Analysis Time.      
. *   v9.02.01        27.Jun.2002   Glenn Saunders  (port to v9.xx)
. *                   Amend to incorporate Southland specific fields.
. *                   See sector 100.                                  
. *   V9.02.00         2.May.2002   Glenn Saunders  (port to v9.xx)
. *
. *   VF.01.001        5.May.2000   Sandra Barcham
. *----------------------------------------------------------------------
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCCOYEAR  DIM       4      4        1     Current Year                       
CCCOPER   DIM       2      2        5     Current Period                     
CCCODIR   DIM       30     30       7     Directory
CCCOAU01  FORM      1      1        37    Audit File Indicator 1 (ccsepsaf)
CCCOAU02  FORM      1      1        38    Audit File Indicator 2 (ccsiadaf)
CCCOAU03  FORM      1      1        39    Audit File Indicator 3 (ceapscaf)
CCCOAU04  FORM      1      1        40    Audit File Indicator 4 (ceatrnaf)
CCCOAU05  FORM      1      1        41    Audit File Indicator 5
CCCOAU06  FORM      1      1        42    Audit File Indicator 6
CCCOAU07  FORM      1      1        43    Audit File Indicator 7
CCCOAU08  FORM      1      1        44    Audit File Indicator 8
CCCOAU09  FORM      1      1        45    Audit File Indicator 9
CCCOAU10  FORM      1      1        46    Audit File Indicator 10
CCCOARCH  DIM       4      4        47    Last Archive Restored
CCCOPASS  DIM       8      8        51    Password             
CCCOCD1   DIM       10     10       59    Cost Component Description 1
CCCOCD2   DIM       10     10       69    Cost Component Description 2
CCCOCD3   DIM       10     10       79    Cost Component Description 3
CCCOCD4   DIM       10     10       89    Cost Component Description 4
CCCOCD5   DIM       10     10       99    Cost Component Description 5
CCCOIA1   DIM       10     10       109   Acc Income Component Description 1
CCCOIA2   DIM       10     10       119   Acc Income Component Description 2
CCCOIA3   DIM       10     10       129   Acc Income Component Description 3
CCCOIM1   DIM       10     10       139   Misc Income Component Description 1
CCCOIM2   DIM       10     10       149   Misc Income Component Description 2
CCCOIM3   DIM       10     10       159   Misc Income Component Description 3
CCCOMINH  FORM      4.2    7        169   Min. Hrs. for Valid Transfer Record 
CCCODAYC  FORM      1      1        176   Calc Days Mapped as HRS/24 0=No 1=Yes
CCCOSOPR  FORM      1      1        177   Theatre MBS File 0=Billing (patdtraf)
.                                                          1=Theatre (oprmopaf)
.                                                          2=Med Rec (patmmbsf)
CCCOCT1   FORM      1      1        178   Cost Component 1 Fixed=0 Vari=1
CCCOCT2   FORM      1      1        179   Cost Component 2 Fixed=0 Vari=1
CCCOCT3   FORM      1      1        180   Cost Component 3 Fixed=0 Vari=1
CCCOCT4   FORM      1      1        181   Cost Component 4 Fixed=0 Vari=1
CCCOCT5   FORM      1      1        182   Cost Component 5 Fixed=0 Vari=1
CCCOTH1   DIM       10     10       183   Theatre Analysis Time 1 Name
CCCOTH2   DIM       10     10       193   Theatre Analysis Time 2 Name
CCCOTH3   DIM       10     10       203   Theatre Analysis Time 3 Name
CCCOTH4   DIM       10     10       213   Theatre Analysis Time 4 Name
CCCOTF1   FORM      2      2        223   Theatre Analysis Time 1 From Time
CCCOTF2   FORM      2      2        225   Theatre Analysis Time 2 From Time
CCCOTF3   FORM      2      2        227   Theatre Analysis Time 3 From Time
CCCOTF4   FORM      2      2        229   Theatre Analysis Time 4 From Time
CCCOTT1   FORM      2      2        231   Theatre Analysis Time 1 To Time
CCCOTT2   FORM      2      2        233   Theatre Analysis Time 2 To Time
CCCOTT3   FORM      2      2        235   Theatre Analysis Time 3 To Time
CCCOTT4   FORM      2      2        237   Theatre Analysis Time 4 To Time
.                                         Available Analysis Time Options
.                                         1=Time Called For
.                                         2=Time Arrived
.                                         3=Anaesthetic Prep
.                                         4=Anaesthetic Commenced
.                                         5=Prep Start Time
.                                         6=Surgery Start Time
.                                         7=Surgery End Time
.                                         8=Anaesthetic End
.                                         9=Time of Dressing
.                                         10=Recovery Front
.                                         11=Recovery Back
.                                         12=Recovery Day Procedure
.                                         13=Ready to Depart
.                                         14=Exit Theatre Complex
.                                         15=Actual Duration
.
.End of Record                      239
.
. *----------------------------------------------------------------------
. * Include Name  :   CCSCONFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Control Sector                     
. *
. * File Type     :   ASCII Sector 83
. *
. * File Name     :   controlf.txt
. *
. *----------------------------------------------------------------------
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCCOVFIX  FORM      6.2    9        1     Vic. Casemix Fix Grant per WIES
CCCOVVAR  FORM      6.2    9        10    Vic. Casemix Variable Grant per WIES
CCCOVPMP  FORM      6.2    9        19    Vic. Casemix Pub. Medical per WIES
CCCOVRUR  FORM      6.2    9        28    Vic. Casemix Rural per WIES
CCCOVFCM  FORM      1      1        37    Vic. Casemix Fix Grant Inc. Comp.
CCCOVVCM  FORM      1      1        38    Vic. Casemix Variable Grant Inc. Comp.
CCCOVPCM  FORM      1      1        39    Vic. Casemix Pub. Medical Inc. Comp.
CCCOVRCM  FORM      1      1        40    Vic. Casemix Rural Inc. Comp.
CCCOVDDE  DIM       3      3        41    Vic. Casemix Code Discharge Deceased
CCCOVDTR  DIM       3      3        44    Vic. Casemix Code Discharge Transfer
CCCOVAEM  DIM       3      3        47    Vic. Casemix Code Admission Emergency
CCCOVRDI  FORM      6.2    9        50    Vic. Casemix Renal Dialysis per Day
CCCOVNUR  FORM      6.2    9        59    Vic. Casemix Nursing Home per Day
CCCOVDCM  FORM      1      1        68    Vic. Casemix Renal Dialys Inc. Comp.
CCCOVNCM  FORM      1      1        69    Vic. Casemix Nursing Home Inc. Comp.
.
. WIES4 Parameters
.
CCCOV4FX  FORM      6.2    9        70    Vic. Casemix Fix Grant per WIES4
CCCOV4VA  FORM      6.2    9        79    Vic. Casemix Variable Grant per WIES4
CCCOV4RU  FORM      6.2    9        88    Vic. Casemix Rural per WIES4
CCCOV4FC  FORM      1      1        97    Vic. Casemix Fix Grant Inc. Comp.
CCCOV4VC  FORM      1      1        98    Vic. Casemix Variable Grant Inc. Comp.
CCCOV4RC  FORM      1      1        99    Vic. Casemix Rural Inc. Comp.
CCCOV4RD  FORM      6.2    9       100    Vic. Casemix Renal Dialysis per Day
CCCOV4NU  FORM      6.2    9       109    Vic. Casemix Nursing Home per Day
CCCOV4DC  FORM      1      1       118    Vic. Casemix Renal Dialys Inc. Comp.
CCCOV4NC  FORM      1      1       119    Vic. Casemix Nursing Home Inc. Comp.
CCCOV4PM  FORM      6.2    9       120    Vic. Casemix Pub. Medical per WIES4
CCCOV4PC  FORM      1      1       129    Vic. Casemix Pub. Medical Inc. Comp.
.
. WIES5 Parameters
.
CCCOV5FX  FORM      6.2    9       130    Vic. Casemix Fix Grant per WIES4
CCCOV5VA  FORM      6.2    9       139    Vic. Casemix Variable Grant per WIES4
CCCOV5RU  FORM      6.2    9       148    Vic. Casemix Rural per WIES4
CCCOV5FC  FORM      1      1       157    Vic. Casemix Fix Grant Inc. Comp.
CCCOV5VC  FORM      1      1       158    Vic. Casemix Variable Grant Inc. Comp.
CCCOV5RC  FORM      1      1       159    Vic. Casemix Rural Inc. Comp.
CCCOV5RD  FORM      6.2    9       160    Vic. Casemix Renal Dialysis per Day
CCCOV5NU  FORM      6.2    9       169    Vic. Casemix Nursing Home per Day
CCCOV5DC  FORM      1      1       178    Vic. Casemix Renal Dialys Inc. Comp.
CCCOV5NC  FORM      1      1       179    Vic. Casemix Nursing Home Inc. Comp.
CCCOV5PM  FORM      6.2    9       180    Vic. Casemix Pub. Medical per WIES4
CCCOV5PC  FORM      1      1       189    Vic. Casemix Pub. Medical Inc. Comp.
.
. WIES6 Parameters
.
CCCOV6FX  FORM      6.2    9       190    Vic. Casemix Fix Grant per WIES6
CCCOV6VA  FORM      6.2    9       199    Vic. Casemix Variable Grant per WIES6
CCCOV6RU  FORM      6.2    9       208    Vic. Casemix Rural per WIES6
CCCOV6FC  FORM      1      1       217    Vic. Casemix Fix Grant Inc. Comp.
CCCOV6VC  FORM      1      1       218    Vic. Casemix Variable Grant Inc. Comp.
CCCOV6RC  FORM      1      1       219    Vic. Casemix Rural Inc. Comp.
CCCOV6RD  FORM      6.2    9       220    Vic. Casemix Renal Dialysis per Day
CCCOV6NU  FORM      6.2    9       229    Vic. Casemix Nursing Home per Day
CCCOV6DC  FORM      1      1       238    Vic. Casemix Renal Dialys Inc. Comp.
CCCOV6NC  FORM      1      1       239    Vic. Casemix Nursing Home Inc. Comp.
CCCOV6PM  FORM      6.2    9       240    Vic. Casemix Pub. Medical per WIES6
CCCOV6PC  FORM      1      1       249    Vic. Casemix Pub. Medical Inc. Comp.
.
.End of Record                     250 
.
. *----------------------------------------------------------------------
. * Include Name  :   CCSCONFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Control Sector                     
. *
. * File Type     :   ASCII Sector 100
. *
. * File Name     :   controlf.txt
. *
. *----------------------------------------------------------------------
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.
. WIES7 Parameters
.
CCCOV7FX  FORM      6.2    9         1    Vic. Casemix Fix Grant per WIES7
CCCOV7VA  FORM      6.2    9        10    Vic. Casemix Variable Grant per WIES7
CCCOV7RU  FORM      6.2    9        19    Vic. Casemix Rural per WIES7
CCCOV7FC  FORM      1      1        28    Vic. Casemix Fix Grant Inc. Comp.
CCCOV7VC  FORM      1      1        29    Vic. Casemix Variable Grant Inc. Comp.
CCCOV7RC  FORM      1      1        30    Vic. Casemix Rural Inc. Comp.
CCCOV7RD  FORM      6.2    9        31    Vic. Casemix Renal Dialysis per Day
CCCOV7NU  FORM      6.2    9        40    Vic. Casemix Nursing Home per Day
CCCOV7DC  FORM      1      1        49    Vic. Casemix Renal Dialys Inc. Comp.
CCCOV7NC  FORM      1      1        50    Vic. Casemix Nursing Home Inc. Comp.
CCCOV7PM  FORM      6.2    9        51    Vic. Casemix Pub. Medical per WIES7
CCCOV7PC  FORM      1      1        60    Vic. Casemix Pub. Medical Inc. Comp.
CCCOPAE   FORM      10.2   13       61    A & E Price (Southland)
.
.End of Record                      74 
.

