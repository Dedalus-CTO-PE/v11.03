create table mltsecaf
(
mlscusid    char(10),
mlschosp    char(3),
mlscspar    char(50),
lf          char(1)
);
create unique index mltseca1 on mltsecaf
(
mlscusid,
mlschosp
);
create unique index mltseca2 on mltsecaf
(
mlschosp,
mlscusid
);
revoke all on mltsecaf from public ; 
grant select on mltsecaf to public ; 
