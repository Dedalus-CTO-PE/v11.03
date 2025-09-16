create table watwtaaf
(
wtwtdate    char(6),
wtwtdoct    char(6),
wtwtunit    char(3),
wtwtproc    char(9),
wtwtmean    decimal(4,0),
wtwtmax     decimal(4,0),
wtwthosp    decimal(8,0),
wtwtpat     decimal(8,0),
wtwtoth     decimal(8,0),
wtwtopen    decimal(8,0),
wtwtadd     decimal(8,0),
wtwtbook    decimal(8,0),
wtwtadmt    decimal(8,0),
wtwtdsch    decimal(8,0),
wtwtcanl    decimal(8,0),
wtwttday    decimal(8,0),
wtwtspar    char(9),
lf          char(1)
);
create unique index watwtaa1 on watwtaaf
(
wtwtdate,
wtwtproc,
wtwtdoct,
wtwtunit
);
create unique index watwtaa2 on watwtaaf
(
wtwtdate,
wtwtdoct,
wtwtproc,
wtwtunit
);
create unique index watwtaa3 on watwtaaf
(
wtwtdate,
wtwtunit,
wtwtproc,
wtwtdoct
);
revoke all on watwtaaf from public ; 
grant select on watwtaaf to public ; 
