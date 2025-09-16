create table weblidaf
(
wblilkid    char(8),
wblidesc    char(50),
wblispar    char(30),
lf          char(1)
);
create unique index weblida1 on weblidaf
(
wblilkid
);
revoke all on weblidaf from public ; 
grant select on weblidaf to public ; 
