create table allgroaf
(
  algrsesn    char(8) default ' ' not null,
  algrname    char(60) default ' ' not null,
  algrsest    char(3) default ' ' not null,
  algrlocn    char(3) default ' ' not null,
  algrdayi    char(1) default ' ' not null,
  algrsdat    char(8) default ' ' not null,
  algrstim    char(8) default ' ' not null,
  algrdurn    char(3) default ' ' not null,
  algrdept    char(3) default ' ' not null,
  algrfreq    char(3) default ' ' not null,
  algractv    char(1) default ' ' not null,
  algrcdat    char(8) default ' ' not null,
  algrctim    char(8) default ' ' not null,
  algrcuid    char(10) default ' ' not null,
  algrudat    char(8) default ' ' not null,
  algrutim    char(8) default ' ' not null,
  algruuid    char(10) default ' ' not null,
  algrcont    char(3) default ' ' not null,
  algrudf1    char(3) default ' ' not null,
  algrudf2    char(3) default ' ' not null,
  algrudf3    char(3) default ' ' not null,
  algrudf4    char(3) default ' ' not null,
  algrspar    char(35) default ' ' not null,
  lf          char(1)
);
create unique index allgroa1 on allgroaf
(
algrsesn
);
revoke all on allgroaf from public ; 
grant select on allgroaf to public ; 
