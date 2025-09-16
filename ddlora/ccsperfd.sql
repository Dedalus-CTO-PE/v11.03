create table ccsperaf
(
  ccperun     varchar2(4) default ' ' not null,
  ccperec     varchar2(8) default ' ' not null,
  ccpedes     varchar2(50) default ' ' not null,
  ccpefky     varchar2(20) default ' ' not null,
  ccpeenc     varchar2(16) default ' ' not null,
  ccpeurn     varchar2(10) default ' ' not null,
  ccpedat     varchar2(8) default ' ' not null,
  ccpetim     varchar2(5) default ' ' not null,
  ccpeqty     number(14,2) default 0 not null,
  ccpechg     number(14,2) default 0 not null,
  ccpecl1     varchar2(4) default ' ' not null,
  ccpecl2     varchar2(4) default ' ' not null,
  ccpecl3     varchar2(4) default ' ' not null,
  ccpecl4     varchar2(4) default ' ' not null,
  ccpecl5     varchar2(4) default ' ' not null,
  ccpespa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspera1 primary key( 
ccperun,
ccperec)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
