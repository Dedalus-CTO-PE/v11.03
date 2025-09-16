create table apsnkiaf
(
  apnkbatc    char(5) default ' ' not null,
  apnkuniq    char(3) default ' ' not null,
  apnkkwd     char(15) default ' ' not null,
  apnkspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index apsnkia1 on apsnkiaf
(
apnkbatc,
apnkuniq,
apnkkwd
);
create unique index apsnkia2 on apsnkiaf
(
apnkkwd,
apnkbatc,
apnkuniq
);
revoke all on apsnkiaf from public ; 
grant select on apsnkiaf to public ; 
