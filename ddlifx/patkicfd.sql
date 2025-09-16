create table patkicaf
(
  ptkicode    char(6) default ' ' not null,
  ptkikwrd    char(15) default ' ' not null,
  ptkispar    char(29) default ' ' not null,
  lf          char(1)
);
create unique index patkica1 on patkicaf
(
ptkicode,
ptkikwrd
);
create unique index patkica2 on patkicaf
(
ptkikwrd,
ptkicode
);
revoke all on patkicaf from public ; 
grant select on patkicaf to public ; 
