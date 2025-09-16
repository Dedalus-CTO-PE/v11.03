create table pmsicmaf
(
pmicvisn    char(8),
pmicinvn    char(8),
pmiclnno    char(3),
pmiccmnt    char(100),
pmiccdat    char(8),
pmicctim    char(8),
pmiccuid    char(10),
pmicudat    char(8),
pmicutim    char(8),
pmicuuid    char(10),
pmicspar    char(100),
lf          char(1)
);
create unique index pmsicma1 on pmsicmaf
(
pmicvisn,
pmicinvn,
pmiclnno
);
create unique index pmsicma2 on pmsicmaf
(
pmicinvn,
pmiclnno,
pmicvisn
);
revoke all on pmsicmaf from public ; 
grant select on pmsicmaf to public ; 
