create table pmsbliaf
(
pmblseid    char(4),
pmblsedc    char(35),
pmbltype    char(1),
pmblstdt    char(8),
pmblendt    char(8),
pmblstnm    char(6),
pmblennm    char(6),
pmbldays    decimal(4,0),
pmblmamt    decimal(8,2),
pmblward    char(3),
pmblhosp    char(3),
pmblspar    char(17),
lf          char(1)
);
create unique index pmsblia1 on pmsbliaf
(
pmblseid
);
revoke all on pmsbliaf from public ; 
grant select on pmsbliaf to public ; 
