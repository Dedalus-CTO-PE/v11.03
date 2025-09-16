create table mehlsmaf
(
  mhlmcrls    char(3) default ' ' not null,
  mhlmvnls    char(3) default ' ' not null,
  mhlmactv    char(1) default ' ' not null,
  mhlmdina    char(8) default ' ' not null,
  mhlmcuid    char(10) default ' ' not null,
  mhlmcdat    char(8) default ' ' not null,
  mhlmctim    char(8) default ' ' not null,
  mhlmiuid    char(10) default ' ' not null,
  mhlmidat    char(8) default ' ' not null,
  mhlmitim    char(8) default ' ' not null,
  mhlmspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index mehlsma1 on mehlsmaf
(
mhlmcrls,
mhlmvnls
);
revoke all on mehlsmaf from public ; 
grant select on mehlsmaf to public ; 
