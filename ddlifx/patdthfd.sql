create table patdthaf
(
ptdhurno    char(8),
ptdhwebu    char(10),
ptdhspar    char(70),
lf          char(1)
);
create unique index patdtha1 on patdthaf
(
ptdhurno
);
revoke all on patdthaf from public ; 
grant select on patdthaf to public ; 
