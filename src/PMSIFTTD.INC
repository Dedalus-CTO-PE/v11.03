. *----------------------------------------------------------------------
. * Include Name  :   PMSIFTTD.INC
. *
. * Function      :   CGI Variables for PMSIFTFD - pmsiftaf
. *
. * Mods          :   V9.03.01  12/06/2003  Lina Vo       
. *                   Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PMIFT001  DIM       8        U/R Number       
PMIFT002  DIM       8        Admission Number
PMIFT003  DIM       2        Visit Type       
PMIFT004  DIM       6        Current Location
PMIFT005  DIM       2        Type of Infection Category
PMIFT006  DIM       3        Type of Infection
PMIFT007  DIM       3        Location of Infection
PMIFT008  DIM       8        Date Infection discovered
PMIFT009  DIM       8        Time Infection discovered
PMIFT010  DIM       2        Level of Isolation
PMIFT011  DIM       8        Date of Isolation
PMIFT012  DIM       8        Time of Isolation
PMIFT013  DIM       3        Dependancy     
PMIFT014  DIM       1        Letter sent to GP
PMIFT015  DIM       70       Government Agency Notified
PMIFT016  DIM       3        Government Agency contacted via
.
.
. Variables used for the search filters
ICFLUNIT  DIM       3        Admission Type (Unit) (Cat A)
ICFLITYP  DIM       3        Type of Infection (Cat H1)
ICFLDOCT  DIM       6        Doctor Code
ICFLWARD  DIM       3        Ward
