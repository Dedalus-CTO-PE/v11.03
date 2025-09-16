create table webbbaaf
(
  wbbainvn    char(8) default ' ' not null,
  wbbadate    char(8) default ' ' not null,
  wbbatime    char(8) default ' ' not null,
  wbbabatn    char(8) default ' ' not null,
  wbbastat    decimal(2,0) default 0 not null,
  wbbatype    char(2) default ' ' not null,
  wbbaoper    char(10) default ' ' not null,
  wbbatrid    char(24) default ' ' not null,
  wbbaeror    char(4) default ' ' not null,
  wbbaerot    char(100) default ' ' not null,
  wbbamodl    char(1) default ' ' not null,
  wbbamsid    char(36) default ' ' not null,
  wbbaspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index webbbaa1 on webbbaaf
(
wbbainvn,
wbbadate,
wbbatime,
wbbatype,
wbbamodl
);
create unique index webbbaa2 on webbbaaf
(
wbbadate,
wbbatime,
wbbatype,
wbbainvn,
wbbamodl
);
create unique index webbbaa3 on webbbaaf
(
wbbainvn,
wbbabatn,
wbbadate,
wbbatime,
wbbatype,
wbbamodl
);
create unique index webbbaa4 on webbbaaf
(
wbbatrid,
wbbainvn,
wbbadate,
wbbatime,
wbbatype,
wbbamodl
);
create unique index webbbaa5 on webbbaaf
(
wbbamsid,
wbbainvn,
wbbadate,
wbbatime,
wbbatype,
wbbamodl
);
revoke all on webbbaaf from public ; 
grant select on webbbaaf to public ; 
