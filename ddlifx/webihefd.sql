create table webiheaf
(
  wbilfbid    char(3) default ' ' not null,
  wbilarid    char(20) default ' ' not null,
  wbilfrid    char(15) default ' ' not null,
  wbilrptc    char(3) default ' ' not null,
  wbilcacn    char(2) default ' ' not null,
  wbilelnm    char(50) default ' ' not null,
  wbilmpid    char(8) default ' ' not null,
  wbiltrid    char(24) default ' ' not null,
  wbilmsid    char(36) default ' ' not null,
  wbilspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webihea1 on webiheaf
(
wbilfbid,
wbilarid,
wbilfrid,
wbilrptc,
wbilcacn
);
create unique index webihea2 on webiheaf
(
wbiltrid,
wbilfbid,
wbilarid,
wbilfrid,
wbilrptc,
wbilcacn
);
create unique index webihea3 on webiheaf
(
wbilmsid,
wbilfbid,
wbilarid,
wbilfrid,
wbilrptc,
wbilcacn
);
revoke all on webiheaf from public ; 
grant select on webiheaf to public ; 
