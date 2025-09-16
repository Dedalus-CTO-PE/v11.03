.---------------------------------------------------------------------
. Get Common System Parameters - Variables used in GTCMPA00
.----------------------------------------------------------------------
. V11.01.00  23/02/2021  Thanh T       TSK 0891886
.            Initial version
.----------------------------------------------------------------------
.
CPARPARM  DIM       8 (Parameter ID)
CPARMHOS  FORM      1 (Multi Hospital flag)
CPARUSER  DIM       8 (Logon User ID)
.
CPARERRO  FORM      1 (1 - Read failed
.                      0 - Read OK)

.******************************************************************************
.*        COMPARFD - Hospital Level Parameter definitions                     *
.******************************************************************************
PTCNOLDR  FORM      12       Number of minutes before highlighting Leave Red
