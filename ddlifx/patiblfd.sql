create table patiblaf
(
ptibadmn    char(8),
ptibinvn    char(8),
ptibbrcd    char(3),
ptibamnt    decimal(14,2),
ptibgamn    decimal(14,2),
ptibspar    char(22),
lf          char(1)
);
create unique index patibla1 on patiblaf
(
ptibadmn,
ptibinvn,
ptibbrcd
);
revoke all on patiblaf from public ; 
grant select on patiblaf to public ; 
