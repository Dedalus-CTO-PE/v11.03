create table oprdphaf
(
  opdhcode    char(6) default ' ' not null,
  opdhpref    char(9) default ' ' not null,
  opdhdesc    char(50) default ' ' not null,
  opdhhosp    char(3) default ' ' not null,
  opdhspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index oprdpha1 on oprdphaf
(
opdhcode,
opdhpref,
opdhhosp
);
create unique index oprdpha2 on oprdphaf
(
opdhdesc,
opdhcode,
opdhpref,
opdhhosp
);
revoke all on oprdphaf from public ; 
grant select on oprdphaf to public ; 
