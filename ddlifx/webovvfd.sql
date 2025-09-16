create table webovvaf
(
  wbovurno    char(8) default ' ' not null,
  wbovdate    char(8) default ' ' not null,
  wbovtime    char(8) default ' ' not null,
  dwbovcnt    char(2) default ' ' not null,
  wbovhosp    char(3) default ' ' not null,
  wbovtrid    char(24) default ' ' not null,
  wbovsnam    char(40) default ' ' not null,
  wbovfnam    char(40) default ' ' not null,
  wbovvetn    char(9) default ' ' not null,
  wbovprdt    char(8) default ' ' not null,
  wbovstat    char(4) default ' ' not null,
  wboveror    char(500) default ' ' not null,
  wbovvenc    char(4) default ' ' not null,
  wbovresp    char(1) default ' ' not null,
  wbovmsid    char(36) default ' ' not null,
  wbovspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webovva1 on webovvaf
(
wbovurno,
wbovdate,
wbovtime,
dwbovcnt
);
create unique index webovva2 on webovvaf
(
wbovtrid,
wbovdate,
wbovtime,
wbovurno,
dwbovcnt
);
create unique index webovva3 on webovvaf
(
wbovresp,
wbovurno,
wbovdate,
wbovtime,
dwbovcnt
);
create unique index webovva4 on webovvaf
(
wbovmsid,
wbovurno,
wbovdate,
wbovtime,
dwbovcnt
);
revoke all on webovvaf from public ; 
grant select on webovvaf to public ; 
