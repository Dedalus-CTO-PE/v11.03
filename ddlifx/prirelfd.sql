create table prirelaf
(
prrlseid    char(4),
prrlname    char(30),
prrldebt    char(8),
prrlivno    char(8),
prrlscan    char(2),
prrlstat    char(1),
prrlspar    char(20),
lf          char(1)
);
create unique index prirela1 on prirelaf
(
prrlseid,
prrlname,
prrldebt,
prrlivno
);
revoke all on prirelaf from public ; 
grant select on prirelaf to public ; 
