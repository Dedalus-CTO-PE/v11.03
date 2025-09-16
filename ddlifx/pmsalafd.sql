create table pmsalaaf
(
  pmanurno    char(8) default ' ' not null,
  pmanacat    char(2) default ' ' not null,
  pmanacod    char(3) default ' ' not null,
  pmancntr    char(3) default ' ' not null,
  pmanlnno    char(3) default ' ' not null,
  pmancomm    char(70) default ' ' not null,
  pmanspar    char(37) default ' ' not null,
  lf          char(1)
);
create unique index pmsalaa1 on pmsalaaf
(
pmanurno,
pmanacat,
pmanacod,
pmancntr,
pmanlnno
);
revoke all on pmsalaaf from public ; 
grant select on pmsalaaf to public ; 
