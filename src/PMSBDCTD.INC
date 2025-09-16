. *----------------------------------------------------------------------
. * Include Name  :   PMSBDCTD.INC
. *
. * Function      :   CGI Variables for PMSBDCFD - pmsbdcaf
. *
. * Mods          :   V9.11.02 14/10/2008 Ebon Clements  CAR 174077
. *                            Added PMSBC015
. *                   V9.11.01 23/09/2008 Ebon Clements  CAR 174051
. *                            Added PMSBC014
. *                   V9.03.01 20/08/2003 Sylvek Litewka CAR 41826
. *                            Created include.
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
PMSBC001  DIM       3       * Ward from Ward/Bed file
PMSBC002  DIM       3       * Bed from Ward/Bed file
PMSBC003  DIM       8       * Closed From Date (CCYYMMDD)
PMSBC004  DIM       8       * Closed From Time (HH:MM:SS)
PMSBC005  DIM       8       * Closed To Date (CCYYMMDD)
PMSBC006  DIM       8       * Closed To Time (HH:MM:SS)
PMSBC007  DIM       3       * Reason for Bed Closure (Cat BU)
PMSBC008  DIM       8       * Date Record Created (CCYYMMDD)
PMSBC009  DIM       8       * Time Record Created (HH:MM:SS)
PMSBC010  DIM       10      * User ID - Creator
PMSBC011  DIM       8       * Date Record Updated (CCYYMMDD)
PMSBC012  DIM       8       * Time Record Updated (HH:MM:SS)
PMSBC013  DIM       10      * User ID - Last Update
PMSBC014  DIM       50      * Free Text Reason for Closure
PMSBC015  DIM       10      * Doctor Code (pmshcpaf)
.
