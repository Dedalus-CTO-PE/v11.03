create table hl7bmtaf
(
  hlbmstat    char(1) default ' ' not null,
  hlbmdate    char(8) default ' ' not null,
  hlbmtime    char(6) default ' ' not null,
  dhlbmmsg    char(20) default ' ' not null,
  hlbmtype    char(3) default ' ' not null,
  hlbmurno    char(8) default ' ' not null,
  hlbmvisn    char(8) default ' ' not null,
  hlbmtkey    char(80) default ' ' not null,
  hlbmflag    char(1) default ' ' not null,
  hlbmpgid    char(8) default ' ' not null,
  hlbmeror    char(40) default ' ' not null,
  hlbmspar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index hl7bmta1 on hl7bmtaf
(
hlbmstat,
hlbmdate,
hlbmtime,
dhlbmmsg
);
revoke all on hl7bmtaf from public ; 
grant select on hl7bmtaf to public ; 
