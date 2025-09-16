. *----------------------------------------------------------------------
. * Include Name  :   PMSHACTD.INC
. *
. * Function      :   CGI variables for PMSHACFD - pmshacaf.dat
. *----------------------------------------------------------------------
.
.  Modifications  :
. * V10.14.00 15/04/2019 Peter Vela TSK 0857392
. *           Created Include
. *----------------------------------------------------------------------
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHAC001  DIM       6      Contract ID
PMHAC002  DIM       3      HAC Group 01=16 Cat Ha
PMHAC003  DIM       3      HAC Complexity Field
.                                         001 - Baseline
.                                         002 - Emergency Admission
.                                         003 - ICU Hours
.                                         004 - Admission Transfer Status
.                                         005 - DRG 9 Type Medical
.                                         006 - DRG 9 Type Intervention
.                                         007 - Male
.                                         008 - Female
PMHAC004  FORM      10.4   Complexity Value 001
PMHAC005  DIM       8      Date record created
PMHAC006  DIM       8      Time record created
PMHAC007  DIM       10     Record created by
PMHAC008  DIM       8      Date record updated
PMHAC009  DIM       8      Time record updated
PMHAC010  DIM       10     Record updated by
.
PMHAC011  FORM      10.4   Comlexity Value 002
PMHAC012  FORM      10.4   Comlexity Value 003  
PMHAC013  FORM      10.4   Comlexity Value 004
PMHAC014  FORM      10.4   Comlexity Value 005
PMHAC015  FORM      10.4   Comlexity Value 006
PMHAC016  FORM      10.4   Comlexity Value 007
PMHAC017  FORM      10.4   Comlexity Value 008
