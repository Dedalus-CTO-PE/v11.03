. *----------------------------------------------------------------------
. * Include Name  :   PMSIDWVR.INC
. *
. * Function      :   Save variables for PMSIDWFD - EDWARD ISP Audit Writes
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V11.03.01  13/10/2023  Sunny         TSK 0916075
.             Added SISPUDF3 - AHPRA ID
.  V10.14.02  05/09/2019  Ebon Clements TSK 0881147
.             Added SISPSPC1 - HCP Speciality 1
.  V10.14.01  01/03/2019  Ebon Clements TSK 0871097
.             Added SISPGNDR - HCP Gender
.  V10.13.01  16/01/2018  Ebon Clements TSK 0868909
.             Added SISGPEML and SISGPFAX
.  V10.13.00  09/01/2018  Ebon Clements TSK 0868909
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
. HCP Save variables
.
SISPTITL  DIM       10      HCP Title
SISPGNAM  DIM       35      HCP Given Names
SISPSNAM  DIM       35      HCP Surname
.
SISPSTTS  DIM       1       HCP rec status (0=Active/1=Inactive
.
SISPPRV1  DIM       10      Provider Number 1 - Reg. No. NZ
SISPPRV2  DIM       10      Provider Number 2 - Prev Reg. No. NZ
SISPPRV3  DIM       10      Provider Number 3
SISPPRV4  DIM       10      Provider Number 4
SISPPRV5  DIM       10      Provider Number 5
SIPSNHTA  DIM       20      NEHTA Identifier
.
SISPMPGN  DIM       20      MPG Certificate Number
SISPEDAT  DIM       8       End Date (ccyymmdd)
SISPGNDR  DIM       1       HCP Gender (M,F,I,U)
SISPSPC1  DIM       3       HCP Speciality 1 (Cat DT)
SISPUDF3  DIM       3       AHPRA ID Type (Cat R7)
.
.Name     Type      Length  Description
.----     ----      ------  -----------
. Practice Save variables
.
SISGPRAC  DIM       10      HCP Practice Code
SISGCNTR  DIM       2       Count
.
SISGADD1  DIM       60      HCP Practice Address 1
SISGADD2  DIM       60      HCP Practice Address 2
SISGADD3  DIM       60      HCP Practice Address 3
SISGADD4  DIM       60      HCP Practice Address 4
SISGPOST  DIM       8       HCP Practice Post Code
.
SISGSTTS  DIM       1       Status 0=active, 1=inactive
.
SISGPTEL  DIM       20      HCP Practice Telephone Number
SISGPEML  DIM       80      HCP Practice Email Address
SISGPFAX  DIM       20      HCP Practice Fax Number
.
.Name     Type      Length  Description
.----     ----      ------  -----------
. Link Practice Save variables
.
SISLLPDT  DIM       8        Date HCP Left Practice (ccyymmdd)
SISLPRV1  DIM       10       Provider Number 1
SISLHCPC  DIM       10       HCP Code (pmshcpaf)
SISLHCPR  DIM       10       HCP Practice (pmshcgaf)
SISLSTAT  DIM       1        Status (0=Active,1=Not Active)
.
.Name     Type      Length  Description
.----     ----      ------  -----------
. Control File Hospital Save variables
.
SISCADD1  DIM       30       Hospital Address 1
SISCADD2  DIM       30       Hospital Address 2
SISCPOST  DIM       4        Hospital Postcode
SISCHDPS  FORM      1        Hospital state for HDP extracts
SISCTELB  DIM       12       Hospital Telephone Number
SISCHFAX  DIM      12        Hospital Fax Number
