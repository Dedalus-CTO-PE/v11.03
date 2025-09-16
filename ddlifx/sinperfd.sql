create table sinperaf
(
sipeyear    char(4),
sipeper     char(2),
sipesdt     char(8),
sipeedt     char(8),
sipeloc     decimal(1,0),
sipespa     char(8),
lf          char(1)
);
create unique index sinpera1 on sinperaf
(
sipeyear,
sipeper
);
create unique index sinpera2 on sinperaf
(
sipeedt,
sipeyear,
sipeper
);
revoke all on sinperaf from public ; 
grant select on sinperaf to public ; 
