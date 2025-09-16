create table apsordaf
(
  apodisc     char(1) default ' ' not null,
  apodord     char(7) default ' ' not null,
  apodcat     char(6) default ' ' not null,
  apodled     char(2) default ' ' not null,
  apodacc     char(12) default ' ' not null,
  apoddis     char(5) default ' ' not null,
  apodres     char(4) default ' ' not null,
  apoddes     char(35) default ' ' not null,
  apodamt     decimal(14,2) default 0 not null,
  apodgsta    decimal(14,2) default 0 not null,
  apoduct     decimal(16,4) default 0 not null,
  apodugs     decimal(16,4) default 0 not null,
  apodqty     decimal(14,2) default 0 not null,
  apodgst     char(6) default ' ' not null,
  apodspa     char(36) default ' ' not null,
  lf          char(1)
);
create unique index apsorda1 on apsordaf
(
apodisc,
apodord,
apodcat
);
create unique index apsorda2 on apsordaf
(
apodled,
apodacc,
apodisc,
apodord,
apodcat
);
revoke all on apsordaf from public ; 
grant select on apsordaf to public ; 
