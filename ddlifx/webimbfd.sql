create table webimbaf
(
  wbibbthn    char(8) default ' ' not null,
  wbibhfnd    char(6) default ' ' not null,
  wbibbhtl    decimal(14,2) default 0 not null,
  wbibtrib    decimal(6,0) default 0 not null,
  wbibdtbc    char(8) default ' ' not null,
  wbibtmbc    char(8) default ' ' not null,
  wbiboper    char(10) default ' ' not null,
  dwbibeet    char(1) default ' ' not null,
  wbibefnm    char(18) default ' ' not null,
  wbiblocn    char(8) default ' ' not null,
  wbibsnid    char(60) default ' ' not null,
  wbibspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webimba1 on webimbaf
(
wbibbthn
);
create unique index webimba2 on webimbaf
(
wbibdtbc,
wbibbthn
);
revoke all on webimbaf from public ; 
grant select on webimbaf to public ; 
