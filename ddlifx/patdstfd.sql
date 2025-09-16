create table patdstat
(
ptdsyear    char(4),
ptdsperd    char(2),
ptdstype    char(1),
ptdscode    char(6),
ptdsadms    decimal(4,0),
ptdsbedd    decimal(4,0),
ptdsoprs    decimal(4,0),
ptdsmbsc    decimal(4,0),
ptdsbadm    decimal(4,0),
ptdsbbed    decimal(4,0),
ptdsbopr    decimal(4,0),
ptdsbmbs    decimal(4,0),
ptdsspar    char(20),
lf          char(1)
);
create unique index patdsta1 on patdstat
(
ptdsyear,
ptdsperd,
ptdstype,
ptdscode
);
create unique index patdsta2 on patdstat
(
ptdscode,
ptdstype,
ptdsyear,
ptdsperd
);
revoke all on patdstat from public ; 
grant select on patdstat to public ; 
