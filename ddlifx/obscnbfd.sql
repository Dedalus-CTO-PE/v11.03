create table obscnbaf
(
obcbvis     char(8),
obcbcid     char(4),
obcblno     char(3),
obcbldt     char(127),
lf          char(1)
);
create unique index obscnba1 on obscnbaf
(
obcbvis,
obcbcid,
obcblno
);
revoke all on obscnbaf from public ; 
grant select on obscnbaf to public ; 
