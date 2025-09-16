create table webtplaf
(
  wbtpprg     char(8) default ' ' not null,
  wbtpopt     char(2) default ' ' not null,
  wbtptpl     char(3) default ' ' not null,
  wbtpdes     char(25) default ' ' not null,
  wbtpfil     char(40) default ' ' not null,
  wbtplev     char(2) default ' ' not null,
  wbtpmsc     char(1) default ' ' not null,
  wbtpmty     char(1) default ' ' not null,
  wbtptar     char(1) default ' ' not null,
  wbtpwid     char(5) default ' ' not null,
  wbtphig     char(5) default ' ' not null,
  wbtplp1     char(8) default ' ' not null,
  wbtplp2     char(8) default ' ' not null,
  wbtplp3     char(8) default ' ' not null,
  wbtplp4     char(8) default ' ' not null,
  wbtpspa     char(33) default ' ' not null,
  lf          char(1)
);
create unique index webtpla1 on webtplaf
(
wbtpprg,
wbtpopt,
wbtptpl
);
revoke all on webtplaf from public ; 
grant select on webtplaf to public ; 
