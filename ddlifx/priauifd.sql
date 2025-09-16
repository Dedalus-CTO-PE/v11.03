create table priauiaf
(
praidebt    char(8),
dpraiscn    char(2),
praiinvn    char(8),
praiidte    char(8),
praiddte    char(8),
praioper    char(4),
praiport    decimal(2,0),
praiamnt    decimal(10,2),
praispar    char(50),
lf          char(1)
);
create unique index priauia1 on priauiaf
(
praidebt,
dpraiscn,
praiinvn
);
revoke all on priauiaf from public ; 
grant select on priauiaf to public ; 
