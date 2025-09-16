create table webemhaf
(
  wbeuarid    char(20) default ' ' not null,
  wbeurptc    char(3) default ' ' not null,
  wbeuctid    char(24) default ' ' not null,
  wbeumscd    char(4) default ' ' not null,
  wbeumstx    char(500) default ' ' not null,
  wbeucpmn    char(10) default ' ' not null,
  wbeucprn    char(1) default ' ' not null,
  wbeucpfn    char(40) default ' ' not null,
  wbeuflcn    char(8) default ' ' not null,
  wbeuldat    char(10) default ' ' not null,
  wbeucdte    char(8) default ' ' not null,
  wbeuctim    char(8) default ' ' not null,
  wbeucuid    char(10) default ' ' not null,
  wbeuudte    char(8) default ' ' not null,
  wbeuutim    char(8) default ' ' not null,
  wbeuuuid    char(10) default ' ' not null,
  wbeumsid    char(36) default ' ' not null,
  wbeuspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webemha1 on webemhaf
(
wbeuarid,
wbeurptc
);
create unique index webemha2 on webemhaf
(
wbeuctid,
wbeuarid,
wbeurptc
);
create unique index webemha3 on webemhaf
(
wbeumsid,
wbeuarid,
wbeurptc
);
revoke all on webemhaf from public ; 
grant select on webemhaf to public ; 
