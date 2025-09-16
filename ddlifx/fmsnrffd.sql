create table fmsnrfaf
(
  fmnfcode    char(3) default ' ' not null,
  fmnftcod    char(12) default ' ' not null,
  fmnfaseq    char(5) default ' ' not null,
  fmnfscod    char(12) default ' ' not null,
  fmnfspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnrfa1 on fmsnrfaf
(
fmnfcode,
fmnftcod,
fmnfaseq,
fmnfscod
);
create unique index fmsnrfa2 on fmsnrfaf
(
fmnfcode,
fmnfscod,
fmnftcod
);
revoke all on fmsnrfaf from public ; 
grant select on fmsnrfaf to public ; 
