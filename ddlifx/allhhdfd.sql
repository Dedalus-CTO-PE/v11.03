create table allhhdaf
(
  alhhfnam    char(20) default ' ' not null,
  alhhsdat    char(8) default ' ' not null,
  alhhedat    char(8) default ' ' not null,
  alhhstat    char(1) default ' ' not null,
  alhhspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index allhhda1 on allhhdaf
(
alhhfnam
);
create unique index allhhda2 on allhhdaf
(
alhhsdat,
alhhfnam
);
revoke all on allhhdaf from public ; 
grant select on allhhdaf to public ; 
