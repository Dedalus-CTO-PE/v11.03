create table patrblaf
(
ptrbadmn    char(8),
ptrbinvn    char(8),
ptrbbrcd    char(3),
ptrbamnt    decimal(14,2),
ptrbgamn    decimal(14,2),
ptrbbtch    char(5),
ptrbspar    char(17),
lf          char(1)
);
create unique index patrbla1 on patrblaf
(
ptrbadmn,
ptrbinvn,
ptrbbrcd
);
revoke all on patrblaf from public ; 
grant select on patrblaf to public ; 
