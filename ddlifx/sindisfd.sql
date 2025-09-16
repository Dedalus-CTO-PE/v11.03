create table sindisaf
(
sidswar     char(5),
sidscat     char(7),
sidsdat     char(8),
sidsdis     decimal(14,2),
sidsval     decimal(14,2),
sidsspa     char(20),
lf          char(1)
);
create unique index sindisa1 on sindisaf
(
sidswar,
sidscat,
sidsdat
);
revoke all on sindisaf from public ; 
grant select on sindisaf to public ; 
