create table patlisaf
(
ptlifund    char(6),
ptlitabl    char(8),
ptlilins    char(1),
ptlispar    char(24),
lf          char(1)
);
create unique index patlisa1 on patlisaf
(
ptlifund,
ptlitabl
);
revoke all on patlisaf from public ; 
grant select on patlisaf to public ; 
