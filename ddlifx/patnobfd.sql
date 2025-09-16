create table patnobef
(
nbward      char(3),
dnbadmno    char(8),
dnbplur     char(2),
nbroom      char(3),
nbspare     char(6),
lf          char(1)
);
create unique index patnobe1 on patnobef
(
nbward,
dnbadmno,
dnbplur
);
create unique index patnobe2 on patnobef
(
nbward,
nbroom,
dnbadmno,
dnbplur
);
create unique index patnobe3 on patnobef
(
dnbadmno,
nbward,
dnbplur
);
revoke all on patnobef from public ; 
grant select on patnobef to public ; 
