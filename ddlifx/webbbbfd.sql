create table webbbbaf
(
  wbbbbthn    char(8) default ' ' not null,
  wbbbbthl    decimal(14,2) default 0 not null,
  wbbbtrib    decimal(6,0) default 0 not null,
  wbbbdtbc    char(8) default ' ' not null,
  wbbbtmbc    char(8) default ' ' not null,
  wbbboper    char(10) default ' ' not null,
  wbbbefnm    char(18) default ' ' not null,
  wbbblocn    char(65) default ' ' not null,
  wbbbsnid    char(60) default ' ' not null,
  wbbbspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index webbbba1 on webbbbaf
(
wbbbbthn
);
create unique index webbbba2 on webbbbaf
(
wbbbdtbc,
wbbbbthn
);
revoke all on webbbbaf from public ; 
grant select on webbbbaf to public ; 
