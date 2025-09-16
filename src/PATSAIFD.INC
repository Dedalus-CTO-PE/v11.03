. ******************************************************************************
. *                                                                            *
. *       Include Name   :    PATSAIFD.INC                                     *
. *                                                                            *
. *       Function       :    File definition include for Patient              *
. *                           South Australian Extract Item Table              *
. *                                                                            *
. *       File Type      :    SQL                                              *
. *                                                                            *
. *       File Name      :    patsaiaf.dat                                     *
. *                                                                            *
. *       Keys           :    KEY3                                             *
. *                                                                            *
. *       Modifications  :    V9.08.00 10.01.2007  Janet George                *
. *                           Ported from V6 to V9                             *
. *                                                                            *
. ******************************************************************************
.
.Data File Definition
.--------------------
.
PATSAIA1  IFILE SQL, FIXED=80, KEY="U1-3"
PATSAIA2  IFILE SQL, FIXED=80, KEY="U4-6"
.
.Name     Type      Length    Physical    Start   Description
.----     ----      ------    --------    -----   -----------
.
PTSAINO   DIM         3         3           1     Item number
PTIBANO   DIM         3         3           4     IBA Item number
PTSADESC  DIM        50        50           7     Description  
PTSASPAR  DIM        23        23          57     Spare variable      
.
.End of Record                             80
