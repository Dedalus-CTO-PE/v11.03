create table obsditaf
(
obdtvisn    char(8),
obdtcntr    char(3),
obdtdiet    char(127),
obdtspar    char(50),
lf          char(1)
);
create unique index obsdita1 on obsditaf
(
obdtvisn,
obdtcntr
);
revoke all on obsditaf from public ; 
grant select on obsditaf to public ; 
