create table patdayaf
(
ptdydate    char(4),
dptdyadm    char(8),
lf          char(1)
);
create unique index patdaya1 on patdayaf
(
ptdydate,
dptdyadm
);
revoke all on patdayaf from public ; 
grant select on patdayaf to public ; 
