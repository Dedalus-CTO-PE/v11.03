create table rcpdstaf
(
  rcdsuniq    char(20) default ' ' not null,
  rcdsurno    char(8) default ' ' not null,
  rcdsvisn    char(8) default ' ' not null,
  rcdssfid    char(18) default ' ' not null,
  rcdsdsta    char(1) default ' ' not null,
  rcdsdamn    decimal(14,2) default 0 not null,
  rcdsudat    char(8) default ' ' not null,
  rcdsutim    char(8) default ' ' not null,
  rcdsuwid    char(10) default ' ' not null,
  rcdsspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index rcpdsta1 on rcpdstaf
(
rcdsuniq
);
create unique index rcpdsta2 on rcpdstaf
(
rcdsvisn,
rcdsuniq
);
create unique index rcpdsta3 on rcpdstaf
(
rcdsdsta,
rcdsuniq
);
revoke all on rcpdstaf from public ; 
grant select on rcpdstaf to public ; 
