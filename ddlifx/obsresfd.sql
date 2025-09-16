create table obsresaf
(
obrsvisn    char(8),
obrsline    char(3),
obrsrest    char(127),
obrsspar    char(50),
lf          char(1)
);
create unique index obsresa1 on obsresaf
(
obrsvisn,
obrsline
);
revoke all on obsresaf from public ; 
grant select on obsresaf to public ; 
