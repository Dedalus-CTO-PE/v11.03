create table webihhaf
(
  wbipfbid    char(3) default ' ' not null,
  wbiparid    char(20) default ' ' not null,
  wbipfrid    char(15) default ' ' not null,
  wbiprptc    char(3) default ' ' not null,
  wbipsecn    char(2) default ' ' not null,
  wbipexcn    char(2) default ' ' not null,
  wbipexcd    char(4) default ' ' not null,
  wbipextx    char(80) default ' ' not null,
  wbiptrid    char(24) default ' ' not null,
  wbipmsid    char(36) default ' ' not null,
  wbipspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webihha1 on webihhaf
(
wbipfbid,
wbiparid,
wbipfrid,
wbiprptc,
wbipsecn,
wbipexcn
);
create unique index webihha2 on webihhaf
(
wbiptrid,
wbipfbid,
wbiparid,
wbipfrid,
wbiprptc,
wbipsecn,
wbipexcn
);
create unique index webihha3 on webihhaf
(
wbipmsid,
wbipfbid,
wbiparid,
wbipfrid,
wbiprptc,
wbipsecn,
wbipexcn
);
revoke all on webihhaf from public ; 
grant select on webihhaf to public ; 
