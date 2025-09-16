create table sincseaf
(
sicsuid     char(4),
sicscst     char(5),
sicslev     decimal(1,0),
sicsspa     char(20),
lf          char(1)
);
create unique index sincsea1 on sincseaf
(
sicsuid,
sicscst
);
create unique index sincsea2 on sincseaf
(
sicscst,
sicsuid
);
revoke all on sincseaf from public ; 
grant select on sincseaf to public ; 
