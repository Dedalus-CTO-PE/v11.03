create table pmsnewaf
(
  pmnwfiel    char(8) default ' ' not null,
  pmnwflno    char(3) default ' ' not null,
  pmnwdeft    char(1) default ' ' not null,
  pmnwcode    char(10) default ' ' not null,
  pmnwfree    char(40) default ' ' not null,
  pmnwspar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index pmsnewa1 on pmsnewaf
(
pmnwfiel
);
create unique index pmsnewa2 on pmsnewaf
(
pmnwflno
);
revoke all on pmsnewaf from public ; 
grant select on pmsnewaf to public ; 
