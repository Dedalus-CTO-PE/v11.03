create table nzpirnaf
(
nzirhosp    char(3),
nzirirng    char(3),
nzirdesc    char(40),
nzirnext    decimal(8,0),
nzirmaxi    decimal(8,0),
nzirspar    char(20),
lf          char(1)
);
create unique index nzpirna1 on nzpirnaf
(
nzirhosp,
nzirirng
);
create unique index nzpirna2 on nzpirnaf
(
nzirirng,
nzirhosp
);
revoke all on nzpirnaf from public ; 
grant select on nzpirnaf to public ; 
