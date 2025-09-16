create table pmsadfaf
(
pmafcode    char(6),
pmafline    char(3),
pmafdata    char(100),
pmafspar    char(30),
lf          char(1)
);
create unique index pmsadfa1 on pmsadfaf
(
pmafcode,
pmafline
);
revoke all on pmsadfaf from public ; 
grant select on pmsadfaf to public ; 
