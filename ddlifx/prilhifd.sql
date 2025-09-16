create table prilhisf
(
prlhdebt    char(8),
dprlhscn    char(2),
prlhdate    char(8),
dprlhnum    char(3),
prlhspar    char(8),
lf          char(1)
);
create unique index prilhis1 on prilhisf
(
prlhdebt,
dprlhscn,
prlhdate,
dprlhnum
);
revoke all on prilhisf from public ; 
grant select on prilhisf to public ; 
