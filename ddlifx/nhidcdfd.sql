create table nhidcdaf
(
nhdcdcd     char(1),
nhdcdes     char(25),
nhdciba     char(3),
nhdcspa     char(20),
lf          char(1)
);
create unique index nhidcda1 on nhidcdaf
(
nhdcdcd
);
revoke all on nhidcdaf from public ; 
grant select on nhidcdaf to public ; 
