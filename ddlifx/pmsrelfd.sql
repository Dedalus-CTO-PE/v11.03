create table pmsrelaf
(
  pmrlrels    char(10) default ' ' not null,
  pmrldesc    char(30) default ' ' not null,
  pmrlactv    char(1) default ' ' not null,
  pmrlhdpe    char(10) default ' ' not null,
  pmrlspar    char(39) default ' ' not null,
  lf          char(1)
);
create unique index pmsrela1 on pmsrelaf
(
pmrlrels
);
create unique index pmsrela2 on pmsrelaf
(
pmrldesc,
pmrlrels
);
revoke all on pmsrelaf from public ; 
grant select on pmsrelaf to public ; 
