create table watupcaf
(
wtupdate    char(6),
wtupunit    char(3),
wtupdoct    char(6),
wtupopty    char(3),
wtupnpty    char(3),
wtupnumb    decimal(8,0),
wtupspar    char(13),
lf          char(1)
);
create unique index watupca1 on watupcaf
(
wtupdate,
wtupunit,
wtupdoct,
wtupopty,
wtupnpty
);
revoke all on watupcaf from public ; 
grant select on watupcaf to public ; 
