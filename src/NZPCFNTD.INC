. *----------------------------------------------------------------------
. * Include Name  :   NZPCFNTD.INC
. *
. * Function      :   CGI Vars for NZPCFNFD.INC - nzpcfnaf
. *
. * File Name     :   nzpcfnaf.dat
. *
. * V9.08.00  17/11/2006  Davin         CAR 119999
. *           Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
NZCFN001  DIM       3      Hospital (pathspaf or blank for all)
NZCFN002  DIM       3      Claim Code (Catg CL)
NZCFN003  DIM       6      Contract (Health Fund)
NZCFN004  DIM       9      Contract Procedure Code
NZCFN005  DIM       1      Start Type 1=Adm.From 2=Disc.From
NZCFN006  DIM       8      Start Date (ccyymmdd)
NZCFN007  DIM       8      End Date (ccyymmdd)
NZCFN008  DIM       1      Invoice Billing Details 1=Yes 0=No
NZCFN009  DIM       35     Hospital Name
NZCFN010  DIM       35     Hospital Address Line 1
NZCFN011  DIM       35     Hospital Address Line 2
NZCFN012  DIM       35     Hospital Address Line 3
NZCFN013  DIM       35     Hospital Address Line 4
NZCFN014  DIM       6      % for Funder same as Primary Funder
NZCFN015  DIM       6      % for Funder diff.from Prim.Funder
NZCFN016  DIM       1      Related Prov.Invoice Info.1=Yes0=No
NZCFN017  DIM       15     Reference Number
NZCFN018  DIM       15     Vendor ID char
NZCFN019  DIM       4      Expected Length of Stay
NZCFN020  DIM       1      Doctor Specific (mltcfnaf)1=Yes 0=No
.
CPCFN001  DIM       3      Hospital (pathspaf or blank for all)
CPCFN002  DIM       3      Claim Code (Catg CL)
CPCFN003  DIM       6      Contract (Health Fund)
CPCFN004  DIM       9      Contract Procedure Code
CPCFN005  DIM       1      Start Type 1=Adm.From 2=Disc.From
CPCFN006  DIM       8      Start Date (ccyymmdd)
