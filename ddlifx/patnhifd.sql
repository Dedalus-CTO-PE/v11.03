create table patnhiaf
(
ptnhcat     char(2),
ptnhnhi     char(4),
ptnhcode    char(3),
ptnhipar    char(21),
lf          char(1)
);
create unique index patnhia1 on patnhiaf
(
ptnhcat,
ptnhnhi
);
revoke all on patnhiaf from public ; 
grant select on patnhiaf to public ; 
