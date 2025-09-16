create table obsproaf
(
obprvisn    char(8),
obprline    char(3),
obprproc    char(127),
obprspar    char(127),
lf          char(1)
);
create unique index obsproa1 on obsproaf
(
obprvisn,
obprline
);
revoke all on obsproaf from public ; 
grant select on obsproaf to public ; 
