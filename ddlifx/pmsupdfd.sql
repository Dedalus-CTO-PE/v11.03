create table pmsupdaf
(
  pmudurno    char(8) default ' ' not null,
  pmuddate    char(8) default ' ' not null,
  pmudtime    char(8) default ' ' not null,
  pmuduser    char(10) default ' ' not null,
  pmuddatc    char(8) default ' ' not null,
  pmudtimc    char(8) default ' ' not null,
  pmudwebc    char(10) default ' ' not null,
  pmudspar    char(200) default ' ' not null,
  lf          char(1)
);
create unique index pmsupda1 on pmsupdaf
(
pmudurno
);
revoke all on pmsupdaf from public ; 
grant select on pmsupdaf to public ; 
