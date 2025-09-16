create table ccsdcoaf
(
  ccdchcd     char(2) default ' ' not null,
  ccdcdpt     char(8) default ' ' not null,
  ccdcyear    char(4) default ' ' not null,
  ccdcper     char(2) default ' ' not null,
  ccdccty     char(4) default ' ' not null,
  ccdcdir     decimal(14,2) default 0 not null,
  ccdcind     decimal(14,2) default 0 not null,
  ccdccal     decimal(14,2) default 0 not null,
  ccdcdbu     decimal(14,2) default 0 not null,
  ccdcibu     decimal(14,2) default 0 not null,
  ccdccbu     decimal(14,2) default 0 not null,
  ccdcfbu     decimal(14,2) default 0 not null,
  ccdcspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccsdcoa1 on ccsdcoaf
(
ccdchcd,
ccdcdpt,
ccdcyear,
ccdcper,
ccdccty
);
create unique index ccsdcoa2 on ccsdcoaf
(
ccdchcd,
ccdcdpt,
ccdccty,
ccdcyear,
ccdcper
);
revoke all on ccsdcoaf from public ; 
grant select on ccsdcoaf to public ; 
