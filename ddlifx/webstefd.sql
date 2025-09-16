create table websteaf
(
wbstuid     char(10),
wbstprg     char(8),
wbstlev     decimal(2,0),
wbstur1     char(30),
wbstur2     char(30),
wbstud1     char(8),
wbstud2     char(8),
wbstuy1     char(1),
wbstuy2     char(1),
wbstspa     char(20),
lf          char(1)
);
create unique index webstea1 on websteaf
(
wbstuid,
wbstprg
);
revoke all on websteaf from public ; 
grant select on websteaf to public ; 
