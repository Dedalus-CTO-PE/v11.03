create table fmsnrcaf
(
  fmnccode    char(3) default ' ' not null,
  fmnctcod    char(12) default ' ' not null,
  fmncaseq    char(5) default ' ' not null,
  fmncscod    char(12) default ' ' not null,
  fmncspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnrca1 on fmsnrcaf
(
fmnccode,
fmnctcod,
fmncaseq,
fmncscod
);
create unique index fmsnrca2 on fmsnrcaf
(
fmnccode,
fmncscod,
fmnctcod
);
revoke all on fmsnrcaf from public ; 
grant select on fmsnrcaf to public ; 
