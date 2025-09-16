create table debadjaf
(
  dbadcod     char(3) default ' ' not null,
  dbaddes     char(35) default ' ' not null,
  dbadtyp     char(1) default ' ' not null,
  dbadled     char(2) default ' ' not null,
  dbadiac     char(12) default ' ' not null,
  dbadtac     char(12) default ' ' not null,
  dbadur1     char(35) default ' ' not null,
  dbadur2     char(35) default ' ' not null,
  dbaduy1     char(1) default ' ' not null,
  dbaduy2     char(1) default ' ' not null,
  dbadspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index debadja1 on debadjaf
(
dbadcod
);
revoke all on debadjaf from public ; 
grant select on debadjaf to public ; 
