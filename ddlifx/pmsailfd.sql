create table pmsailaf
(
pmaladmn    char(8),
pmalfino    char(12),
pmalspar    char(30),
lf          char(1)
);
create unique index pmsaila1 on pmsailaf
(
pmaladmn
);
create unique index pmsaila2 on pmsailaf
(
pmalfino,
pmaladmn
);
revoke all on pmsailaf from public ; 
grant select on pmsailaf to public ; 
