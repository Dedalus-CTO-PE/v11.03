create table ccixgdaf
(
  ccxdprid    varchar2(8) default ' ' not null,
  ccxdscid    varchar2(2) default ' ' not null,
  ccxduniq    varchar2(3) default ' ' not null,
  ccxdcod1    varchar2(9) default ' ' not null,
  ccxdcod2    varchar2(9) default ' ' not null,
  ccxdcod3    varchar2(9) default ' ' not null,
  ccxddept    varchar2(3) default ' ' not null,
  ccxdspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccixgda1 primary key( 
ccxdprid,
ccxdscid,
ccxduniq,
ccxdcod1,
ccxdcod2,
ccxdcod3)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
