create table patedaaf
(
ptedinvn    char(8),
pteddecm    char(8),
ptedtecm    char(8),
ptedoprr    char(4),
dptededs    char(1),
ptedbthn    char(8),
dptedeet    char(1),
ptedspr1    char(41),
lf          char(1)
);
create  index patedaa1 on patedaaf
(
ptedinvn
);
revoke all on patedaaf from public ; 
grant select on patedaaf to public ; 
