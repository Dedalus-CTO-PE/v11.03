create table pmsupgaf
(
pmugurno    char(8),
pmugatyp    char(3),
pmugclam    char(3),
pmugfund    char(6),
pmugtabt    char(3),
pmugedat    char(8),
pmugmaxi    char(3),
pmugwari    char(3),
pmugmani    char(3),
pmugmaxo    char(3),
pmugwaro    char(3),
pmugmano    char(3),
pmugbrko    char(1),
pmugextd    char(8),
pmugsdat    char(8),
pmugpnam    char(50),
pmugudsi    char(3),
pmugsnap    char(3),
pmugendd    char(8),
pmugprog    char(3),
pmugpint    char(1),
pmugrpdt    char(8),
pmugrddt    char(8),
pmugcdat    char(8),
pmugctim    char(8),
pmugcuid    char(10),
pmugudat    char(8),
pmugutim    char(8),
pmuguuid    char(10),
pmugspar    char(50),
lf          char(1)
);
create unique index pmsupga1 on pmsupgaf
(
pmugurno,
pmugatyp,
pmugclam,
pmugfund,
pmugtabt,
pmugedat
);
create unique index pmsupga2 on pmsupgaf
(
pmugedat,
pmugatyp,
pmugclam,
pmugfund,
pmugtabt,
pmugurno
);
revoke all on pmsupgaf from public ; 
grant select on pmsupgaf to public ; 
