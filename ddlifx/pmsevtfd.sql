create table pmsevtaf
(
pmevvisn    char(8),
pmevevnt    char(3),
pmevadte    char(8),
pmevatim    char(8),
pmevacon    char(10),
pmevpprb    char(60),
pmevunit    char(3),
pmevsphn    char(20),
pmevploc    char(3),
pmevpwrd    char(3),
pmevpbed    char(3),
pmevddte    char(8),
pmevdtim    char(8),
pmevsite    char(6),
pmevctyp    char(6),
pmevclid    char(6),
pmevccod    char(3),
pmevatyp    char(3),
pmevastt    char(1),
pmevadmt    char(3),
pmevbtyp    char(3),
pmevrefb    char(10),
pmevdstt    char(3),
pmevhosn    char(3),
pmevspar    char(37),
lf          char(1)
);
create unique index pmsevta1 on pmsevtaf
(
pmevvisn
);
create unique index pmsevta2 on pmsevtaf
(
pmevploc,
pmevddte,
pmevvisn
);
create unique index pmsevta3 on pmsevtaf
(
pmevpwrd,
pmevddte,
pmevvisn
);
create unique index pmsevta4 on pmsevtaf
(
pmevadte,
pmevvisn
);
create unique index pmsevta5 on pmsevtaf
(
pmevpwrd,
pmevpbed,
pmevvisn
);
revoke all on pmsevtaf from public ; 
grant select on pmsevtaf to public ; 
