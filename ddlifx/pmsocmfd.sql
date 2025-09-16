create table pmsocmaf
(
pmocvisn    char(8),
pmococnt    char(3),
pmoclcnt    char(3),
pmocline    char(100),
pmocspar    char(30),
lf          char(1)
);
create unique index pmsocma1 on pmsocmaf
(
pmocvisn,
pmococnt,
pmoclcnt
);
revoke all on pmsocmaf from public ; 
grant select on pmsocmaf to public ; 
