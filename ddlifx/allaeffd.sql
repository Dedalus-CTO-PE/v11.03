create table allaefaf
(
  alaevisn    char(8) default ' ' not null,
  alaemryn    char(1) default ' ' not null,
  alaeetyn    char(1) default ' ' not null,
  alaersyn    char(1) default ' ' not null,
  alaeotyn    char(1) default ' ' not null,
  alaeotds    char(30) default ' ' not null,
  alaepdrs    char(9) default ' ' not null,
  alaespar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index allaefa1 on allaefaf
(
alaevisn
);
revoke all on allaefaf from public ; 
grant select on allaefaf to public ; 
