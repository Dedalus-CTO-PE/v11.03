create table mehdpsaf
(
  mhdpdate    varchar2(6) default ' ' not null,
  mhdpdept    varchar2(3) default ' ' not null,
  mhdpbeds    number(4,0) default 0 not null,
  mhdpinst    number(6,0) default 0 not null,
  mhdpslst    number(6,0) default 0 not null,
  mhdpadmi    number(6,0) default 0 not null,
  mhdpadms    number(6,0) default 0 not null,
  mhdpadmc    number(6,0) default 0 not null,
  mhdptrno    number(6,0) default 0 not null,
  mhdptrni    number(6,0) default 0 not null,
  mhdpreth    number(6,0) default 0 not null,
  mhdprett    number(6,0) default 0 not null,
  mhdpreta    number(6,0) default 0 not null,
  mhdplveh    number(6,0) default 0 not null,
  mhdplvet    number(6,0) default 0 not null,
  mhdplvea    number(6,0) default 0 not null,
  mhdpdsch    number(6,0) default 0 not null,
  mhdpdead    number(6,0) default 0 not null,
  mhdpinbd    number(8,0) default 0 not null,
  mhdpslbd    number(8,0) default 0 not null,
  mhdphlbd    number(8,0) default 0 not null,
  mhdptlbd    number(8,0) default 0 not null,
  mhdpawbd    number(8,0) default 0 not null,
  mhdpsepb    number(8,0) default 0 not null,
  mhdpsslb    number(8,0) default 0 not null,
  mhdpdscb    number(8,0) default 0 not null,
  mhdpdslb    number(8,0) default 0 not null,
  mhdpspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehdpsa1 primary key( 
mhdpdate,
mhdpdept)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
