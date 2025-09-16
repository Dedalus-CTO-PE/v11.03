create table patnursm
(
  nstat       char(3) default ' ' not null,
  nward       char(3) default ' ' not null,
  nsdesc      char(30) default ' ' not null,
  nsist       char(30) default ' ' not null,
  nsextn      char(20) default ' ' not null,
  nsspare     char(41) default ' ' not null,
  lf          char(1)
);
create unique index patnurs1 on patnursm
(
nstat,
nward
);
revoke all on patnursm from public ; 
grant select on patnursm to public ; 
