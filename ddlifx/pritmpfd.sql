create table pritmpaf
(
  prtmuniq    char(8) default ' ' not null,
  prtmprac    char(6) default ' ' not null,
  prtmdoct    char(10) default ' ' not null,
  prtmpind    char(3) default ' ' not null,
  prtmcntr    char(8) default ' ' not null,
  prtmdate    char(8) default ' ' not null,
  prtmtime    char(8) default ' ' not null,
  prtmityp    char(1) default ' ' not null,
  prtmitem    char(9) default ' ' not null,
  prtmsubi    char(3) default ' ' not null,
  prtmdesc    char(30) default ' ' not null,
  prtmtest    decimal(1,0) default 0 not null,
  prtms4fl    decimal(1,0) default 0 not null,
  prtmgsta    decimal(1,0) default 0 not null,
  prtmgstc    char(6) default ' ' not null,
  prtmqunt    decimal(3,0) default 0 not null,
  prtmcamt    decimal(14,2) default 0 not null,
  prtmiamt    decimal(14,2) default 0 not null,
  prtmspar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index pritmpa1 on pritmpaf
(
prtmuniq,
prtmprac,
prtmdoct,
prtmpind,
prtmcntr
);
revoke all on pritmpaf from public ; 
grant select on pritmpaf to public ; 
