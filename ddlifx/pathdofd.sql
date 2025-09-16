create table pathdoct
(
dhdcode     char(3),
hdname      char(14),
hdserv      char(3),
lf          char(1)
);
create unique index pathdoc1 on pathdoct
(
dhdcode
);
revoke all on pathdoct from public ; 
grant select on pathdoct to public ; 
