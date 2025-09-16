create table pcpaudde
(
pcdeaudd    char(8),
pcdeaudt    char(8),
pcdeaudp    char(2),
pcdeaudr    char(1),
pcdeauds    decimal(1,0),
pcdeaudo    char(4),
pcdeuniq    char(10),
pcdechar    char(9),
pcdedcod    char(4),
pcdespar    char(11),
lf          char(1)
);
create index pcpaudde on pcpaudde
(
pcdeaudd,
pcdeaudt,
pcdeaudp,
pcdeaudr
);
revoke all on pcpaudde from public ; 
grant select on pcpaudde to public ; 
create table pcpdefaf
(
pcdeuniq    char(10),
pcdechar    char(9),
pcdedcod    char(4),
pcdespar    char(11),
lf          char(1)
);
create unique index pcpdefa1 on pcpdefaf
(
pcdeuniq,
pcdechar
);
revoke all on pcpdefaf from public ; 
grant select on pcpdefaf to public ; 
