.  ****************************************************************************
.  *                                                                          *
.  *  Include Name    :   IBAESCFD.INC                                        *
.  *                                                                          *
.  *  Function        :   File Def'n Include for Common                       *
.  *                      Printer Escape Sequence                             *
.  *                                                                          *
.  *  File Type       :   SQL                                                 *
.  *                                                                          *
.  *  File Name       :   ibaescaf.dat                                        *
.  *                                                                          *
.  *  Keys            :   KEY5                                                *
.  *                                                                          *
.  *  Modifications   :                                                       *
.  ****************************************************************************
.
IBAESCA1  IFILE     SQL, FIXED=46, KEY="U1-2,3-5"
IBAESCA2  IFILE     SQL, FIXED=46, KEY="U3-5,1-2"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBESPR    DIM        2     2        1     Printer Type
IBESPT    DIM        3     3        3     Print Type Code / Spaces for Printer
IBESSEQ   DIM        35    35       6     ASCII Decimal Equiv. or 
.                                         Printer Description
.
IBESLAS   FORM       1     2        41    Laser Printer 0 = No 1 = Yes
IBESSPAR  DIM        3     3        43    Spare
.
.End of Record                      46
.
.-------------------------------------------------------------------
. ASCII to Octal Conversion for Printing Printer Control Sequences
. Variables used in standard routines relative to contol sequences
.-------------------------------------------------------------------
IBAESCF2  FORM      2
IBAESCF3  FORM      3
IBAESCD3  DIM       3
.
CS1       DIM       3
CS2       DIM       3
CS3       DIM       3
CS4       DIM       3
CS5       DIM       3
CS6       DIM       3
CS7       DIM       3
CS8       DIM       3
CS9       DIM       3
CS10      DIM       3
CS11      DIM       3
ASC000    EQU       0
ASC001    EQU       01
ASC002    EQU       02
ASC003    EQU       03
ASC004    EQU       04
ASC005    EQU       05
ASC006    EQU       06
ASC007    EQU       07
ASC008    EQU       010
ASC009    EQU       011
ASC010    EQU       012
ASC011    EQU       013
ASC012    EQU       014
ASC013    EQU       015
ASC014    EQU       016
ASC015    EQU       017
ASC016    EQU       020
ASC017    EQU       021
ASC018    EQU       022
ASC019    EQU       023
ASC020    EQU       024
ASC021    EQU       025
ASC022    EQU       026
ASC023    EQU       027
ASC024    EQU       030
ASC025    EQU       031
ASC026    EQU       032
ASC027    EQU       033
ASC028    EQU       034
ASC029    EQU       035
ASC030    EQU       036
ASC031    EQU       037
ASC032    EQU       040
ASC033    EQU       041
ASC034    EQU       042
ASC035    EQU       043
ASC036    EQU       044
ASC037    EQU       045
ASC038    EQU       046
ASC039    EQU       047
ASC040    EQU       050
ASC041    EQU       051
ASC042    EQU       052
ASC043    EQU       053
ASC044    EQU       054
ASC045    EQU       055
ASC046    EQU       056
ASC047    EQU       057
ASC048    EQU       060
ASC049    EQU       061
ASC050    EQU       062
ASC051    EQU       063
ASC052    EQU       064
ASC053    EQU       065
ASC054    EQU       066
ASC055    EQU       067
ASC056    EQU       070
ASC057    EQU       071
ASC058    EQU       072
ASC059    EQU       073
ASC060    EQU       074
ASC061    EQU       075
ASC062    EQU       076
ASC063    EQU       077
ASC064    EQU       0100
ASC065    EQU       0101
ASC066    EQU       0102
ASC067    EQU       0103
ASC068    EQU       0104
ASC069    EQU       0105
ASC070    EQU       0106
ASC071    EQU       0107
ASC072    EQU       0110
ASC073    EQU       0111
ASC074    EQU       0112
ASC075    EQU       0113
ASC076    EQU       0114
ASC077    EQU       0115
ASC078    EQU       0116
ASC079    EQU       0117
ASC080    EQU       0120
ASC081    EQU       0121
ASC082    EQU       0122
ASC083    EQU       0123
ASC084    EQU       0124
ASC085    EQU       0125
ASC086    EQU       0126
ASC087    EQU       0127
ASC088    EQU       0130
ASC089    EQU       0131
ASC090    EQU       0132
ASC091    EQU       0133
ASC092    EQU       0134
ASC093    EQU       0135
ASC094    EQU       0136
ASC095    EQU       0137
ASC096    EQU       0140
ASC097    EQU       0141
ASC098    EQU       0142
ASC099    EQU       0143
ASC100    EQU       0144
ASC101    EQU       0145
ASC102    EQU       0146
ASC103    EQU       0147
ASC104    EQU       0150
ASC105    EQU       0151
ASC106    EQU       0152
ASC107    EQU       0153
ASC108    EQU       0154
ASC109    EQU       0155
ASC110    EQU       0156
ASC111    EQU       0157
ASC112    EQU       0160
ASC113    EQU       0161
ASC114    EQU       0162
ASC115    EQU       0163
ASC116    EQU       0164
ASC117    EQU       0165
ASC118    EQU       0166
ASC119    EQU       0167
ASC120    EQU       0170
ASC121    EQU       0171
ASC122    EQU       0172
ASC123    EQU       0173
ASC124    EQU       0174
ASC125    EQU       0175
ASC126    EQU       0176
ASC127    EQU       0177
