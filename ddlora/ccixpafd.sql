create table ccixpaaf
(
  ccxaprid    varchar2(8) default ' ' not null,
  ccxascid    varchar2(2) default ' ' not null,
  ccxauniq    varchar2(3) default ' ' not null,
  ccxaauto    number(1,0) default 0 not null,
  ccxapcd1    number(3,0) default 0 not null,
  ccxapcd2    number(3,0) default 0 not null,
  ccxapcd3    number(3,0) default 0 not null,
  ccxapcd4    number(3,0) default 0 not null,
  ccxadcd1    number(3,0) default 0 not null,
  ccxadcd2    number(3,0) default 0 not null,
  ccxadcd3    number(3,0) default 0 not null,
  ccxaqtyv    number(3,0) default 0 not null,
  ccxaspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccixpaa1 primary key( 
ccxaprid,
ccxascid,
ccxauniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
