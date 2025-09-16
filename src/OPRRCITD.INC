.******************************************************************************
. Program        : OPRRCITD.INC
.
. Function       : CGI variables for Recovery Closed Incidents
.
. Modifications  :
. V10.12.01  28/02/2018  Ken Bell       TSK 0851092
.            Add Hospital for Multi-Hosptital client
.------------------------------------------------------------------------------
. V10.08.00  19/05/2016  Ebon Clements  TSK 0308881   
.            Created include
.******************************************************************************
OPRCI001  DIM       3      * Location (Cat YD)
OPRCI002  DIM       8      * Recovery Close Start Date
OPRCI003  DIM       8      * Recovery Close Start Time
OPRCI004  DIM       8      * Recovery Close End Date (ccyymmdd)
OPRCI005  DIM       8      * Recovery Close End Time (hh:mm:ss)
OPRCI006  DIM       3      * Recovery Close Reason (Cat Cr)
OPRCI007  DIM       10     * User Who Entered Recovery Closed
OPRCI008  DIM       8      * Date Record Created (ccyymmdd)
OPRCI009  DIM       8      * Time Record Created (hh:mm:ss)
OPRCI010  DIM       10     * User Who Entered Recovery Closed
OPRCI011  DIM       8      * Date Recovery Close End Entered
OPRCI012  DIM       8      * Time Recovery Close End Entered
OPRCI013  DIM       3      * Hospital Code for Multi-Hospital
