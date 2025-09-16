create table pmsfphaf
(
  pmfphcpc    char(10) default ' ' not null,
  pmfphfnd    char(6) default ' ' not null,
  pmfpfpid    char(12) default ' ' not null,
  pmfpspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsfpha1 on pmsfphaf
(
pmfphcpc,
pmfphfnd
);
revoke all on pmsfphaf from public ; 
grant select on pmsfphaf to public ; 
