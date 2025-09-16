create table sinreaaf
(
siratyp     char(1),
sirareq     char(7),
siraind     decimal(1,0),
siracst     char(5),
siradat     char(8),
siradel     char(50),
siratot     decimal(14,2),
siraspa     char(30),
lf          char(1)
);
create unique index sinreaa1 on sinreaaf
(
siratyp,
sirareq
);
create unique index sinreaa2 on sinreaaf
(
siracst,
siratyp,
sirareq
);
create unique index sinreaa3 on sinreaaf
(
siradat,
siratyp,
sirareq
);
create unique index sinreaa4 on sinreaaf
(
siracst,
siradat,
siratyp,
sirareq
);
revoke all on sinreaaf from public ; 
grant select on sinreaaf to public ; 
