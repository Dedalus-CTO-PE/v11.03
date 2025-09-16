create table priauraf
(
prardebt    char(8),
dprarsca    char(2),
dpraruni    char(3),
prarrect    char(12),
praramou    decimal(14,2),
prarrfdt    char(8),
prarport    char(2),
praroper    char(4),
prarspar    char(8),
lf          char(1)
);
create unique index priaura1 on priauraf
(
prardebt,
dprarsca,
dpraruni
);
revoke all on priauraf from public ; 
grant select on priauraf to public ; 
