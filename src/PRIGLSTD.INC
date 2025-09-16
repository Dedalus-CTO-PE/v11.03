. *----------------------------------------------------------------------
. * Include Name  :   PRIGLSTD.INC
. *
. * Function      :   CGI Variables for PRIGLSTD - priglsaf 
. *
. * Mods          :   V9.02.01 16.10.2001 Kuldeep Singh 
. *                            Created include
. *               :   V9.02.02 13.12.2001 Kuldeep Singh & DC
. *                            Add variable    
. *               :   V9.03.01 10.02.2003 Lina Vo     CAR 44132
. *                            Changed Debtor number to be DIM 8.
. *----------------------------------------------------------------------
.
.Name     Type      Length                  Description
.----     ----      ------                  -----------
PRGL0001  DIM       4                      * Selection ID.
PRGL0002  DIM       35                     * Selection Description
PRGL0003  DIM       8                      * Debtor Number From
PRGL0004  DIM       8                      * Debtor Number To
PRGL0005  DIM       20                     * Surname From 
PRGL0006  DIM       20                     * Surname To 
PRGL0007  DIM       8                      * Visit Date From 
PRGL0008  DIM       8                      * Visit Date To 
PRGL0009  DIM       6                      * Practice From
PRGL0010  DIM       6                      * Practice To
PRGL0011  DIM       12                     * Service Doctor From 
PRGL0012  DIM       12                     * Service Doctor To 
PRGL0013  DIM       3                      * Claim Code From (category CL) 
PRGL0014  DIM       3                      * Claim Code To (category CL) 
PRGL0015  DIM       3                      * Letter Type.
PRGL0016  DIM       1                      * Scan Flag (0=Debtor,1=U/R)
.
