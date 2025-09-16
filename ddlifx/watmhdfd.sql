create table watmhdaf
(
  wtmhurno    char(8) default ' ' not null,
  wtmhproc    char(9) default ' ' not null,
  wtmhpcnt    char(2) default ' ' not null,
  wtmhtype    char(3) default ' ' not null,
  wtmhnote    char(6) default ' ' not null,
  wtmhdate    char(8) default ' ' not null,
  wtmhtime    char(8) default ' ' not null,
  wtmhuser    char(10) default ' ' not null,
  wtmhoccg    char(3) default ' ' not null,
  wtmhdelt    char(1) default ' ' not null,
  wtmhddat    char(8) default ' ' not null,
  wtmhdtim    char(8) default ' ' not null,
  wtmhduse    char(10) default ' ' not null,
  wtmhdocc    char(3) default ' ' not null,
  wtmhspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index watmhda1 on watmhdaf
(
wtmhurno,
wtmhproc,
wtmhpcnt,
wtmhtype,
wtmhnote
);
revoke all on watmhdaf from public ; 
grant select on watmhdaf to public ; 
