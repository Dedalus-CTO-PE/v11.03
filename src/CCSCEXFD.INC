. VF.01.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSCEXFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Extraction Ranges                  
. *
. * File Type     :   SQL
. *
. * File Name     :   ccscexaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSCEXA1   IFILE    SQL, FIXED=350, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCEXEID   DIM       4      4        1     Extract ID                         
CCEXR01   DIM       3      3        5     Casemix Range Type 01              
CCEXF01   DIM       10     10       8     From Code 01                       
CCEXT01   DIM       10     10       18    To Code 01                         
CCEXR02   DIM       3      3        28    Casemix Range Type 02              
CCEXF02   DIM       10     10       31    From Code 02                       
CCEXT02   DIM       10     10       41    To Code 02                         
CCEXR03   DIM       3      3        51    Casemix Range Type 03              
CCEXF03   DIM       10     10       54    From Code 03                       
CCEXT03   DIM       10     10       64    To Code 03                         
CCEXR04   DIM       3      3        74    Casemix Range Type 04              
CCEXF04   DIM       10     10       77    From Code 04                       
CCEXT04   DIM       10     10       87    To Code 04                         
CCEXR05   DIM       3      3        97    Casemix Range Type 05              
CCEXF05   DIM       10     10       100   From Code 05                       
CCEXT05   DIM       10     10       110   To Code 05                         
CCEXR06   DIM       3      3        120   Casemix Range Type 06              
CCEXF06   DIM       10     10       123   From Code 06                       
CCEXT06   DIM       10     10       133   To Code 06                         
CCEXR07   DIM       3      3        143   Casemix Range Type 07              
CCEXF07   DIM       10     10       146   From Code 07                       
CCEXT07   DIM       10     10       156   To Code 07                         
CCEXR08   DIM       3      3        166   Casemix Range Type 08              
CCEXF08   DIM       10     10       169   From Code 08                       
CCEXT08   DIM       10     10       179   To Code 08                         
CCEXR09   DIM       3      3        189   Casemix Range Type 09              
CCEXF09   DIM       10     10       192   From Code 09                       
CCEXT09   DIM       10     10       202   To Code 09                         
CCEXR10   DIM       3      3        212   Casemix Range Type 03              
CCEXF10   DIM       10     10       215   From Code 10                       
CCEXT10   DIM       10     10       225   To Code 10                         
CCEXR11   DIM       3      3        235   Casemix Range Type 11              
CCEXF11   DIM       10     10       238   From Code 11                       
CCEXT11   DIM       10     10       248   To Code 11                         
CCEXR12   DIM       3      3        258   Casemix Range Type 12              
CCEXF12   DIM       10     10       261   From Code 12                       
CCEXT12   DIM       10     10       271   To Code 12                         
CCEXR13   DIM       3      3        281   Casemix Range Type 13              
CCEXF13   DIM       10     10       284   From Code 13                       
CCEXT13   DIM       10     10       294   To Code 13                         
CCEXR14   DIM       3      3        304   Casemix Range Type 14              
CCEXF14   DIM       10     10       307   From Code 14                       
CCEXT14   DIM       10     10       317   To Code 14                         
CCEXSPA   DIM       23     23       327   Spare                              
.
.End of Record                      350  
.
