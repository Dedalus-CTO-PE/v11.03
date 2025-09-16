create table paturcaf
(
  dpturadm    char(8) default ' ' not null,
  pturdate    char(8) default ' ' not null,
  pturtime    char(8) default ' ' not null,
  pturourn    char(8) default ' ' not null,
  pturspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index paturca1 on paturcaf
(
dpturadm,
pturdate,
pturtime
);
create unique index paturca2 on paturcaf
(
pturdate,
pturtime,
dpturadm
);
revoke all on paturcaf from public ; 
grant select on paturcaf to public ; 
