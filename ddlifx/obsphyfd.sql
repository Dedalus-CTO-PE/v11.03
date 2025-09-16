create table obsphyaf
(
obphvisn    char(8),
obphline    char(3),
obphphys    char(127),
obphspar    char(50),
lf          char(1)
);
create unique index obsphya1 on obsphyaf
(
obphvisn,
obphline
);
revoke all on obsphyaf from public ; 
grant select on obsphyaf to public ; 
