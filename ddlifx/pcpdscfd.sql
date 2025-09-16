create table pcpaudds
(
pcdsaudd    char(8),
pcdsaudt    char(8),
pcdsaudp    char(2),
pcdsaudr    char(1),
pcdsauds    decimal(1,0),
pcdsaudo    char(4),
dpcdstyp    char(2),
pcdscode    char(9),
dpcdslin    char(2),
pcdsdesc    char(60),
pcdsspar    char(11),
lf          char(1)
);
create index pcpaudds on pcpaudds
(
pcdsaudd,
pcdsaudt,
pcdsaudp,
pcdsaudr
);
revoke all on pcpaudds from public ; 
grant select on pcpaudds to public ; 
create table pcpdscaf
(
dpcdstyp    char(2),
pcdscode    char(9),
dpcdslin    char(2),
pcdsdesc    char(60),
pcdsspar    char(11),
lf          char(1)
);
create unique index pcpdsca1 on pcpdscaf
(
dpcdstyp,
pcdscode,
dpcdslin
);
revoke all on pcpdscaf from public ; 
grant select on pcpdscaf to public ; 
