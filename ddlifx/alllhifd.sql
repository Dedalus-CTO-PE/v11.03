create table alllhiaf
(
  allhurno    char(8) default ' ' not null,
  allhdate    char(8) default ' ' not null,
  allhtime    char(8) default ' ' not null,
  allhltno    char(3) default ' ' not null,
  allhrefn    char(8) default ' ' not null,
  allhuser    char(10) default ' ' not null,
  allhspar    char(35) default ' ' not null,
  lf          char(1)
);
create unique index alllhia1 on alllhiaf
(
allhurno,
allhrefn,
allhltno,
allhdate,
allhtime
);
create unique index alllhia2 on alllhiaf
(
allhrefn,
allhurno,
allhltno,
allhdate,
allhtime
);
create unique index alllhia3 on alllhiaf
(
allhrefn,
allhurno,
allhdate,
allhtime,
allhltno
);
revoke all on alllhiaf from public ; 
grant select on alllhiaf to public ; 
