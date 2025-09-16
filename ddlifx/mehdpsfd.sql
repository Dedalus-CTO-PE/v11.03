create table mehdpsaf
(
  mhdpdate    char(6) default ' ' not null,
  mhdpdept    char(3) default ' ' not null,
  mhdpbeds    decimal(4,0) default 0 not null,
  mhdpinst    decimal(6,0) default 0 not null,
  mhdpslst    decimal(6,0) default 0 not null,
  mhdpadmi    decimal(6,0) default 0 not null,
  mhdpadms    decimal(6,0) default 0 not null,
  mhdpadmc    decimal(6,0) default 0 not null,
  mhdptrno    decimal(6,0) default 0 not null,
  mhdptrni    decimal(6,0) default 0 not null,
  mhdpreth    decimal(6,0) default 0 not null,
  mhdprett    decimal(6,0) default 0 not null,
  mhdpreta    decimal(6,0) default 0 not null,
  mhdplveh    decimal(6,0) default 0 not null,
  mhdplvet    decimal(6,0) default 0 not null,
  mhdplvea    decimal(6,0) default 0 not null,
  mhdpdsch    decimal(6,0) default 0 not null,
  mhdpdead    decimal(6,0) default 0 not null,
  mhdpinbd    decimal(8,0) default 0 not null,
  mhdpslbd    decimal(8,0) default 0 not null,
  mhdphlbd    decimal(8,0) default 0 not null,
  mhdptlbd    decimal(8,0) default 0 not null,
  mhdpawbd    decimal(8,0) default 0 not null,
  mhdpsepb    decimal(8,0) default 0 not null,
  mhdpsslb    decimal(8,0) default 0 not null,
  mhdpdscb    decimal(8,0) default 0 not null,
  mhdpdslb    decimal(8,0) default 0 not null,
  mhdpspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index mehdpsa1 on mehdpsaf
(
mhdpdate,
mhdpdept
);
revoke all on mehdpsaf from public ; 
grant select on mehdpsaf to public ; 
