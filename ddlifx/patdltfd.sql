create table patdltaf
(
  dptdlltn    char(3) default ' ' not null,
  dptdllin    char(3) default ' ' not null,
  ptdltext    char(70) default ' ' not null,
  ptdllvar    decimal(1,0) default 0 not null,
  ptdlpbot    decimal(2,0) default 0 not null,
  ptdlptop    decimal(2,0) default 0 not null,
  ptdlppag    decimal(2,0) default 0 not null,
  ptdlptab    decimal(2,0) default 0 not null,
  ptdlactv    char(1) default ' ' not null,
  ptdlspar    char(11) default ' ' not null,
  lf          char(1)
);
create unique index patdlta1 on patdltaf
(
dptdlltn,
dptdllin
);
create unique index patdlta2 on patdltaf
(
dptdllin,
dptdlltn
);
revoke all on patdltaf from public ; 
grant select on patdltaf to public ; 
