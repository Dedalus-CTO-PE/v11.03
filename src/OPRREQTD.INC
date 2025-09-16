. *----------------------------------------------------------------------
. * Include Name  :   OPRREQFD.INC
. *
. * Function      :   CGI variables for OPRREQFD -oprreqaf                      
. *
. * File Name     :   oprreqaf.dat
. *
. * Modifications :
. * V10.15.01 28/11/2019 Peter Vela               Task 0871644
. *           Added OPREQ008
. * V9.04.00  03/03/2005 Lina Vo                  CAR 56404
. *           Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
OPREQ001  DIM       10     Unique id for theatre booking      
OPREQ002  DIM       1      Team Number                   
OPREQ003  DIM       3      Class (Category OG)                
OPREQ004  DIM       1      Item Type                        
.                          0 = Tray
.                          1 = Instrument
.                          2 = Equipment
OPREQ005  DIM       15     Item Code                          
OPREQ006  DIM       3      Amount/Quantity                    
OPREQ007  DIM       6      Doctor Code                          
OPREQ008  DIM       1      Charged 0 = No, 1 = Yes
.
.
.
.Variables used by OPPRTREQ
.
FIRSTITM  FORM      1
FIRSTEQP  FORM      1
TOTLITEM  FORM      3
TPERTRAY  FORM      3
GRNDITEM  FORM      3
GRNDTRAY  FORM      3
GRNDEQPM  FORM      3
TTYPTRAY  FORM      3
CLINNAME  DIM       30
SURGNAME  DIM       30
ANAENAME  DIM       30
OPRRMNME  DIM       30
PATNME30  DIM       30
DAYDESC   DIM       10
