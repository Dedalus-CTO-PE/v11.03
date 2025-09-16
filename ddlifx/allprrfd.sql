create table allprraf
(
  alprdept    char(3) default ' ' not null,
  alprprob    char(9) default ' ' not null,
  alprdesc    char(40) default ' ' not null,
  alpricd     char(9) default ' ' not null,
  alpractv    char(1) default ' ' not null,
  alprcdat    char(8) default ' ' not null,
  alprctim    char(8) default ' ' not null,
  alprcuid    char(10) default ' ' not null,
  alprudat    char(8) default ' ' not null,
  alprutim    char(8) default ' ' not null,
  alpruuid    char(10) default ' ' not null,
  alprmhdp    char(4) default ' ' not null,
  alprdfcd    char(1) default ' ' not null,
  alprothr    char(1) default ' ' not null,
  alprspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allprra1 on allprraf
(
alprdept,
alprprob
);
create unique index allprra2 on allprraf
(
alprdept,
alprdesc,
alprprob
);
revoke all on allprraf from public ; 
grant select on allprraf to public ; 
