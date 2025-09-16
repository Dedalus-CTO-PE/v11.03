create table webopvaf
(
  wbopurno    char(8) default ' ' not null,
  wbopdate    char(8) default ' ' not null,
  wboptime    char(8) default ' ' not null,
  dwbopcnt    char(2) default ' ' not null,
  wbophosp    char(3) default ' ' not null,
  wboptrid    char(24) default ' ' not null,
  wbopfnam    char(40) default ' ' not null,
  wbopmedn    char(10) default ' ' not null,
  wbopmedr    char(1) default ' ' not null,
  wbopstat    char(4) default ' ' not null,
  wboperor    char(500) default ' ' not null,
  wbopresp    char(1) default ' ' not null,
  wbopmsid    char(36) default ' ' not null,
  wbopspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webopva1 on webopvaf
(
wbopurno,
wbopdate,
wboptime,
dwbopcnt
);
create unique index webopva2 on webopvaf
(
wboptrid,
wbopdate,
wboptime,
wbopurno,
dwbopcnt
);
create unique index webopva3 on webopvaf
(
wbopresp,
wbopurno,
wbopdate,
wboptime,
dwbopcnt
);
create unique index webopva4 on webopvaf
(
wbopmsid,
wbopurno,
wbopdate,
wboptime,
dwbopcnt
);
revoke all on webopvaf from public ; 
grant select on webopvaf to public ; 
