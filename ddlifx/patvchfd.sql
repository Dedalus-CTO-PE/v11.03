create table patvchaf
(
ptvccard    char(20),
ptvcurno    char(8),
ptvcdate    char(8),
ptvctime    char(8),
ptvcport    char(2),
ptvchosp    char(2),
ptvcoper    char(4),
ptvcdchg    decimal(4,0),
ptvcvchg    decimal(4,0),
ptvcspar    char(20),
lf          char(1)
);
create unique index patvcha1 on patvchaf
(
ptvccard,
ptvcurno,
ptvcdate,
ptvctime,
ptvcport,
ptvchosp
);
revoke all on patvchaf from public ; 
grant select on patvchaf to public ; 
