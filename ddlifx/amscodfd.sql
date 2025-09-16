create table amscodaf
(
  amcdcat     char(2) default ' ' not null,
  amcdcod     char(3) default ' ' not null,
  amcddes     char(35) default ' ' not null,
  amcdur1     char(30) default ' ' not null,
  amcdur2     char(30) default ' ' not null,
  amcduy1     char(1) default ' ' not null,
  amcduy2     char(1) default ' ' not null,
  amcdspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amscoda1 on amscodaf
(
amcdcat,
amcdcod
);
create unique index amscoda2 on amscodaf
(
amcdcod,
amcdcat
);
revoke all on amscodaf from public ; 
grant select on amscodaf to public ; 
