create table oprtrybf
(
  optdcode    char(15) default ' ' not null,
  optditem    char(15) default ' ' not null,
  optdqty     decimal(3,0) default 0 not null,
  optdhosp    char(3) default ' ' not null,
  optdspar    char(34) default ' ' not null,
  lf          char(1)
);
create unique index oprtryb1 on oprtrybf
(
optdcode,
optditem,
optdhosp
);
revoke all on oprtrybf from public ; 
grant select on oprtrybf to public ; 
