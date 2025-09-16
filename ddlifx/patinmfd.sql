create table patinmaf
(
dptimsys    char(1),
ptimclm     char(3),
ptimmes1    char(60),
ptimmes2    char(60),
ptimspar    char(25),
lf          char(1)
);
create unique index patinma1 on patinmaf
(
dptimsys,
ptimclm
);
revoke all on patinmaf from public ; 
grant select on patinmaf to public ; 
