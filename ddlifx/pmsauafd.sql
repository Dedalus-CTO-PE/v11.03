create table pmsauaaf
(
  pmaaadat    char(8) default ' ' not null,
  pmaaatim    char(8) default ' ' not null,
  pmaaatyp    char(1) default ' ' not null,
  pmaacntr    char(6) default ' ' not null,
  pmaahacg    char(6) default ' ' not null,
  pmaavalf    char(3) default ' ' not null,
  pmaaovlt    char(3) default ' ' not null,
  pmaanvlt    char(3) default ' ' not null,
  pmaaoadj    decimal(14,4) default 0 not null,
  pmaanadj    decimal(14,4) default 0 not null,
  pmaacuid    char(10) default ' ' not null,
  pmaaspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsauaa1 on pmsauaaf
(
pmaaadat,
pmaaatim,
pmaaatyp,
pmaacntr,
pmaahacg,
pmaavalf
);
create unique index pmsauaa2 on pmsauaaf
(
pmaacntr,
pmaahacg,
pmaavalf,
pmaaadat,
pmaaatim,
pmaaatyp
);
revoke all on pmsauaaf from public ; 
grant select on pmsauaaf to public ; 
