create table pathfrec
(
hfrinvr     char(8),
hfrstat     decimal(1,0),
lf          char(1)
);
create unique index pathfre1 on pathfrec
(
hfrinvr
);
revoke all on pathfrec from public ; 
grant select on pathfrec to public ; 
