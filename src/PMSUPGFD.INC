. V10.03.01 17/04/2012 PHA C-257776 Marked SNAP and PROG as not used - moved to
. V9.12.001 16/02/2010 EC  Created FD CAR 207040
. *----------------------------------------------------------------------
. * Include Name  :   PMSUPGFD.INC
. *
. * Function      :   File Def'n Include for Patient System
. *                   Patient Health Fund Program Details
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsupgaf.dat
. *
. * Index Values  :   KEY31   KEY31
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSUPGA1   IFILE    SQL, FIXED=253, KEY="U1-8,9-11,12-14,15-20,21-23,24-31"
PMSUPGA2   IFILE    SQL, FIXED=253, KEY="U24-31,9-11,12-14,15-20,21-23,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMUGURNO  DIM       8      8        1     U/R Number
PMUGATYP  DIM       3      3        9     Admission Type (Cat A)
PMUGCLAM  DIM       3      3        12    Claim Code (Cat CL)
PMUGFUND  DIM       6      6        15    Health Fund
PMUGTABT  DIM       3      3        21    Health Fund Table Type (Cat HT)
PMUGEDAT  DIM       8      8        24    Expiry Date (CCYYMMDD)
PMUGMAXI  DIM       3      3        32    Maximum Number of IP Visits
PMUGWARI  DIM       3      3        35    Warn at X Number of IP Visits
PMUGMANI  DIM       3      3        38    Manual IP Visit Count
PMUGMAXO  DIM       3      3        41    Maximum Number of OP Visits
PMUGWARO  DIM       3      3        44    Warn at X Number of OP Visits
PMUGMANO  DIM       3      3        47    Manual OP Visit Count
PMUGBRKO  DIM       1      1        50    Breakdown of OP Visits
PMUGEXTD  DIM       8      8        51    Date Extension Received (CCYYMMDD)
PMUGSDAT  DIM       8      8        59    Start of Therapy (CCYYMMDD)
PMUGPNAM  DIM       50     50       67    Program Name
PMUGUDSI  DIM       3      3        117   UDS Impairment Code FIC
PMUGSNAP  DIM       3      3        120   Not Used
PMUGENDD  DIM       8      8        123   Therapy End Date (CCYYMMDD)
PMUGPROG  DIM       3      3        131   Program in Progress (1=Yes)
PMUGPINT  DIM       1      1        134   Not Used
PMUGRPDT  DIM       8      8        135   Date of Rehab. Plan (CCYYMMDD)
PMUGRDDT  DIM       8      8        143   Discharge from Rehab Plan(CCYYMMDD)
PMUGCDAT  DIM       8      8        151   Date Record Created (CCYYMMDD)
PMUGCTIM  DIM       8      8        159   Time Record Created (HH:MM:SS)
PMUGCUID  DIM       10     10       167   WEB User ID Created (websecaf)
PMUGUDAT  DIM       8      8        177   Update Date (CCYYMMDD)
PMUGUTIM  DIM       8      8        185   Time Updated (HH:MM:SS)
PMUGUUID  DIM       10     10       193   WEB User ID Updated (websecaf)
PMUGSPAR  DIM       50     50       203   Spare
.
.End of Record                      253
.
