. ******************************************************************************
. *                                                                            *
. *       Include Name   :    PAT3MIFD.INC                                     *
. *                                                                            *
. *       Function       :    File definition include for Patient              *
. *                           3M DRG Code Mapping                              *
. *                                                                            *
. *       File Type      :    SQL                                              *
. *                                                                            *
. *       File Name      :    pat3miaf.dat                                     *
. *                                                                            *
. *       Keys           :    KEY10, KEY19                                     *
. *                                                                            *
. *       Modifications  :                                                     *
. *                                                                            *
. ******************************************************************************
.
.Data File Definition
.--------------------
.
PAT3MIA1  IFILE SQL, FIXED=30, KEY="U1-1,2-10"
PAT3MIA2  IFILE SQL, FIXED=30, KEY="U11-19,1-1,2-10"
.
.Name     Type      Length    Physical    Start   Description
.----     ----      ------    --------    -----   -----------
PT3MTYPE  DIM       1         1           1       Code Type
.                                                   "D" - Disease
.                                                   "O" - Operation
PT3MCODE  DIM       9         9           2       ICD9CM Code
PT3MMAP   DIM       9         9           11      Mapped ICD9CM Code
PT3MSPAR  DIM       10        10          20      Spare Variable
.
.End of Record                            30
+
.

