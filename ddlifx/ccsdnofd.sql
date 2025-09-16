create table ccsdnoaf
(
  ccdnhcd     char(2) default ' ' not null,
  ccdndpt     char(8) default ' ' not null,
  ccdnlin     char(3) default ' ' not null,
  ccdndat     char(70) default ' ' not null,
  ccdnspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index ccsdnoa1 on ccsdnoaf
(
ccdnhcd,
ccdndpt,
ccdnlin
);
revoke all on ccsdnoaf from public ; 
grant select on ccsdnoaf to public ; 
