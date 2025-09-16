create table emruseaf
(
  emuseus     char(10) default ' ' not null,
  emusdes     char(35) default ' ' not null,
  emuspas     char(10) default ' ' not null,
  emuslev     char(2) default ' ' not null,
  emusact     char(1) default ' ' not null,
  emusedt     char(8) default ' ' not null,
  emusspa     char(60) default ' ' not null,
  lf          char(1)
);
create unique index emrusea1 on emruseaf
(
emuseus
);
create unique index emrusea2 on emruseaf
(
emusdes,
emuseus
);
revoke all on emruseaf from public ; 
grant select on emruseaf to public ; 
