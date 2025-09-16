create table pataudds
(
ptdsaudd    char(8),
ptdsaudt    char(8),
ptdsaudp    char(2),
ptdsaudr    char(1),
ptdsauds    decimal(1,0),
ptdsaudo    char(4),
ptdscode    char(3),
ptdsefdt    char(8),
ptdseddt    char(8),
ptdsdcod    char(3),
ptdsspar    char(10),
lf          char(1)
);
create index pataudds on pataudds
(
ptdsaudd,
ptdsaudt,
ptdsaudp,
ptdsaudr
);
revoke all on pataudds from public ; 
grant select on pataudds to public ; 
create table patsdiaf
(
ptdscode    char(3),
ptdsefdt    char(8),
ptdseddt    char(8),
ptdsdcod    char(3),
ptdsspar    char(10),
lf          char(1)
);
create unique index patsdia1 on patsdiaf
(
ptdscode,
ptdsefdt
);
create unique index patsdia2 on patsdiaf
(
ptdsdcod,
ptdsefdt,
ptdscode
);
revoke all on patsdiaf from public ; 
grant select on patsdiaf to public ; 
