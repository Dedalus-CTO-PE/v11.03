create table eoclnkaf
(
  eclnurno    char(8) default ' ' not null,
  declnepn    char(5) default ' ' not null,
  declnhos    char(2) default ' ' not null,
  declnvis    char(8) default ' ' not null,
  eclnspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index eoclnka1 on eoclnkaf
(
eclnurno,
declnepn,
declnhos,
declnvis
);
create unique index eoclnka2 on eoclnkaf
(
declnhos,
declnvis
);
create unique index eoclnka3 on eoclnkaf
(
declnvis,
eclnurno,
declnepn,
declnhos
);
revoke all on eoclnkaf from public ; 
grant select on eoclnkaf to public ; 
