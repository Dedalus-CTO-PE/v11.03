create table ceaperaf
(
  cepeyear    char(4) default ' ' not null,
  cepeper     char(2) default ' ' not null,
  cepedes     char(15) default ' ' not null,
  cepeend     char(8) default ' ' not null,
  cepespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceapera1 on ceaperaf
(
cepeyear,
cepeper
);
create unique index ceapera2 on ceaperaf
(
cepeend,
cepeyear,
cepeper
);
revoke all on ceaperaf from public ; 
grant select on ceaperaf to public ; 
