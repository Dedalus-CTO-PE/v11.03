create table pmsbisaf
(
pmbsseid    char(4),
pmbsinvd    char(8),
pmbsasat    char(8),
pmbshosp    char(3),
pmbsspar    char(17),
lf          char(1)
);
create unique index pmsbisa1 on pmsbisaf
(
pmbsseid
);
revoke all on pmsbisaf from public ; 
grant select on pmsbisaf to public ; 
