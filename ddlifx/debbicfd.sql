create table debbicaf
(
  dbbcdeb     char(8) default ' ' not null,
  dbbcuni     char(6) default ' ' not null,
  dbbclin     char(3) default ' ' not null,
  dbbccom     char(50) default ' ' not null,
  dbbcspa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index debbica1 on debbicaf
(
dbbcdeb,
dbbcuni,
dbbclin
);
revoke all on debbicaf from public ; 
grant select on debbicaf to public ; 
