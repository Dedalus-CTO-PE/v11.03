create table patnhhaf
(
ptnhclam    char(3),
ptnhatyp    char(3),
ptnhmxdc    decimal(14,2),
ptnhpaic    decimal(14,2),
ptnhcdes    char(30),
ptnhspar    char(42),
lf          char(1)
);
create unique index patnhha1 on patnhhaf
(
ptnhclam,
ptnhatyp
);
revoke all on patnhhaf from public ; 
grant select on patnhhaf to public ; 
