create table websddaf
(
  wbswhosp    char(3) default ' ' not null,
  dwbswflg    char(2) default ' ' not null,
  wbswmodl    char(1) default ' ' not null,
  wbswuniq    char(8) default ' ' not null,
  wbswinvn    char(8) default ' ' not null,
  wbswbatn    char(8) default ' ' not null,
  wbswurno    char(8) default ' ' not null,
  wbswtrid    char(24) default ' ' not null,
  wbswmsid    char(36) default ' ' not null,
  wbsweror    char(4) default ' ' not null,
  wbswtext    char(500) default ' ' not null,
  wbswresc    char(3) default ' ' not null,
  wbswspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index websdda1 on websddaf
(
wbswhosp,
dwbswflg,
wbswmodl,
wbswuniq,
wbswinvn,
wbswbatn
);
create unique index websdda2 on websddaf
(
wbswinvn,
wbswbatn,
wbswmodl
);
create unique index websdda3 on websddaf
(
wbswbatn,
wbswuniq,
wbswinvn
);
create unique index websdda4 on websddaf
(
wbswuniq,
wbswinvn,
wbswbatn
);
create unique index websdda5 on websddaf
(
wbswhosp,
wbswurno,
wbswuniq,
wbswinvn,
wbswbatn
);
create unique index websdda6 on websddaf
(
wbswtrid,
wbswinvn,
wbswbatn
);
create unique index websdda7 on websddaf
(
wbswmsid,
wbswinvn,
wbswbatn,
wbswmodl
);
create unique index websdda8 on websddaf
(
dwbswflg,
wbswhosp,
wbswmodl,
wbswuniq,
wbswinvn,
wbswbatn
);
revoke all on websddaf from public ; 
grant select on websddaf to public ; 
