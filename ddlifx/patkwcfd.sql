create table patkwcyy
(
ptkwcard    char(20),
ptkwurno    char(8),
ptkwdays    decimal(3,0),
ptkwvisi    decimal(3,0),
ptkwspar    char(20),
lf          char(1)
);
create unique index patkwca1 on patkwcyy
(
ptkwcard,
ptkwurno
);
create unique index patkwca2 on patkwcyy
(
ptkwurno,
ptkwcard
);
revoke all on patkwcyy from public ; 
grant select on patkwcyy to public ; 
