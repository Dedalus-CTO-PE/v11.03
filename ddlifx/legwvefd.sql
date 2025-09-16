create table legwvetf
(
  dlvadmno    char(8) default ' ' not null,
  lvclmno     char(20) default ' ' not null,
  lgwvauth    char(12) default ' ' not null,
  lgwvdate    char(8) default ' ' not null,
  lvspare     char(1) default ' ' not null,
  lf          char(1)
);
create unique index legwvet1 on legwvetf
(
dlvadmno
);
revoke all on legwvetf from public ; 
grant select on legwvetf to public ; 
