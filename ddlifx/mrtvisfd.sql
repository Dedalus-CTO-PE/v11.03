create table mrtvisaf
(
mrvsvsno    char(8),
mrvsmkey    char(10),
mrvsspar    char(40),
lf          char(1)
);
create unique index mrtvisa1 on mrtvisaf
(
mrvsvsno
);
create unique index mrtvisa2 on mrtvisaf
(
mrvsmkey,
mrvsvsno
);
revoke all on mrtvisaf from public ; 
grant select on mrtvisaf to public ; 
