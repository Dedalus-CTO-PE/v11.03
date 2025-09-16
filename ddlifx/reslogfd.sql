create table reslogaf
(
relguid     char(10),
relgdte     char(8),
relgtme     char(5),
relgpco     char(3),
relgrun     char(4),
relgcmp     char(1),
relgexp     decimal(6,0),
relgrpr     decimal(6,0),
relgerr     decimal(6,0),
relginf     char(50),
relgmer     char(20),
relgmid     decimal(8,0),
relgspa     char(20),
lf          char(1)
);
create unique index resloga1 on reslogaf
(
relguid
);
create unique index resloga2 on reslogaf
(
relgdte,
relgtme,
relguid
);
revoke all on reslogaf from public ; 
grant select on reslogaf to public ; 
