create table patcunof
(
cundoct     char(6),
cunward     char(3),
cunnumb     char(3),
cunspar     char(12),
lf          char(1)
);
create unique index patcuno1 on patcunof
(
cundoct,
cunward
);
revoke all on patcunof from public ; 
grant select on patcunof to public ; 
