.******************************************************************************
.* PATDHEAD.INC   --  Data include for the PMIHEAD, PATHEAD, OUTHEAD & AAEHEAD*
.*                    WARHEAD, AHAHEAD includes                               *
.******************************************************************************
.* Modifications  :                                                           *
.*        V9.03.01  11/06/2004  Mike Laming   CAR 49016  July 2004 PRS/2      *
.*                  - Increase sex description to 8 for "Intersex"            *
.*        V5.08.01  22/08/2000  Tonii                                         *
.*                  Changed PATHDSEX from a DIM 6 to a DIM 7                  *
.*                                                                            *
.******************************************************************************
PATHDADM  DIM       24                       * admission status
PATHDBED  DIM       3                        * bed
PATHDDOB  DIM       10                       * date of birth
PATHDDOC  DIM       30                       * attending doctor description
PATHDNAM  DIM       46                       * surname, title giv name
PATHDSEX  DIM       8                        * sex description         *C-49016
PATHDWB   DIM       7                        * ward/bed
PATHDWRD  DIM       3                        * ward
PSAGETYP  DIM       6                        * age type description
PSAGECON  DIM       3                        * age converted value
WARHDNUR  DIM       20                       * nurse name
WARHDATT  DIM       23                       * attendance        
AHAHDLOC  DIM       20                       * nurse name
AHAHDATT  DIM       23                       * attendance        
