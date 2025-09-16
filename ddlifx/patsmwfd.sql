create table patsmwaf
(
ptmwurno    char(8),
ptmwclss    char(3),
dptmwcnt    char(3),
ptmwdate    char(8),
ptmwtext    char(70),
ptmwmarc    char(8),
ptmwhosp    char(20),
ptmwdoct    char(5),
ptmwsys     decimal(2,0),
ptmwcode    char(9),
ptmwlupd    char(14),
ptmwspar    char(24),
lf          char(1)
);
create unique index patsmwa1 on patsmwaf
(
ptmwurno,
ptmwclss,
dptmwcnt
);
revoke all on patsmwaf from public ; 
grant select on patsmwaf to public ; 
