create table watudcaf
(
wtucdate    char(6),
wtucunit    char(3),
wtucdoct    char(6),
wtucprty    char(3),
wtucccod    char(3),
wtucnumb    decimal(8,0),
wtucspar    char(13),
lf          char(1)
);
create unique index watudca1 on watudcaf
(
wtucdate,
wtucunit,
wtucdoct,
wtucprty,
wtucccod
);
revoke all on watudcaf from public ; 
grant select on watudcaf to public ; 
