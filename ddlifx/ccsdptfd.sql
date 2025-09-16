create table ccsdptaf
(
  ccdphcd     char(2) default ' ' not null,
  ccdpdpt     char(8) default ' ' not null,
  ccdpdes     char(35) default ' ' not null,
  ccdpdty     char(1) default ' ' not null,
  ccdpseq     char(5) default ' ' not null,
  ccdpaty     char(4) default ' ' not null,
  ccdpspa     char(31) default ' ' not null,
  lf          char(1)
);
create unique index ccsdpta1 on ccsdptaf
(
ccdphcd,
ccdpdpt
);
create unique index ccsdpta2 on ccsdptaf
(
ccdphcd,
ccdpdes,
ccdpdpt
);
create unique index ccsdpta3 on ccsdptaf
(
ccdphcd,
ccdpdty,
ccdpdpt
);
create unique index ccsdpta4 on ccsdptaf
(
ccdphcd,
ccdpseq,
ccdpdpt
);
revoke all on ccsdptaf from public ; 
grant select on ccsdptaf to public ; 
