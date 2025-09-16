create table emricdaf
(
  emic9cod    char(9) default ' ' not null,
  emicdesc    char(70) default ' ' not null,
  emic10cd    char(9) default ' ' not null,
  emicactv    decimal(1,0) default 0 not null,
  emicvemd    char(9) default ' ' not null,
  emickeyw    char(70) default ' ' not null,
  emicmeth    char(1) default ' ' not null,
  emicspar    char(19) default ' ' not null,
  lf          char(1)
);
create unique index emricda1 on emricdaf
(
emic9cod
);
create unique index emricda2 on emricdaf
(
emicdesc,
emic9cod
);
create unique index emricda3 on emricdaf
(
emic10cd,
emic9cod
);
create unique index emricda4 on emricdaf
(
emicvemd,
emic9cod
);
revoke all on emricdaf from public ; 
grant select on emricdaf to public ; 
